; ModuleID = 'Module type'
source_filename = "Module type"

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
@global_string = private constant [7 x i8] c"lambda\00", align 1
@global_string.1 = private constant [2 x i8] c"(\00", align 1
@global_string.2 = private constant [2 x i8] c":\00", align 1
@global_string.3 = private constant [2 x i8] c",\00", align 1
@global_string.4 = private constant [2 x i8] c")\00", align 1
@global_string.5 = private constant [2 x i8] c":\00", align 1
@global_string.6 = private constant [2 x i8] c"<\00", align 1
@global_string.7 = private constant [2 x i8] c",\00", align 1
@global_string.8 = private constant [2 x i8] c">\00", align 1
@global_string.9 = private constant [2 x i8] c"?\00", align 1
@global_string.10 = private constant [7 x i8] c"lambda\00", align 1
@global_string.11 = private constant [7 x i8] c"lambda\00", align 1
@global_string.12 = private constant [4 x i8] c"any\00", align 1
@global_string.13 = private constant [4 x i8] c"any\00", align 1
@global_string.14 = private constant [5 x i8] c"void\00", align 1
@global_string.15 = private constant [10 x i8] c"class %s \00", align 1
@global_string.16 = private constant [2 x i8] c"<\00", align 1
@global_string.17 = private constant [2 x i8] c">\00", align 1
@global_string.18 = private constant [2 x i8] c"?\00", align 1
@global_string.19 = private constant [1 x i8] zeroinitializer, align 1
@global_string.20 = private constant [16 x i8] c"generics_type%d\00", align 1
@global_string.21 = private constant [16 x i8] c"generics_type%d\00", align 1

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

define %sCLType* @clone_type(%sCLType* %type, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %4 = call i8* @nccalloc(i64 1, i64 4664)
  %5 = bitcast i8* %4 to %sCLType*
  %result = alloca %sCLType*
  %6 = bitcast %sCLType** %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLType* %5, %sCLType** %result, align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 9
  %8 = load %vector__sCLTypep*, %vector__sCLTypep** %7, align 8
  %result5 = load %sCLType*, %sCLType** %result, align 8
  call void @"push_back_sCLTypep2_src/type"(%vector__sCLTypep* %8, %sCLType* %result5)
  %type6 = load %sCLType*, %sCLType** %type2, align 8
  %9 = getelementptr inbounds %sCLType, %sCLType* %type6, i32 0, i32 0
  %10 = load i8*, i8** %9, align 8
  %11 = ptrtoint i8* %10 to i64
  %12 = icmp ne i64 %11, 0
  br i1 %12, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %14 = bitcast i8* %13 to %sCLType**
  %result7 = load %sCLType*, %sCLType** %14, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %16 = bitcast i8* %15 to %sCLType**
  %type8 = load %sCLType*, %sCLType** %16, align 8
  %17 = getelementptr inbounds %sCLType, %sCLType* %type8, i32 0, i32 0
  %18 = load i8*, i8** %17, align 8
  %19 = call i8* @string(i8* %18)
  %20 = getelementptr inbounds %sCLType, %sCLType* %result7, i32 0, i32 0
  %21 = load i8*, i8** %20, align 8
  %22 = ptrtoint i8* %21 to i64
  %23 = icmp ne i64 %22, 0
  br i1 %23, label %cond_then_block, label %cond_end9

cond_else_block:                                  ; preds = %entry
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %25 = bitcast i8* %24 to %sCLType**
  %result10 = load %sCLType*, %sCLType** %25, align 8
  %26 = getelementptr inbounds %sCLType, %sCLType* %result10, i32 0, i32 0
  %27 = load i8*, i8** %26, align 8
  %28 = ptrtoint i8* %27 to i64
  %29 = icmp ne i64 %28, 0
  br i1 %29, label %cond_then_block11, label %cond_end12

cond_end:                                         ; preds = %cond_end12, %cond_end9
  %result13 = load %sCLType*, %sCLType** %result, align 8
  %type14 = load %sCLType*, %sCLType** %type2, align 8
  %30 = getelementptr inbounds %sCLType, %sCLType* %type14, i32 0, i32 1
  %31 = load %sCLClass*, %sCLClass** %30, align 8
  %32 = getelementptr inbounds %sCLType, %sCLType* %result13, i32 0, i32 1
  store %sCLClass* %31, %sCLClass** %32, align 8
  %result15 = load %sCLType*, %sCLType** %result, align 8
  %type16 = load %sCLType*, %sCLType** %type2, align 8
  %33 = getelementptr inbounds %sCLType, %sCLType* %type16, i32 0, i32 2
  %34 = load i32, i32* %33, align 4
  %35 = getelementptr inbounds %sCLType, %sCLType* %result15, i32 0, i32 2
  store i32 %34, i32* %35, align 4
  %i = alloca i32
  %36 = bitcast i32* %i to i8*
  store i8* %36, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_then_block:                                  ; preds = %cond_jump_then
  br label %cond_end9

cond_end9:                                        ; preds = %cond_then_block, %cond_jump_then
  call void @ncfree(i8* %21)
  store i8* %19, i8** %20, align 8
  br label %cond_end

cond_then_block11:                                ; preds = %cond_else_block
  br label %cond_end12

cond_end12:                                       ; preds = %cond_then_block11, %cond_else_block
  call void @ncfree(i8* %27)
  store i8* null, i8** %26, align 8
  br label %cond_end

loop_top_block:                                   ; preds = %cond_then_block19, %cond_end
  %i17 = load i32, i32* %i, align 4
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %38 = bitcast i8* %37 to %sCLType**
  %result18 = load %sCLType*, %sCLType** %38, align 8
  %39 = getelementptr inbounds %sCLType, %sCLType* %result18, i32 0, i32 2
  %40 = load i32, i32* %39, align 4
  %letmp = icmp slt i32 %i17, %40
  br i1 %letmp, label %cond_then_block19, label %cond_end_block

cond_then_block19:                                ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %42 = bitcast i8* %41 to %sCLType**
  %result20 = load %sCLType*, %sCLType** %42, align 8
  %43 = getelementptr inbounds %sCLType, %sCLType* %result20, i32 0, i32 3
  %44 = bitcast [32 x %sCLType*]* %43 to %sCLType**
  %i21 = load i32, i32* %i, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %46 = bitcast i8* %45 to %sCLType**
  %type22 = load %sCLType*, %sCLType** %46, align 8
  %47 = getelementptr inbounds %sCLType, %sCLType* %type22, i32 0, i32 3
  %48 = bitcast [32 x %sCLType*]* %47 to %sCLType**
  %i23 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %48, i32 %i23
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = call %sCLType* @clone_type(%sCLType* %element, %sParserInfo* %info24)
  %element_addressD = getelementptr %sCLType*, %sCLType** %44, i32 %i21
  store %sCLType* %51, %sCLType** %element_addressD, align 8
  %i25 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i25, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result26 = load %sCLType*, %sCLType** %result, align 8
  %type27 = load %sCLType*, %sCLType** %type2, align 8
  %52 = getelementptr inbounds %sCLType, %sCLType* %type27, i32 0, i32 4
  %53 = load i1, i1* %52, align 1
  %54 = getelementptr inbounds %sCLType, %sCLType* %result26, i32 0, i32 4
  store i1 %53, i1* %54, align 1
  %result28 = load %sCLType*, %sCLType** %result, align 8
  %type29 = load %sCLType*, %sCLType** %type2, align 8
  %55 = getelementptr inbounds %sCLType, %sCLType* %type29, i32 0, i32 6
  %56 = load i32, i32* %55, align 4
  %57 = getelementptr inbounds %sCLType, %sCLType* %result28, i32 0, i32 6
  store i32 %56, i32* %57, align 4
  %i30 = alloca i32
  %58 = bitcast i32* %i30 to i8*
  store i8* %58, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 0, i32* %i30, align 4
  br label %loop_top_block31

loop_top_block31:                                 ; preds = %cond_then_block35, %cond_end_block
  %i32 = load i32, i32* %i30, align 4
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %60 = bitcast i8* %59 to %sCLType**
  %type33 = load %sCLType*, %sCLType** %60, align 8
  %61 = getelementptr inbounds %sCLType, %sCLType* %type33, i32 0, i32 6
  %62 = load i32, i32* %61, align 4
  %letmp34 = icmp slt i32 %i32, %62
  br i1 %letmp34, label %cond_then_block35, label %cond_end_block36

cond_then_block35:                                ; preds = %loop_top_block31
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %64 = bitcast i8* %63 to %sCLType**
  %result37 = load %sCLType*, %sCLType** %64, align 8
  %65 = getelementptr inbounds %sCLType, %sCLType* %result37, i32 0, i32 5
  %66 = bitcast [32 x %sCLParam]* %65 to %sCLParam*
  %i38 = load i32, i32* %i30, align 4
  %element_addressB39 = getelementptr %sCLParam, %sCLParam* %66, i32 %i38
  %element40 = load %sCLParam, %sCLParam* %element_addressB39, align 8
  %67 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB39, i32 0, i32 0
  %68 = bitcast [128 x i8]* %67 to i8*
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %70 = bitcast i8* %69 to %sCLType**
  %type41 = load %sCLType*, %sCLType** %70, align 8
  %71 = getelementptr inbounds %sCLType, %sCLType* %type41, i32 0, i32 5
  %72 = bitcast [32 x %sCLParam]* %71 to %sCLParam*
  %i42 = load i32, i32* %i30, align 4
  %element_addressB43 = getelementptr %sCLParam, %sCLParam* %72, i32 %i42
  %element44 = load %sCLParam, %sCLParam* %element_addressB43, align 8
  %73 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB43, i32 0, i32 0
  %74 = bitcast [128 x i8]* %73 to i8*
  %75 = call i8* @xstrncpy(i8* %68, i8* %74, i32 128)
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %77 = bitcast i8* %76 to %sCLType**
  %result45 = load %sCLType*, %sCLType** %77, align 8
  %78 = getelementptr inbounds %sCLType, %sCLType* %result45, i32 0, i32 5
  %79 = bitcast [32 x %sCLParam]* %78 to %sCLParam*
  %i46 = load i32, i32* %i30, align 4
  %element_addressB47 = getelementptr %sCLParam, %sCLParam* %79, i32 %i46
  %element48 = load %sCLParam, %sCLParam* %element_addressB47, align 8
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %81 = bitcast i8* %80 to %sCLType**
  %type49 = load %sCLType*, %sCLType** %81, align 8
  %82 = getelementptr inbounds %sCLType, %sCLType* %type49, i32 0, i32 5
  %83 = bitcast [32 x %sCLParam]* %82 to %sCLParam*
  %i50 = load i32, i32* %i30, align 4
  %element_addressB51 = getelementptr %sCLParam, %sCLParam* %83, i32 %i50
  %element52 = load %sCLParam, %sCLParam* %element_addressB51, align 8
  %84 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB51, i32 0, i32 1
  %85 = load %sCLType*, %sCLType** %84, align 8
  %86 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %87 = bitcast i8* %86 to %sParserInfo**
  %info53 = load %sParserInfo*, %sParserInfo** %87, align 8
  %88 = call %sCLType* @clone_type(%sCLType* %85, %sParserInfo* %info53)
  %89 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB47, i32 0, i32 1
  store %sCLType* %88, %sCLType** %89, align 8
  %i54 = load i32, i32* %i30, align 4
  %addtmp55 = add nsw i32 %i54, 1
  store i32 %addtmp55, i32* %i30, align 4
  %subttmp56 = sub nsw i32 %addtmp55, 1
  br label %loop_top_block31

cond_end_block36:                                 ; preds = %loop_top_block31
  %type57 = load %sCLType*, %sCLType** %type2, align 8
  %90 = getelementptr inbounds %sCLType, %sCLType* %type57, i32 0, i32 7
  %91 = load %sCLType*, %sCLType** %90, align 8
  %92 = ptrtoint %sCLType* %91 to i64
  %93 = icmp ne i64 %92, 0
  br i1 %93, label %cond_jump_then58, label %cond_else_block59

cond_jump_then58:                                 ; preds = %cond_end_block36
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %95 = bitcast i8* %94 to %sCLType**
  %result61 = load %sCLType*, %sCLType** %95, align 8
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %97 = bitcast i8* %96 to %sCLType**
  %type62 = load %sCLType*, %sCLType** %97, align 8
  %98 = getelementptr inbounds %sCLType, %sCLType* %type62, i32 0, i32 7
  %99 = load %sCLType*, %sCLType** %98, align 8
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %101 = bitcast i8* %100 to %sParserInfo**
  %info63 = load %sParserInfo*, %sParserInfo** %101, align 8
  %102 = call %sCLType* @clone_type(%sCLType* %99, %sParserInfo* %info63)
  %103 = getelementptr inbounds %sCLType, %sCLType* %result61, i32 0, i32 7
  store %sCLType* %102, %sCLType** %103, align 8
  br label %cond_end60

cond_else_block59:                                ; preds = %cond_end_block36
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to %sCLType**
  %result64 = load %sCLType*, %sCLType** %105, align 8
  %106 = getelementptr inbounds %sCLType, %sCLType* %result64, i32 0, i32 7
  store %sCLType* null, %sCLType** %106, align 8
  br label %cond_end60

cond_end60:                                       ; preds = %cond_else_block59, %cond_jump_then58
  %result65 = load %sCLType*, %sCLType** %result, align 8
  %type66 = load %sCLType*, %sCLType** %type2, align 8
  %107 = getelementptr inbounds %sCLType, %sCLType* %type66, i32 0, i32 8
  %108 = load i32, i32* %107, align 4
  %109 = getelementptr inbounds %sCLType, %sCLType* %result65, i32 0, i32 8
  store i32 %108, i32* %109, align 4
  %result67 = load %sCLType*, %sCLType** %result, align 8
  %110 = bitcast [8192 x i8*]* %lvtable to i8*
  %111 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %110, i64 65536)
  ret %sCLType* %result67
}

