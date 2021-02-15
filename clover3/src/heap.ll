; ModuleID = 'Module heap'
source_filename = "Module heap"

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
%sHeapPage = type { i8*, i32 }
%sCLHeapManager = type { %sHandle*, i32, i8*, i32, i32 }
%sHandle = type { i8, i8, i32, i32, i16, i16, i8* }
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
@gHeapPages = global %sHeapPage* zeroinitializer, align 8
@gSizeHeapPages = global i32 zeroinitializer, align 4
@gNumHeapPages = global i32 zeroinitializer, align 4
@gCLHeap = global %sCLHeapManager zeroinitializer, align 8
@"src/heap.nc_gc_timing" = global i32 0, align 4

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

define i32 @alloc_heap_mem(i32 %size, %sCLType* %type, i32 %field_num, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %size2 = alloca i32
  store i32 %size, i32* %size2, align 4
  %2 = bitcast i32* %size2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %type3 = alloca %sCLType*
  store %sCLType* %type, %sCLType** %type3, align 8
  %3 = bitcast %sCLType** %type3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %field_num4 = alloca i32
  store i32 %field_num, i32* %field_num4, align 4
  %4 = bitcast i32* %field_num4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %info5 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info5, align 8
  %5 = bitcast %sVMInfo** %info5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %handle = alloca i32
  %6 = bitcast i32* %handle to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %obj = alloca i32
  %7 = bitcast i32* %obj to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %size6 = load i32, i32* %size2, align 4
  call void @alignment(i32* %size2)
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %8 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %eqtmpX = icmp eq i32 %8, -1
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %gc_timing = load i32, i32* @"src/heap.nc_gc_timing", align 4
  %remtmp = srem i32 %gc_timing, 1024
  %eqtmpX7 = icmp eq i32 %remtmp, 0
  br i1 %eqtmpX7, label %cond_jump_then8, label %cond_end9

cond_end:                                         ; preds = %cond_end9, %entry
  %gCLHeap12 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %9 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  store i32 %9, i32* %handle, align 4
  %handle13 = load i32, i32* %handle, align 4
  %handle_before = alloca i32
  %10 = bitcast i32* %handle_before to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %handle13, i32* %handle_before, align 4
  br label %loop_top_block

cond_jump_then8:                                  ; preds = %cond_jump_then
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info10 = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @gc(%sVMInfo* %info10)
  br label %cond_end9

cond_end9:                                        ; preds = %cond_jump_then8, %cond_jump_then
  %gc_timing11 = load i32, i32* @"src/heap.nc_gc_timing", align 4
  %addtmp = add nsw i32 %gc_timing11, 1
  store i32 %addtmp, i32* @"src/heap.nc_gc_timing", align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %cond_end

loop_top_block:                                   ; preds = %cond_end19, %cond_end
  %handle14 = load i32, i32* %handle, align 4
  %noteqtmp = icmp ne i32 %handle14, -1
  br i1 %noteqtmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %14 = bitcast i8* %13 to i32*
  %size15 = load i32, i32* %14, align 4
  %gCLHeap16 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %15 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to i32*
  %handle17 = load i32, i32* %17, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %15, i32 %handle17
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %18 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 4
  %19 = load i16, i16* %18, align 2
  %sext13 = zext i16 %19 to i32
  %leeqtmp = icmp ule i32 %size15, %sext13
  br i1 %leeqtmp, label %cond_jump_then18, label %cond_end19

cond_end_block:                                   ; preds = %cond_jump_then18, %loop_top_block
  %handle25 = load i32, i32* %handle, align 4
  %eqtmpX26 = icmp eq i32 %handle25, -1
  br i1 %eqtmpX26, label %cond_jump_then27, label %cond_else_block

cond_jump_then18:                                 ; preds = %cond_then_block
  br label %cond_end_block

cond_end19:                                       ; preds = %after_break, %cond_then_block
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %21 = bitcast i8* %20 to i32*
  %handle20 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %23 = bitcast i8* %22 to i32*
  store i32 %handle20, i32* %23, align 4
  %gCLHeap21 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %24 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %26 = bitcast i8* %25 to i32*
  %handle22 = load i32, i32* %26, align 4
  %element_addressB23 = getelementptr %sHandle, %sHandle* %24, i32 %handle22
  %element24 = load %sHandle, %sHandle* %element_addressB23, align 8
  %27 = getelementptr inbounds %sHandle, %sHandle* %element_addressB23, i32 0, i32 3
  %28 = load i32, i32* %27, align 4
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %30 = bitcast i8* %29 to i32*
  store i32 %28, i32* %30, align 4
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end19

cond_jump_then27:                                 ; preds = %cond_end_block
  %gCLHeap29 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %31 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %33 = bitcast i8* %32 to i32*
  store i32 %31, i32* %33, align 4
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %35 = bitcast i8* %34 to i32*
  %handle30 = load i32, i32* %35, align 4
  %eqtmpX31 = icmp eq i32 %handle30, -1
  br i1 %eqtmpX31, label %cond_jump_then32, label %cond_end33

cond_else_block:                                  ; preds = %cond_end_block
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %37 = bitcast i8* %36 to i32*
  %handle118 = load i32, i32* %37, align 4
  %gCLHeap119 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %38 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %eqtmpX120 = icmp eq i32 %handle118, %38
  br i1 %eqtmpX120, label %cond_jump_then121, label %cond_else_block122

cond_end28:                                       ; preds = %cond_end123, %cond_end33
  %handle149 = load i32, i32* %handle, align 4
  %addtmp150 = add nsw i32 %handle149, 1234
  store i32 %addtmp150, i32* %obj, align 4
  %gCLHeap151 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %39 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %handle152 = load i32, i32* %handle, align 4
  %element_addressB153 = getelementptr %sHandle, %sHandle* %39, i32 %handle152
  %element154 = load %sHandle, %sHandle* %element_addressB153, align 8
  %40 = getelementptr inbounds %sHandle, %sHandle* %element_addressB153, i32 0, i32 6
  %41 = load i8*, i8** %40, align 8
  %eqtmpX155 = icmp eq i8* %41, null
  br i1 %eqtmpX155, label %cond_jump_then156, label %cond_end157

cond_jump_then32:                                 ; preds = %cond_jump_then27
  %gCLHeap34 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %42 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %addtmp35 = add nsw i32 %42, 1
  %multtmp = mul nsw i32 %addtmp35, 2
  %new_offset_size = alloca i32
  %43 = bitcast i32* %new_offset_size to i8*
  store i8* %43, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 %multtmp, i32* %new_offset_size, align 4
  %gCLHeap36 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %gCLHeap37 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %44 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %new_offset_size38 = load i32, i32* %new_offset_size, align 4
  %sext14 = zext i32 %new_offset_size38 to i64
  %multtmp39 = mul nsw i64 24, %sext14
  %45 = bitcast %sHandle* %44 to i8*
  %46 = call i8* @ncrealloc(i8* %45, i64 %multtmp39)
  %47 = bitcast i8* %46 to %sHandle*
  store %sHandle* %47, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %gCLHeap40 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %48 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %gCLHeap41 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %49 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %50 = ptrtoint %sHandle* %48 to i64
  %sextXYZ = sext i32 %49 to i64
  %multtmp42 = mul nsw i64 %sextXYZ, 24
  %addtmp43 = add nsw i64 %50, %multtmp42
  %intToPtr2 = inttoptr i64 %addtmp43 to %sHandle*
  %new_offset_size44 = load i32, i32* %new_offset_size, align 4
  %gCLHeap45 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %51 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %subttmp46 = sub nsw i32 %new_offset_size44, %51
  %sext1447 = zext i32 %subttmp46 to i64
  %multtmp48 = mul nsw i64 24, %sext1447
  %52 = bitcast %sHandle* %intToPtr2 to i8*
  %53 = call i8* @memset(i8* %52, i32 0, i64 %multtmp48)
  %gCLHeap49 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %gCLHeap50 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %54 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %new_offset_size51 = load i32, i32* %new_offset_size, align 4
  %sext1452 = zext i32 %new_offset_size51 to i64
  %multtmp53 = mul nsw i64 1, %sext1452
  %55 = call i8* @ncrealloc(i8* %54, i64 %multtmp53)
  store i8* %55, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %gCLHeap54 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %56 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %gCLHeap55 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %57 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %58 = ptrtoint i8* %56 to i64
  %sextXYZ56 = sext i32 %57 to i64
  %multtmp57 = mul nsw i64 %sextXYZ56, 1
  %addtmp58 = add nsw i64 %58, %multtmp57
  %intToPtr259 = inttoptr i64 %addtmp58 to i8*
  %new_offset_size60 = load i32, i32* %new_offset_size, align 4
  %gCLHeap61 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %59 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %subttmp62 = sub nsw i32 %new_offset_size60, %59
  %sext1463 = zext i32 %subttmp62 to i64
  %multtmp64 = mul nsw i64 1, %sext1463
  %60 = call i8* @memset(i8* %intToPtr259, i32 0, i64 %multtmp64)
  %i = alloca i32
  %61 = bitcast i32* %i to i8*
  store i8* %61, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %gCLHeap65 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %62 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %64 = bitcast i8* %63 to i32*
  store i32 %62, i32* %64, align 4
  br label %loop_top_block66

cond_end33:                                       ; preds = %cond_end_block70, %cond_jump_then27
  %gCLHeap89 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %65 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %67 = bitcast i8* %66 to i32*
  %handle90 = load i32, i32* %67, align 4
  %element_addressB91 = getelementptr %sHandle, %sHandle* %65, i32 %handle90
  %element92 = load %sHandle, %sHandle* %element_addressB91, align 8
  %68 = getelementptr inbounds %sHandle, %sHandle* %element_addressB91, i32 0, i32 0
  store i8 -1, i8* %68, align 1
  %gCLHeap93 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %69 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %71 = bitcast i8* %70 to i32*
  %handle94 = load i32, i32* %71, align 4
  %element_addressB95 = getelementptr %sHandle, %sHandle* %69, i32 %handle94
  %element96 = load %sHandle, %sHandle* %element_addressB95, align 8
  %72 = getelementptr inbounds %sHandle, %sHandle* %element_addressB95, i32 0, i32 6
  store i8* null, i8** %72, align 8
  %gCLHeap97 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %73 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %75 = bitcast i8* %74 to i32*
  %handle98 = load i32, i32* %75, align 4
  %element_addressB99 = getelementptr %sHandle, %sHandle* %73, i32 %handle98
  %element100 = load %sHandle, %sHandle* %element_addressB99, align 8
  %76 = getelementptr inbounds %sHandle, %sHandle* %element_addressB99, i32 0, i32 1
  store i8 0, i8* %76, align 1
  %gCLHeap101 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %77 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %79 = bitcast i8* %78 to i32*
  %handle102 = load i32, i32* %79, align 4
  %element_addressB103 = getelementptr %sHandle, %sHandle* %77, i32 %handle102
  %element104 = load %sHandle, %sHandle* %element_addressB103, align 8
  %80 = getelementptr inbounds %sHandle, %sHandle* %element_addressB103, i32 0, i32 4
  store i16 0, i16* %80, align 2
  %gCLHeap105 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %81 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %83 = bitcast i8* %82 to i32*
  %handle106 = load i32, i32* %83, align 4
  %element_addressB107 = getelementptr %sHandle, %sHandle* %81, i32 %handle106
  %element108 = load %sHandle, %sHandle* %element_addressB107, align 8
  %84 = getelementptr inbounds %sHandle, %sHandle* %element_addressB107, i32 0, i32 5
  store i16 0, i16* %84, align 2
  %gCLHeap109 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %85 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %86 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %87 = bitcast i8* %86 to i32*
  %handle110 = load i32, i32* %87, align 4
  %element_addressB111 = getelementptr %sHandle, %sHandle* %85, i32 %handle110
  %element112 = load %sHandle, %sHandle* %element_addressB111, align 8
  %88 = getelementptr inbounds %sHandle, %sHandle* %element_addressB111, i32 0, i32 3
  store i32 -1, i32* %88, align 4
  %gCLHeap113 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %gCLHeap114 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %89 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %91 = bitcast i8* %90 to i32*
  %handle115 = load i32, i32* %91, align 4
  %element_addressB116 = getelementptr %sHandle, %sHandle* %89, i32 %handle115
  %element117 = load %sHandle, %sHandle* %element_addressB116, align 8
  %92 = getelementptr inbounds %sHandle, %sHandle* %element_addressB116, i32 0, i32 2
  %93 = load i32, i32* %92, align 4
  store i32 %93, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  br label %cond_end28

loop_top_block66:                                 ; preds = %cond_then_block69, %cond_jump_then32
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %95 = bitcast i8* %94 to i32*
  %i67 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %97 = bitcast i8* %96 to i32*
  %new_offset_size68 = load i32, i32* %97, align 4
  %letmp = icmp slt i32 %i67, %new_offset_size68
  br i1 %letmp, label %cond_then_block69, label %cond_end_block70

cond_then_block69:                                ; preds = %loop_top_block66
  %gCLHeap71 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %98 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %top_of_free_handle = alloca i32
  %99 = bitcast i32* %top_of_free_handle to i8*
  store i8* %99, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %98, i32* %top_of_free_handle, align 4
  %gCLHeap72 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %101 = bitcast i8* %100 to i32*
  %i73 = load i32, i32* %101, align 4
  store i32 %i73, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %gCLHeap74 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %102 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %104 = bitcast i8* %103 to i32*
  %i75 = load i32, i32* %104, align 4
  %element_addressB76 = getelementptr %sHandle, %sHandle* %102, i32 %i75
  %element77 = load %sHandle, %sHandle* %element_addressB76, align 8
  %top_of_free_handle78 = load i32, i32* %top_of_free_handle, align 4
  %105 = getelementptr inbounds %sHandle, %sHandle* %element_addressB76, i32 0, i32 2
  store i32 %top_of_free_handle78, i32* %105, align 4
  %gCLHeap79 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %106 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %108 = bitcast i8* %107 to i32*
  %i80 = load i32, i32* %108, align 4
  %element_addressB81 = getelementptr %sHandle, %sHandle* %106, i32 %i80
  %element82 = load %sHandle, %sHandle* %element_addressB81, align 8
  %109 = getelementptr inbounds %sHandle, %sHandle* %element_addressB81, i32 0, i32 3
  store i32 -1, i32* %109, align 4
  %110 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %111 = bitcast i8* %110 to i32*
  %i83 = load i32, i32* %111, align 4
  %addtmp84 = add nsw i32 %i83, 1
  %112 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %113 = bitcast i8* %112 to i32*
  store i32 %addtmp84, i32* %113, align 4
  %subttmp85 = sub nsw i32 %addtmp84, 1
  br label %loop_top_block66

cond_end_block70:                                 ; preds = %loop_top_block66
  %gCLHeap86 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %new_offset_size87 = load i32, i32* %new_offset_size, align 4
  store i32 %new_offset_size87, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %gCLHeap88 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %114 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %116 = bitcast i8* %115 to i32*
  store i32 %114, i32* %116, align 4
  br label %cond_end33

cond_jump_then121:                                ; preds = %cond_else_block
  %gCLHeap124 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %gCLHeap125 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %117 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %119 = bitcast i8* %118 to i32*
  %handle126 = load i32, i32* %119, align 4
  %element_addressB127 = getelementptr %sHandle, %sHandle* %117, i32 %handle126
  %element128 = load %sHandle, %sHandle* %element_addressB127, align 8
  %120 = getelementptr inbounds %sHandle, %sHandle* %element_addressB127, i32 0, i32 3
  %121 = load i32, i32* %120, align 4
  store i32 %121, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %gCLHeap129 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %122 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %124 = bitcast i8* %123 to i32*
  %handle130 = load i32, i32* %124, align 4
  %element_addressB131 = getelementptr %sHandle, %sHandle* %122, i32 %handle130
  %element132 = load %sHandle, %sHandle* %element_addressB131, align 8
  %125 = getelementptr inbounds %sHandle, %sHandle* %element_addressB131, i32 0, i32 3
  store i32 -1, i32* %125, align 4
  %gCLHeap133 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %126 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %128 = bitcast i8* %127 to i32*
  %handle134 = load i32, i32* %128, align 4
  %element_addressB135 = getelementptr %sHandle, %sHandle* %126, i32 %handle134
  %element136 = load %sHandle, %sHandle* %element_addressB135, align 8
  %129 = getelementptr inbounds %sHandle, %sHandle* %element_addressB135, i32 0, i32 0
  store i8 -1, i8* %129, align 1
  br label %cond_end123

cond_else_block122:                               ; preds = %cond_else_block
  %gCLHeap137 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %130 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %132 = bitcast i8* %131 to i32*
  %handle_before138 = load i32, i32* %132, align 4
  %element_addressB139 = getelementptr %sHandle, %sHandle* %130, i32 %handle_before138
  %element140 = load %sHandle, %sHandle* %element_addressB139, align 8
  %gCLHeap141 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %133 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %135 = bitcast i8* %134 to i32*
  %handle142 = load i32, i32* %135, align 4
  %element_addressB143 = getelementptr %sHandle, %sHandle* %133, i32 %handle142
  %element144 = load %sHandle, %sHandle* %element_addressB143, align 8
  %136 = getelementptr inbounds %sHandle, %sHandle* %element_addressB143, i32 0, i32 3
  %137 = load i32, i32* %136, align 4
  %138 = getelementptr inbounds %sHandle, %sHandle* %element_addressB139, i32 0, i32 3
  store i32 %137, i32* %138, align 4
  %gCLHeap145 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %139 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %140 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %141 = bitcast i8* %140 to i32*
  %handle146 = load i32, i32* %141, align 4
  %element_addressB147 = getelementptr %sHandle, %sHandle* %139, i32 %handle146
  %element148 = load %sHandle, %sHandle* %element_addressB147, align 8
  %142 = getelementptr inbounds %sHandle, %sHandle* %element_addressB147, i32 0, i32 0
  store i8 -1, i8* %142, align 1
  br label %cond_end123

cond_end123:                                      ; preds = %cond_else_block122, %cond_jump_then121
  br label %cond_end28

cond_jump_then156:                                ; preds = %cond_end28
  %malloced = alloca i1
  %143 = bitcast i1* %malloced to i8*
  store i8* %143, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i1 false, i1* %malloced, align 1
  %gCLHeap158 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %144 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %146 = bitcast i8* %145 to i32*
  %handle159 = load i32, i32* %146, align 4
  %element_addressB160 = getelementptr %sHandle, %sHandle* %144, i32 %handle159
  %element161 = load %sHandle, %sHandle* %element_addressB160, align 8
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %148 = bitcast i8* %147 to i32*
  %size162 = load i32, i32* %148, align 4
  %malloced163 = load i1, i1* %malloced, align 1
  %149 = call i8* @alloc_mem_from_page(i32 %size162, i1* %malloced)
  %150 = getelementptr inbounds %sHandle, %sHandle* %element_addressB160, i32 0, i32 6
  store i8* %149, i8** %150, align 8
  %gCLHeap164 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %151 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %153 = bitcast i8* %152 to i32*
  %handle165 = load i32, i32* %153, align 4
  %element_addressB166 = getelementptr %sHandle, %sHandle* %151, i32 %handle165
  %element167 = load %sHandle, %sHandle* %element_addressB166, align 8
  %malloced168 = load i1, i1* %malloced, align 1
  %154 = sext i1 %malloced168 to i8
  %155 = getelementptr inbounds %sHandle, %sHandle* %element_addressB166, i32 0, i32 1
  store i8 %154, i8* %155, align 1
  %gCLHeap169 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %156 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %158 = bitcast i8* %157 to i32*
  %handle170 = load i32, i32* %158, align 4
  %element_addressB171 = getelementptr %sHandle, %sHandle* %156, i32 %handle170
  %element172 = load %sHandle, %sHandle* %element_addressB171, align 8
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %160 = bitcast i8* %159 to i32*
  %size173 = load i32, i32* %160, align 4
  %161 = trunc i32 %size173 to i16
  %162 = getelementptr inbounds %sHandle, %sHandle* %element_addressB171, i32 0, i32 4
  store i16 %161, i16* %162, align 2
  %gCLHeap174 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %163 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %164 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %165 = bitcast i8* %164 to i32*
  %handle175 = load i32, i32* %165, align 4
  %element_addressB176 = getelementptr %sHandle, %sHandle* %163, i32 %handle175
  %element177 = load %sHandle, %sHandle* %element_addressB176, align 8
  %166 = getelementptr inbounds %sHandle, %sHandle* %element_addressB176, i32 0, i32 2
  store i32 -1, i32* %166, align 4
  %gCLHeap178 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %167 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %168 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %169 = bitcast i8* %168 to i32*
  %handle179 = load i32, i32* %169, align 4
  %element_addressB180 = getelementptr %sHandle, %sHandle* %167, i32 %handle179
  %element181 = load %sHandle, %sHandle* %element_addressB180, align 8
  %170 = getelementptr inbounds %sHandle, %sHandle* %element_addressB180, i32 0, i32 3
  store i32 -1, i32* %170, align 4
  %gCLHeap182 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %171 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %172 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %173 = bitcast i8* %172 to i32*
  %handle183 = load i32, i32* %173, align 4
  %element_addressB184 = getelementptr %sHandle, %sHandle* %171, i32 %handle183
  %element185 = load %sHandle, %sHandle* %element_addressB184, align 8
  %174 = getelementptr inbounds %sHandle, %sHandle* %element_addressB184, i32 0, i32 0
  store i8 -1, i8* %174, align 1
  br label %cond_end157

cond_end157:                                      ; preds = %cond_jump_then156, %cond_end28
  %obj186 = load i32, i32* %obj, align 4
  %175 = call %sCLHeapMem* @get_object_pointer(i32 %obj186)
  %object_ptr = alloca %sCLHeapMem*
  %176 = bitcast %sCLHeapMem** %object_ptr to i8*
  store i8* %176, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store %sCLHeapMem* %175, %sCLHeapMem** %object_ptr, align 8
  %object_ptr187 = load %sCLHeapMem*, %sCLHeapMem** %object_ptr, align 8
  %size188 = load i32, i32* %size2, align 4
  %177 = getelementptr inbounds %sCLHeapMem, %sCLHeapMem* %object_ptr187, i32 0, i32 1
  store i32 %size188, i32* %177, align 4
  %object_ptr189 = load %sCLHeapMem*, %sCLHeapMem** %object_ptr, align 8
  %type190 = load %sCLType*, %sCLType** %type3, align 8
  %178 = getelementptr inbounds %sCLHeapMem, %sCLHeapMem* %object_ptr189, i32 0, i32 0
  store %sCLType* %type190, %sCLType** %178, align 8
  %object_ptr191 = load %sCLHeapMem*, %sCLHeapMem** %object_ptr, align 8
  %field_num192 = load i32, i32* %field_num4, align 4
  %179 = getelementptr inbounds %sCLHeapMem, %sCLHeapMem* %object_ptr191, i32 0, i32 2
  store i32 %field_num192, i32* %179, align 4
  %obj193 = load i32, i32* %obj, align 4
  %180 = bitcast [8192 x i8*]* %lvtable to i8*
  %181 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %180, i64 65536)
  ret i32 %obj193
}

