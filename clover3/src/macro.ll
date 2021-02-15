; ModuleID = 'Module macro'
source_filename = "Module macro"

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
%map__charp_charp = type { i8**, i1*, i8**, i32, i32 }
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
@gMacros = global %map__charp_charp* zeroinitializer, align 8
@global_string = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.1 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.2 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.3 = private constant [7 x i8] c"PARAMS\00", align 1
@global_string.4 = private constant [2 x i8] c"r\00", align 1
@global_string.5 = private constant [26 x i8] c"popen(2) is failed at %s\0A\00", align 1
@global_string.6 = private constant [27 x i8] c"pclose(2) is failed at %s\0A\00", align 1
@global_string.7 = private constant [19 x i8] c"invalid macro. %s\0A\00", align 1

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

define void @macro_init() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %2 = call i8* @nccalloc(i64 1, i64 32)
  %3 = bitcast i8* %2 to %map__charp_charp*
  %4 = call %map__charp_charp* @"initialize_charp_charp0_src/macro"(%map__charp_charp* %3)
  store %map__charp_charp* %4, %map__charp_charp** @gMacros, align 8
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret void
}

define void @macro_final() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %gMacros = load %map__charp_charp*, %map__charp_charp** @gMacros, align 8
  %2 = load %map__charp_charp*, %map__charp_charp** @gMacros, align 8
  call void @"finalize_charp_charp1_src/macro"(%map__charp_charp* %2)
  %3 = ptrtoint %map__charp_charp* %2 to i64
  %4 = icmp ne i64 %3, 0
  br i1 %4, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %5 = bitcast %map__charp_charp* %2 to i8*
  call void @ncfree(i8* %5)
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret void
}

define void @append_macro(i8* %name, i8* %body) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %name2 = alloca i8*
  store i8* %name, i8** %name2, align 8
  %2 = bitcast i8** %name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %body3 = alloca i8*
  store i8* %body, i8** %body3, align 8
  %3 = bitcast i8** %body3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %gMacros = load %map__charp_charp*, %map__charp_charp** @gMacros, align 8
  %name4 = load i8*, i8** %name2, align 8
  %4 = call i8* @string(i8* %name4)
  %body5 = load i8*, i8** %body3, align 8
  %5 = call i8* @string(i8* %body5)
  call void @"insert_charp_charp2_src/macro"(%map__charp_charp* %gMacros, i8* %4, i8* %5)
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret void
}

define i1 @call_macro(%sCLNode** %node, i8* %name, i8* %params, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %name3 = alloca i8*
  store i8* %name, i8** %name3, align 8
  %3 = bitcast i8** %name3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %params4 = alloca i8*
  store i8* %params, i8** %params4, align 8
  %4 = bitcast i8** %params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %info5 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info5, align 8
  %5 = bitcast %sParserInfo** %info5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %name6 = load i8*, i8** %name3, align 8
  %6 = call i8* @get_macro(i8* %name6)
  %cmdline = alloca i8*
  %7 = bitcast i8** %cmdline to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %6, i8** %cmdline, align 8
  %cmdline7 = load i8*, i8** %cmdline, align 8
  %eqtmpX = icmp eq i8* %cmdline7, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %9 = bitcast i8* %8 to i8**
  %name8 = load i8*, i8** %9, align 8
  %10 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_string.7, i32 0, i32 0), i8* %name8)
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %13 = call i8* @nccalloc(i64 1, i64 16)
  %14 = bitcast i8* %13 to %buffer*
  %15 = call %buffer* @buffer_initialize(%buffer* %14)
  %command_result = alloca %buffer*
  %16 = bitcast %buffer** %command_result to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %buffer* %15, %buffer** %command_result, align 8
  %command_result9 = load %buffer*, %buffer** %command_result, align 8
  %name10 = load i8*, i8** %name3, align 8
  %cmdline11 = load i8*, i8** %cmdline, align 8
  %params12 = load i8*, i8** %params4, align 8
  %17 = call i1 @get_command_result(%buffer* %command_result9, i8* %name10, i8* %cmdline11, i8* %params12)
  %LOGICAL_DIANEAL = icmp eq i1 %17, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then13, label %cond_end14

cond_jump_then13:                                 ; preds = %cond_end
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  %20 = load %buffer*, %buffer** %command_result, align 8
  call void @buffer_finalize(%buffer* %20)
  %21 = ptrtoint %buffer* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block, label %cond_end15