define %sCLType* @create_type(i8* %type_name, %vector__sCLTypep* %types) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type_name2 = alloca i8*
  store i8* %type_name, i8** %type_name2, align 8
  %2 = bitcast i8** %type_name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %types3 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %types, %vector__sCLTypep** %types3, align 8
  %3 = bitcast %vector__sCLTypep** %types3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %4 = call i8* @nccalloc(i64 1, i64 4664)
  %5 = bitcast i8* %4 to %sCLType*
  %result = alloca %sCLType*
  %6 = bitcast %sCLType** %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLType* %5, %sCLType** %result, align 8
  %types4 = load %vector__sCLTypep*, %vector__sCLTypep** %types3, align 8
  %result5 = load %sCLType*, %sCLType** %result, align 8
  call void @"push_back_sCLTypep0_src/type"(%vector__sCLTypep* %types4, %sCLType* %result5)
  %result6 = load %sCLType*, %sCLType** %result, align 8
  %gClasses = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %type_name7 = load i8*, i8** %type_name2, align 8
  %7 = call %sCLClass* @"at_charp_sCLClassp1_src/type"(%map__charp_sCLClassp* %gClasses, i8* %type_name7, %sCLClass* null)
  %8 = getelementptr inbounds %sCLType, %sCLType* %result6, i32 0, i32 1
  store %sCLClass* %7, %sCLClass** %8, align 8
  %result8 = load %sCLType*, %sCLType** %result, align 8
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret %sCLType* %result8
}

define %sCLType* @parse_type_runtime(i8* %type_name, %sParserInfo* %info, %vector__sCLTypep* %types) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type_name2 = alloca i8*
  store i8* %type_name, i8** %type_name2, align 8
  %2 = bitcast i8** %type_name2 to i8*
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
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %6 = load i8*, i8** %5, align 8
  %p_before = alloca i8*
  %7 = bitcast i8** %p_before to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %6, i8** %p_before, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %type_name7 = load i8*, i8** %type_name2, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  store i8* %type_name7, i8** %8, align 8
  %result = alloca %sCLType*
  %9 = bitcast %sCLType** %result to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLType* null, %sCLType** %result, align 8
  %result8 = load %sCLType*, %sCLType** %result, align 8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %types10 = load %vector__sCLTypep*, %vector__sCLTypep** %types4, align 8
  %10 = call i1 @parse_type(%sCLType** %result, %sParserInfo* %info9, %vector__sCLTypep* %types10)
  %LOGICAL_DIANEAL = icmp eq i1 %10, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %12 = bitcast i8* %11 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %12, align 8
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %14 = bitcast i8* %13 to i8**
  %p_before12 = load i8*, i8** %14, align 8
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  store i8* %p_before12, i8** %15, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret %sCLType* null

cond_end:                                         ; preds = %entry
  %info13 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %p_before14 = load i8*, i8** %p_before, align 8
  %18 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  store i8* %p_before14, i8** %18, align 8
  %result15 = load %sCLType*, %sCLType** %result, align 8
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret %sCLType* %result15
}