define void @heap_init(i32 %heap_size, i32 %size_handles) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %heap_size2 = alloca i32
  store i32 %heap_size, i32* %heap_size2, align 4
  %2 = bitcast i32* %heap_size2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %size_handles3 = alloca i32
  store i32 %size_handles, i32* %size_handles3, align 4
  %3 = bitcast i32* %size_handles3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %size_handles4 = load i32, i32* %size_handles3, align 4
  %sext14 = zext i32 %size_handles4 to i64
  %multtmp = mul nsw i64 24, %sext14
  %4 = call i8* @nccalloc(i64 1, i64 %multtmp)
  %5 = bitcast i8* %4 to %sHandle*
  store %sHandle* %5, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %gCLHeap5 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %size_handles6 = load i32, i32* %size_handles3, align 4
  store i32 %size_handles6, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %gCLHeap7 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %gCLHeap8 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %6 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %sext149 = zext i32 %6 to i64
  %multtmp10 = mul nsw i64 1, %sext149
  %7 = call i8* @nccalloc(i64 1, i64 %multtmp10)
  store i8* %7, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %gCLHeap11 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  store i32 -1, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %i = alloca i32
  %8 = bitcast i32* %i to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %10 = bitcast i8* %9 to i32*
  store i32 0, i32* %10, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %12 = bitcast i8* %11 to i32*
  %i12 = load i32, i32* %12, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %14 = bitcast i8* %13 to i32*
  %size_handles13 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i12, %size_handles13
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %gCLHeap14 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %15 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %17 = bitcast i8* %16 to i32*
  %i15 = load i32, i32* %17, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %15, i32 %i15
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %18 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 3
  store i32 -1, i32* %18, align 4
  %gCLHeap16 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %19 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %top_of_free_handle = alloca i32
  %20 = bitcast i32* %top_of_free_handle to i8*
  store i8* %20, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %19, i32* %top_of_free_handle, align 4
  %gCLHeap17 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %22 = bitcast i8* %21 to i32*
  %i18 = load i32, i32* %22, align 4
  store i32 %i18, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %gCLHeap19 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %23 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %25 = bitcast i8* %24 to i32*
  %i20 = load i32, i32* %25, align 4
  %element_addressB21 = getelementptr %sHandle, %sHandle* %23, i32 %i20
  %element22 = load %sHandle, %sHandle* %element_addressB21, align 8
  %top_of_free_handle23 = load i32, i32* %top_of_free_handle, align 4
  %26 = getelementptr inbounds %sHandle, %sHandle* %element_addressB21, i32 0, i32 2
  store i32 %top_of_free_handle23, i32* %26, align 4
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %28 = bitcast i8* %27 to i32*
  %i24 = load i32, i32* %28, align 4
  %addtmp = add nsw i32 %i24, 1
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %30 = bitcast i8* %29 to i32*
  store i32 %addtmp, i32* %30, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %gCLHeap25 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  store i32 -1, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  store i32 4, i32* @gSizeHeapPages, align 4
  %gSizeHeapPages = load i32, i32* @gSizeHeapPages, align 4
  %sext1426 = zext i32 %gSizeHeapPages to i64
  %multtmp27 = mul nsw i64 16, %sext1426
  %31 = call i8* @nccalloc(i64 1, i64 %multtmp27)
  %32 = bitcast i8* %31 to %sHeapPage*
  store %sHeapPage* %32, %sHeapPage** @gHeapPages, align 8
  store i32 0, i32* @gNumHeapPages, align 4
  %gHeapPages = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %element_addressB28 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages, i32 0
  %element29 = load %sHeapPage, %sHeapPage* %element_addressB28, align 8
  %33 = call i8* @nccalloc(i64 1, i64 1024)
  %34 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB28, i32 0, i32 0
  store i8* %33, i8** %34, align 8
  %gHeapPages30 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %element_addressB31 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages30, i32 0
  %element32 = load %sHeapPage, %sHeapPage* %element_addressB31, align 8
  %35 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB31, i32 0, i32 1
  store i32 0, i32* %35, align 4
  %36 = bitcast [8192 x i8*]* %lvtable to i8*
  %37 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %36, i64 65536)
  ret void
}