cond_end14:                                       ; preds = %cond_end
  %info16 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %p_before = alloca i8*
  %25 = bitcast i8** %p_before to i8*
  store i8* %25, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8* %24, i8** %p_before, align 8
  %info17 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %command_result18 = load %buffer*, %buffer** %command_result, align 8
  %26 = getelementptr inbounds %buffer, %buffer* %command_result18, i32 0, i32 0
  %27 = load i8*, i8** %26, align 8
  %28 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  store i8* %27, i8** %28, align 8
  %sname_before = alloca i8*
  %29 = bitcast i8** %sname_before to i8*
  store i8* %29, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %element_memory = alloca i8, i32 4096
  store i8* %element_memory, i8** %sname_before, align 8
  %sname_before19 = load i8*, i8** %sname_before, align 8
  %info20 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 0
  %31 = bitcast [4096 x i8]* %30 to i8*
  %32 = call i8* @xstrncpy(i8* %sname_before19, i8* %31, i32 4096)
  %info21 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %33 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 0
  %34 = bitcast [4096 x i8]* %33 to i8*
  %name22 = load i8*, i8** %name3, align 8
  %35 = call i8* @xstrncpy(i8* %34, i8* %name22, i32 4096)
  %info23 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %36 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 1
  %37 = load i32, i32* %36, align 4
  %sline_before = alloca i32
  %38 = bitcast i32* %sline_before to i8*
  store i8* %38, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 %37, i32* %sline_before, align 4
  %info24 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info24, i32 0, i32 1
  store i32 1, i32* %39, align 4
  %node_block = alloca %sCLNodeBlock*
  %40 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %40, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %node_block25 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %info26 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %41 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 0, %sCLParam* null, %sParserInfo* %info26)
  %LOGICAL_DIANEAL27 = icmp eq i1 %41, false
  br i1 %LOGICAL_DIANEAL27, label %cond_jump_then28, label %cond_end29

cond_then_block:                                  ; preds = %cond_jump_then13
  br label %cond_end15

cond_end15:                                       ; preds = %cond_then_block, %cond_jump_then13
  %42 = bitcast %buffer* %20 to i8*
  call void @ncfree(i8* %42)
  ret i1 false

cond_jump_then28:                                 ; preds = %cond_end14
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to %sParserInfo**
  %info30 = load %sParserInfo*, %sParserInfo** %44, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %46 = bitcast i8* %45 to i8**
  %p_before31 = load i8*, i8** %46, align 8
  %47 = getelementptr inbounds %sParserInfo, %sParserInfo* %info30, i32 0, i32 4
  store i8* %p_before31, i8** %47, align 8
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info32 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 0
  %51 = bitcast [4096 x i8]* %50 to i8*
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %53 = bitcast i8* %52 to i8**
  %sname_before33 = load i8*, i8** %53, align 8
  %54 = call i8* @xstrncpy(i8* %51, i8* %sname_before33, i32 4096)
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %56 = bitcast i8* %55 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %58 = bitcast i8* %57 to i32*
  %sline_before35 = load i32, i32* %58, align 4
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info34, i32 0, i32 1
  store i32 %sline_before35, i32* %59, align 4
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  %62 = load %buffer*, %buffer** %command_result, align 8
  call void @buffer_finalize(%buffer* %62)
  %63 = ptrtoint %buffer* %62 to i64
  %64 = icmp ne i64 %63, 0
  br i1 %64, label %cond_then_block36, label %cond_end37