define i8* @create_type_name(%sCLType* %type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %3 = call i8* @nccalloc(i64 1, i64 16)
  %4 = bitcast i8* %3 to %buffer*
  %5 = call %buffer* @buffer_initialize(%buffer* %4)
  %result = alloca %buffer*
  %6 = bitcast %buffer** %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store %buffer* %5, %buffer** %result, align 8
  %result3 = load %buffer*, %buffer** %result, align 8
  %type4 = load %sCLType*, %sCLType** %type2, align 8
  %7 = getelementptr inbounds %sCLType, %sCLType* %type4, i32 0, i32 1
  %8 = load %sCLClass*, %sCLClass** %7, align 8
  %9 = getelementptr inbounds %sCLClass, %sCLClass* %8, i32 0, i32 0
  %10 = load i8*, i8** %9, align 8
  call void @buffer_append_str(%buffer* %result3, i8* %10)
  %type5 = load %sCLType*, %sCLType** %type2, align 8
  %11 = getelementptr inbounds %sCLType, %sCLType* %type5, i32 0, i32 1
  %12 = load %sCLClass*, %sCLClass** %11, align 8
  %13 = getelementptr inbounds %sCLClass, %sCLClass* %12, i32 0, i32 0
  %14 = load i8*, i8** %13, align 8
  %15 = call i32 @strcmp(i8* %14, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string, i32 0, i32 0))
  %eqtmpX = icmp eq i32 %15, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %17 = bitcast i8* %16 to %buffer**
  %result6 = load %buffer*, %buffer** %17, align 8
  call void @buffer_append_str(%buffer* %result6, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.1, i32 0, i32 0))
  %i = alloca i32
  %18 = bitcast i32* %i to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_else_block:                                  ; preds = %entry
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %20 = bitcast i8* %19 to %sCLType**
  %type33 = load %sCLType*, %sCLType** %20, align 8
  %21 = getelementptr inbounds %sCLType, %sCLType* %type33, i32 0, i32 2
  %22 = load i32, i32* %21, align 4
  %gttmp = icmp sgt i32 %22, 0
  br i1 %gttmp, label %cond_jump_then34, label %cond_end35

cond_end:                                         ; preds = %cond_end35, %cond_end32
  %type62 = load %sCLType*, %sCLType** %type2, align 8
  %23 = getelementptr inbounds %sCLType, %sCLType* %type62, i32 0, i32 4
  %24 = load i1, i1* %23, align 1
  br i1 %24, label %cond_jump_then63, label %cond_end64

loop_top_block:                                   ; preds = %cond_end21, %cond_jump_then
  %i7 = load i32, i32* %i, align 4
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %26 = bitcast i8* %25 to %sCLType**
  %type8 = load %sCLType*, %sCLType** %26, align 8
  %27 = getelementptr inbounds %sCLType, %sCLType* %type8, i32 0, i32 6
  %28 = load i32, i32* %27, align 4
  %letmp = icmp slt i32 %i7, %28
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %30 = bitcast i8* %29 to %buffer**
  %result9 = load %buffer*, %buffer** %30, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %32 = bitcast i8* %31 to %sCLType**
  %type10 = load %sCLType*, %sCLType** %32, align 8
  %33 = getelementptr inbounds %sCLType, %sCLType* %type10, i32 0, i32 5
  %34 = bitcast [32 x %sCLParam]* %33 to %sCLParam*
  %i11 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sCLParam, %sCLParam* %34, i32 %i11
  %element = load %sCLParam, %sCLParam* %element_addressB, align 8
  %35 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB, i32 0, i32 0
  %36 = bitcast [128 x i8]* %35 to i8*
  call void @buffer_append_str(%buffer* %result9, i8* %36)
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %38 = bitcast i8* %37 to %buffer**
  %result12 = load %buffer*, %buffer** %38, align 8
  call void @buffer_append_str(%buffer* %result12, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.2, i32 0, i32 0))
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %40 = bitcast i8* %39 to %buffer**
  %result13 = load %buffer*, %buffer** %40, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %42 = bitcast i8* %41 to %sCLType**
  %type14 = load %sCLType*, %sCLType** %42, align 8
  %43 = getelementptr inbounds %sCLType, %sCLType* %type14, i32 0, i32 5
  %44 = bitcast [32 x %sCLParam]* %43 to %sCLParam*
  %i15 = load i32, i32* %i, align 4
  %element_addressB16 = getelementptr %sCLParam, %sCLParam* %44, i32 %i15
  %element17 = load %sCLParam, %sCLParam* %element_addressB16, align 8
  %45 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB16, i32 0, i32 1
  %46 = load %sCLType*, %sCLType** %45, align 8
  %47 = call i8* @create_type_name(%sCLType* %46)
  call void @buffer_append_str(%buffer* %result13, i8* %47)
  %i18 = load i32, i32* %i, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %49 = bitcast i8* %48 to %sCLType**
  %type19 = load %sCLType*, %sCLType** %49, align 8
  %50 = getelementptr inbounds %sCLType, %sCLType* %type19, i32 0, i32 6
  %51 = load i32, i32* %50, align 4
  %subttmp = sub nsw i32 %51, 1
  %noteqtmp = icmp ne i32 %i18, %subttmp
  %52 = ptrtoint i8* %47 to i64
  %53 = icmp ne i64 %52, 0
  br i1 %53, label %cond_then_block22, label %cond_end23

cond_end_block:                                   ; preds = %loop_top_block
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %55 = bitcast i8* %54 to %buffer**
  %result27 = load %buffer*, %buffer** %55, align 8
  call void @buffer_append_str(%buffer* %result27, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.4, i32 0, i32 0))
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %57 = bitcast i8* %56 to %buffer**
  %result28 = load %buffer*, %buffer** %57, align 8
  call void @buffer_append_str(%buffer* %result28, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.5, i32 0, i32 0))
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %59 = bitcast i8* %58 to %buffer**
  %result29 = load %buffer*, %buffer** %59, align 8
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %61 = bitcast i8* %60 to %sCLType**
  %type30 = load %sCLType*, %sCLType** %61, align 8
  %62 = getelementptr inbounds %sCLType, %sCLType* %type30, i32 0, i32 7
  %63 = load %sCLType*, %sCLType** %62, align 8
  %64 = call i8* @create_type_name(%sCLType* %63)
  call void @buffer_append_str(%buffer* %result29, i8* %64)
  %65 = ptrtoint i8* %64 to i64
  %66 = icmp ne i64 %65, 0
  br i1 %66, label %cond_then_block31, label %cond_end32

cond_jump_then20:                                 ; preds = %cond_end23
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %68 = bitcast i8* %67 to %buffer**
  %result24 = load %buffer*, %buffer** %68, align 8
  call void @buffer_append_str(%buffer* %result24, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.3, i32 0, i32 0))
  br label %cond_end21

cond_end21:                                       ; preds = %cond_jump_then20, %cond_end23
  %i25 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i25, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp26 = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block22:                                ; preds = %cond_then_block
  br label %cond_end23

cond_end23:                                       ; preds = %cond_then_block22, %cond_then_block
  call void @ncfree(i8* %47)
  br i1 %noteqtmp, label %cond_jump_then20, label %cond_end21

cond_then_block31:                                ; preds = %cond_end_block
  br label %cond_end32

cond_end32:                                       ; preds = %cond_then_block31, %cond_end_block
  call void @ncfree(i8* %64)
  br label %cond_end

cond_jump_then34:                                 ; preds = %cond_else_block
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %70 = bitcast i8* %69 to %buffer**
  %result36 = load %buffer*, %buffer** %70, align 8
  call void @buffer_append_str(%buffer* %result36, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.6, i32 0, i32 0))
  %i37 = alloca i32
  %71 = bitcast i32* %i37 to i8*
  store i8* %71, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i37, align 4
  br label %loop_top_block38

cond_end35:                                       ; preds = %cond_end_block43, %cond_else_block
  br label %cond_end

loop_top_block38:                                 ; preds = %cond_end54, %cond_jump_then34
  %i39 = load i32, i32* %i37, align 4
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %sCLType**
  %type40 = load %sCLType*, %sCLType** %73, align 8
  %74 = getelementptr inbounds %sCLType, %sCLType* %type40, i32 0, i32 2
  %75 = load i32, i32* %74, align 4
  %letmp41 = icmp slt i32 %i39, %75
  br i1 %letmp41, label %cond_then_block42, label %cond_end_block43