define void @heap_final() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  call void @delete_all_object()
  %i = alloca i32
  %2 = bitcast i32* %i to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %3 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %4 = bitcast i8* %3 to i32*
  store i32 0, i32* %4, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to i32*
  %i2 = load i32, i32* %6, align 4
  %gNumHeapPages = load i32, i32* @gNumHeapPages, align 4
  %leeqtmp = icmp sle i32 %i2, %gNumHeapPages
  br i1 %leeqtmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %gHeapPages = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to i32*
  %i3 = load i32, i32* %8, align 4
  %element_addressB = getelementptr %sHeapPage, %sHeapPage* %gHeapPages, i32 %i3
  %element = load %sHeapPage, %sHeapPage* %element_addressB, align 8
  %9 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB, i32 0, i32 0
  %10 = load i8*, i8** %9, align 8
  call void @ncfree(i8* %10)
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %12 = bitcast i8* %11 to i32*
  %i4 = load i32, i32* %12, align 4
  %addtmp = add nsw i32 %i4, 1
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %14 = bitcast i8* %13 to i32*
  store i32 %addtmp, i32* %14, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %15 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  call void @ncfree(i8* %15)
  %gHeapPages5 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %16 = bitcast %sHeapPage* %gHeapPages5 to i8*
  call void @ncfree(i8* %16)
  %gCLHeap6 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %17 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %18 = bitcast %sHandle* %17 to i8*
  call void @ncfree(i8* %18)
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret void
}

define %sCLHeapMem* @get_object_pointer(i32 %obj) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %obj2 = alloca i32
  store i32 %obj, i32* %obj2, align 4
  %2 = bitcast i32* %obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %result = alloca %sCLHeapMem*
  %3 = bitcast %sCLHeapMem** %result to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %obj3 = load i32, i32* %obj2, align 4
  %subttmp = sub nsw i32 %obj3, 1234
  %index = alloca i32
  %4 = bitcast i32* %index to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %subttmp, i32* %index, align 4
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %5 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %index4 = load i32, i32* %index, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %5, i32 %index4
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %6 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 6
  %7 = load i8*, i8** %6, align 8
  %8 = bitcast i8* %7 to %sCLHeapMem*
  store %sCLHeapMem* %8, %sCLHeapMem** %result, align 8
  %result5 = load %sCLHeapMem*, %sCLHeapMem** %result, align 8
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret %sCLHeapMem* %result5
}

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

define void @mark_object(i32 %obj, i8* %mark_flg, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %obj2 = alloca i32
  store i32 %obj, i32* %obj2, align 4
  %2 = bitcast i32* %obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %mark_flg3 = alloca i8*
  store i8* %mark_flg, i8** %mark_flg3, align 8
  %3 = bitcast i8** %mark_flg3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %info4 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info4, align 8
  %4 = bitcast %sVMInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %obj5 = load i32, i32* %obj2, align 4
  %5 = call i1 @is_valid_object(i32 %obj5)
  br i1 %5, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i8**
  %mark_flg6 = load i8*, i8** %7, align 8
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %9 = bitcast i8* %8 to i32*
  %obj7 = load i32, i32* %9, align 4
  %subttmp = sub nsw i32 %obj7, 1234
  %element_addressB = getelementptr i8, i8* %mark_flg6, i32 %subttmp
  %element = load i8, i8* %element_addressB, align 1
  %eqtmpX = icmp eq i8 %element, 0
  br i1 %eqtmpX, label %cond_jump_then8, label %cond_end9

cond_end:                                         ; preds = %cond_end9, %entry
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

cond_jump_then8:                                  ; preds = %cond_jump_then
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %13 = bitcast i8* %12 to i8**
  %mark_flg10 = load i8*, i8** %13, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %15 = bitcast i8* %14 to i32*
  %obj11 = load i32, i32* %15, align 4
  %subttmp12 = sub nsw i32 %obj11, 1234
  %element_addressD = getelementptr i8, i8* %mark_flg10, i32 %subttmp12
  store i8 1, i8* %element_addressD, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %17 = bitcast i8* %16 to i32*
  %obj13 = load i32, i32* %17, align 4
  %18 = call %sCLHeapMem* @get_object_pointer(i32 %obj13)
  %object = alloca %sCLHeapMem*
  %19 = bitcast %sCLHeapMem** %object to i8*
  store i8* %19, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store %sCLHeapMem* %18, %sCLHeapMem** %object, align 8
  %object14 = load %sCLHeapMem*, %sCLHeapMem** %object, align 8
  %noteqtmp = icmp ne %sCLHeapMem* %object14, null
  br i1 %noteqtmp, label %cond_jump_then15, label %cond_end16

cond_end9:                                        ; preds = %cond_end16, %cond_jump_then
  br label %cond_end

cond_jump_then15:                                 ; preds = %cond_jump_then8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %21 = bitcast i8* %20 to i32*
  %obj17 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i8**
  %mark_flg18 = load i8*, i8** %23, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %25 = bitcast i8* %24 to %sVMInfo**
  %info19 = load %sVMInfo*, %sVMInfo** %25, align 8
  call void @mark_belong_objects(i32 %obj17, i8* %mark_flg18, %sVMInfo* %info19)
  br label %cond_end16

cond_end16:                                       ; preds = %cond_jump_then15, %cond_jump_then8
  br label %cond_end9
}

declare i1 @free_object(i32)

declare void @mark_belong_objects(i32, i8*, %sVMInfo*)

define void @alignment(i32* %size) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %size2 = alloca i32*
  store i32* %size, i32** %size2, align 8
  %2 = bitcast i32** %size2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %size3 = load i32*, i32** %size2, align 8
  %size4 = load i32*, i32** %size2, align 8
  %derefference_value = load i32, i32* %size4, align 8
  %addtmp = add nsw i32 %derefference_value, 3
  %andtmp = and i32 %addtmp, -4
  store i32 %andtmp, i32* %size3, align 4
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void
}

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

define i8* @alloc_mem_from_page(i32 %size, i1* %malloced) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %size2 = alloca i32
  store i32 %size, i32* %size2, align 4
  %2 = bitcast i32* %size2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %malloced3 = alloca i1*
  store i1* %malloced, i1** %malloced3, align 8
  %3 = bitcast i1** %malloced3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %size4 = load i32, i32* %size2, align 4
  %getmp = icmp uge i32 %size4, 1024
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %4 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %5 = bitcast i8* %4 to i1**
  %malloced5 = load i1*, i1** %5, align 8
  store i1 true, i1* %malloced5, align 1
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %7 = bitcast i8* %6 to i32*
  %size6 = load i32, i32* %7, align 4
  %sext14 = zext i32 %size6 to i64
  %8 = call i8* @nccalloc(i64 1, i64 %sext14)
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret i8* %8

cond_end:                                         ; preds = %entry
  %gHeapPages = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages = load i32, i32* @gNumHeapPages, align 4
  %element_addressB = getelementptr %sHeapPage, %sHeapPage* %gHeapPages, i32 %gNumHeapPages
  %element = load %sHeapPage, %sHeapPage* %element_addressB, align 8
  %11 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB, i32 0, i32 1
  %12 = load i32, i32* %11, align 4
  %size7 = load i32, i32* %size2, align 4
  %addtmp = add nsw i32 %12, %size7
  %getmp8 = icmp uge i32 %addtmp, 1024
  br i1 %getmp8, label %cond_jump_then9, label %cond_end10