cond_end29:                                       ; preds = %cond_end14
  %info38 = load %sParserInfo*, %sParserInfo** %info5, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info38)
  %info39 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %p_before40 = load i8*, i8** %p_before, align 8
  %65 = getelementptr inbounds %sParserInfo, %sParserInfo* %info39, i32 0, i32 4
  store i8* %p_before40, i8** %65, align 8
  %info41 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %66 = getelementptr inbounds %sParserInfo, %sParserInfo* %info41, i32 0, i32 0
  %67 = bitcast [4096 x i8]* %66 to i8*
  %sname_before42 = load i8*, i8** %sname_before, align 8
  %68 = call i8* @xstrncpy(i8* %67, i8* %sname_before42, i32 4096)
  %info43 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %sline_before44 = load i32, i32* %sline_before, align 4
  %69 = getelementptr inbounds %sParserInfo, %sParserInfo* %info43, i32 0, i32 1
  store i32 %sline_before44, i32* %69, align 4
  %node45 = load %sCLNode**, %sCLNode*** %node2, align 8
  %node_block46 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %70 = getelementptr inbounds %sCLNodeBlock, %sCLNodeBlock* %node_block46, i32 0, i32 0
  %71 = load %vector__sCLNodep*, %vector__sCLNodep** %70, align 8
  %72 = call %sCLNode* @"item_sCLNodep6_src/macro"(%vector__sCLNodep* %71, i32 -1, %sCLNode* null)
  store %sCLNode* %72, %sCLNode** %node45, align 8
  %73 = bitcast [8192 x i8*]* %lvtable to i8*
  %74 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %73, i64 65536)
  %75 = load %buffer*, %buffer** %command_result, align 8
  call void @buffer_finalize(%buffer* %75)
  %76 = ptrtoint %buffer* %75 to i64
  %77 = icmp ne i64 %76, 0
  br i1 %77, label %cond_then_block47, label %cond_end48

cond_then_block36:                                ; preds = %cond_jump_then28
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then28
  %78 = bitcast %buffer* %62 to i8*
  call void @ncfree(i8* %78)
  ret i1 false

cond_then_block47:                                ; preds = %cond_end29
  br label %cond_end48

cond_end48:                                       ; preds = %cond_then_block47, %cond_end29
  %79 = bitcast %buffer* %75 to i8*
  call void @ncfree(i8* %79)
  ret i1 true
}

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

define %map__charp_charp* @"initialize_charp_charp0_src/macro"(%map__charp_charp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %self3 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %3 = call i8* @nccalloc(i64 128, i64 8)
  %4 = bitcast i8* %3 to i8**
  %5 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self3, i32 0, i32 0
  store i8** %4, i8*** %5, align 8
  %self4 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %6 = call i8* @nccalloc(i64 128, i64 8)
  %7 = bitcast i8* %6 to i8**
  %8 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self4, i32 0, i32 2
  store i8** %7, i8*** %8, align 8
  %self5 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %9 = call i8* @nccalloc(i64 128, i64 1)
  %10 = bitcast i8* %9 to i1*
  %11 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self5, i32 0, i32 1
  store i1* %10, i1** %11, align 8
  %i = alloca i32
  %12 = bitcast i32* %i to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %i6 = load i32, i32* %i, align 4
  %letmp = icmp slt i32 %i6, 128
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %14 = bitcast i8* %13 to %map__charp_charp**
  %self7 = load %map__charp_charp*, %map__charp_charp** %14, align 8
  %15 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self7, i32 0, i32 1
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
  %self10 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %17 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self10, i32 0, i32 3
  store i32 128, i32* %17, align 4
  %self11 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %18 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self11, i32 0, i32 4
  store i32 0, i32* %18, align 4
  %self12 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret %map__charp_charp* %self12
}