cond_then_block42:                                ; preds = %loop_top_block38
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %77 = bitcast i8* %76 to %buffer**
  %result44 = load %buffer*, %buffer** %77, align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %79 = bitcast i8* %78 to %sCLType**
  %type45 = load %sCLType*, %sCLType** %79, align 8
  %80 = getelementptr inbounds %sCLType, %sCLType* %type45, i32 0, i32 3
  %81 = bitcast [32 x %sCLType*]* %80 to %sCLType**
  %i46 = load i32, i32* %i37, align 4
  %element_addressB47 = getelementptr %sCLType*, %sCLType** %81, i32 %i46
  %element48 = load %sCLType*, %sCLType** %element_addressB47, align 8
  %82 = call i8* @create_type_name(%sCLType* %element48)
  call void @buffer_append_str(%buffer* %result44, i8* %82)
  %i49 = load i32, i32* %i37, align 4
  %83 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %84 = bitcast i8* %83 to %sCLType**
  %type50 = load %sCLType*, %sCLType** %84, align 8
  %85 = getelementptr inbounds %sCLType, %sCLType* %type50, i32 0, i32 2
  %86 = load i32, i32* %85, align 4
  %subttmp51 = sub nsw i32 %86, 1
  %noteqtmp52 = icmp ne i32 %i49, %subttmp51
  %87 = ptrtoint i8* %82 to i64
  %88 = icmp ne i64 %87, 0
  br i1 %88, label %cond_then_block55, label %cond_end56

cond_end_block43:                                 ; preds = %loop_top_block38
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %buffer**
  %result61 = load %buffer*, %buffer** %90, align 8
  call void @buffer_append_str(%buffer* %result61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.8, i32 0, i32 0))
  br label %cond_end35

cond_jump_then53:                                 ; preds = %cond_end56
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %92 = bitcast i8* %91 to %buffer**
  %result57 = load %buffer*, %buffer** %92, align 8
  call void @buffer_append_str(%buffer* %result57, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.7, i32 0, i32 0))
  br label %cond_end54

cond_end54:                                       ; preds = %cond_jump_then53, %cond_end56
  %i58 = load i32, i32* %i37, align 4
  %addtmp59 = add nsw i32 %i58, 1
  store i32 %addtmp59, i32* %i37, align 4
  %subttmp60 = sub nsw i32 %addtmp59, 1
  br label %loop_top_block38

cond_then_block55:                                ; preds = %cond_then_block42
  br label %cond_end56

cond_end56:                                       ; preds = %cond_then_block55, %cond_then_block42
  call void @ncfree(i8* %82)
  br i1 %noteqtmp52, label %cond_jump_then53, label %cond_end54

cond_jump_then63:                                 ; preds = %cond_end
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %94 = bitcast i8* %93 to %buffer**
  %result65 = load %buffer*, %buffer** %94, align 8
  call void @buffer_append_str(%buffer* %result65, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.9, i32 0, i32 0))
  br label %cond_end64

cond_end64:                                       ; preds = %cond_jump_then63, %cond_end
  %result66 = load %buffer*, %buffer** %result, align 8
  %95 = call i8* @buffer_to_string(%buffer* %result66)
  %96 = bitcast [8192 x i8*]* %lvtable to i8*
  %97 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %96, i64 65536)
  %98 = load %buffer*, %buffer** %result, align 8
  call void @buffer_finalize(%buffer* %98)
  %99 = ptrtoint %buffer* %98 to i64
  %100 = icmp ne i64 %99, 0
  br i1 %100, label %cond_then_block67, label %cond_end68

cond_then_block67:                                ; preds = %cond_end64
  br label %cond_end68

cond_end68:                                       ; preds = %cond_then_block67, %cond_end64
  %101 = bitcast %buffer* %98 to i8*
  call void @ncfree(i8* %101)
  ret i8* %95
}

define i1 @type_identify(%sCLType* %left_type, %sCLType* %right_type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %left_type2 = alloca %sCLType*
  store %sCLType* %left_type, %sCLType** %left_type2, align 8
  %2 = bitcast %sCLType** %left_type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %right_type3 = alloca %sCLType*
  store %sCLType* %right_type, %sCLType** %right_type3, align 8
  %3 = bitcast %sCLType** %right_type3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %left_type4 = load %sCLType*, %sCLType** %left_type2, align 8
  %4 = getelementptr inbounds %sCLType, %sCLType* %left_type4, i32 0, i32 1
  %5 = load %sCLClass*, %sCLClass** %4, align 8
  %left_class = alloca %sCLClass*
  %6 = bitcast %sCLClass** %left_class to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLClass* %5, %sCLClass** %left_class, align 8
  %right_type5 = load %sCLType*, %sCLType** %right_type3, align 8
  %7 = getelementptr inbounds %sCLType, %sCLType* %right_type5, i32 0, i32 1
  %8 = load %sCLClass*, %sCLClass** %7, align 8
  %right_class = alloca %sCLClass*
  %9 = bitcast %sCLClass** %right_class to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLClass* %8, %sCLClass** %right_class, align 8
  %left_class6 = load %sCLClass*, %sCLClass** %left_class, align 8
  %right_class7 = load %sCLClass*, %sCLClass** %right_class, align 8
  %eqtmpX = icmp eq %sCLClass* %left_class6, %right_class7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 true

cond_end:                                         ; preds = %entry
  %12 = bitcast [8192 x i8*]* %lvtable to i8*
  %13 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %12, i64 65536)
  ret i1 false
}

define i1 @substitution_posibility(%sCLType* %left_type, %sCLType* %right_type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %left_type2 = alloca %sCLType*
  store %sCLType* %left_type, %sCLType** %left_type2, align 8
  %2 = bitcast %sCLType** %left_type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %right_type3 = alloca %sCLType*
  store %sCLType* %right_type, %sCLType** %right_type3, align 8
  %3 = bitcast %sCLType** %right_type3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %left_type4 = load %sCLType*, %sCLType** %left_type2, align 8
  %4 = getelementptr inbounds %sCLType, %sCLType* %left_type4, i32 0, i32 1
  %5 = load %sCLClass*, %sCLClass** %4, align 8
  %left_class = alloca %sCLClass*
  %6 = bitcast %sCLClass** %left_class to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLClass* %5, %sCLClass** %left_class, align 8
  %right_type5 = load %sCLType*, %sCLType** %right_type3, align 8
  %7 = getelementptr inbounds %sCLType, %sCLType* %right_type5, i32 0, i32 1
  %8 = load %sCLClass*, %sCLClass** %7, align 8
  %right_class = alloca %sCLClass*
  %9 = bitcast %sCLClass** %right_class to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLClass* %8, %sCLClass** %right_class, align 8
  %right_class6 = load %sCLClass*, %sCLClass** %right_class, align 8
  %it = alloca %sCLClass*
  %10 = bitcast %sCLClass** %it to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLClass* %right_class6, %sCLClass** %it, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %it7 = load %sCLClass*, %sCLClass** %it, align 8
  %11 = ptrtoint %sCLClass* %it7 to i64
  %12 = icmp ne i64 %11, 0
  br i1 %12, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %14 = bitcast i8* %13 to %sCLClass**
  %left_class8 = load %sCLClass*, %sCLClass** %14, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %16 = bitcast i8* %15 to %sCLClass**
  %it9 = load %sCLClass*, %sCLClass** %16, align 8
  %eqtmpX = icmp eq %sCLClass* %left_class8, %it9
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %left_class11 = load %sCLClass*, %sCLClass** %left_class, align 8
  %17 = getelementptr inbounds %sCLClass, %sCLClass* %left_class11, i32 0, i32 0
  %18 = load i8*, i8** %17, align 8
  %19 = call i32 @strcmp(i8* %18, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.10, i32 0, i32 0))
  %eqtmpX12 = icmp eq i32 %19, 0
  store i1 %eqtmpX12, i1* %andand_result_var, align 1
  br i1 %eqtmpX12, label %cond_jump_then13, label %cond_jump_end

cond_jump_then:                                   ; preds = %cond_then_block
  %20 = bitcast [8192 x i8*]* %lvtable to i8*
  %21 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %20, i64 65536)
  ret i1 true

cond_end:                                         ; preds = %cond_then_block
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %23 = bitcast i8* %22 to %sCLClass**
  %it10 = load %sCLClass*, %sCLClass** %23, align 8
  %24 = getelementptr inbounds %sCLClass, %sCLClass* %it10, i32 0, i32 3
  %25 = load %sCLClass*, %sCLClass** %24, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %27 = bitcast i8* %26 to %sCLClass**
  store %sCLClass* %25, %sCLClass** %27, align 8
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_end_block
  %right_class14 = load %sCLClass*, %sCLClass** %right_class, align 8
  %28 = getelementptr inbounds %sCLClass, %sCLClass* %right_class14, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = call i32 @strcmp(i8* %29, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.11, i32 0, i32 0))
  %eqtmpX15 = icmp eq i32 %30, 0
  %andand = and i1 %eqtmpX12, %eqtmpX15
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then13, %cond_end_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then16, label %"cond_jump_elif0\0A"