cond_jump_then9:                                  ; preds = %cond_end
  %gNumHeapPages11 = load i32, i32* @gNumHeapPages, align 4
  %addtmp12 = add nsw i32 %gNumHeapPages11, 1
  store i32 %addtmp12, i32* @gNumHeapPages, align 4
  %subttmp = sub nsw i32 %addtmp12, 1
  %gNumHeapPages13 = load i32, i32* @gNumHeapPages, align 4
  %gSizeHeapPages = load i32, i32* @gSizeHeapPages, align 4
  %eqtmpX = icmp eq i32 %gNumHeapPages13, %gSizeHeapPages
  br i1 %eqtmpX, label %cond_jump_then14, label %cond_end15

cond_end10:                                       ; preds = %cond_end15, %cond_end
  %gHeapPages39 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages40 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB41 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages39, i32 %gNumHeapPages40
  %element42 = load %sHeapPage, %sHeapPage* %element_addressB41, align 8
  %13 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB41, i32 0, i32 0
  %14 = load i8*, i8** %13, align 8
  %gHeapPages43 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages44 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB45 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages43, i32 %gNumHeapPages44
  %element46 = load %sHeapPage, %sHeapPage* %element_addressB45, align 8
  %15 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB45, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %17 = ptrtoint i8* %14 to i64
  %sextXYZ47 = sext i32 %16 to i64
  %multtmp48 = mul nsw i64 %sextXYZ47, 1
  %addtmp49 = add nsw i64 %17, %multtmp48
  %intToPtr250 = inttoptr i64 %addtmp49 to i8*
  %result = alloca i8*
  %18 = bitcast i8** %result to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8* %intToPtr250, i8** %result, align 8
  %malloced51 = load i1*, i1** %malloced3, align 8
  store i1 false, i1* %malloced51, align 1
  %gHeapPages52 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages53 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB54 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages52, i32 %gNumHeapPages53
  %element55 = load %sHeapPage, %sHeapPage* %element_addressB54, align 8
  %gHeapPages56 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages57 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB58 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages56, i32 %gNumHeapPages57
  %element59 = load %sHeapPage, %sHeapPage* %element_addressB58, align 8
  %19 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB58, i32 0, i32 1
  %20 = load i32, i32* %19, align 4
  %size60 = load i32, i32* %size2, align 4
  %addtmp61 = add nsw i32 %20, %size60
  %21 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB54, i32 0, i32 1
  store i32 %addtmp61, i32* %21, align 4
  %size62 = load i32, i32* %size2, align 4
  %subttmp63 = sub nsw i32 %addtmp61, %size62
  %result64 = load i8*, i8** %result, align 8
  %22 = bitcast [8192 x i8*]* %lvtable to i8*
  %23 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %22, i64 65536)
  ret i8* %result64

cond_jump_then14:                                 ; preds = %cond_jump_then9
  %gSizeHeapPages16 = load i32, i32* @gSizeHeapPages, align 4
  %multtmp = mul nsw i32 %gSizeHeapPages16, 2
  %new_size = alloca i32
  %24 = bitcast i32* %new_size to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %multtmp, i32* %new_size, align 4
  %gHeapPages17 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %new_size18 = load i32, i32* %new_size, align 4
  %sext1419 = zext i32 %new_size18 to i64
  %multtmp20 = mul nsw i64 16, %sext1419
  %25 = bitcast %sHeapPage* %gHeapPages17 to i8*
  %26 = call i8* @ncrealloc(i8* %25, i64 %multtmp20)
  %27 = bitcast i8* %26 to %sHeapPage*
  store %sHeapPage* %27, %sHeapPage** @gHeapPages, align 8
  %gHeapPages21 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gSizeHeapPages22 = load i32, i32* @gSizeHeapPages, align 4
  %28 = ptrtoint %sHeapPage* %gHeapPages21 to i64
  %sextXYZ = sext i32 %gSizeHeapPages22 to i64
  %multtmp23 = mul nsw i64 %sextXYZ, 16
  %addtmp24 = add nsw i64 %28, %multtmp23
  %intToPtr2 = inttoptr i64 %addtmp24 to %sHeapPage*
  %new_size25 = load i32, i32* %new_size, align 4
  %gSizeHeapPages26 = load i32, i32* @gSizeHeapPages, align 4
  %subttmp27 = sub nsw i32 %new_size25, %gSizeHeapPages26
  %sext1428 = zext i32 %subttmp27 to i64
  %multtmp29 = mul nsw i64 16, %sext1428
  %29 = bitcast %sHeapPage* %intToPtr2 to i8*
  %30 = call i8* @memset(i8* %29, i32 0, i64 %multtmp29)
  %new_size30 = load i32, i32* %new_size, align 4
  store i32 %new_size30, i32* @gSizeHeapPages, align 4
  br label %cond_end15

cond_end15:                                       ; preds = %cond_jump_then14, %cond_jump_then9
  %gHeapPages31 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages32 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB33 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages31, i32 %gNumHeapPages32
  %element34 = load %sHeapPage, %sHeapPage* %element_addressB33, align 8
  %31 = call i8* @nccalloc(i64 1, i64 1024)
  %32 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB33, i32 0, i32 0
  store i8* %31, i8** %32, align 8
  %gHeapPages35 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gNumHeapPages36 = load i32, i32* @gNumHeapPages, align 4
  %element_addressB37 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages35, i32 %gNumHeapPages36
  %element38 = load %sHeapPage, %sHeapPage* %element_addressB37, align 8
  %33 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB37, i32 0, i32 1
  store i32 0, i32* %33, align 4
  br label %cond_end10
}

define void @compaction() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %num_heap_pages = alloca i32
  %2 = bitcast i32* %num_heap_pages to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 0, i32* %num_heap_pages, align 4
  %heap_page_offset = alloca i32
  %3 = bitcast i32* %heap_page_offset to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 0, i32* %heap_page_offset, align 4
  %gSizeHeapPages = load i32, i32* @gSizeHeapPages, align 4
  %multtmp = mul nsw i32 %gSizeHeapPages, 2
  %size_heap_pages = alloca i32
  %4 = bitcast i32* %size_heap_pages to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %multtmp, i32* %size_heap_pages, align 4
  %size_heap_pages2 = load i32, i32* %size_heap_pages, align 4
  %sext14 = zext i32 %size_heap_pages2 to i64
  %multtmp3 = mul nsw i64 8, %sext14
  %5 = call i8* @nccalloc(i64 1, i64 %multtmp3)
  %6 = bitcast i8* %5 to i8**
  %pages = alloca i8**
  %7 = bitcast i8*** %pages to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i8** %6, i8*** %pages, align 8
  %pages4 = load i8**, i8*** %pages, align 8
  %num_heap_pages5 = load i32, i32* %num_heap_pages, align 4
  %8 = call i8* @nccalloc(i64 1, i64 1024)
  %element_addressD = getelementptr i8*, i8** %pages4, i32 %num_heap_pages5
  store i8* %8, i8** %element_addressD, align 8
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  store i32 -1, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %gCLHeap6 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  store i32 -1, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %i = alloca i32
  %9 = bitcast i32* %i to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i32*
  store i32 0, i32* %11, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %13 = bitcast i8* %12 to i32*
  %i7 = load i32, i32* %13, align 4
  %gCLHeap8 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %14 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %letmp = icmp slt i32 %i7, %14
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %gCLHeap9 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %15 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to i32*
  %i10 = load i32, i32* %17, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %15, i32 %i10
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %18 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 0
  %19 = load i8, i8* %18, align 1
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %22 = bitcast i8* %21 to i32*
  store i32 0, i32* %22, align 4
  br label %loop_top_block128

cond_jump_then:                                   ; preds = %cond_then_block
  %gCLHeap11 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %23 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i32*
  %i12 = load i32, i32* %25, align 4
  %element_addressB13 = getelementptr %sHandle, %sHandle* %23, i32 %i12
  %element14 = load %sHandle, %sHandle* %element_addressB13, align 8
  %26 = getelementptr inbounds %sHandle, %sHandle* %element_addressB13, i32 0, i32 1
  %27 = load i8, i8* %26, align 1
  %28 = icmp ne i8 %27, 0
  %malloced = alloca i1
  %29 = bitcast i1* %malloced to i8*
  store i8* %29, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i1 %28, i1* %malloced, align 1
  %gCLHeap15 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %30 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %32 = bitcast i8* %31 to i32*
  %i16 = load i32, i32* %32, align 4
  %element_addressB17 = getelementptr %sHandle, %sHandle* %30, i32 %i16
  %element18 = load %sHandle, %sHandle* %element_addressB17, align 8
  %33 = getelementptr inbounds %sHandle, %sHandle* %element_addressB17, i32 0, i32 4
  %34 = load i16, i16* %33, align 2
  %sext13 = zext i16 %34 to i32
  %size = alloca i32
  %35 = bitcast i32* %size to i8*
  store i8* %35, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %sext13, i32* %size, align 4
  %malloced19 = load i1, i1* %malloced, align 1
  %LOGICAL_DIANEAL = icmp eq i1 %malloced19, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %gCLHeap79 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %36 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %38 = bitcast i8* %37 to i32*
  %i80 = load i32, i32* %38, align 4
  %element_addressB81 = getelementptr %sHandle, %sHandle* %36, i32 %i80
  %element82 = load %sHandle, %sHandle* %element_addressB81, align 8
  %39 = getelementptr inbounds %sHandle, %sHandle* %element_addressB81, i32 0, i32 1
  %40 = load i8, i8* %39, align 1
  %41 = icmp ne i8 %40, 0
  br i1 %41, label %cond_jump_then83, label %cond_end84

cond_end:                                         ; preds = %cond_end84, %cond_end21
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %43 = bitcast i8* %42 to i32*
  %i125 = load i32, i32* %43, align 4
  %addtmp126 = add nsw i32 %i125, 1
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 %addtmp126, i32* %45, align 4
  %subttmp127 = sub nsw i32 %addtmp126, 1
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %47 = bitcast i8* %46 to i32*
  %heap_page_offset22 = load i32, i32* %47, align 4
  call void @alignment(i32* %47)
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %49 = bitcast i8* %48 to i32*
  %heap_page_offset23 = load i32, i32* %49, align 4
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %51 = bitcast i8* %50 to i32*
  %size24 = load i32, i32* %51, align 4
  %addtmp = add nsw i32 %heap_page_offset23, %size24
  %getmp = icmp sge i32 %addtmp, 1024
  br i1 %getmp, label %cond_jump_then25, label %cond_end26

cond_end21:                                       ; preds = %cond_end26, %cond_jump_then
  br label %cond_end

cond_jump_then25:                                 ; preds = %cond_jump_then20
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %53 = bitcast i8* %52 to i32*
  %num_heap_pages27 = load i32, i32* %53, align 4
  %addtmp28 = add nsw i32 %num_heap_pages27, 1
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %55 = bitcast i8* %54 to i32*
  store i32 %addtmp28, i32* %55, align 4
  %subttmp = sub nsw i32 %addtmp28, 1
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %57 = bitcast i8* %56 to i8***
  %pages29 = load i8**, i8*** %57, align 8
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %59 = bitcast i8* %58 to i32*
  %num_heap_pages30 = load i32, i32* %59, align 4
  %60 = call i8* @nccalloc(i64 1, i64 1024)
  %element_addressD31 = getelementptr i8*, i8** %pages29, i32 %num_heap_pages30
  store i8* %60, i8** %element_addressD31, align 8
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %62 = bitcast i8* %61 to i32*
  store i32 0, i32* %62, align 4
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %64 = bitcast i8* %63 to i32*
  %num_heap_pages32 = load i32, i32* %64, align 4
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %66 = bitcast i8* %65 to i32*
  %size_heap_pages33 = load i32, i32* %66, align 4
  %eqtmpX = icmp eq i32 %num_heap_pages32, %size_heap_pages33
  br i1 %eqtmpX, label %cond_jump_then34, label %cond_end35