define void @"finalize_charp_charp1_src/macro"(%map__charp_charp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %self3 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_charp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %7 = bitcast i8* %6 to %map__charp_charp**
  %self5 = load %map__charp_charp*, %map__charp_charp** %7, align 8
  %8 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %11 = bitcast i8* %10 to %map__charp_charp**
  %self6 = load %map__charp_charp*, %map__charp_charp** %11, align 8
  %12 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self19 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self19, i32 0, i32 2
  %15 = load i8**, i8*** %14, align 8
  %16 = load i8**, i8*** %14, align 8
  %17 = bitcast i8** %16 to i8*
  call void @ncfree(i8* %17)
  %i20 = alloca i32
  %18 = bitcast i32* %i20 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %i20, align 4
  br label %loop_top_block21

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 true, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i18 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i18, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %map__charp_charp**
  %self12 = load %map__charp_charp*, %map__charp_charp** %20, align 8
  %21 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self12, i32 0, i32 2
  %22 = load i8**, i8*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr i8*, i8** %22, i32 %i13
  %element15 = load i8*, i8** %element_addressB14, align 8
  %25 = load i8*, i8** %element_addressB14, align 8
  %26 = ptrtoint i8* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  br label %cond_end17

cond_end17:                                       ; preds = %cond_then_block16, %cond_jump_then10
  call void @ncfree(i8* %25)
  br label %cond_end11

loop_top_block21:                                 ; preds = %cond_end32, %cond_end_block
  %i22 = load i32, i32* %i20, align 4
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %29 = bitcast i8* %28 to %map__charp_charp**
  %self23 = load %map__charp_charp*, %map__charp_charp** %29, align 8
  %30 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self23, i32 0, i32 3
  %31 = load i32, i32* %30, align 4
  %letmp24 = icmp slt i32 %i22, %31
  br i1 %letmp24, label %cond_then_block25, label %cond_end_block26

cond_then_block25:                                ; preds = %loop_top_block21
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %map__charp_charp**
  %self27 = load %map__charp_charp*, %map__charp_charp** %33, align 8
  %34 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self27, i32 0, i32 1
  %35 = load i1*, i1** %34, align 8
  %i28 = load i32, i32* %i20, align 4
  %element_addressB29 = getelementptr i1, i1* %35, i32 %i28
  %element30 = load i1, i1* %element_addressB29, align 1
  br i1 %element30, label %cond_jump_then31, label %cond_end32

cond_end_block26:                                 ; preds = %loop_top_block21
  %self44 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %36 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self44, i32 0, i32 0
  %37 = load i8**, i8*** %36, align 8
  %38 = load i8**, i8*** %36, align 8
  %39 = bitcast i8** %38 to i8*
  call void @ncfree(i8* %39)
  %self45 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %40 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self45, i32 0, i32 1
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
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to %map__charp_charp**
  %self35 = load %map__charp_charp*, %map__charp_charp** %46, align 8
  %47 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self35, i32 0, i32 0
  %48 = load i8**, i8*** %47, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
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

define void @"insert_charp_charp2_src/macro"(%map__charp_charp* %self, i8* %key, i8* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %item4 = alloca i8*
  store i8* %item, i8** %item4, align 8
  %4 = bitcast i8** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self5 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %5 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %7 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %10 = bitcast i8* %9 to %map__charp_charp**
  %self7 = load %map__charp_charp*, %map__charp_charp** %10, align 8
  call void @"rehash_charp_charp3_src/macro"(%map__charp_charp* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %12 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %17 = bitcast i8* %16 to %map__charp_charp**
  %self11 = load %map__charp_charp*, %map__charp_charp** %17, align 8
  %18 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %25 = bitcast i8* %24 to %map__charp_charp**
  %self15 = load %map__charp_charp*, %map__charp_charp** %25, align 8
  %26 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %34 = bitcast i8* %33 to %map__charp_charp**
  %self53 = load %map__charp_charp*, %map__charp_charp** %34, align 8
  %35 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %40 = bitcast i8* %39 to %map__charp_charp**
  %self56 = load %map__charp_charp*, %map__charp_charp** %40, align 8
  %41 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %48 = bitcast i8* %47 to %map__charp_charp**
  %self60 = load %map__charp_charp*, %map__charp_charp** %48, align 8
  %49 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self60, i32 0, i32 2
  %50 = load i8**, i8*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %54 = bitcast i8* %53 to i8**
  %item62 = load i8*, i8** %54, align 8
  %element_addressD63 = getelementptr i8*, i8** %50, i32 %it61
  store i8* %item62, i8** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %56 = bitcast i8* %55 to %map__charp_charp**
  %self64 = load %map__charp_charp*, %map__charp_charp** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %58 = bitcast i8* %57 to %map__charp_charp**
  %self65 = load %map__charp_charp*, %map__charp_charp** %58, align 8
  %59 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %69 = bitcast i8* %68 to %map__charp_charp**
  %self47 = load %map__charp_charp*, %map__charp_charp** %69, align 8
  %70 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %73 = bitcast i8* %72 to %map__charp_charp**
  %self24 = load %map__charp_charp*, %map__charp_charp** %73, align 8
  %74 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %77 = bitcast i8* %76 to i32*
  %it25 = load i32, i32* %77, align 4
  %element_addressB26 = getelementptr i8*, i8** %75, i32 %it25
  %element27 = load i8*, i8** %element_addressB26, align 8
  %78 = load i8*, i8** %element_addressB26, align 8
  %79 = ptrtoint i8* %78 to i64
  %80 = icmp ne i64 %79, 0
  br i1 %80, label %cond_then_block28, label %cond_end29

cond_end23:                                       ; preds = %cond_end29, %cond_jump_then20
  br i1 true, label %cond_jump_then30, label %cond_end31

cond_then_block28:                                ; preds = %cond_jump_then22
  br label %cond_end29

cond_end29:                                       ; preds = %cond_then_block28, %cond_jump_then22
  call void @ncfree(i8* %78)
  br label %cond_end23

cond_jump_then30:                                 ; preds = %cond_end23
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %82 = bitcast i8* %81 to %map__charp_charp**
  %self32 = load %map__charp_charp*, %map__charp_charp** %82, align 8
  %83 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self32, i32 0, i32 2
  %84 = load i8**, i8*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i8*, i8** %84, i32 %it33
  %element35 = load i8*, i8** %element_addressB34, align 8
  %87 = load i8*, i8** %element_addressB34, align 8
  %88 = ptrtoint i8* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %91 = bitcast i8* %90 to %map__charp_charp**
  %self38 = load %map__charp_charp*, %map__charp_charp** %91, align 8
  %92 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %99 = bitcast i8* %98 to %map__charp_charp**
  %self41 = load %map__charp_charp*, %map__charp_charp** %99, align 8
  %100 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self41, i32 0, i32 2
  %101 = load i8**, i8*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %105 = bitcast i8* %104 to i8**
  %item43 = load i8*, i8** %105, align 8
  %element_addressD44 = getelementptr i8*, i8** %101, i32 %it42
  store i8* %item43, i8** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  call void @ncfree(i8* %87)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %107 = bitcast i8* %106 to i32*
  store i32 0, i32* %107, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %109 = bitcast i8* %108 to i32*
  %it51 = load i32, i32* %109, align 4
  %110 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %111 = bitcast i8* %110 to i32*
  %hash52 = load i32, i32* %111, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %112 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.2, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_charp3_src/macro"(%map__charp_charp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %3 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i8**
  %items = alloca i8**
  %11 = bitcast i8*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i8** %10, i8*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  call void @"each_charp_charp4_src/macro"(%map__charp_charp* %self9, void (i8*, i8*, i1*)* @macro_lambda0)
  %self10 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %16 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self10, i32 0, i32 2
  %17 = load i8**, i8*** %16, align 8
  %18 = load i8**, i8*** %16, align 8
  %19 = bitcast i8** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %20 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self11, i32 0, i32 1
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
  %self12 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %26 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %items16 = load i8**, i8*** %items, align 8
  %31 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self15, i32 0, i32 2
  store i8** %items16, i8*** %31, align 8
  %self17 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @macro_lambda0(i8* %it, i8* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %it25 = alloca i8*
  store i8* %it2, i8** %it25, align 8
  %3 = bitcast i8** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %35 = bitcast i8* %34 to i8***
  %items = load i8**, i8*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %39 = bitcast i8* %38 to i8**
  %it223 = load i8*, i8** %39, align 8
  %element_addressD24 = getelementptr i8*, i8** %items, i32 %n22
  store i8* %it223, i8** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.1, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_charp4_src/macro"(%map__charp_charp* %self, void (i8*, i8*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %block_3 = alloca void (i8*, i8*, i1*)*
  store void (i8*, i8*, i1*)* %block_, void (i8*, i8*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i8*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %6 = bitcast i8* %5 to %map__charp_charp**
  %self5 = load %map__charp_charp*, %map__charp_charp** %6, align 8
  %7 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %10 = bitcast i8* %9 to %map__charp_charp**
  %self6 = load %map__charp_charp*, %map__charp_charp** %10, align 8
  %11 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to void (i8*, i8*, i1*)**
  %block_8 = load void (i8*, i8*, i1*)*, void (i8*, i8*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %19 = bitcast i8* %18 to %map__charp_charp**
  %self9 = load %map__charp_charp*, %map__charp_charp** %19, align 8
  %20 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %25 = bitcast i8* %24 to %map__charp_charp**
  %self13 = load %map__charp_charp*, %map__charp_charp** %25, align 8
  %26 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self13, i32 0, i32 2
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i8*, i8** %27, i32 %i_14
  %element16 = load i8*, i8** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i8* %element16, i1* %end_flag_)
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

define internal i8* @get_macro(i8* %name) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %name2 = alloca i8*
  store i8* %name, i8** %name2, align 8
  %2 = bitcast i8** %name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %gMacros = load %map__charp_charp*, %map__charp_charp** @gMacros, align 8
  %name3 = load i8*, i8** %name2, align 8
  %3 = call i8* @"at_charp_charp5_src/macro"(%map__charp_charp* %gMacros, i8* %name3, i8* null)
  %4 = bitcast [8192 x i8*]* %lvtable to i8*
  %5 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %4, i64 65536)
  ret i8* %3
}

define i8* @"at_charp_charp5_src/macro"(%map__charp_charp* %self, i8* %key, i8* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_charp*
  store %map__charp_charp* %self, %map__charp_charp** %self2, align 8
  %2 = bitcast %map__charp_charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %default_value4 = alloca i8*
  store i8* %default_value, i8** %default_value4, align 8
  %4 = bitcast i8** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_charp*, %map__charp_charp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self6, i32 0, i32 3
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
  %11 = bitcast i8* %10 to %map__charp_charp**
  %self8 = load %map__charp_charp*, %map__charp_charp** %11, align 8
  %12 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load i8*, i8** %default_value4, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i8* %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %19 = bitcast i8* %18 to %map__charp_charp**
  %self10 = load %map__charp_charp*, %map__charp_charp** %19, align 8
  %20 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self10, i32 0, i32 0
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
  %28 = bitcast i8* %27 to i8**
  %default_value29 = load i8*, i8** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret i8* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %32 = bitcast i8* %31 to %map__charp_charp**
  %self17 = load %map__charp_charp*, %map__charp_charp** %32, align 8
  %33 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self17, i32 0, i32 2
  %34 = load i8**, i8*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr i8*, i8** %34, i32 %it18
  %element20 = load i8*, i8** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret i8* %element20

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
  %46 = bitcast i8* %45 to %map__charp_charp**
  %self23 = load %map__charp_charp*, %map__charp_charp** %46, align 8
  %47 = getelementptr inbounds %map__charp_charp, %map__charp_charp* %self23, i32 0, i32 3
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
  %56 = bitcast i8* %55 to i8**
  %default_value28 = load i8*, i8** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret i8* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define internal i1 @get_command_result(%buffer* %command_result, i8* %macro_name, i8* %cmdline, i8* %params) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %command_result2 = alloca %buffer*
  store %buffer* %command_result, %buffer** %command_result2, align 8
  %2 = bitcast %buffer** %command_result2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %macro_name3 = alloca i8*
  store i8* %macro_name, i8** %macro_name3, align 8
  %3 = bitcast i8** %macro_name3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %cmdline4 = alloca i8*
  store i8* %cmdline, i8** %cmdline4, align 8
  %4 = bitcast i8** %cmdline4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %params5 = alloca i8*
  store i8* %params, i8** %params5, align 8
  %5 = bitcast i8** %params5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %f = alloca %_IO_FILE*
  %6 = bitcast %_IO_FILE** %f to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %buf = alloca i8*
  %7 = bitcast i8** %buf to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %element_memory = alloca i8, i32 8192
  store i8* %element_memory, i8** %buf, align 8
  %params6 = load i8*, i8** %params5, align 8
  %8 = call i32 @setenv(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.3, i32 0, i32 0), i8* %params6, i32 1)
  %cmdline7 = load i8*, i8** %cmdline4, align 8
  %9 = call %_IO_FILE* @popen(i8* %cmdline7, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.4, i32 0, i32 0))
  store %_IO_FILE* %9, %_IO_FILE** %f, align 8
  %f8 = load %_IO_FILE*, %_IO_FILE** %f, align 8
  %eqtmpX = icmp eq %_IO_FILE* %f8, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %11 = bitcast i8* %10 to i8**
  %macro_name9 = load i8*, i8** %11, align 8
  %12 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.5, i32 0, i32 0), i8* %macro_name9)
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end17, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %size = alloca i32
  %15 = bitcast i32* %size to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %17 = bitcast i8* %16 to i8**
  %buf10 = load i8*, i8** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %19 = bitcast i8* %18 to %_IO_FILE**
  %f11 = load %_IO_FILE*, %_IO_FILE** %19, align 8
  %20 = call i64 @fread(i8* %buf10, i64 1, i64 8192, %_IO_FILE* %f11)
  %21 = trunc i64 %20 to i32
  store i32 %21, i32* %size, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %23 = bitcast i8* %22 to %buffer**
  %command_result12 = load %buffer*, %buffer** %23, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %25 = bitcast i8* %24 to i8**
  %buf13 = load i8*, i8** %25, align 8
  %size14 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size14 to i64
  call void @buffer_append(%buffer* %command_result12, i8* %buf13, i64 %sext14)
  %size15 = load i32, i32* %size, align 4
  %letmp = icmp slt i32 %size15, 8192
  br i1 %letmp, label %cond_jump_then16, label %cond_end17