cond_jump_then16:                                 ; preds = %cond_jump_end
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %32 = bitcast i8* %31 to %sCLType**
  %left_type18 = load %sCLType*, %sCLType** %32, align 8
  %33 = getelementptr inbounds %sCLType, %sCLType* %left_type18, i32 0, i32 7
  %34 = load %sCLType*, %sCLType** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %36 = bitcast i8* %35 to %sCLType**
  %right_type19 = load %sCLType*, %sCLType** %36, align 8
  %37 = getelementptr inbounds %sCLType, %sCLType* %right_type19, i32 0, i32 7
  %38 = load %sCLType*, %sCLType** %37, align 8
  %39 = call i1 @substitution_posibility(%sCLType* %34, %sCLType* %38)
  %LOGICAL_DIANEAL = icmp eq i1 %39, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then20, label %cond_end21

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end
  %right_class41 = load %sCLClass*, %sCLClass** %right_class, align 8
  %40 = getelementptr inbounds %sCLClass, %sCLClass* %right_class41, i32 0, i32 0
  %41 = load i8*, i8** %40, align 8
  %42 = call i32 @strcmp(i8* %41, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.12, i32 0, i32 0))
  %eqtmpX42 = icmp eq i32 %42, 0
  br i1 %eqtmpX42, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %43 = bitcast [8192 x i8*]* %lvtable to i8*
  %44 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %43, i64 65536)
  ret i1 true

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %left_class43 = load %sCLClass*, %sCLClass** %left_class, align 8
  %45 = getelementptr inbounds %sCLClass, %sCLClass* %left_class43, i32 0, i32 0
  %46 = load i8*, i8** %45, align 8
  %47 = call i32 @strcmp(i8* %46, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.13, i32 0, i32 0))
  %eqtmpX44 = icmp eq i32 %47, 0
  br i1 %eqtmpX44, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %48 = bitcast [8192 x i8*]* %lvtable to i8*
  %49 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %48, i64 65536)
  ret i1 true

"cond_jump_elif2\0A":                             ; preds = %"cond_jump_elif1\0A"
  %left_type45 = load %sCLType*, %sCLType** %left_type2, align 8
  %50 = getelementptr inbounds %sCLType, %sCLType* %left_type45, i32 0, i32 4
  %51 = load i1, i1* %50, align 1
  store i1 %51, i1* %andand_result_var, align 1
  br i1 %51, label %cond_jump_then46, label %cond_jump_end47

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end47
  %52 = bitcast [8192 x i8*]* %lvtable to i8*
  %53 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %52, i64 65536)
  ret i1 true

"cond_jump_elif3\0A":                             ; preds = %cond_jump_end47
  %left_type52 = load %sCLType*, %sCLType** %left_type2, align 8
  %54 = call i1 @is_generics_type(%sCLType* %left_type52)
  br i1 %54, label %"cond_jump_elif_then3\0A", label %"cond_jump_elif4\0A"

"cond_jump_elif_then3\0A":                        ; preds = %"cond_jump_elif3\0A"
  %55 = bitcast [8192 x i8*]* %lvtable to i8*
  %56 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %55, i64 65536)
  ret i1 true

"cond_jump_elif4\0A":                             ; preds = %"cond_jump_elif3\0A"
  %right_type53 = load %sCLType*, %sCLType** %right_type3, align 8
  %57 = call i1 @is_generics_type(%sCLType* %right_type53)
  br i1 %57, label %"cond_jump_elif_then4\0A", label %cond_end17

"cond_jump_elif_then4\0A":                        ; preds = %"cond_jump_elif4\0A"
  %58 = bitcast [8192 x i8*]* %lvtable to i8*
  %59 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %58, i64 65536)
  ret i1 true

cond_end17:                                       ; preds = %"cond_jump_elif4\0A"
  %left_type54 = load %sCLType*, %sCLType** %left_type2, align 8
  %right_type55 = load %sCLType*, %sCLType** %right_type3, align 8
  %60 = call i1 @type_identify(%sCLType* %left_type54, %sCLType* %right_type55)
  %61 = bitcast [8192 x i8*]* %lvtable to i8*
  %62 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %61, i64 65536)
  ret i1 %60

cond_jump_then20:                                 ; preds = %cond_jump_then16
  %63 = bitcast [8192 x i8*]* %lvtable to i8*
  %64 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %63, i64 65536)
  ret i1 false

cond_end21:                                       ; preds = %cond_jump_then16
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %66 = bitcast i8* %65 to %sCLType**
  %left_type22 = load %sCLType*, %sCLType** %66, align 8
  %67 = getelementptr inbounds %sCLType, %sCLType* %left_type22, i32 0, i32 6
  %68 = load i32, i32* %67, align 4
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %70 = bitcast i8* %69 to %sCLType**
  %right_type23 = load %sCLType*, %sCLType** %70, align 8
  %71 = getelementptr inbounds %sCLType, %sCLType* %right_type23, i32 0, i32 6
  %72 = load i32, i32* %71, align 4
  %noteqtmp = icmp ne i32 %68, %72
  br i1 %noteqtmp, label %cond_jump_then24, label %cond_end25

cond_jump_then24:                                 ; preds = %cond_end21
  %73 = bitcast [8192 x i8*]* %lvtable to i8*
  %74 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %73, i64 65536)
  ret i1 false

cond_end25:                                       ; preds = %cond_end21
  %i = alloca i32
  %75 = bitcast i32* %i to i8*
  store i8* %75, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block26

loop_top_block26:                                 ; preds = %cond_end39, %cond_end25
  %i27 = load i32, i32* %i, align 4
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %77 = bitcast i8* %76 to %sCLType**
  %left_type28 = load %sCLType*, %sCLType** %77, align 8
  %78 = getelementptr inbounds %sCLType, %sCLType* %left_type28, i32 0, i32 6
  %79 = load i32, i32* %78, align 4
  %letmp = icmp slt i32 %i27, %79
  br i1 %letmp, label %cond_then_block29, label %cond_end_block30

cond_then_block29:                                ; preds = %loop_top_block26
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %81 = bitcast i8* %80 to %sCLType**
  %left_type31 = load %sCLType*, %sCLType** %81, align 8
  %82 = getelementptr inbounds %sCLType, %sCLType* %left_type31, i32 0, i32 5
  %83 = bitcast [32 x %sCLParam]* %82 to %sCLParam*
  %i32 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sCLParam, %sCLParam* %83, i32 %i32
  %element = load %sCLParam, %sCLParam* %element_addressB, align 8
  %84 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB, i32 0, i32 1
  %85 = load %sCLType*, %sCLType** %84, align 8
  %86 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %87 = bitcast i8* %86 to %sCLType**
  %right_type33 = load %sCLType*, %sCLType** %87, align 8
  %88 = getelementptr inbounds %sCLType, %sCLType* %right_type33, i32 0, i32 5
  %89 = bitcast [32 x %sCLParam]* %88 to %sCLParam*
  %i34 = load i32, i32* %i, align 4
  %element_addressB35 = getelementptr %sCLParam, %sCLParam* %89, i32 %i34
  %element36 = load %sCLParam, %sCLParam* %element_addressB35, align 8
  %90 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB35, i32 0, i32 1
  %91 = load %sCLType*, %sCLType** %90, align 8
  %92 = call i1 @substitution_posibility(%sCLType* %85, %sCLType* %91)
  %LOGICAL_DIANEAL37 = icmp eq i1 %92, false
  br i1 %LOGICAL_DIANEAL37, label %cond_jump_then38, label %cond_end39

cond_end_block30:                                 ; preds = %loop_top_block26
  %93 = bitcast [8192 x i8*]* %lvtable to i8*
  %94 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %93, i64 65536)
  ret i1 true

cond_jump_then38:                                 ; preds = %cond_then_block29
  %95 = bitcast [8192 x i8*]* %lvtable to i8*
  %96 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %95, i64 65536)
  ret i1 false

cond_end39:                                       ; preds = %cond_then_block29
  %i40 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i40, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block26

cond_jump_then46:                                 ; preds = %"cond_jump_elif2\0A"
  %right_class48 = load %sCLClass*, %sCLClass** %right_class, align 8
  %97 = getelementptr inbounds %sCLClass, %sCLClass* %right_class48, i32 0, i32 0
  %98 = load i8*, i8** %97, align 8
  %99 = call i32 @strcmp(i8* %98, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.14, i32 0, i32 0))
  %eqtmpX49 = icmp eq i32 %99, 0
  %andand50 = and i1 %51, %eqtmpX49
  store i1 %andand50, i1* %andand_result_var, align 1
  br label %cond_jump_end47

cond_jump_end47:                                  ; preds = %cond_jump_then46, %"cond_jump_elif2\0A"
  %andand_result_value51 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value51, label %"cond_jump_elif_then2\0A", label %"cond_jump_elif3\0A"
}

declare i1 @check_type(i32, i8*, %sVMInfo*)