cond_end26:                                       ; preds = %cond_end35, %cond_jump_then20
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %68 = bitcast i8* %67 to i8***
  %pages52 = load i8**, i8*** %68, align 8
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %70 = bitcast i8* %69 to i32*
  %num_heap_pages53 = load i32, i32* %70, align 4
  %element_addressB54 = getelementptr i8*, i8** %pages52, i32 %num_heap_pages53
  %element55 = load i8*, i8** %element_addressB54, align 8
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %72 = bitcast i8* %71 to i32*
  %heap_page_offset56 = load i32, i32* %72, align 4
  %73 = ptrtoint i8* %element55 to i64
  %sextXYZ57 = sext i32 %heap_page_offset56 to i64
  %multtmp58 = mul nsw i64 %sextXYZ57, 1
  %addtmp59 = add nsw i64 %73, %multtmp58
  %intToPtr260 = inttoptr i64 %addtmp59 to i8*
  %new_object_mem = alloca i8*
  %74 = bitcast i8** %new_object_mem to i8*
  store i8* %74, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i8* %intToPtr260, i8** %new_object_mem, align 8
  %new_object_mem61 = load i8*, i8** %new_object_mem, align 8
  %gCLHeap62 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %75 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %77 = bitcast i8* %76 to i32*
  %i63 = load i32, i32* %77, align 4
  %element_addressB64 = getelementptr %sHandle, %sHandle* %75, i32 %i63
  %element65 = load %sHandle, %sHandle* %element_addressB64, align 8
  %78 = getelementptr inbounds %sHandle, %sHandle* %element_addressB64, i32 0, i32 6
  %79 = load i8*, i8** %78, align 8
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %81 = bitcast i8* %80 to i32*
  %size66 = load i32, i32* %81, align 4
  %sext1467 = zext i32 %size66 to i64
  %82 = call i8* @memcpy(i8* %new_object_mem61, i8* %79, i64 %sext1467)
  %gCLHeap68 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %83 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %84 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %85 = bitcast i8* %84 to i32*
  %i69 = load i32, i32* %85, align 4
  %element_addressB70 = getelementptr %sHandle, %sHandle* %83, i32 %i69
  %element71 = load %sHandle, %sHandle* %element_addressB70, align 8
  %new_object_mem72 = load i8*, i8** %new_object_mem, align 8
  %86 = getelementptr inbounds %sHandle, %sHandle* %element_addressB70, i32 0, i32 6
  store i8* %new_object_mem72, i8** %86, align 8
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %88 = bitcast i8* %87 to i32*
  %heap_page_offset73 = load i32, i32* %88, align 4
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %90 = bitcast i8* %89 to i32*
  %size74 = load i32, i32* %90, align 4
  %addtmp75 = add nsw i32 %heap_page_offset73, %size74
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %92 = bitcast i8* %91 to i32*
  store i32 %addtmp75, i32* %92, align 4
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %94 = bitcast i8* %93 to i32*
  %size76 = load i32, i32* %94, align 4
  %subttmp77 = sub nsw i32 %addtmp75, %size76
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %96 = bitcast i8* %95 to i32*
  %heap_page_offset78 = load i32, i32* %96, align 4
  call void @alignment(i32* %96)
  br label %cond_end21

cond_jump_then34:                                 ; preds = %cond_jump_then25
  %97 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %98 = bitcast i8* %97 to i32*
  %size_heap_pages36 = load i32, i32* %98, align 4
  %multtmp37 = mul nsw i32 %size_heap_pages36, 2
  %new_size = alloca i32
  %99 = bitcast i32* %new_size to i8*
  store i8* %99, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 %multtmp37, i32* %new_size, align 4
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %101 = bitcast i8* %100 to i8***
  %pages38 = load i8**, i8*** %101, align 8
  %new_size39 = load i32, i32* %new_size, align 4
  %sext1440 = zext i32 %new_size39 to i64
  %multtmp41 = mul nsw i64 8, %sext1440
  %102 = bitcast i8** %pages38 to i8*
  %103 = call i8* @ncrealloc(i8* %102, i64 %multtmp41)
  %104 = bitcast i8* %103 to i8**
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %106 = bitcast i8* %105 to i8***
  store i8** %104, i8*** %106, align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %108 = bitcast i8* %107 to i8***
  %pages42 = load i8**, i8*** %108, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %110 = bitcast i8* %109 to i32*
  %size_heap_pages43 = load i32, i32* %110, align 4
  %111 = ptrtoint i8** %pages42 to i64
  %sextXYZ = sext i32 %size_heap_pages43 to i64
  %multtmp44 = mul nsw i64 %sextXYZ, 8
  %addtmp45 = add nsw i64 %111, %multtmp44
  %intToPtr2 = inttoptr i64 %addtmp45 to i8**
  %new_size46 = load i32, i32* %new_size, align 4
  %112 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %113 = bitcast i8* %112 to i32*
  %size_heap_pages47 = load i32, i32* %113, align 4
  %subttmp48 = sub nsw i32 %new_size46, %size_heap_pages47
  %sext1449 = zext i32 %subttmp48 to i64
  %multtmp50 = mul nsw i64 8, %sext1449
  %114 = bitcast i8** %intToPtr2 to i8*
  %115 = call i8* @memset(i8* %114, i32 0, i64 %multtmp50)
  %new_size51 = load i32, i32* %new_size, align 4
  %116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %117 = bitcast i8* %116 to i32*
  store i32 %new_size51, i32* %117, align 4
  br label %cond_end35

cond_end35:                                       ; preds = %cond_jump_then34, %cond_jump_then25
  br label %cond_end26

cond_jump_then83:                                 ; preds = %cond_else_block
  %gCLHeap85 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %118 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %119 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %120 = bitcast i8* %119 to i32*
  %i86 = load i32, i32* %120, align 4
  %element_addressB87 = getelementptr %sHandle, %sHandle* %118, i32 %i86
  %element88 = load %sHandle, %sHandle* %element_addressB87, align 8
  %121 = getelementptr inbounds %sHandle, %sHandle* %element_addressB87, i32 0, i32 6
  %122 = load i8*, i8** %121, align 8
  call void @ncfree(i8* %122)
  br label %cond_end84

cond_end84:                                       ; preds = %cond_jump_then83, %cond_else_block
  %gCLHeap89 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %123 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %125 = bitcast i8* %124 to i32*
  %i90 = load i32, i32* %125, align 4
  %element_addressB91 = getelementptr %sHandle, %sHandle* %123, i32 %i90
  %element92 = load %sHandle, %sHandle* %element_addressB91, align 8
  %126 = getelementptr inbounds %sHandle, %sHandle* %element_addressB91, i32 0, i32 6
  store i8* null, i8** %126, align 8
  %gCLHeap93 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %127 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %128 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %129 = bitcast i8* %128 to i32*
  %i94 = load i32, i32* %129, align 4
  %element_addressB95 = getelementptr %sHandle, %sHandle* %127, i32 %i94
  %element96 = load %sHandle, %sHandle* %element_addressB95, align 8
  %130 = getelementptr inbounds %sHandle, %sHandle* %element_addressB95, i32 0, i32 2
  store i32 -1, i32* %130, align 4
  %gCLHeap97 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %131 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %133 = bitcast i8* %132 to i32*
  %i98 = load i32, i32* %133, align 4
  %element_addressB99 = getelementptr %sHandle, %sHandle* %131, i32 %i98
  %element100 = load %sHandle, %sHandle* %element_addressB99, align 8
  %134 = getelementptr inbounds %sHandle, %sHandle* %element_addressB99, i32 0, i32 3
  store i32 -1, i32* %134, align 4
  %gCLHeap101 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %135 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %137 = bitcast i8* %136 to i32*
  %i102 = load i32, i32* %137, align 4
  %element_addressB103 = getelementptr %sHandle, %sHandle* %135, i32 %i102
  %element104 = load %sHandle, %sHandle* %element_addressB103, align 8
  %138 = getelementptr inbounds %sHandle, %sHandle* %element_addressB103, i32 0, i32 4
  store i16 0, i16* %138, align 2
  %gCLHeap105 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %139 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %140 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %141 = bitcast i8* %140 to i32*
  %i106 = load i32, i32* %141, align 4
  %element_addressB107 = getelementptr %sHandle, %sHandle* %139, i32 %i106
  %element108 = load %sHandle, %sHandle* %element_addressB107, align 8
  %142 = getelementptr inbounds %sHandle, %sHandle* %element_addressB107, i32 0, i32 5
  store i16 0, i16* %142, align 2
  %gCLHeap109 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %143 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %144 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %145 = bitcast i8* %144 to i32*
  %i110 = load i32, i32* %145, align 4
  %element_addressB111 = getelementptr %sHandle, %sHandle* %143, i32 %i110
  %element112 = load %sHandle, %sHandle* %element_addressB111, align 8
  %146 = getelementptr inbounds %sHandle, %sHandle* %element_addressB111, i32 0, i32 1
  store i8 0, i8* %146, align 1
  %gCLHeap113 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %147 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %149 = bitcast i8* %148 to i32*
  %i114 = load i32, i32* %149, align 4
  %element_addressB115 = getelementptr %sHandle, %sHandle* %147, i32 %i114
  %element116 = load %sHandle, %sHandle* %element_addressB115, align 8
  %150 = getelementptr inbounds %sHandle, %sHandle* %element_addressB115, i32 0, i32 0
  store i8 0, i8* %150, align 1
  %gCLHeap117 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %151 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %top_of_free_handle = alloca i32
  %152 = bitcast i32* %top_of_free_handle to i8*
  store i8* %152, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 %151, i32* %top_of_free_handle, align 4
  %gCLHeap118 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %153 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %154 = bitcast i8* %153 to i32*
  %i119 = load i32, i32* %154, align 4
  store i32 %i119, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %gCLHeap120 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %155 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %156 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %157 = bitcast i8* %156 to i32*
  %i121 = load i32, i32* %157, align 4
  %element_addressB122 = getelementptr %sHandle, %sHandle* %155, i32 %i121
  %element123 = load %sHandle, %sHandle* %element_addressB122, align 8
  %top_of_free_handle124 = load i32, i32* %top_of_free_handle, align 4
  %158 = getelementptr inbounds %sHandle, %sHandle* %element_addressB122, i32 0, i32 2
  store i32 %top_of_free_handle124, i32* %158, align 4
  br label %cond_end

loop_top_block128:                                ; preds = %cond_then_block130, %cond_end_block
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %160 = bitcast i8* %159 to i32*
  %i129 = load i32, i32* %160, align 4
  %gNumHeapPages = load i32, i32* @gNumHeapPages, align 4
  %leeqtmp = icmp sle i32 %i129, %gNumHeapPages
  br i1 %leeqtmp, label %cond_then_block130, label %cond_end_block131