cond_end_block:                                   ; preds = %cond_jump_then16, %loop_top_block
  %f18 = load %_IO_FILE*, %_IO_FILE** %f, align 8
  %26 = call i32 @pclose(%_IO_FILE* %f18)
  %letmp19 = icmp slt i32 %26, 0
  br i1 %letmp19, label %cond_jump_then20, label %cond_end21

cond_jump_then16:                                 ; preds = %cond_then_block
  br label %cond_end_block

cond_end17:                                       ; preds = %after_break, %cond_then_block
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end17

cond_jump_then20:                                 ; preds = %cond_end_block
  %stderr22 = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %28 = bitcast i8* %27 to i8**
  %macro_name23 = load i8*, i8** %28, align 8
  %29 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr22, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_string.6, i32 0, i32 0), i8* %macro_name23)
  %30 = bitcast [8192 x i8*]* %lvtable to i8*
  %31 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %30, i64 65536)
  ret i1 false

cond_end21:                                       ; preds = %cond_end_block
  %32 = bitcast [8192 x i8*]* %lvtable to i8*
  %33 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %32, i64 65536)
  ret i1 true
}

define %sCLNode* @"item_sCLNodep6_src/macro"(%vector__sCLNodep* %self, i32 %index, %sCLNode* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLNodep*
  store %vector__sCLNodep* %self, %vector__sCLNodep** %self2, align 8
  %2 = bitcast %vector__sCLNodep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %index3 = alloca i32
  store i32 %index, i32* %index3, align 4
  %3 = bitcast i32* %index3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %default_value4 = alloca %sCLNode*
  store %sCLNode* %default_value, %sCLNode** %default_value4, align 8
  %4 = bitcast %sCLNode** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %index5 = load i32, i32* %index3, align 4
  %letmp = icmp slt i32 %index5, 0
  br i1 %letmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %6 = bitcast i8* %5 to i32*
  %index6 = load i32, i32* %6, align 4
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %8 = bitcast i8* %7 to %vector__sCLNodep**
  %self7 = load %vector__sCLNodep*, %vector__sCLNodep** %8, align 8
  %9 = getelementptr inbounds %vector__sCLNodep, %vector__sCLNodep* %self7, i32 0, i32 1
  %10 = load i32, i32* %9, align 4
  %addtmp = add nsw i32 %index6, %10
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %12 = bitcast i8* %11 to i32*
  store i32 %addtmp, i32* %12, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %14 = bitcast i8* %13 to %vector__sCLNodep**
  %self8 = load %vector__sCLNodep*, %vector__sCLNodep** %14, align 8
  %15 = getelementptr inbounds %vector__sCLNodep, %vector__sCLNodep* %self8, i32 0, i32 1
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
  %self12 = load %vector__sCLNodep*, %vector__sCLNodep** %self2, align 8
  %17 = getelementptr inbounds %vector__sCLNodep, %vector__sCLNodep* %self12, i32 0, i32 1
  %18 = load i32, i32* %17, align 4
  %letmp13 = icmp slt i32 %index11, %18
  %andand = and i1 %getmp, %letmp13
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then10, %cond_end
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then14, label %cond_end15

cond_jump_then14:                                 ; preds = %cond_jump_end
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %20 = bitcast i8* %19 to %vector__sCLNodep**
  %self16 = load %vector__sCLNodep*, %vector__sCLNodep** %20, align 8
  %21 = getelementptr inbounds %vector__sCLNodep, %vector__sCLNodep* %self16, i32 0, i32 0
  %22 = load %sCLNode**, %sCLNode*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i32*
  %index17 = load i32, i32* %24, align 4
  %element_addressB = getelementptr %sCLNode*, %sCLNode** %22, i32 %index17
  %element = load %sCLNode*, %sCLNode** %element_addressB, align 8
  %25 = bitcast [8192 x i8*]* %lvtable to i8*
  %26 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %25, i64 65536)
  ret %sCLNode* %element

cond_end15:                                       ; preds = %cond_jump_end
  %default_value18 = load %sCLNode*, %sCLNode** %default_value4, align 8
  %27 = bitcast [8192 x i8*]* %lvtable to i8*
  %28 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %27, i64 65536)
  ret %sCLNode* %default_value18
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/macro.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