define i1 @type_identify_with_class_name(%sCLType* %left_type, i8* %right_class, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %left_type2 = alloca %sCLType*
  store %sCLType* %left_type, %sCLType** %left_type2, align 8
  %2 = bitcast %sCLType** %left_type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %right_class3 = alloca i8*
  store i8* %right_class, i8** %right_class3, align 8
  %3 = bitcast i8** %right_class3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %right_class5 = load i8*, i8** %right_class3, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info4, align 8
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 9
  %6 = load %vector__sCLTypep*, %vector__sCLTypep** %5, align 8
  %7 = call %sCLType* @create_type(i8* %right_class5, %vector__sCLTypep* %6)
  %right_type = alloca %sCLType*
  %8 = bitcast %sCLType** %right_type to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLType* %7, %sCLType** %right_type, align 8
  %left_type7 = load %sCLType*, %sCLType** %left_type2, align 8
  %right_type8 = load %sCLType*, %sCLType** %right_type, align 8
  %9 = call i1 @type_identify(%sCLType* %left_type7, %sCLType* %right_type8)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 %9
}

define i1 @is_generics_type(%sCLType* %type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %i = alloca i32
  %3 = bitcast i32* %i to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end11, %entry
  %i3 = load i32, i32* %i, align 4
  %letmp = icmp slt i32 %i3, 32
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %i4 = load i32, i32* %i, align 4
  %4 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.20, i32 0, i32 0), i32 %i4)
  %generics_type_name = alloca i8*
  %5 = bitcast i8** %generics_type_name to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i8* %4, i8** %generics_type_name, align 8
  %gClasses = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %generics_type_name5 = load i8*, i8** %generics_type_name, align 8
  %6 = call %sCLClass* @"at_charp_sCLClassp3_src/type"(%map__charp_sCLClassp* %gClasses, i8* %generics_type_name5, %sCLClass* null)
  %generics_class = alloca %sCLClass*
  %7 = bitcast %sCLClass** %generics_class to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLClass* %6, %sCLClass** %generics_class, align 8
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %9 = bitcast i8* %8 to %sCLType**
  %type6 = load %sCLType*, %sCLType** %9, align 8
  %10 = getelementptr inbounds %sCLType, %sCLType* %type6, i32 0, i32 1
  %11 = load %sCLClass*, %sCLClass** %10, align 8
  %generics_class7 = load %sCLClass*, %sCLClass** %generics_class, align 8
  %eqtmpX = icmp eq %sCLClass* %11, %generics_class7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %12 = bitcast [8192 x i8*]* %lvtable to i8*
  %13 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %12, i64 65536)
  ret i1 false

cond_jump_then:                                   ; preds = %cond_then_block
  %14 = bitcast [8192 x i8*]* %lvtable to i8*
  %15 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %14, i64 65536)
  %16 = load i8*, i8** %generics_type_name, align 8
  %17 = ptrtoint i8* %16 to i64
  %18 = icmp ne i64 %17, 0
  br i1 %18, label %cond_then_block8, label %cond_end9

cond_end:                                         ; preds = %cond_then_block
  %19 = load i8*, i8** %generics_type_name, align 8
  %20 = ptrtoint i8* %19 to i64
  %21 = icmp ne i64 %20, 0
  br i1 %21, label %cond_then_block10, label %cond_end11

cond_then_block8:                                 ; preds = %cond_jump_then
  br label %cond_end9

cond_end9:                                        ; preds = %cond_then_block8, %cond_jump_then
  call void @ncfree(i8* %16)
  ret i1 true

cond_then_block10:                                ; preds = %cond_end
  br label %cond_end11

cond_end11:                                       ; preds = %cond_then_block10, %cond_end
  call void @ncfree(i8* %19)
  %i12 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i12, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block
}

define i32 @get_generics_type_number(%sCLType* %type, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %i = alloca i32
  %4 = bitcast i32* %i to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end13, %entry
  %i4 = load i32, i32* %i, align 4
  %letmp = icmp slt i32 %i4, 32
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %i5 = load i32, i32* %i, align 4
  %5 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.21, i32 0, i32 0), i32 %i5)
  %generics_type_name = alloca i8*
  %6 = bitcast i8** %generics_type_name to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %5, i8** %generics_type_name, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %8 = bitcast i8* %7 to %sCLType**
  %type6 = load %sCLType*, %sCLType** %8, align 8
  %generics_type_name7 = load i8*, i8** %generics_type_name, align 8
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %10 = bitcast i8* %9 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %10, align 8
  %11 = call i1 @type_identify_with_class_name(%sCLType* %type6, i8* %generics_type_name7, %sParserInfo* %info8)
  br i1 %11, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %12 = bitcast [8192 x i8*]* %lvtable to i8*
  %13 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %12, i64 65536)
  ret i32 -1

cond_jump_then:                                   ; preds = %cond_then_block
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %15 = bitcast i8* %14 to i32*
  %i9 = load i32, i32* %15, align 4
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  %18 = load i8*, i8** %generics_type_name, align 8
  %19 = ptrtoint i8* %18 to i64
  %20 = icmp ne i64 %19, 0
  br i1 %20, label %cond_then_block10, label %cond_end11

cond_end:                                         ; preds = %cond_then_block
  %21 = load i8*, i8** %generics_type_name, align 8
  %22 = ptrtoint i8* %21 to i64
  %23 = icmp ne i64 %22, 0
  br i1 %23, label %cond_then_block12, label %cond_end13

cond_then_block10:                                ; preds = %cond_jump_then
  br label %cond_end11

cond_end11:                                       ; preds = %cond_then_block10, %cond_jump_then
  call void @ncfree(i8* %18)
  ret i32 %i9

cond_then_block12:                                ; preds = %cond_end
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_end
  call void @ncfree(i8* %21)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block
}

define %sCLType* @solve_generics(%sCLType* %node_type, %sCLType* %generics_type, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node_type2 = alloca %sCLType*
  store %sCLType* %node_type, %sCLType** %node_type2, align 8
  %2 = bitcast %sCLType** %node_type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %generics_type3 = alloca %sCLType*
  store %sCLType* %generics_type, %sCLType** %generics_type3, align 8
  %3 = bitcast %sCLType** %generics_type3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %node_type5 = load %sCLType*, %sCLType** %node_type2, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info4, align 8
  %5 = call i32 @get_generics_type_number(%sCLType* %node_type5, %sParserInfo* %info6)
  %generics_num = alloca i32
  %6 = bitcast i32* %generics_num to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %5, i32* %generics_num, align 4
  %generics_num7 = load i32, i32* %generics_num, align 4
  %noteqtmp = icmp ne i32 %generics_num7, -1
  store i1 %noteqtmp, i1* %andand_result_var, align 1
  br i1 %noteqtmp, label %cond_jump_then, label %cond_jump_end

cond_jump_then:                                   ; preds = %entry
  %generics_num8 = load i32, i32* %generics_num, align 4
  %generics_type9 = load %sCLType*, %sCLType** %generics_type3, align 8
  %7 = getelementptr inbounds %sCLType, %sCLType* %generics_type9, i32 0, i32 2
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %generics_num8, %8
  %andand = and i1 %noteqtmp, %letmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then10, label %cond_else_block

cond_jump_then10:                                 ; preds = %cond_jump_end
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %10 = bitcast i8* %9 to %sCLType**
  %generics_type11 = load %sCLType*, %sCLType** %10, align 8
  %11 = getelementptr inbounds %sCLType, %sCLType* %generics_type11, i32 0, i32 3
  %12 = bitcast [32 x %sCLType*]* %11 to %sCLType**
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %14 = bitcast i8* %13 to i32*
  %generics_num12 = load i32, i32* %14, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %12, i32 %generics_num12
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %16 = bitcast i8* %15 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %16, align 8
  %17 = call %sCLType* @clone_type(%sCLType* %element, %sParserInfo* %info13)
  %result = alloca %sCLType*
  %18 = bitcast %sCLType** %result to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLType* %17, %sCLType** %result, align 8
  %result14 = load %sCLType*, %sCLType** %result, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %20 = bitcast i8* %19 to %sCLType**
  %node_type15 = load %sCLType*, %sCLType** %20, align 8
  %21 = getelementptr inbounds %sCLType, %sCLType* %node_type15, i32 0, i32 4
  %22 = load i1, i1* %21, align 1
  %23 = getelementptr inbounds %sCLType, %sCLType* %result14, i32 0, i32 4
  store i1 %22, i1* %23, align 1
  %result16 = load %sCLType*, %sCLType** %result, align 8
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  ret %sCLType* %result16

cond_else_block:                                  ; preds = %cond_jump_end
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %27 = bitcast i8* %26 to %sCLType**
  %node_type17 = load %sCLType*, %sCLType** %27, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %29 = bitcast i8* %28 to %sParserInfo**
  %info18 = load %sParserInfo*, %sParserInfo** %29, align 8
  %30 = call %sCLType* @clone_type(%sCLType* %node_type17, %sParserInfo* %info18)
  %result19 = alloca %sCLType*
  %31 = bitcast %sCLType** %result19 to i8*
  store i8* %31, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLType* %30, %sCLType** %result19, align 8
  %i = alloca i32
  %32 = bitcast i32* %i to i8*
  store i8* %32, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end:                                         ; No predecessors!
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret %sCLType* null

loop_top_block:                                   ; preds = %cond_end40, %cond_else_block
  %i20 = load i32, i32* %i, align 4
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %36 = bitcast i8* %35 to %sCLType**
  %node_type21 = load %sCLType*, %sCLType** %36, align 8
  %37 = getelementptr inbounds %sCLType, %sCLType* %node_type21, i32 0, i32 2
  %38 = load i32, i32* %37, align 4
  %letmp22 = icmp slt i32 %i20, %38
  br i1 %letmp22, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %sCLType**
  %node_type23 = load %sCLType*, %sCLType** %40, align 8
  %41 = getelementptr inbounds %sCLType, %sCLType* %node_type23, i32 0, i32 3
  %42 = bitcast [32 x %sCLType*]* %41 to %sCLType**
  %i24 = load i32, i32* %i, align 4
  %element_addressB25 = getelementptr %sCLType*, %sCLType** %42, i32 %i24
  %element26 = load %sCLType*, %sCLType** %element_addressB25, align 8
  %type = alloca %sCLType*
  %43 = bitcast %sCLType** %type to i8*
  store i8* %43, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType* %element26, %sCLType** %type, align 8
  %type27 = load %sCLType*, %sCLType** %type, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = call i32 @get_generics_type_number(%sCLType* %type27, %sParserInfo* %info28)
  %generics_num29 = alloca i32
  %47 = bitcast i32* %generics_num29 to i8*
  store i8* %47, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %46, i32* %generics_num29, align 4
  %generics_num30 = load i32, i32* %generics_num29, align 4
  %noteqtmp31 = icmp ne i32 %generics_num30, -1
  store i1 %noteqtmp31, i1* %andand_result_var, align 1
  br i1 %noteqtmp31, label %cond_jump_then32, label %cond_jump_end33

cond_end_block:                                   ; preds = %loop_top_block
  %result49 = load %sCLType*, %sCLType** %result19, align 8
  %48 = bitcast [8192 x i8*]* %lvtable to i8*
  %49 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %48, i64 65536)
  ret %sCLType* %result49