cond_then_block130:                               ; preds = %loop_top_block128
  %gHeapPages = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %162 = bitcast i8* %161 to i32*
  %i132 = load i32, i32* %162, align 4
  %element_addressB133 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages, i32 %i132
  %element134 = load %sHeapPage, %sHeapPage* %element_addressB133, align 8
  %163 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB133, i32 0, i32 0
  %164 = load i8*, i8** %163, align 8
  call void @ncfree(i8* %164)
  %165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %166 = bitcast i8* %165 to i32*
  %i135 = load i32, i32* %166, align 4
  %addtmp136 = add nsw i32 %i135, 1
  %167 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %168 = bitcast i8* %167 to i32*
  store i32 %addtmp136, i32* %168, align 4
  %subttmp137 = sub nsw i32 %addtmp136, 1
  br label %loop_top_block128

cond_end_block131:                                ; preds = %loop_top_block128
  %num_heap_pages138 = load i32, i32* %num_heap_pages, align 4
  %gSizeHeapPages139 = load i32, i32* @gSizeHeapPages, align 4
  %getmp140 = icmp sge i32 %num_heap_pages138, %gSizeHeapPages139
  br i1 %getmp140, label %cond_jump_then141, label %cond_end142

cond_jump_then141:                                ; preds = %cond_end_block131
  %gSizeHeapPages143 = load i32, i32* @gSizeHeapPages, align 4
  %169 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %170 = bitcast i8* %169 to i32*
  %num_heap_pages144 = load i32, i32* %170, align 4
  %addtmp145 = add nsw i32 %gSizeHeapPages143, %num_heap_pages144
  %multtmp146 = mul nsw i32 %addtmp145, 2
  %new_size147 = alloca i32
  %171 = bitcast i32* %new_size147 to i8*
  store i8* %171, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 %multtmp146, i32* %new_size147, align 4
  %gHeapPages148 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %new_size149 = load i32, i32* %new_size147, align 4
  %sext14150 = zext i32 %new_size149 to i64
  %multtmp151 = mul nsw i64 16, %sext14150
  %172 = bitcast %sHeapPage* %gHeapPages148 to i8*
  %173 = call i8* @ncrealloc(i8* %172, i64 %multtmp151)
  %174 = bitcast i8* %173 to %sHeapPage*
  store %sHeapPage* %174, %sHeapPage** @gHeapPages, align 8
  %gHeapPages152 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %gSizeHeapPages153 = load i32, i32* @gSizeHeapPages, align 4
  %175 = ptrtoint %sHeapPage* %gHeapPages152 to i64
  %sextXYZ154 = sext i32 %gSizeHeapPages153 to i64
  %multtmp155 = mul nsw i64 %sextXYZ154, 16
  %addtmp156 = add nsw i64 %175, %multtmp155
  %intToPtr2157 = inttoptr i64 %addtmp156 to %sHeapPage*
  %new_size158 = load i32, i32* %new_size147, align 4
  %gSizeHeapPages159 = load i32, i32* @gSizeHeapPages, align 4
  %subttmp160 = sub nsw i32 %new_size158, %gSizeHeapPages159
  %sext14161 = zext i32 %subttmp160 to i64
  %multtmp162 = mul nsw i64 16, %sext14161
  %176 = bitcast %sHeapPage* %intToPtr2157 to i8*
  %177 = call i8* @memset(i8* %176, i32 0, i64 %multtmp162)
  %new_size163 = load i32, i32* %new_size147, align 4
  store i32 %new_size163, i32* @gSizeHeapPages, align 4
  br label %cond_end142

cond_end142:                                      ; preds = %cond_jump_then141, %cond_end_block131
  %178 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %179 = bitcast i8* %178 to i32*
  store i32 0, i32* %179, align 4
  br label %loop_top_block164

loop_top_block164:                                ; preds = %cond_then_block168, %cond_end142
  %180 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %181 = bitcast i8* %180 to i32*
  %i165 = load i32, i32* %181, align 4
  %182 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %183 = bitcast i8* %182 to i32*
  %num_heap_pages166 = load i32, i32* %183, align 4
  %leeqtmp167 = icmp sle i32 %i165, %num_heap_pages166
  br i1 %leeqtmp167, label %cond_then_block168, label %cond_end_block169

cond_then_block168:                               ; preds = %loop_top_block164
  %gHeapPages170 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %184 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %185 = bitcast i8* %184 to i32*
  %i171 = load i32, i32* %185, align 4
  %element_addressB172 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages170, i32 %i171
  %element173 = load %sHeapPage, %sHeapPage* %element_addressB172, align 8
  %186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %187 = bitcast i8* %186 to i8***
  %pages174 = load i8**, i8*** %187, align 8
  %188 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %189 = bitcast i8* %188 to i32*
  %i175 = load i32, i32* %189, align 4
  %element_addressB176 = getelementptr i8*, i8** %pages174, i32 %i175
  %element177 = load i8*, i8** %element_addressB176, align 8
  %190 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB172, i32 0, i32 0
  store i8* %element177, i8** %190, align 8
  %gHeapPages178 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %191 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %192 = bitcast i8* %191 to i32*
  %i179 = load i32, i32* %192, align 4
  %element_addressB180 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages178, i32 %i179
  %element181 = load %sHeapPage, %sHeapPage* %element_addressB180, align 8
  %193 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB180, i32 0, i32 1
  store i32 1024, i32* %193, align 4
  %194 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %195 = bitcast i8* %194 to i32*
  %i182 = load i32, i32* %195, align 4
  %addtmp183 = add nsw i32 %i182, 1
  %196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %197 = bitcast i8* %196 to i32*
  store i32 %addtmp183, i32* %197, align 4
  %subttmp184 = sub nsw i32 %addtmp183, 1
  br label %loop_top_block164

cond_end_block169:                                ; preds = %loop_top_block164
  %gHeapPages185 = load %sHeapPage*, %sHeapPage** @gHeapPages, align 8
  %num_heap_pages186 = load i32, i32* %num_heap_pages, align 4
  %element_addressB187 = getelementptr %sHeapPage, %sHeapPage* %gHeapPages185, i32 %num_heap_pages186
  %element188 = load %sHeapPage, %sHeapPage* %element_addressB187, align 8
  %heap_page_offset189 = load i32, i32* %heap_page_offset, align 4
  %198 = getelementptr inbounds %sHeapPage, %sHeapPage* %element_addressB187, i32 0, i32 1
  store i32 %heap_page_offset189, i32* %198, align 4
  %num_heap_pages190 = load i32, i32* %num_heap_pages, align 4
  store i32 %num_heap_pages190, i32* @gNumHeapPages, align 4
  %pages191 = load i8**, i8*** %pages, align 8
  %199 = bitcast i8** %pages191 to i8*
  call void @ncfree(i8* %199)
  %200 = bitcast [8192 x i8*]* %lvtable to i8*
  %201 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %200, i64 65536)
  ret void
}

define internal void @delete_all_object() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %2 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %gCLHeap2 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %3 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %sext14 = zext i32 %3 to i64
  %multtmp = mul nsw i64 1, %sext14
  %4 = call i8* @memset(i8* %2, i32 0, i64 %multtmp)
  %gCLHeap3 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %5 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %mark_flg = alloca i8*
  %6 = bitcast i8** %mark_flg to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %5, i8** %mark_flg, align 8
  %mark_flg4 = load i8*, i8** %mark_flg, align 8
  call void @free_objects(i8* %mark_flg4)
  call void @free_malloced_memory()
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret void
}

define i1 @is_valid_object(i32 %obj) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %obj2 = alloca i32
  store i32 %obj, i32* %obj2, align 4
  %2 = bitcast i32* %obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %obj3 = load i32, i32* %obj2, align 4
  %getmp = icmp uge i32 %obj3, 1234
  store i1 %getmp, i1* %andand_result_var, align 1
  br i1 %getmp, label %cond_jump_then, label %cond_jump_end

cond_jump_then:                                   ; preds = %entry
  %obj4 = load i32, i32* %obj2, align 4
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %3 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %addtmp = add nsw i32 1234, %3
  %letmp = icmp ult i32 %obj4, %addtmp
  %andand = and i1 %getmp, %letmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then5, label %cond_else_block

cond_jump_then5:                                  ; preds = %cond_jump_end
  %4 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %5 = bitcast i8* %4 to i32*
  %obj6 = load i32, i32* %5, align 4
  %subttmp = sub nsw i32 %obj6, 1234
  %handle_num = alloca i32
  %6 = bitcast i32* %handle_num to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %subttmp, i32* %handle_num, align 4
  %gCLHeap7 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %7 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %handle_num8 = load i32, i32* %handle_num, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %7, i32 %handle_num8
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %8 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 0
  %9 = load i8, i8* %8, align 1
  %10 = icmp ne i8 %9, 0
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret i1 %10

cond_else_block:                                  ; preds = %cond_jump_end
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; No predecessors!
  %15 = bitcast [8192 x i8*]* %lvtable to i8*
  %16 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %15, i64 65536)
  ret i1 false
}

define internal void @free_handle(i32 %handle_num) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %handle_num2 = alloca i32
  store i32 %handle_num, i32* %handle_num2, align 4
  %2 = bitcast i32* %handle_num2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %3 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %handle_num3 = load i32, i32* %handle_num2, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %3, i32 %handle_num3
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %4 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 0
  %5 = load i8, i8* %4, align 1
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to i32*
  %handle_num4 = load i32, i32* %8, align 4
  %addtmp = add nsw i32 %handle_num4, 1234
  %obj = alloca i32
  %9 = bitcast i32* %obj to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %addtmp, i32* %obj, align 4
  %obj5 = load i32, i32* %obj, align 4
  %10 = call %sCLHeapMem* @get_object_pointer(i32 %obj5)
  %11 = bitcast %sCLHeapMem* %10 to %sCLObject*
  %data = alloca %sCLObject*
  %12 = bitcast %sCLObject** %data to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLObject* %11, %sCLObject** %data, align 8
  %gCLHeap6 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %13 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %15 = bitcast i8* %14 to i32*
  %handle_num7 = load i32, i32* %15, align 4
  %element_addressB8 = getelementptr %sHandle, %sHandle* %13, i32 %handle_num7
  %element9 = load %sHandle, %sHandle* %element_addressB8, align 8
  %16 = getelementptr inbounds %sHandle, %sHandle* %element_addressB8, i32 0, i32 0
  store i8 0, i8* %16, align 1
  %gCLHeap10 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %17 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %19 = bitcast i8* %18 to i32*
  %handle_num11 = load i32, i32* %19, align 4
  %element_addressB12 = getelementptr %sHandle, %sHandle* %17, i32 %handle_num11
  %element13 = load %sHandle, %sHandle* %element_addressB12, align 8
  %20 = getelementptr inbounds %sHandle, %sHandle* %element_addressB12, i32 0, i32 1
  %21 = load i8, i8* %20, align 1
  %22 = icmp ne i8 %21, 0
  br i1 %22, label %cond_jump_then14, label %cond_else_block

cond_end:                                         ; preds = %cond_end15, %entry
  %23 = bitcast [8192 x i8*]* %lvtable to i8*
  %24 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %23, i64 65536)
  ret void

cond_jump_then14:                                 ; preds = %cond_jump_then
  %gCLHeap16 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %25 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %27 = bitcast i8* %26 to i32*
  %handle_num17 = load i32, i32* %27, align 4
  %element_addressB18 = getelementptr %sHandle, %sHandle* %25, i32 %handle_num17
  %element19 = load %sHandle, %sHandle* %element_addressB18, align 8
  %28 = getelementptr inbounds %sHandle, %sHandle* %element_addressB18, i32 0, i32 6
  %29 = load i8*, i8** %28, align 8
  call void @ncfree(i8* %29)
  %gCLHeap20 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %30 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %32 = bitcast i8* %31 to i32*
  %handle_num21 = load i32, i32* %32, align 4
  %element_addressB22 = getelementptr %sHandle, %sHandle* %30, i32 %handle_num21
  %element23 = load %sHandle, %sHandle* %element_addressB22, align 8
  %33 = getelementptr inbounds %sHandle, %sHandle* %element_addressB22, i32 0, i32 6
  store i8* null, i8** %33, align 8
  %gCLHeap24 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %34 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %36 = bitcast i8* %35 to i32*
  %handle_num25 = load i32, i32* %36, align 4
  %element_addressB26 = getelementptr %sHandle, %sHandle* %34, i32 %handle_num25
  %element27 = load %sHandle, %sHandle* %element_addressB26, align 8
  %37 = getelementptr inbounds %sHandle, %sHandle* %element_addressB26, i32 0, i32 1
  store i8 0, i8* %37, align 1
  %gCLHeap28 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %38 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %40 = bitcast i8* %39 to i32*
  %handle_num29 = load i32, i32* %40, align 4
  %element_addressB30 = getelementptr %sHandle, %sHandle* %38, i32 %handle_num29
  %element31 = load %sHandle, %sHandle* %element_addressB30, align 8
  %41 = getelementptr inbounds %sHandle, %sHandle* %element_addressB30, i32 0, i32 4
  store i16 0, i16* %41, align 2
  %gCLHeap32 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %42 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %44 = bitcast i8* %43 to i32*
  %handle_num33 = load i32, i32* %44, align 4
  %element_addressB34 = getelementptr %sHandle, %sHandle* %42, i32 %handle_num33
  %element35 = load %sHandle, %sHandle* %element_addressB34, align 8
  %45 = getelementptr inbounds %sHandle, %sHandle* %element_addressB34, i32 0, i32 5
  store i16 0, i16* %45, align 2
  %gCLHeap36 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %46 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %48 = bitcast i8* %47 to i32*
  %handle_num37 = load i32, i32* %48, align 4
  %element_addressB38 = getelementptr %sHandle, %sHandle* %46, i32 %handle_num37
  %element39 = load %sHandle, %sHandle* %element_addressB38, align 8
  %49 = getelementptr inbounds %sHandle, %sHandle* %element_addressB38, i32 0, i32 3
  store i32 -1, i32* %49, align 4
  %gCLHeap40 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %50 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %top_of_free_handle = alloca i32
  %51 = bitcast i32* %top_of_free_handle to i8*
  store i8* %51, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %50, i32* %top_of_free_handle, align 4
  %gCLHeap41 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %53 = bitcast i8* %52 to i32*
  %handle_num42 = load i32, i32* %53, align 4
  store i32 %handle_num42, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 3), align 4
  %gCLHeap43 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %54 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %56 = bitcast i8* %55 to i32*
  %handle_num44 = load i32, i32* %56, align 4
  %element_addressB45 = getelementptr %sHandle, %sHandle* %54, i32 %handle_num44
  %element46 = load %sHandle, %sHandle* %element_addressB45, align 8
  %top_of_free_handle47 = load i32, i32* %top_of_free_handle, align 4
  %57 = getelementptr inbounds %sHandle, %sHandle* %element_addressB45, i32 0, i32 2
  store i32 %top_of_free_handle47, i32* %57, align 4
  br label %cond_end15

cond_else_block:                                  ; preds = %cond_jump_then
  %gCLHeap48 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %58 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %60 = bitcast i8* %59 to i32*
  %handle_num49 = load i32, i32* %60, align 4
  %element_addressB50 = getelementptr %sHandle, %sHandle* %58, i32 %handle_num49
  %element51 = load %sHandle, %sHandle* %element_addressB50, align 8
  %61 = getelementptr inbounds %sHandle, %sHandle* %element_addressB50, i32 0, i32 6
  %62 = load i8*, i8** %61, align 8
  %gCLHeap52 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %63 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %65 = bitcast i8* %64 to i32*
  %handle_num53 = load i32, i32* %65, align 4
  %element_addressB54 = getelementptr %sHandle, %sHandle* %63, i32 %handle_num53
  %element55 = load %sHandle, %sHandle* %element_addressB54, align 8
  %66 = getelementptr inbounds %sHandle, %sHandle* %element_addressB54, i32 0, i32 4
  %67 = load i16, i16* %66, align 2
  %sext14 = zext i16 %67 to i64
  %68 = call i8* @memset(i8* %62, i32 0, i64 %sext14)
  %gCLHeap56 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %69 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %71 = bitcast i8* %70 to i32*
  %handle_num57 = load i32, i32* %71, align 4
  %element_addressB58 = getelementptr %sHandle, %sHandle* %69, i32 %handle_num57
  %element59 = load %sHandle, %sHandle* %element_addressB58, align 8
  %72 = getelementptr inbounds %sHandle, %sHandle* %element_addressB58, i32 0, i32 2
  store i32 -1, i32* %72, align 4
  %gCLHeap60 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %73 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %top_of_free_handle61 = alloca i32
  %74 = bitcast i32* %top_of_free_handle61 to i8*
  store i8* %74, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %73, i32* %top_of_free_handle61, align 4
  %gCLHeap62 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %76 = bitcast i8* %75 to i32*
  %handle_num63 = load i32, i32* %76, align 4
  store i32 %handle_num63, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 4), align 4
  %gCLHeap64 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %77 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %79 = bitcast i8* %78 to i32*
  %handle_num65 = load i32, i32* %79, align 4
  %element_addressB66 = getelementptr %sHandle, %sHandle* %77, i32 %handle_num65
  %element67 = load %sHandle, %sHandle* %element_addressB66, align 8
  %top_of_free_handle68 = load i32, i32* %top_of_free_handle61, align 4
  %80 = getelementptr inbounds %sHandle, %sHandle* %element_addressB66, i32 0, i32 3
  store i32 %top_of_free_handle68, i32* %80, align 4
  br label %cond_end15

cond_end15:                                       ; preds = %cond_else_block, %cond_jump_then14
  br label %cond_end
}

define internal void @call_finalizer(i32 %handle_num) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %handle_num2 = alloca i32
  store i32 %handle_num, i32* %handle_num2, align 4
  %2 = bitcast i32* %handle_num2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %3 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %handle_num3 = load i32, i32* %handle_num2, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %3, i32 %handle_num3
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %4 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 0
  %5 = load i8, i8* %4, align 1
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to i32*
  %handle_num4 = load i32, i32* %8, align 4
  %addtmp = add nsw i32 %handle_num4, 1234
  %obj = alloca i32
  %9 = bitcast i32* %obj to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %addtmp, i32* %obj, align 4
  %obj5 = load i32, i32* %obj, align 4
  %10 = call i1 @free_object(i32 %obj5)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret void
}

define internal void @mark(%sVMInfo* %info, i8* %mark_flg, %sVMInfo* %info1) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var2 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %2 = bitcast %sVMInfo** %info3 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %mark_flg4 = alloca i8*
  store i8* %mark_flg, i8** %mark_flg4, align 8
  %3 = bitcast i8** %mark_flg4 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %info5 = alloca %sVMInfo*
  store %sVMInfo* %info1, %sVMInfo** %info5, align 8
  %4 = bitcast %sVMInfo** %info5 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %gJobs = load %list__int*, %list__int** @gJobs, align 8
  call void @"each_int0_src/heap"(%list__int* %gJobs, void (i32, i32, i1*)* @heap_lambda0)
  %info6 = load %sVMInfo*, %sVMInfo** %info5, align 8
  %5 = getelementptr inbounds %sVMInfo, %sVMInfo* %info6, i32 0, i32 5
  %6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %5, align 8
  call void @"each_sCLStackFrame1_src/heap"(%vector__sCLStackFrame* %6, void (%sCLStackFrame, i32, i1*)* @heap_lambda1)
  %gGlobalVars = load %map__charp_int*, %map__charp_int** @gGlobalVars, align 8
  call void @"each_charp_int2_src/heap"(%map__charp_int* %gGlobalVars, void (i8*, i32, i1*)* @heap_lambda2)
  %info7 = load %sVMInfo*, %sVMInfo** %info5, align 8
  %7 = getelementptr inbounds %sVMInfo, %sVMInfo* %info7, i32 0, i32 6
  %8 = load %CLVALUE, %CLVALUE* %7, align 8
  %9 = bitcast %CLVALUE* %7 to i32*
  %10 = load i32, i32* %9, align 4
  %mark_flg8 = load i8*, i8** %mark_flg4, align 8
  %info9 = load %sVMInfo*, %sVMInfo** %info5, align 8
  call void @mark_object(i32 %10, i8* %mark_flg8, %sVMInfo* %info9)
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret void
}

define void @heap_lambda0(i32 %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i32
  store i32 %it, i32* %it4, align 4
  %2 = bitcast i32* %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %it7 = load i32, i32* %it4, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %6 = bitcast i8* %5 to i8**
  %mark_flg = load i8*, i8** %6, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to %sVMInfo**
  %info = load %sVMInfo*, %sVMInfo** %8, align 8
  call void @mark_object(i32 %it7, i8* %mark_flg, %sVMInfo* %info)
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret void
}