cond_jump_then32:                                 ; preds = %cond_then_block
  %generics_num34 = load i32, i32* %generics_num29, align 4
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %51 = bitcast i8* %50 to %sCLType**
  %generics_type35 = load %sCLType*, %sCLType** %51, align 8
  %52 = getelementptr inbounds %sCLType, %sCLType* %generics_type35, i32 0, i32 2
  %53 = load i32, i32* %52, align 4
  %letmp36 = icmp slt i32 %generics_num34, %53
  %andand37 = and i1 %noteqtmp31, %letmp36
  store i1 %andand37, i1* %andand_result_var, align 1
  br label %cond_jump_end33

cond_jump_end33:                                  ; preds = %cond_jump_then32, %cond_then_block
  %andand_result_value38 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value38, label %cond_jump_then39, label %cond_end40

cond_jump_then39:                                 ; preds = %cond_jump_end33
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %55 = bitcast i8* %54 to %sCLType**
  %result41 = load %sCLType*, %sCLType** %55, align 8
  %56 = getelementptr inbounds %sCLType, %sCLType* %result41, i32 0, i32 3
  %57 = bitcast [32 x %sCLType*]* %56 to %sCLType**
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %59 = bitcast i8* %58 to i32*
  %i42 = load i32, i32* %59, align 4
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %61 = bitcast i8* %60 to %sCLType**
  %generics_type43 = load %sCLType*, %sCLType** %61, align 8
  %62 = getelementptr inbounds %sCLType, %sCLType* %generics_type43, i32 0, i32 3
  %63 = bitcast [32 x %sCLType*]* %62 to %sCLType**
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %65 = bitcast i8* %64 to i32*
  %generics_num44 = load i32, i32* %65, align 4
  %element_addressB45 = getelementptr %sCLType*, %sCLType** %63, i32 %generics_num44
  %element46 = load %sCLType*, %sCLType** %element_addressB45, align 8
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %67 = bitcast i8* %66 to %sParserInfo**
  %info47 = load %sParserInfo*, %sParserInfo** %67, align 8
  %68 = call %sCLType* @clone_type(%sCLType* %element46, %sParserInfo* %info47)
  %element_addressD = getelementptr %sCLType*, %sCLType** %57, i32 %i42
  store %sCLType* %68, %sCLType** %element_addressD, align 8
  br label %cond_end40

cond_end40:                                       ; preds = %cond_jump_then39, %cond_jump_end33
  %i48 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i48, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block
}

define void @show_type(%sCLType* %type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %type3 = load %sCLType*, %sCLType** %type2, align 8
  call void @show_type_core(%sCLType* %type3)
  %3 = call i32 @puts(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.19, i32 0, i32 0))
  %4 = bitcast [8192 x i8*]* %lvtable to i8*
  %5 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %4, i64 65536)
  ret void
}

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

declare void @__assert_fail(i8*, i8*, i32, i8*)

declare void @__assert_perror_fail(i32, i8*, i32, i8*)

declare void @__assert(i8*, i8*, i32)

define void @"push_back_sCLTypep0_src/type"(%vector__sCLTypep* %self, %sCLType* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %self, %vector__sCLTypep** %self2, align 8
  %2 = bitcast %vector__sCLTypep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %item3 = alloca %sCLType*
  store %sCLType* %item, %sCLType** %item3, align 8
  %3 = bitcast %sCLType** %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %self4 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %self5 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %6 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self5, i32 0, i32 2
  %7 = load i32, i32* %6, align 4
  %eqtmpX = icmp eq i32 %5, %7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %9 = bitcast i8* %8 to %vector__sCLTypep**
  %self6 = load %vector__sCLTypep*, %vector__sCLTypep** %9, align 8
  %10 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self6, i32 0, i32 2
  %11 = load i32, i32* %10, align 4
  %multtmp = mul nsw i32 %11, 2
  %new_size = alloca i32
  %12 = bitcast i32* %new_size to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %multtmp, i32* %new_size, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %14 = bitcast i8* %13 to %vector__sCLTypep**
  %self7 = load %vector__sCLTypep*, %vector__sCLTypep** %14, align 8
  %15 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self7, i32 0, i32 0
  %16 = load %sCLType**, %sCLType*** %15, align 8
  %items = alloca %sCLType**
  %17 = bitcast %sCLType*** %items to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType** %16, %sCLType*** %items, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %19 = bitcast i8* %18 to %vector__sCLTypep**
  %self8 = load %vector__sCLTypep*, %vector__sCLTypep** %19, align 8
  %new_size9 = load i32, i32* %new_size, align 4
  %sext14 = zext i32 %new_size9 to i64
  %20 = call i8* @nccalloc(i64 %sext14, i64 8)
  %21 = bitcast i8* %20 to %sCLType**
  %22 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self8, i32 0, i32 0
  store %sCLType** %21, %sCLType*** %22, align 8
  %i = alloca i32
  %23 = bitcast i32* %i to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %25 = bitcast i8* %24 to i32*
  store i32 0, i32* %25, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %self20 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %26 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self20, i32 0, i32 0
  %27 = load %sCLType**, %sCLType*** %26, align 8
  %self21 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %28 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self21, i32 0, i32 1
  %29 = load i32, i32* %28, align 4
  %item22 = load %sCLType*, %sCLType** %item3, align 8
  %element_addressD23 = getelementptr %sCLType*, %sCLType** %27, i32 %29
  store %sCLType* %item22, %sCLType** %element_addressD23, align 8
  %self24 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %self25 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %30 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self25, i32 0, i32 1
  %31 = load i32, i32* %30, align 4
  %addtmp26 = add nsw i32 %31, 1
  %32 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self24, i32 0, i32 1
  store i32 %addtmp26, i32* %32, align 4
  %subttmp27 = sub nsw i32 %addtmp26, 1
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %36 = bitcast i8* %35 to i32*
  %i10 = load i32, i32* %36, align 4
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %38 = bitcast i8* %37 to %vector__sCLTypep**
  %self11 = load %vector__sCLTypep*, %vector__sCLTypep** %38, align 8
  %39 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self11, i32 0, i32 2
  %40 = load i32, i32* %39, align 4
  %letmp = icmp slt i32 %i10, %40
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %42 = bitcast i8* %41 to %vector__sCLTypep**
  %self12 = load %vector__sCLTypep*, %vector__sCLTypep** %42, align 8
  %43 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self12, i32 0, i32 0
  %44 = load %sCLType**, %sCLType*** %43, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %46 = bitcast i8* %45 to i32*
  %i13 = load i32, i32* %46, align 4
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %48 = bitcast i8* %47 to %sCLType***
  %items14 = load %sCLType**, %sCLType*** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %50 = bitcast i8* %49 to i32*
  %i15 = load i32, i32* %50, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %items14, i32 %i15
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  %element_addressD = getelementptr %sCLType*, %sCLType** %44, i32 %i13
  store %sCLType* %element, %sCLType** %element_addressD, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %52 = bitcast i8* %51 to i32*
  %i16 = load i32, i32* %52, align 4
  %addtmp = add nsw i32 %i16, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %54 = bitcast i8* %53 to i32*
  store i32 %addtmp, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %56 = bitcast i8* %55 to %vector__sCLTypep**
  %self17 = load %vector__sCLTypep*, %vector__sCLTypep** %56, align 8
  %new_size18 = load i32, i32* %new_size, align 4
  %57 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self17, i32 0, i32 2
  store i32 %new_size18, i32* %57, align 4
  %items19 = load %sCLType**, %sCLType*** %items, align 8
  %58 = load %sCLType**, %sCLType*** %items, align 8
  %59 = bitcast %sCLType** %58 to i8*
  call void @ncfree(i8* %59)
  br label %cond_end
}