define void @"each_int0_src/heap"(%list__int* %self, void (i32, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %block_3 = alloca void (i32, i32, i1*)*
  store void (i32, i32, i1*)* %block_, void (i32, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i32, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self4 = load %list__int*, %list__int** %self2, align 8
  %4 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 0
  %5 = load %list_item__int*, %list_item__int** %4, align 8
  %it_ = alloca %list_item__int*
  %6 = bitcast %list_item__int** %it_ to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store %list_item__int* %5, %list_item__int** %it_, align 8
  %i_ = alloca i32
  %7 = bitcast i32* %i_ to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %it_5 = load %list_item__int*, %list_item__int** %it_, align 8
  %noteqtmp = icmp ne %list_item__int* %it_5, null
  br i1 %noteqtmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %end_flag_ = alloca i1
  %8 = bitcast i1* %end_flag_ to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i1 false, i1* %end_flag_, align 1
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %10 = bitcast i8* %9 to void (i32, i32, i1*)**
  %block_6 = load void (i32, i32, i1*)*, void (i32, i32, i1*)** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %12 = bitcast i8* %11 to %list_item__int**
  %it_7 = load %list_item__int*, %list_item__int** %12, align 8
  %13 = getelementptr inbounds %list_item__int, %list_item__int* %it_7, i32 0, i32 0
  %14 = load i32, i32* %13, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %16 = bitcast i8* %15 to i32*
  %i_8 = load i32, i32* %16, align 4
  %end_flag_9 = load i1, i1* %end_flag_, align 1
  call void %block_6(i32 %14, i32 %i_8, i1* %end_flag_)
  %end_flag_10 = load i1, i1* %end_flag_, align 1
  %eqtmpX = icmp eq i1 %end_flag_10, true
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %cond_jump_then, %loop_top_block
  %17 = bitcast [8192 x i8*]* %lvtable to i8*
  %18 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %17, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_then_block
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %20 = bitcast i8* %19 to %list_item__int**
  %it_11 = load %list_item__int*, %list_item__int** %20, align 8
  %21 = getelementptr inbounds %list_item__int, %list_item__int* %it_11, i32 0, i32 2
  %22 = load %list_item__int*, %list_item__int** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %24 = bitcast i8* %23 to %list_item__int**
  store %list_item__int* %22, %list_item__int** %24, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %26 = bitcast i8* %25 to i32*
  %i_12 = load i32, i32* %26, align 4
  %addtmp = add nsw i32 %i_12, 1
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %28 = bitcast i8* %27 to i32*
  store i32 %addtmp, i32* %28, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @heap_lambda1(%sCLStackFrame %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca %sCLStackFrame
  store %sCLStackFrame %it, %sCLStackFrame* %it4, align 8
  %2 = bitcast %sCLStackFrame* %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %it7 = load %sCLStackFrame, %sCLStackFrame* %it4, align 8
  %5 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %it4, i32 0, i32 1
  %6 = load %CLVALUE*, %CLVALUE** %5, align 8
  %p = alloca %CLVALUE*
  %7 = bitcast %CLVALUE** %p to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store %CLVALUE* %6, %CLVALUE** %p, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %p8 = load %CLVALUE*, %CLVALUE** %p, align 8
  %it9 = load %sCLStackFrame, %sCLStackFrame* %it4, align 8
  %8 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %it4, i32 0, i32 2
  %9 = load %CLVALUE**, %CLVALUE*** %8, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %9, align 8
  %letmp = icmp slt %CLVALUE* %p8, %derefference_value
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %11 = bitcast i8* %10 to %CLVALUE**
  %p10 = load %CLVALUE*, %CLVALUE** %11, align 8
  %12 = bitcast %CLVALUE* %p10 to i32*
  %13 = load i32, i32* %12, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %15 = bitcast i8* %14 to i8**
  %mark_flg = load i8*, i8** %15, align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %17 = bitcast i8* %16 to %sVMInfo**
  %info = load %sVMInfo*, %sVMInfo** %17, align 8
  call void @mark_object(i32 %13, i8* %mark_flg, %sVMInfo* %info)
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %19 = bitcast i8* %18 to %CLVALUE**
  %p11 = load %CLVALUE*, %CLVALUE** %19, align 8
  %20 = ptrtoint %CLVALUE* %p11 to i64
  %addtmp = add nsw i64 %20, 4
  %intToPtr2 = inttoptr i64 %addtmp to %CLVALUE*
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %22 = bitcast i8* %21 to %CLVALUE**
  store %CLVALUE* %intToPtr2, %CLVALUE** %22, align 8
  %23 = ptrtoint %CLVALUE* %intToPtr2 to i64
  %subtmp = sub nsw i64 %23, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  ret void
}

define void @"each_sCLStackFrame1_src/heap"(%vector__sCLStackFrame* %self, void (%sCLStackFrame, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %block_3 = alloca void (%sCLStackFrame, i32, i1*)*
  store void (%sCLStackFrame, i32, i1*)* %block_, void (%sCLStackFrame, i32, i1*)** %block_3, align 8
  %3 = bitcast void (%sCLStackFrame, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %6 = bitcast i8* %5 to %vector__sCLStackFrame**
  %self5 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %6, align 8
  %7 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self5, i32 0, i32 1
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %end_flag_ = alloca i1
  %9 = bitcast i1* %end_flag_ to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i1 false, i1* %end_flag_, align 1
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %11 = bitcast i8* %10 to void (%sCLStackFrame, i32, i1*)**
  %block_6 = load void (%sCLStackFrame, i32, i1*)*, void (%sCLStackFrame, i32, i1*)** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %13 = bitcast i8* %12 to %vector__sCLStackFrame**
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %13, align 8
  %14 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 0
  %15 = load %sCLStackFrame*, %sCLStackFrame** %14, align 8
  %i_8 = load i32, i32* %i_, align 4
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %15, i32 %i_8
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %i_9 = load i32, i32* %i_, align 4
  %end_flag_10 = load i1, i1* %end_flag_, align 1
  call void %block_6(%sCLStackFrame %element, i32 %i_9, i1* %end_flag_)
  %end_flag_11 = load i1, i1* %end_flag_, align 1
  %eqtmpX = icmp eq i1 %end_flag_11, true
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %cond_jump_then, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_then_block
  %i_12 = load i32, i32* %i_, align 4
  %addtmp = add nsw i32 %i_12, 1
  store i32 %addtmp, i32* %i_, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @heap_lambda2(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %value = alloca %CLVALUE
  %5 = bitcast %CLVALUE* %value to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %value7 = load %CLVALUE, %CLVALUE* %value, align 8
  %it28 = load i32, i32* %it25, align 4
  %6 = bitcast %CLVALUE* %value to i32*
  store i32 %it28, i32* %6, align 4
  %value9 = load %CLVALUE, %CLVALUE* %value, align 8
  %7 = bitcast %CLVALUE* %value to i32*
  %8 = load i32, i32* %7, align 4
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %10 = bitcast i8* %9 to i8**
  %mark_flg = load i8*, i8** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @mark_object(i32 %8, i8* %mark_flg, %sVMInfo* %info)
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret void
}

define void @"each_charp_int2_src/heap"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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

define internal void @free_objects(i8* %mark_flg) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %mark_flg2 = alloca i8*
  store i8* %mark_flg, i8** %mark_flg2, align 8
  %2 = bitcast i8** %mark_flg2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %i = alloca i32
  %3 = bitcast i32* %i to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %mem = alloca i8*
  %4 = bitcast i8** %mem to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %6 = bitcast i8* %5 to i32*
  store i32 0, i32* %6, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %8 = bitcast i8* %7 to i32*
  %i3 = load i32, i32* %8, align 4
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %9 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %letmp = icmp slt i32 %i3, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %11 = bitcast i8* %10 to i8**
  %mark_flg4 = load i8*, i8** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %13 = bitcast i8* %12 to i32*
  %i5 = load i32, i32* %13, align 4
  %element_addressB = getelementptr i8, i8* %mark_flg4, i32 %i5
  %element = load i8, i8* %element_addressB, align 1
  %14 = icmp ne i8 %element, 0
  %LOGICAL_DIANEAL = icmp eq i1 %14, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %16 = bitcast i8* %15 to i32*
  store i32 0, i32* %16, align 4
  br label %loop_top_block8

cond_jump_then:                                   ; preds = %cond_then_block
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %18 = bitcast i8* %17 to i32*
  %i6 = load i32, i32* %18, align 4
  call void @call_finalizer(i32 %i6)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %cond_then_block
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %20 = bitcast i8* %19 to i32*
  %i7 = load i32, i32* %20, align 4
  %addtmp = add nsw i32 %i7, 1
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %22 = bitcast i8* %21 to i32*
  store i32 %addtmp, i32* %22, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

loop_top_block8:                                  ; preds = %cond_end20, %cond_end_block
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %24 = bitcast i8* %23 to i32*
  %i9 = load i32, i32* %24, align 4
  %gCLHeap10 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %25 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %letmp11 = icmp slt i32 %i9, %25
  br i1 %letmp11, label %cond_then_block12, label %cond_end_block13

cond_then_block12:                                ; preds = %loop_top_block8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %27 = bitcast i8* %26 to i8**
  %mark_flg14 = load i8*, i8** %27, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %29 = bitcast i8* %28 to i32*
  %i15 = load i32, i32* %29, align 4
  %element_addressB16 = getelementptr i8, i8* %mark_flg14, i32 %i15
  %element17 = load i8, i8* %element_addressB16, align 1
  %30 = icmp ne i8 %element17, 0
  %LOGICAL_DIANEAL18 = icmp eq i1 %30, false
  br i1 %LOGICAL_DIANEAL18, label %cond_jump_then19, label %cond_end20

cond_end_block13:                                 ; preds = %loop_top_block8
  %31 = bitcast [8192 x i8*]* %lvtable to i8*
  %32 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %31, i64 65536)
  ret void

cond_jump_then19:                                 ; preds = %cond_then_block12
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %34 = bitcast i8* %33 to i32*
  %i21 = load i32, i32* %34, align 4
  call void @free_handle(i32 %i21)
  br label %cond_end20

cond_end20:                                       ; preds = %cond_jump_then19, %cond_then_block12
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %36 = bitcast i8* %35 to i32*
  %i22 = load i32, i32* %36, align 4
  %addtmp23 = add nsw i32 %i22, 1
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %38 = bitcast i8* %37 to i32*
  store i32 %addtmp23, i32* %38, align 4
  %subttmp24 = sub nsw i32 %addtmp23, 1
  br label %loop_top_block8
}

define internal void @free_malloced_memory() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %i = alloca i32
  %2 = bitcast i32* %i to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %3 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %4 = bitcast i8* %3 to i32*
  store i32 0, i32* %4, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to i32*
  %i2 = load i32, i32* %6, align 4
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %7 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %letmp = icmp slt i32 %i2, %7
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %gCLHeap3 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %8 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %10 = bitcast i8* %9 to i32*
  %i4 = load i32, i32* %10, align 4
  %element_addressB = getelementptr %sHandle, %sHandle* %8, i32 %i4
  %element = load %sHandle, %sHandle* %element_addressB, align 8
  %11 = getelementptr inbounds %sHandle, %sHandle* %element_addressB, i32 0, i32 0
  %12 = load i8, i8* %11, align 1
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %14 = bitcast [8192 x i8*]* %lvtable to i8*
  %15 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %14, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  %gCLHeap5 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %16 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %18 = bitcast i8* %17 to i32*
  %i6 = load i32, i32* %18, align 4
  %element_addressB7 = getelementptr %sHandle, %sHandle* %16, i32 %i6
  %element8 = load %sHandle, %sHandle* %element_addressB7, align 8
  %19 = getelementptr inbounds %sHandle, %sHandle* %element_addressB7, i32 0, i32 1
  %20 = load i8, i8* %19, align 1
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %cond_jump_then9, label %cond_end10

cond_end:                                         ; preds = %cond_end10, %cond_then_block
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %23 = bitcast i8* %22 to i32*
  %i15 = load i32, i32* %23, align 4
  %addtmp = add nsw i32 %i15, 1
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %25 = bitcast i8* %24 to i32*
  store i32 %addtmp, i32* %25, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then9:                                  ; preds = %cond_jump_then
  %gCLHeap11 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %26 = load %sHandle*, %sHandle** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 0), align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %28 = bitcast i8* %27 to i32*
  %i12 = load i32, i32* %28, align 4
  %element_addressB13 = getelementptr %sHandle, %sHandle* %26, i32 %i12
  %element14 = load %sHandle, %sHandle* %element_addressB13, align 8
  %29 = getelementptr inbounds %sHandle, %sHandle* %element_addressB13, i32 0, i32 6
  %30 = load i8*, i8** %29, align 8
  call void @ncfree(i8* %30)
  br label %cond_end10

cond_end10:                                       ; preds = %cond_jump_then9, %cond_jump_then
  br label %cond_end
}

define void @gc(%sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info2, align 8
  %2 = bitcast %sVMInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %info3 = load %sVMInfo*, %sVMInfo** %info2, align 8
  %3 = getelementptr inbounds %sVMInfo, %sVMInfo* %info3, i32 0, i32 4
  %4 = load i1, i1* %3, align 1
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %gCLHeap = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %5 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %gCLHeap4 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %6 = load i32, i32* getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 1), align 4
  %sext14 = zext i32 %6 to i64
  %multtmp = mul nsw i64 1, %sext14
  %7 = call i8* @memset(i8* %5, i32 0, i64 %multtmp)
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %9 = bitcast i8* %8 to %sVMInfo**
  %info5 = load %sVMInfo*, %sVMInfo** %9, align 8
  %gCLHeap6 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %10 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info7 = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @mark(%sVMInfo* %info5, i8* %10, %sVMInfo* %info7)
  %gCLHeap8 = load %sCLHeapManager, %sCLHeapManager* @gCLHeap, align 8
  %13 = load i8*, i8** getelementptr inbounds (%sCLHeapManager, %sCLHeapManager* @gCLHeap, i32 0, i32 2), align 8
  call void @free_objects(i8* %13)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %14 = bitcast [8192 x i8*]* %lvtable to i8*
  %15 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %14, i64 65536)
  ret void
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/heap.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