define %sCLClass* @"at_charp_sCLClassp1_src/type"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define void @"push_back_sCLTypep2_src/type"(%vector__sCLTypep* %self, %sCLType* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %self, %vector__sCLTypep** %self2, align 8
  %2 = bitcast %vector__sCLTypep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %item3 = alloca %sCLType*
  store %sCLType* %item, %sCLType** %item3, align 8
  %3 = bitcast %sCLType** %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %self4 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %self5 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %6 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self5, i32 0, i32 2
  %7 = load i32, i32* %6, align 4
  %eqtmpX = icmp eq i32 %5, %7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %9 = bitcast i8* %8 to %vector__sCLTypep**
  %self6 = load %vector__sCLTypep*, %vector__sCLTypep** %9, align 8
  %10 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self6, i32 0, i32 2
  %11 = load i32, i32* %10, align 4
  %multtmp = mul nsw i32 %11, 2
  %new_size = alloca i32
  %12 = bitcast i32* %new_size to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %multtmp, i32* %new_size, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %14 = bitcast i8* %13 to %vector__sCLTypep**
  %self7 = load %vector__sCLTypep*, %vector__sCLTypep** %14, align 8
  %15 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self7, i32 0, i32 0
  %16 = load %sCLType**, %sCLType*** %15, align 8
  %items = alloca %sCLType**
  %17 = bitcast %sCLType*** %items to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType** %16, %sCLType*** %items, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %19 = bitcast i8* %18 to %vector__sCLTypep**
  %self8 = load %vector__sCLTypep*, %vector__sCLTypep** %19, align 8
  %new_size9 = load i32, i32* %new_size, align 4
  %sext14 = zext i32 %new_size9 to i64
  %20 = call i8* @nccalloc(i64 %sext14, i64 8)
  %21 = bitcast i8* %20 to %sCLType**
  %22 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self8, i32 0, i32 0
  store %sCLType** %21, %sCLType*** %22, align 8
  %i = alloca i32
  %23 = bitcast i32* %i to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %25 = bitcast i8* %24 to i32*
  store i32 0, i32* %25, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %self20 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %26 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self20, i32 0, i32 0
  %27 = load %sCLType**, %sCLType*** %26, align 8
  %self21 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %28 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self21, i32 0, i32 1
  %29 = load i32, i32* %28, align 4
  %item22 = load %sCLType*, %sCLType** %item3, align 8
  %element_addressD23 = getelementptr %sCLType*, %sCLType** %27, i32 %29
  store %sCLType* %item22, %sCLType** %element_addressD23, align 8
  %self24 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %self25 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %30 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self25, i32 0, i32 1
  %31 = load i32, i32* %30, align 4
  %addtmp26 = add nsw i32 %31, 1
  %32 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self24, i32 0, i32 1
  store i32 %addtmp26, i32* %32, align 4
  %subttmp27 = sub nsw i32 %addtmp26, 1
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %36 = bitcast i8* %35 to i32*
  %i10 = load i32, i32* %36, align 4
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %38 = bitcast i8* %37 to %vector__sCLTypep**
  %self11 = load %vector__sCLTypep*, %vector__sCLTypep** %38, align 8
  %39 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self11, i32 0, i32 2
  %40 = load i32, i32* %39, align 4
  %letmp = icmp slt i32 %i10, %40
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %42 = bitcast i8* %41 to %vector__sCLTypep**
  %self12 = load %vector__sCLTypep*, %vector__sCLTypep** %42, align 8
  %43 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self12, i32 0, i32 0
  %44 = load %sCLType**, %sCLType*** %43, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %46 = bitcast i8* %45 to i32*
  %i13 = load i32, i32* %46, align 4
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %48 = bitcast i8* %47 to %sCLType***
  %items14 = load %sCLType**, %sCLType*** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %50 = bitcast i8* %49 to i32*
  %i15 = load i32, i32* %50, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %items14, i32 %i15
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  %element_addressD = getelementptr %sCLType*, %sCLType** %44, i32 %i13
  store %sCLType* %element, %sCLType** %element_addressD, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %52 = bitcast i8* %51 to i32*
  %i16 = load i32, i32* %52, align 4
  %addtmp = add nsw i32 %i16, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %54 = bitcast i8* %53 to i32*
  store i32 %addtmp, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %56 = bitcast i8* %55 to %vector__sCLTypep**
  %self17 = load %vector__sCLTypep*, %vector__sCLTypep** %56, align 8
  %new_size18 = load i32, i32* %new_size, align 4
  %57 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self17, i32 0, i32 2
  store i32 %new_size18, i32* %57, align 4
  %items19 = load %sCLType**, %sCLType*** %items, align 8
  %58 = load %sCLType**, %sCLType*** %items, align 8
  %59 = bitcast %sCLType** %58 to i8*
  call void @ncfree(i8* %59)
  br label %cond_end
}

define void @show_type_core(%sCLType* %type) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type2, align 8
  %2 = bitcast %sCLType** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %type3 = load %sCLType*, %sCLType** %type2, align 8
  %3 = getelementptr inbounds %sCLType, %sCLType* %type3, i32 0, i32 1
  %4 = load %sCLClass*, %sCLClass** %3, align 8
  %5 = getelementptr inbounds %sCLClass, %sCLClass* %4, i32 0, i32 0
  %6 = load i8*, i8** %5, align 8
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.15, i32 0, i32 0), i8* %6)
  %type4 = load %sCLType*, %sCLType** %type2, align 8
  %8 = getelementptr inbounds %sCLType, %sCLType* %type4, i32 0, i32 2
  %9 = load i32, i32* %8, align 4
  %gttmp = icmp sgt i32 %9, 0
  br i1 %gttmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.16, i32 0, i32 0))
  %i = alloca i32
  %11 = bitcast i32* %i to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %type10 = load %sCLType*, %sCLType** %type2, align 8
  %12 = getelementptr inbounds %sCLType, %sCLType* %type10, i32 0, i32 4
  %13 = load i1, i1* %12, align 1
  br i1 %13, label %cond_jump_then11, label %cond_end12

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %i5 = load i32, i32* %i, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %15 = bitcast i8* %14 to %sCLType**
  %type6 = load %sCLType*, %sCLType** %15, align 8
  %16 = getelementptr inbounds %sCLType, %sCLType* %type6, i32 0, i32 2
  %17 = load i32, i32* %16, align 4
  %letmp = icmp slt i32 %i5, %17
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %19 = bitcast i8* %18 to %sCLType**
  %type7 = load %sCLType*, %sCLType** %19, align 8
  %20 = getelementptr inbounds %sCLType, %sCLType* %type7, i32 0, i32 3
  %21 = bitcast [32 x %sCLType*]* %20 to %sCLType**
  %i8 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %21, i32 %i8
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  call void @show_type_core(%sCLType* %element)
  %i9 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i9, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.17, i32 0, i32 0))
  br label %cond_end

cond_jump_then11:                                 ; preds = %cond_end
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.18, i32 0, i32 0))
  br label %cond_end12

cond_end12:                                       ; preds = %cond_jump_then11, %cond_end
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  ret void
}

define %sCLClass* @"at_charp_sCLClassp3_src/type"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/type.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
