// source head
typedef unsigned int wchar_t;
typedef unsigned long int size_t;
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
typedef struct __locale_struct* locale_t;
extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef float float_t;
typedef double double_t;
union anonymous_typeZ5
{
float __f;
unsigned int __i;
};
union anonymous_typeZ6
{
float __f;
unsigned int __i;
};
union anonymous_typeZ7
{
float __f;
unsigned int __i;
};
union anonymous_typeZ9
{
double __f;
unsigned long long __i;
};
union anonymous_typeZ10
{
double __f;
unsigned long long __i;
};
union anonymous_typeZ11
{
double __f;
unsigned long long __i;
};
extern int signgam;
typedef long time_t;
typedef long clock_t;
struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};
typedef int pid_t;
typedef unsigned int uid_t;
typedef struct __pthread* pthread_t;
struct __sigset_t
{
    unsigned long int __bits[128/sizeof(long)];
};
typedef struct __sigset_t sigset_t;
union anonymous_typeZ14
{
int __i[sizeof(long)==8?14:9];
int __vi[sizeof(long)==8?14:9];
unsigned long int __s[sizeof(long)==8?7:9];
};
struct anonymous_typeX12
{
    union anonymous_typeZ14 __u;
};
typedef struct anonymous_typeX12 pthread_attr_t;
typedef struct sigaltstack stack_t;
typedef unsigned long int greg_t;
typedef unsigned long int gregset_t[34];
struct anonymous_typeX15
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};
typedef struct anonymous_typeX15 fpregset_t;
struct sigcontext
{
    unsigned long int fault_address;
    unsigned long int regs[31];
    unsigned long int sp;
    unsigned long int pc;
    unsigned long int pstate;
    long double __reserved[256];
};
typedef struct sigcontext mcontext_t;
struct _aarch64_ctx
{
    unsigned int magic;
    unsigned int size;
};
struct fpsimd_context
{
    struct _aarch64_ctx head;
    unsigned int fpsr;
    unsigned int fpcr;
    __uint128_t vregs[32];
};
struct esr_context
{
    struct _aarch64_ctx head;
    unsigned long int esr;
};
struct extra_context
{
    struct _aarch64_ctx head;
    unsigned long int datap;
    unsigned int size;
    unsigned int __reserved[3];
};
struct sve_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int __reserved[3];
};
struct sigaltstack
{
    void* ss_sp;
    int ss_flags;
    unsigned long int ss_size;
};
struct ucontext
{
    unsigned long int uc_flags;
    struct ucontext* uc_link;
    struct sigaltstack uc_stack;
    struct __sigset_t uc_sigmask;
    struct sigcontext uc_mcontext;
};
typedef struct ucontext ucontext_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
struct anonymous_typeX20
{
};
struct anonymous_typeX21
{
};
struct anonymous_typeX23
{
};
struct anonymous_typeX24
{
};
struct anonymous_typeX26
{
};
struct anonymous_typeX28
{
};
struct anonymous_typeX18
{
};
struct anonymous_typeX31
{
};
struct anonymous_typeX33
{
};
struct anonymous_typeX29
{
};
struct anonymous_typeX34
{
};
struct anonymous_typeX35
{
};
struct anonymous_typeX39
{
};
struct anonymous_typeX40
{
};
struct anonymous_typeX42
{
    int si_pid;
    unsigned int si_uid;
};
struct anonymous_typeX43
{
    int si_timerid;
    int si_overrun;
};
union anonymous_typeZ41
{
struct anonymous_typeX42 __piduid;
struct anonymous_typeX43 __timer;
};
struct anonymous_typeX45
{
};
struct anonymous_typeX47
{
    int si_status;
    long si_utime;
    long si_stime;
};
union anonymous_typeZ46
{
union sigval si_value;
struct anonymous_typeX47 __sigchld;
};
struct anonymous_typeX37
{
    union anonymous_typeZ41 __first;
    union anonymous_typeZ46 __second;
};
struct anonymous_typeX50
{
};
struct anonymous_typeX52
{
    void* si_lower;
    void* si_upper;
};
union anonymous_typeZ51
{
struct anonymous_typeX52 __addr_bnd;
unsigned int si_pkey;
};
struct anonymous_typeX48
{
    void* si_addr;
    short short si_addr_lsb;
    union anonymous_typeZ51 __first;
};
struct anonymous_typeX53
{
    long si_band;
    int si_fd;
};
struct anonymous_typeX54
{
    void* si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};
union anonymous_typeZ36
{
char __pad[128-2*sizeof(int)-sizeof(long)];
struct anonymous_typeX37 __si_common;
struct anonymous_typeX48 __sigfault;
struct anonymous_typeX53 __sigpoll;
struct anonymous_typeX54 __sigsys;
};
struct anonymous_typeX16
{
    int si_signo;
    int si_errno;
    int si_code;
    union anonymous_typeZ36 __si_fields;
};
typedef struct anonymous_typeX16 siginfo_t;
union anonymous_typeZ56
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct anonymous_typeX16*,void*);
};
struct sigaction
{
    union anonymous_typeZ56 __sa_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};
struct anonymous_typeX58
{
};
struct anonymous_typeX60
{
    void (*sigev_notify_function)(union sigval);
    struct anonymous_typeX12* sigev_notify_attributes;
};
union anonymous_typeZ59
{
char __pad[64-2*sizeof(int)-sizeof(union sigval)];
int sigev_notify_thread_id;
struct anonymous_typeX60 __sev_thread;
};
struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ59 __sev_fields;
};
typedef void (*sig_t)(int);
typedef void (*sighandler_t)(int);
typedef int sig_atomic_t;
typedef unsigned int mode_t;
struct iovec
{
    void* iov_base;
    unsigned long int iov_len;
};
struct flock
{
    short short l_type;
    short short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};
struct file_handle
{
    unsigned int handle_bytes;
    int handle_type;
    unsigned char* f_handle;
};
struct f_owner_ex
{
    int type;
    int pid;
};
typedef unsigned long int __jmp_buf[22];
struct __jmp_buf_tag
{
    unsigned long int __jb[22];
    unsigned long int __fl;
    unsigned long int __ss[128/sizeof(long)];
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag sigjmp_buf[1];
typedef void* timer_t;
typedef int clockid_t;
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    const char* tm_zone;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
extern char* tzname[2];
extern int daylight;
extern long timezone;
extern int getdate_err;
typedef long intptr_t;
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
typedef long suseconds_t;
struct timeval
{
    long tv_sec;
    long tv_usec;
};
typedef unsigned long int fd_mask;
struct anonymous_typeX61
{
    unsigned long int fds_bits[1024/8/sizeof(long)];
};
typedef struct anonymous_typeX61 fd_set;
struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
struct ucontext;
typedef unsigned long int uintptr_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef long intmax_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef unsigned long int uintmax_t;
typedef char int_fast8_t;
typedef long int_fast64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
struct anonymous_typeX62
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX62 imaxdiv_t;
typedef unsigned short int Elf32_Half;
typedef unsigned short int Elf64_Half;
typedef unsigned int Elf32_Word;
typedef int Elf32_Sword;
typedef unsigned int Elf64_Word;
typedef int Elf64_Sword;
typedef unsigned long int Elf32_Xword;
typedef long Elf32_Sxword;
typedef unsigned long int Elf64_Xword;
typedef long Elf64_Sxword;
typedef unsigned int Elf32_Addr;
typedef unsigned long int Elf64_Addr;
typedef unsigned int Elf32_Off;
typedef unsigned long int Elf64_Off;
typedef unsigned short int Elf32_Section;
typedef unsigned short int Elf64_Section;
typedef unsigned int Elf32_Symndx;
typedef unsigned long int Elf64_Symndx;
struct anonymous_typeX63
{
    unsigned char e_ident[(16)];
    unsigned short int e_type;
    unsigned short int e_machine;
    unsigned int e_version;
    unsigned int e_entry;
    unsigned int e_phoff;
    unsigned int e_shoff;
    unsigned int e_flags;
    unsigned short int e_ehsize;
    unsigned short int e_phentsize;
    unsigned short int e_phnum;
    unsigned short int e_shentsize;
    unsigned short int e_shnum;
    unsigned short int e_shstrndx;
};
typedef struct anonymous_typeX63 Elf32_Ehdr;
struct anonymous_typeX64
{
    unsigned char e_ident[(16)];
    unsigned short int e_type;
    unsigned short int e_machine;
    unsigned int e_version;
    unsigned long int e_entry;
    unsigned long int e_phoff;
    unsigned long int e_shoff;
    unsigned int e_flags;
    unsigned short int e_ehsize;
    unsigned short int e_phentsize;
    unsigned short int e_phnum;
    unsigned short int e_shentsize;
    unsigned short int e_shnum;
    unsigned short int e_shstrndx;
};
typedef struct anonymous_typeX64 Elf64_Ehdr;
struct anonymous_typeX65
{
    unsigned int sh_name;
    unsigned int sh_type;
    unsigned int sh_flags;
    unsigned int sh_addr;
    unsigned int sh_offset;
    unsigned int sh_size;
    unsigned int sh_link;
    unsigned int sh_info;
    unsigned int sh_addralign;
    unsigned int sh_entsize;
};
typedef struct anonymous_typeX65 Elf32_Shdr;
struct anonymous_typeX66
{
    unsigned int sh_name;
    unsigned int sh_type;
    unsigned long int sh_flags;
    unsigned long int sh_addr;
    unsigned long int sh_offset;
    unsigned long int sh_size;
    unsigned int sh_link;
    unsigned int sh_info;
    unsigned long int sh_addralign;
    unsigned long int sh_entsize;
};
typedef struct anonymous_typeX66 Elf64_Shdr;
struct anonymous_typeX67
{
    unsigned int st_name;
    unsigned int st_value;
    unsigned int st_size;
    unsigned char st_info;
    unsigned char st_other;
    unsigned short int st_shndx;
};
typedef struct anonymous_typeX67 Elf32_Sym;
struct anonymous_typeX68
{
    unsigned int st_name;
    unsigned char st_info;
    unsigned char st_other;
    unsigned short int st_shndx;
    unsigned long int st_value;
    unsigned long int st_size;
};
typedef struct anonymous_typeX68 Elf64_Sym;
struct anonymous_typeX69
{
    unsigned short int si_boundto;
    unsigned short int si_flags;
};
typedef struct anonymous_typeX69 Elf32_Syminfo;
struct anonymous_typeX70
{
    unsigned short int si_boundto;
    unsigned short int si_flags;
};
typedef struct anonymous_typeX70 Elf64_Syminfo;
struct anonymous_typeX71
{
    unsigned int r_offset;
    unsigned int r_info;
};
typedef struct anonymous_typeX71 Elf32_Rel;
struct anonymous_typeX72
{
    unsigned long int r_offset;
    unsigned long int r_info;
};
typedef struct anonymous_typeX72 Elf64_Rel;
struct anonymous_typeX73
{
    unsigned int r_offset;
    unsigned int r_info;
    int r_addend;
};
typedef struct anonymous_typeX73 Elf32_Rela;
struct anonymous_typeX74
{
    unsigned long int r_offset;
    unsigned long int r_info;
    long r_addend;
};
typedef struct anonymous_typeX74 Elf64_Rela;
struct anonymous_typeX75
{
    unsigned int p_type;
    unsigned int p_offset;
    unsigned int p_vaddr;
    unsigned int p_paddr;
    unsigned int p_filesz;
    unsigned int p_memsz;
    unsigned int p_flags;
    unsigned int p_align;
};
typedef struct anonymous_typeX75 Elf32_Phdr;
struct anonymous_typeX76
{
    unsigned int p_type;
    unsigned int p_flags;
    unsigned long int p_offset;
    unsigned long int p_vaddr;
    unsigned long int p_paddr;
    unsigned long int p_filesz;
    unsigned long int p_memsz;
    unsigned long int p_align;
};
typedef struct anonymous_typeX76 Elf64_Phdr;
union anonymous_typeZ79
{
unsigned int d_val;
unsigned int d_ptr;
};
struct anonymous_typeX77
{
    int d_tag;
    union anonymous_typeZ79 d_un;
};
typedef struct anonymous_typeX77 Elf32_Dyn;
union anonymous_typeZ82
{
unsigned long int d_val;
unsigned long int d_ptr;
};
struct anonymous_typeX80
{
    long d_tag;
    union anonymous_typeZ82 d_un;
};
typedef struct anonymous_typeX80 Elf64_Dyn;
struct anonymous_typeX83
{
    unsigned short int vd_version;
    unsigned short int vd_flags;
    unsigned short int vd_ndx;
    unsigned short int vd_cnt;
    unsigned int vd_hash;
    unsigned int vd_aux;
    unsigned int vd_next;
};
typedef struct anonymous_typeX83 Elf32_Verdef;
struct anonymous_typeX84
{
    unsigned short int vd_version;
    unsigned short int vd_flags;
    unsigned short int vd_ndx;
    unsigned short int vd_cnt;
    unsigned int vd_hash;
    unsigned int vd_aux;
    unsigned int vd_next;
};
typedef struct anonymous_typeX84 Elf64_Verdef;
struct anonymous_typeX85
{
    unsigned int vda_name;
    unsigned int vda_next;
};
typedef struct anonymous_typeX85 Elf32_Verdaux;
struct anonymous_typeX86
{
    unsigned int vda_name;
    unsigned int vda_next;
};
typedef struct anonymous_typeX86 Elf64_Verdaux;
struct anonymous_typeX87
{
    unsigned short int vn_version;
    unsigned short int vn_cnt;
    unsigned int vn_file;
    unsigned int vn_aux;
    unsigned int vn_next;
};
typedef struct anonymous_typeX87 Elf32_Verneed;
struct anonymous_typeX88
{
    unsigned short int vn_version;
    unsigned short int vn_cnt;
    unsigned int vn_file;
    unsigned int vn_aux;
    unsigned int vn_next;
};
typedef struct anonymous_typeX88 Elf64_Verneed;
struct anonymous_typeX89
{
    unsigned int vna_hash;
    unsigned short int vna_flags;
    unsigned short int vna_other;
    unsigned int vna_name;
    unsigned int vna_next;
};
typedef struct anonymous_typeX89 Elf32_Vernaux;
struct anonymous_typeX90
{
    unsigned int vna_hash;
    unsigned short int vna_flags;
    unsigned short int vna_other;
    unsigned int vna_name;
    unsigned int vna_next;
};
typedef struct anonymous_typeX90 Elf64_Vernaux;
union anonymous_typeZ93
{
long int a_val;
void* a_ptr;
void (*a_fcn)();
};
struct anonymous_typeX91
{
    int a_type;
    union anonymous_typeZ93 a_un;
};
typedef struct anonymous_typeX91 Elf32_auxv_t;
union anonymous_typeZ96
{
long int a_val;
void* a_ptr;
void (*a_fcn)();
};
struct anonymous_typeX94
{
    long int a_type;
    union anonymous_typeZ96 a_un;
};
typedef struct anonymous_typeX94 Elf64_auxv_t;
struct anonymous_typeX97
{
    unsigned int n_namesz;
    unsigned int n_descsz;
    unsigned int n_type;
};
typedef struct anonymous_typeX97 Elf32_Nhdr;
struct anonymous_typeX98
{
    unsigned int n_namesz;
    unsigned int n_descsz;
    unsigned int n_type;
};
typedef struct anonymous_typeX98 Elf64_Nhdr;
struct anonymous_typeX100
{
    unsigned int gt_current_g_value;
    unsigned int gt_unused;
};
struct anonymous_typeX101
{
    unsigned int gt_g_value;
    unsigned int gt_bytes;
};
union anonymous_typeZ99
{
struct anonymous_typeX100 gt_header;
struct anonymous_typeX101 gt_entry;
};
typedef union anonymous_typeZ99 Elf32_gptab;
struct anonymous_typeX102
{
    unsigned int ri_gprmask;
    unsigned int ri_cprmask[4];
    int ri_gp_value;
};
typedef struct anonymous_typeX102 Elf32_RegInfo;
struct anonymous_typeX103
{
    unsigned char kind;
    unsigned char size;
    unsigned short int section;
    unsigned int info;
};
typedef struct anonymous_typeX103 Elf_Options;
struct anonymous_typeX104
{
    unsigned int hwp_flags1;
    unsigned int hwp_flags2;
};
typedef struct anonymous_typeX104 Elf_Options_Hw;
struct anonymous_typeX105
{
    unsigned int l_name;
    unsigned int l_time_stamp;
    unsigned int l_checksum;
    unsigned int l_version;
    unsigned int l_flags;
};
typedef struct anonymous_typeX105 Elf32_Lib;
struct anonymous_typeX106
{
    unsigned int l_name;
    unsigned int l_time_stamp;
    unsigned int l_checksum;
    unsigned int l_version;
    unsigned int l_flags;
};
typedef struct anonymous_typeX106 Elf64_Lib;
typedef unsigned int Elf32_Conflict;
enum __stab_debug_code { N_GSYM=32,
N_FNAME=34,
N_FUN=36,
N_STSYM=38,
N_LCSYM=40,
N_MAIN=42,
N_PC=48,
N_NSYMS=50,
N_NOMAP=52,
N_OBJ=56,
N_OPT=60,
N_RSYM=64,
N_M2C=66,
N_SLINE=68,
N_DSLINE=70,
N_BSLINE=72,
N_BROWS=72,
N_DEFD=74,
N_EHDECL=80,
N_MOD2=80,
N_CATCH=84,
N_SSYM=96,
N_SO=100,
N_LSYM=128,
N_BINCL=130,
N_SOL=132,
N_PSYM=160,
N_EINCL=162,
N_ENTRY=164,
N_LBRAC=192,
N_EXCL=194,
N_SCOPE=196,
N_RBRAC=224,
N_BCOMM=226,
N_ECOMM=228,
N_ECOML=232,
N_NBTEXT=240,
N_NBDATA=242,
N_NBBSS=244,
N_NBSTS=246,
N_NBLCS=248,
N_LENG=254,
LAST_UNUSED_STAB_CODE
};
struct TCCState;
typedef struct TCCState TCCState;
typedef int BOOL;
struct TokenSym
{
    struct TokenSym* hash_next;
    struct Sym* sym_define;
    struct Sym* sym_label;
    struct Sym* sym_struct;
    struct Sym* sym_identifier;
    int tok;
    int len;
    char str[1];
};
typedef struct TokenSym TokenSym;
typedef int nwchar_t;
struct CString
{
    int size;
    void* data;
    int size_allocated;
    void* data_allocated;
};
typedef struct CString CString;
struct CType
{
    int t;
    struct Sym* ref;
};
typedef struct CType CType;
union CValue
{
long double ld;
double d;
float f;
int i;
unsigned int ui;
unsigned int ul;
long long ll;
unsigned long long ull;
struct CString* cstr;
void* ptr;
int tab[1];
};
typedef union CValue CValue;
struct SValue
{
    struct CType type;
    unsigned short int r;
    unsigned short int r2;
    union CValue c;
    struct Sym* sym;
};
typedef struct SValue SValue;
typedef struct Sym Sym;
struct Section
{
    unsigned long int data_offset;
    unsigned char* data;
    unsigned long int data_allocated;
    int sh_name;
    int sh_num;
    int sh_type;
    int sh_flags;
    int sh_info;
    int sh_addralign;
    int sh_entsize;
    unsigned long int sh_size;
    unsigned long int sh_addr;
    unsigned long int sh_offset;
    int nb_hashed_syms;
    struct Section* link;
    struct Section* reloc;
    struct Section* hash;
    struct Section* next;
    char name[1];
};
typedef struct Section Section;
struct DLLReference
{
    int level;
    void* handle;
    char name[1];
};
typedef struct DLLReference DLLReference;
struct AttributeDef
{
    int aligned;
    int packed;
    struct Section* section;
    int func_attr;
};
typedef struct AttributeDef AttributeDef;
struct anonymous_typeX107
{
    unsigned int func_call:8;
    unsigned int func_args:8;
    unsigned int func_export:1;
};
typedef struct anonymous_typeX107 func_attr_t;
struct BufferedFile
{
    unsigned char* buf_ptr;
    unsigned char* buf_end;
    int fd;
    int line_num;
    int ifndef_macro;
    int ifndef_macro_saved;
    int* ifdef_stack_ptr;
    char inc_type;
    char inc_filename[512];
    char filename[1024];
    unsigned char buffer[8192+1];
};
typedef struct BufferedFile BufferedFile;
struct ParseState
{
    int* macro_ptr;
    int line_num;
    int tok;
    union CValue tokc;
};
typedef struct ParseState ParseState;
struct TokenString
{
    int* str;
    int len;
    int allocated_len;
    int last_line_num;
};
typedef struct TokenString TokenString;
struct CachedInclude
{
    int ifndef_macro;
    int hash_next;
    char type;
    char filename[1];
};
typedef struct CachedInclude CachedInclude;
struct TCCState
{
    int output_type;
    struct BufferedFile** include_stack_ptr;
    int* ifdef_stack_ptr;
    char** include_paths;
    int nb_include_paths;
    char** sysinclude_paths;
    int nb_sysinclude_paths;
    struct CachedInclude** cached_includes;
    int nb_cached_includes;
    char** library_paths;
    int nb_library_paths;
    struct DLLReference** loaded_dlls;
    int nb_loaded_dlls;
    struct Section** sections;
    int nb_sections;
    struct Section** priv_sections;
    int nb_priv_sections;
    struct Section* got;
    struct Section* plt;
    unsigned long int* got_offsets;
    int nb_got_offsets;
    int* symtab_to_dynsym;
    struct Section* dynsymtab_section;
    struct Section* dynsym;
    int nostdinc;
    int nostdlib;
    int nocommon;
    int static_link;
    const char* soname;
    int rdynamic;
    int alacarte_link;
    unsigned long int text_addr;
    int has_text_addr;
    int output_format;
    int char_is_unsigned;
    int leading_underscore;
    int warn_write_strings;
    int warn_unsupported;
    int warn_error;
    int warn_none;
    int warn_implicit_function_declaration;
    int verbose;
    int do_debug;
    int do_bounds_check;
    const char* tcc_lib_path;
    void* error_opaque;
    void (*error_func)(void*,const char*);
    int error_set_jmp_enabled;
    struct __jmp_buf_tag error_jmp_buf[1];
    int nb_errors;
    struct Sym* asm_labels;
    struct BufferedFile* include_stack[32];
    int ifdef_stack[64];
    int cached_includes_hash[512];
    int pack_stack[8];
    int* pack_stack_ptr;
    struct _IO_FILE* outfile;
    int runtime_added;
    char* runtime_plt_and_got;
    unsigned int runtime_plt_and_got_offset;
};
enum tcc_token { TOK_LAST=256-1,
TOK_INT
,TOK_VOID
,TOK_CHAR
,TOK_IF
,TOK_ELSE
,TOK_WHILE
,TOK_BREAK
,TOK_RETURN
,TOK_FOR
,TOK_EXTERN
,TOK_STATIC
,TOK_UNSIGNED
,TOK_GOTO
,TOK_DO
,TOK_CONTINUE
,TOK_SWITCH
,TOK_CASE
,TOK_CONST1
,TOK_CONST2
,TOK_CONST3
,TOK_VOLATILE1
,TOK_VOLATILE2
,TOK_VOLATILE3
,TOK_LONG
,TOK_REGISTER
,TOK_SIGNED1
,TOK_SIGNED2
,TOK_SIGNED3
,TOK_AUTO
,TOK_INLINE1
,TOK_INLINE2
,TOK_INLINE3
,TOK_RESTRICT1
,TOK_RESTRICT2
,TOK_RESTRICT3
,TOK_EXTENSION
,TOK_FLOAT
,TOK_DOUBLE
,TOK_BOOL
,TOK_SHORT
,TOK_STRUCT
,TOK_UNION
,TOK_TYPEDEF
,TOK_DEFAULT
,TOK_ENUM
,TOK_SIZEOF
,TOK_ATTRIBUTE1
,TOK_ATTRIBUTE2
,TOK_ALIGNOF1
,TOK_ALIGNOF2
,TOK_TYPEOF1
,TOK_TYPEOF2
,TOK_TYPEOF3
,TOK_LABEL
,TOK_ASM1
,TOK_ASM2
,TOK_ASM3
,TOK_DEFINE
,TOK_INCLUDE
,TOK_INCLUDE_NEXT
,TOK_IFDEF
,TOK_IFNDEF
,TOK_ELIF
,TOK_ENDIF
,TOK_DEFINED
,TOK_UNDEF
,TOK_ERROR
,TOK_WARNING
,TOK_LINE
,TOK_PRAGMA
,TOK___LINE__
,TOK___FILE__
,TOK___DATE__
,TOK___TIME__
,TOK___FUNCTION__
,TOK___VA_ARGS__
,TOK___FUNC__
,TOK_SECTION1
,TOK_SECTION2
,TOK_ALIGNED1
,TOK_ALIGNED2
,TOK_PACKED1
,TOK_PACKED2
,TOK_UNUSED1
,TOK_UNUSED2
,TOK_CDECL1
,TOK_CDECL2
,TOK_CDECL3
,TOK_STDCALL1
,TOK_STDCALL2
,TOK_STDCALL3
,TOK_FASTCALL1
,TOK_FASTCALL2
,TOK_FASTCALL3
,TOK_DLLEXPORT
,TOK_NORETURN1
,TOK_NORETURN2
,TOK_builtin_types_compatible_p
,TOK_builtin_constant_p
,TOK_builtin_frame_address
,TOK_builtin_malloc
,TOK_builtin_free
,TOK_malloc
,TOK_free
,TOK_REGPARM1
,TOK_REGPARM2
,TOK_pack
,TOK_ASM_push
,TOK_ASM_pop
,TOK_memcpy
,TOK_memset
,TOK___divdi3
,TOK___moddi3
,TOK___udivdi3
,TOK___umoddi3
,TOK___ashrdi3
,TOK___lshrdi3
,TOK___ashldi3
,TOK___floatundisf
,TOK___floatundidf
,TOK___floatundixf
,TOK___fixunsxfdi
,TOK___fixunssfdi
,TOK___fixunsdfdi
,TOK_ASM_byte
,TOK_ASM_align
,TOK_ASM_skip
,TOK_ASM_space
,TOK_ASM_string
,TOK_ASM_asciz
,TOK_ASM_ascii
,TOK_ASM_globl
,TOK_ASM_global
,TOK_ASM_text
,TOK_ASM_data
,TOK_ASM_bss
,TOK_ASM_previous
,TOK_ASM_fill
,TOK_ASM_org
,TOK_ASM_quad
};
extern int num_callers;
extern const char** rt_bound_error_msg;
int total_lines;
int total_bytes;
struct BufferedFile* file;
static int ch;
static int tok;
union CValue tokc;
struct CString tokcstr;
static int tok_flags;
static int* macro_ptr;
static int* macro_ptr_allocated;
static int* unget_saved_macro_ptr;
static int unget_saved_buffer[4+1];
static int unget_buffer_enabled;
static int parse_flags;
struct Section* text_section;
struct Section* data_section;
struct Section* bss_section;
struct Section* cur_text_section;
struct Section* bounds_section;
struct Section* lbounds_section;
struct Section* symtab_section;
struct Section* strtab_section;
struct Section* stab_section;
struct Section* stabstr_section;
static int rsym;
static int anon_sym;
static int ind;
static int loc;
static int const_wanted;
static int nocode_wanted;
static int global_expr;
struct CType func_vt;
static int func_vc;
static int last_line_num;
static int last_ind;
static int func_ind;
static int tok_ident;
struct TokenSym** table_ident;
struct TokenSym* hash_ident[8192];
static char token_buf[1024+1];
static char* funcname;
struct Sym* global_stack;
struct Sym* local_stack;
struct Sym* define_stack;
struct Sym* global_label_stack;
struct Sym* local_label_stack;
struct Sym* sym_free_first;
static void** sym_pools;
static int nb_sym_pools;
struct SValue vstack[256];
struct SValue* vtop;
struct CType char_pointer_type;
struct CType func_old_type;
struct CType int_type;
static int gnu_ext=1;
static int tcc_ext=1;
int num_callers=6;
const char** rt_bound_error_msg;
struct TCCState* tcc_state;
enum { TREG_RAX=0,
TREG_RCX=1,
TREG_RDX=2,
TREG_RSI=6,
TREG_RDI=7,
TREG_R8=8,
TREG_R9=9,
TREG_R10=10,
TREG_R11=11,
TREG_XMM0=3,
TREG_ST0=4,
TREG_MEM=16
};
int reg_classes[5]={
              0x0001 | 0x0004,
              0x0001 | 0x0008,
              0x0001 | 0x0010,
               0x0002 | 0x0020,
              0x0040,
};
static unsigned long int func_sub_sp_offset;
static int func_ret_sub;
static unsigned char arg_regs[6]={
    TREG_RDI, TREG_RSI, TREG_RDX, TREG_RCX, TREG_R8, TREG_R9
};
struct anonymous_typeX108
{
    const char* dli_fname;
    void* dli_fbase;
    const char* dli_sname;
    void* dli_saddr;
};
typedef struct anonymous_typeX108 Dl_info;
static const char* tcc_keywords="int\0void\0char\0if\0else\0while\0break\0return\0for\0extern\0static\0unsigned\0goto\0do\0continue\0switch\0case\0const\0__const\0__const__\0volatile\0__volatile\0__volatile__\0long\0register\0signed\0__signed\0__signed__\0auto\0inline\0__inline\0__inline__\0restrict\0__restrict\0__restrict__\0__extension__\0float\0double\0_Bool\0short\0struct\0union\0typedef\0default\0enum\0sizeof\0__attribute\0__attribute__\0__alignof\0__alignof__\0typeof\0__typeof\0__typeof__\0__label__\0asm\0__asm\0__asm__\0define\0include\0include_next\0ifdef\0ifndef\0elif\0endif\0defined\0undef\0error\0warning\0line\0pragma\0__LINE__\0__FILE__\0__DATE__\0__TIME__\0__FUNCTION__\0__VA_ARGS__\0__func__\0section\0__section__\0aligned\0__aligned__\0packed\0__packed__\0unused\0__unused__\0cdecl\0__cdecl\0__cdecl__\0stdcall\0__stdcall\0__stdcall__\0fastcall\0__fastcall\0__fastcall__\0dllexport\0noreturn\0__noreturn__\0__builtin_types_compatible_p\0__builtin_constant_p\0__builtin_frame_address\0__builtin_malloc\0__builtin_free\0malloc\0free\0regparm\0__regparm__\0pack\0push\0pop\0memcpy\0memset\0__divdi3\0__moddi3\0__udivdi3\0__umoddi3\0__ashrdi3\0__lshrdi3\0__ashldi3\0__floatundisf\0__floatundidf\0__floatundixf\0__fixunsxfdi\0__fixunssfdi\0__fixunsdfdi\0byte\0align\0skip\0space\0string\0asciz\0ascii\0globl\0global\0text\0data\0bss\0previous\0fill\0org\0quad\0";
static char* tok_two_chars="<=\236>=\235!=\225&&\240||\241++\244--\242==\224<<\1>>\2+=\253-=\255*=\252/=\257%=\245&=\246^=\336|=\374->\313..\250##\266";
static unsigned char isidnum_table[256-(-1)];
struct macro_level
{
    struct macro_level* prev;
    int* p;
};
static char ab_month_name[12][4]={
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
typedef unsigned long long U;
struct anonymous_typeX109
{
    unsigned int n_strx;
    unsigned char n_type;
    unsigned char n_other;
    unsigned short int n_desc;
    unsigned int n_value;
};
typedef struct anonymous_typeX109 Stab_Sym;
static char* elf_interp="/lib/ld-linux-x86-64.so.2";
struct SectionMergeInfo
{
    struct Section* s;
    unsigned long int offset;
    unsigned char new_section;
    unsigned char link_once;
};
typedef struct SectionMergeInfo SectionMergeInfo;
struct ArchiveHeader
{
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
};
typedef struct ArchiveHeader ArchiveHeader;
struct FlagDef
{
    unsigned short int offset;
    unsigned short int flags;
    const char* name;
};
typedef struct FlagDef FlagDef;
const struct FlagDef* warning_defs={
    { ((size_t) &((TCCState *)0)->warn_unsupported), 0, "unsupported" },
    { ((size_t) &((TCCState *)0)->warn_write_strings), 0, "write-strings" },
    { ((size_t) &((TCCState *)0)->warn_error), 0, "error" },
    { ((size_t) &((TCCState *)0)->warn_implicit_function_declaration), 0x0001,
      "implicit-function-declaration" },
};
const struct FlagDef* flag_defs={
    { ((size_t) &((TCCState *)0)->char_is_unsigned), 0, "unsigned-char" },
    { ((size_t) &((TCCState *)0)->char_is_unsigned), 0x0002, "signed-char" },
    { ((size_t) &((TCCState *)0)->nocommon), 0x0002, "common" },
    { ((size_t) &((TCCState *)0)->leading_underscore), 0, "leading-underscore" },
};
static char** files;
static int nb_files;
static int nb_libraries;
static int multiple_files;
static int print_search_dirs;
static int output_type;
static int reloc_output;
static const char* outfile;
static int do_bench=0;
struct TCCOption
{
    const char* name;
    unsigned short int index;
    unsigned short int flags;
};
typedef struct TCCOption TCCOption;
enum { TCC_OPTION_HELP
,TCC_OPTION_I
,TCC_OPTION_D
,TCC_OPTION_U
,TCC_OPTION_L
,TCC_OPTION_B
,TCC_OPTION_l
,TCC_OPTION_bench
,TCC_OPTION_bt
,TCC_OPTION_b
,TCC_OPTION_g
,TCC_OPTION_c
,TCC_OPTION_static
,TCC_OPTION_shared
,TCC_OPTION_soname
,TCC_OPTION_o
,TCC_OPTION_r
,TCC_OPTION_Wl
,TCC_OPTION_W
,TCC_OPTION_O
,TCC_OPTION_m
,TCC_OPTION_f
,TCC_OPTION_nostdinc
,TCC_OPTION_nostdlib
,TCC_OPTION_print_search_dirs
,TCC_OPTION_rdynamic
,TCC_OPTION_run
,TCC_OPTION_v
,TCC_OPTION_w
,TCC_OPTION_pipe
,TCC_OPTION_E
};
const struct TCCOption* tcc_options={
    { "h", TCC_OPTION_HELP, 0 },
    { "?", TCC_OPTION_HELP, 0 },
    { "I", TCC_OPTION_I, 0x0001 },
    { "D", TCC_OPTION_D, 0x0001 },
    { "U", TCC_OPTION_U, 0x0001 },
    { "L", TCC_OPTION_L, 0x0001 },
    { "B", TCC_OPTION_B, 0x0001 },
    { "l", TCC_OPTION_l, 0x0001 | 0x0002 },
    { "bench", TCC_OPTION_bench, 0 },
    { "bt", TCC_OPTION_bt, 0x0001 },



    { "g", TCC_OPTION_g, 0x0001 | 0x0002 },
    { "c", TCC_OPTION_c, 0 },
    { "static", TCC_OPTION_static, 0 },
    { "shared", TCC_OPTION_shared, 0 },
    { "soname", TCC_OPTION_soname, 0x0001 },
    { "o", TCC_OPTION_o, 0x0001 },
    { "run", TCC_OPTION_run, 0x0001 | 0x0002 },
    { "rdynamic", TCC_OPTION_rdynamic, 0 },
    { "r", TCC_OPTION_r, 0 },
    { "Wl,", TCC_OPTION_Wl, 0x0001 | 0x0002 },
    { "W", TCC_OPTION_W, 0x0001 | 0x0002 },
    { "O", TCC_OPTION_O, 0x0001 | 0x0002 },
    { "m", TCC_OPTION_m, 0x0001 },
    { "f", TCC_OPTION_f, 0x0001 | 0x0002 },
    { "nostdinc", TCC_OPTION_nostdinc, 0 },
    { "nostdlib", TCC_OPTION_nostdlib, 0 },
    { "print-search-dirs", TCC_OPTION_print_search_dirs, 0 },
    { "v", TCC_OPTION_v, 0x0001 | 0x0002 },
    { "w", TCC_OPTION_w, 0 },
    { "pipe", TCC_OPTION_pipe, 0},
    { "E", TCC_OPTION_E, 0},
    { 
# 152 "tcc.c" 3 4
     ((void*)0) 
# 152 "tcc.c"
          },
};

// uniq global variable

// header function
void* come_calloc(int count, int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

void* come_null_check(void* mem, char* sname, int sline, int id);

int atoi(const char* anonymous_var_nameX1);

long atol(const char* anonymous_var_nameX2);

long long atoll(const char* anonymous_var_nameX3);

double atof(const char* anonymous_var_nameX4);

double strtod(const char* anonymous_var_nameX7, char** anonymous_var_nameX8);

long strtol(const char* anonymous_var_nameX11, char** anonymous_var_nameX12, int anonymous_var_nameX13);

unsigned long int strtoul(const char* anonymous_var_nameX14, char** anonymous_var_nameX15, int anonymous_var_nameX16);

long long strtoll(const char* anonymous_var_nameX17, char** anonymous_var_nameX18, int anonymous_var_nameX19);

unsigned long long strtoull(const char* anonymous_var_nameX20, char** anonymous_var_nameX21, int anonymous_var_nameX22);

int rand();

void srand(unsigned int anonymous_var_nameX23);

void* malloc(unsigned long int anonymous_var_nameX24);

void* calloc(unsigned long int anonymous_var_nameX25, unsigned long int anonymous_var_nameX26);

void* realloc(void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28);

void free(void* anonymous_var_nameX29);

void* aligned_alloc(unsigned long int anonymous_var_nameX30, unsigned long int anonymous_var_nameX31);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX32);

void _Exit(int anonymous_var_nameX33);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX34);

char* getenv(const char* anonymous_var_nameX35);

int system(const char* anonymous_var_nameX36);

void* bsearch(const void* anonymous_var_nameX37, const void* anonymous_var_nameX38, unsigned long int anonymous_var_nameX39, unsigned long int anonymous_var_nameX40, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX43, unsigned long int anonymous_var_nameX44, unsigned long int anonymous_var_nameX45, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX48);

long labs(long anonymous_var_nameX49);

long long llabs(long long anonymous_var_nameX50);

struct anonymous_typeX1 div(int anonymous_var_nameX51, int anonymous_var_nameX52);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX53, long anonymous_var_nameX54);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX55, long long anonymous_var_nameX56);

int mblen(const char* anonymous_var_nameX57, unsigned long int anonymous_var_nameX58);

int mbtowc(unsigned int* anonymous_var_nameX59, const char* anonymous_var_nameX60, unsigned long int anonymous_var_nameX61);

int wctomb(char* anonymous_var_nameX62, unsigned int anonymous_var_nameX63);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX64, const char* anonymous_var_nameX65, unsigned long int anonymous_var_nameX66);

unsigned long int wcstombs(char* anonymous_var_nameX67, const unsigned int* anonymous_var_nameX68, unsigned long int anonymous_var_nameX69);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX70, unsigned long int anonymous_var_nameX71, unsigned long int anonymous_var_nameX72);

int setenv(const char* anonymous_var_nameX73, const char* anonymous_var_nameX74, int anonymous_var_nameX75);

int unsetenv(const char* anonymous_var_nameX76);

int mkstemp(char* anonymous_var_nameX77);

int mkostemp(char* anonymous_var_nameX78, int anonymous_var_nameX79);

char* mkdtemp(char* anonymous_var_nameX80);

int getsubopt(char** anonymous_var_nameX81, char** anonymous_var_nameX82, char** anonymous_var_nameX83);

int rand_r(unsigned int* anonymous_var_nameX84);

char* realpath(const char* anonymous_var_nameX85, char* anonymous_var_nameX86);

long int random();

void srandom(unsigned int anonymous_var_nameX87);

char* initstate(unsigned int anonymous_var_nameX88, char* anonymous_var_nameX89, unsigned long int anonymous_var_nameX90);

char* setstate(char* anonymous_var_nameX91);

int putenv(char* anonymous_var_nameX92);

int posix_openpt(int anonymous_var_nameX93);

int grantpt(int anonymous_var_nameX94);

int unlockpt(int anonymous_var_nameX95);

char* ptsname(int anonymous_var_nameX96);

char* l64a(long anonymous_var_nameX97);

long a64l(const char* anonymous_var_nameX98);

void setkey(const char* anonymous_var_nameX99);

double drand48();

double erand48(unsigned short int anonymous_var_nameX100[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX101[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX102[3]);

void srand48(long anonymous_var_nameX103);

unsigned short int* seed48(unsigned short int anonymous_var_nameX104[3]);

void lcong48(unsigned short int anonymous_var_nameX105[7]);

void* alloca(unsigned long int anonymous_var_nameX106);

char* mktemp(char* anonymous_var_nameX107);

int mkstemps(char* anonymous_var_nameX108, int anonymous_var_nameX109);

int mkostemps(char* anonymous_var_nameX110, int anonymous_var_nameX111, int anonymous_var_nameX112);

void* valloc(unsigned long int anonymous_var_nameX113);

void* memalign(unsigned long int anonymous_var_nameX114, unsigned long int anonymous_var_nameX115);

int getloadavg(double* anonymous_var_nameX116, int anonymous_var_nameX117);

int clearenv();

void* reallocarray(void* anonymous_var_nameX118, unsigned long int anonymous_var_nameX119, unsigned long int anonymous_var_nameX120);

void qsort_r(void* anonymous_var_nameX121, unsigned long int anonymous_var_nameX122, unsigned long int anonymous_var_nameX123, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX127);

int ptsname_r(int anonymous_var_nameX128, char* anonymous_var_nameX129, unsigned long int anonymous_var_nameX130);

char* ecvt(double anonymous_var_nameX131, int anonymous_var_nameX132, int* anonymous_var_nameX133, int* anonymous_var_nameX134);

char* fcvt(double anonymous_var_nameX135, int anonymous_var_nameX136, int* anonymous_var_nameX137, int* anonymous_var_nameX138);

char* gcvt(double anonymous_var_nameX139, int anonymous_var_nameX140, char* anonymous_var_nameX141);

char* secure_getenv(const char* anonymous_var_nameX142);

float strtof_l(const char* anonymous_var_nameX143, char** anonymous_var_nameX144, struct __locale_struct* anonymous_var_nameX145);

double strtod_l(const char* anonymous_var_nameX146, char** anonymous_var_nameX147, struct __locale_struct* anonymous_var_nameX148);

long double strtold_l(const char* anonymous_var_nameX149, char** anonymous_var_nameX150, struct __locale_struct* anonymous_var_nameX151);

struct _IO_FILE* fopen(const char* anonymous_var_nameX152, const char* anonymous_var_nameX153);

struct _IO_FILE* freopen(const char* anonymous_var_nameX154, const char* anonymous_var_nameX155, struct _IO_FILE* anonymous_var_nameX156);

int fclose(struct _IO_FILE* anonymous_var_nameX157);

int remove(const char* anonymous_var_nameX158);

int rename(const char* anonymous_var_nameX159, const char* anonymous_var_nameX160);

int feof(struct _IO_FILE* anonymous_var_nameX161);

int ferror(struct _IO_FILE* anonymous_var_nameX162);

int fflush(struct _IO_FILE* anonymous_var_nameX163);

void clearerr(struct _IO_FILE* anonymous_var_nameX164);

int fseek(struct _IO_FILE* anonymous_var_nameX165, long anonymous_var_nameX166, int anonymous_var_nameX167);

long ftell(struct _IO_FILE* anonymous_var_nameX168);

void rewind(struct _IO_FILE* anonymous_var_nameX169);

int fgetpos(struct _IO_FILE* anonymous_var_nameX170, union _G_fpos64_t* anonymous_var_nameX171);

int fsetpos(struct _IO_FILE* anonymous_var_nameX172, const union _G_fpos64_t* anonymous_var_nameX173);

unsigned long int fread(void* anonymous_var_nameX174, unsigned long int anonymous_var_nameX175, unsigned long int anonymous_var_nameX176, struct _IO_FILE* anonymous_var_nameX177);

unsigned long int fwrite(const void* anonymous_var_nameX178, unsigned long int anonymous_var_nameX179, unsigned long int anonymous_var_nameX180, struct _IO_FILE* anonymous_var_nameX181);

int fgetc(struct _IO_FILE* anonymous_var_nameX182);

int getc(struct _IO_FILE* anonymous_var_nameX183);

int getchar();

int ungetc(int anonymous_var_nameX184, struct _IO_FILE* anonymous_var_nameX185);

int fputc(int anonymous_var_nameX186, struct _IO_FILE* anonymous_var_nameX187);

int putc(int anonymous_var_nameX188, struct _IO_FILE* anonymous_var_nameX189);

int putchar(int anonymous_var_nameX190);

char* fgets(char* anonymous_var_nameX191, int anonymous_var_nameX192, struct _IO_FILE* anonymous_var_nameX193);

int fputs(const char* anonymous_var_nameX194, struct _IO_FILE* anonymous_var_nameX195);

int puts(const char* anonymous_var_nameX196);

int printf(const char* anonymous_var_nameX197, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX198, const char* anonymous_var_nameX199, ...);

int sprintf(char* anonymous_var_nameX200, const char* anonymous_var_nameX201, ...);

int snprintf(char* anonymous_var_nameX202, unsigned long int anonymous_var_nameX203, const char* anonymous_var_nameX204, ...);

int vprintf(const char* anonymous_var_nameX205, va_list anonymous_var_nameX206);

int vfprintf(struct _IO_FILE* anonymous_var_nameX207, const char* anonymous_var_nameX208, va_list anonymous_var_nameX209);

int vsprintf(char* anonymous_var_nameX210, const char* anonymous_var_nameX211, va_list anonymous_var_nameX212);

int vsnprintf(char* anonymous_var_nameX213, unsigned long int anonymous_var_nameX214, const char* anonymous_var_nameX215, va_list anonymous_var_nameX216);

int scanf(const char* anonymous_var_nameX217, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX218, const char* anonymous_var_nameX219, ...);

int sscanf(const char* anonymous_var_nameX220, const char* anonymous_var_nameX221, ...);

int vscanf(const char* anonymous_var_nameX222, va_list anonymous_var_nameX223);

int vfscanf(struct _IO_FILE* anonymous_var_nameX224, const char* anonymous_var_nameX225, va_list anonymous_var_nameX226);

int vsscanf(const char* anonymous_var_nameX227, const char* anonymous_var_nameX228, va_list anonymous_var_nameX229);

void perror(const char* anonymous_var_nameX230);

int setvbuf(struct _IO_FILE* anonymous_var_nameX231, char* anonymous_var_nameX232, int anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

void setbuf(struct _IO_FILE* anonymous_var_nameX235, char* anonymous_var_nameX236);

char* tmpnam(char* anonymous_var_nameX237);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX238, unsigned long int anonymous_var_nameX239, const char* anonymous_var_nameX240);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX241, unsigned long int* anonymous_var_nameX242);

struct _IO_FILE* fdopen(int anonymous_var_nameX243, const char* anonymous_var_nameX244);

struct _IO_FILE* popen(const char* anonymous_var_nameX245, const char* anonymous_var_nameX246);

int pclose(struct _IO_FILE* anonymous_var_nameX247);

int fileno(struct _IO_FILE* anonymous_var_nameX248);

int fseeko(struct _IO_FILE* anonymous_var_nameX249, long anonymous_var_nameX250, int anonymous_var_nameX251);

long ftello(struct _IO_FILE* anonymous_var_nameX252);

int dprintf(int anonymous_var_nameX253, const char* anonymous_var_nameX254, ...);

int vdprintf(int anonymous_var_nameX255, const char* anonymous_var_nameX256, va_list anonymous_var_nameX257);

void flockfile(struct _IO_FILE* anonymous_var_nameX258);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX259);

void funlockfile(struct _IO_FILE* anonymous_var_nameX260);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX261);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX262, struct _IO_FILE* anonymous_var_nameX263);

int putchar_unlocked(int anonymous_var_nameX264);

long getdelim(char** anonymous_var_nameX265, unsigned long int* anonymous_var_nameX266, int anonymous_var_nameX267, struct _IO_FILE* anonymous_var_nameX268);

long getline(char** anonymous_var_nameX269, unsigned long int* anonymous_var_nameX270, struct _IO_FILE* anonymous_var_nameX271);

int renameat(int anonymous_var_nameX272, const char* anonymous_var_nameX273, int anonymous_var_nameX274, const char* anonymous_var_nameX275);

char* tempnam(const char* anonymous_var_nameX277, const char* anonymous_var_nameX278);

char* cuserid(char* anonymous_var_nameX279);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX280);

void setbuffer(struct _IO_FILE* anonymous_var_nameX281, char* anonymous_var_nameX282, unsigned long int anonymous_var_nameX283);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX284);

int fputc_unlocked(int anonymous_var_nameX285, struct _IO_FILE* anonymous_var_nameX286);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX287);

unsigned long int fread_unlocked(void* anonymous_var_nameX288, unsigned long int anonymous_var_nameX289, unsigned long int anonymous_var_nameX290, struct _IO_FILE* anonymous_var_nameX291);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX292, unsigned long int anonymous_var_nameX293, unsigned long int anonymous_var_nameX294, struct _IO_FILE* anonymous_var_nameX295);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX296);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX297);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX298);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX299);

int getw(struct _IO_FILE* anonymous_var_nameX300);

int putw(int anonymous_var_nameX301, struct _IO_FILE* anonymous_var_nameX302);

char* fgetln(struct _IO_FILE* anonymous_var_nameX303, unsigned long int* anonymous_var_nameX304);

int asprintf(char** anonymous_var_nameX305, const char* anonymous_var_nameX306, ...);

int vasprintf(char** anonymous_var_nameX307, const char* anonymous_var_nameX308, va_list anonymous_var_nameX309);

char* fgets_unlocked(char* anonymous_var_nameX310, int anonymous_var_nameX311, struct _IO_FILE* anonymous_var_nameX312);

int fputs_unlocked(const char* anonymous_var_nameX313, struct _IO_FILE* anonymous_var_nameX314);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX325, const char* anonymous_var_nameX326, struct _IO_cookie_io_functions_t anonymous_var_nameX327);

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

int* __errno_location();

int __fpclassify(double anonymous_var_nameX462);

int __fpclassifyf(float anonymous_var_nameX463);

int __fpclassifyl(long double anonymous_var_nameX464);

int __signbit(double anonymous_var_nameX465);

int __signbitf(float anonymous_var_nameX466);

int __signbitl(long double anonymous_var_nameX467);

double acos(double anonymous_var_nameX468);

float acosf(float anonymous_var_nameX469);

long double acosl(long double anonymous_var_nameX470);

double acosh(double anonymous_var_nameX471);

float acoshf(float anonymous_var_nameX472);

long double acoshl(long double anonymous_var_nameX473);

double asin(double anonymous_var_nameX474);

float asinf(float anonymous_var_nameX475);

long double asinl(long double anonymous_var_nameX476);

double asinh(double anonymous_var_nameX477);

float asinhf(float anonymous_var_nameX478);

long double asinhl(long double anonymous_var_nameX479);

double atan(double anonymous_var_nameX480);

float atanf(float anonymous_var_nameX481);

long double atanl(long double anonymous_var_nameX482);

double atan2(double anonymous_var_nameX483, double anonymous_var_nameX484);

float atan2f(float anonymous_var_nameX485, float anonymous_var_nameX486);

long double atan2l(long double anonymous_var_nameX487, long double anonymous_var_nameX488);

double atanh(double anonymous_var_nameX489);

float atanhf(float anonymous_var_nameX490);

long double atanhl(long double anonymous_var_nameX491);

double cbrt(double anonymous_var_nameX492);

float cbrtf(float anonymous_var_nameX493);

long double cbrtl(long double anonymous_var_nameX494);

double ceil(double anonymous_var_nameX495);

float ceilf(float anonymous_var_nameX496);

long double ceill(long double anonymous_var_nameX497);

double copysign(double anonymous_var_nameX498, double anonymous_var_nameX499);

float copysignf(float anonymous_var_nameX500, float anonymous_var_nameX501);

long double copysignl(long double anonymous_var_nameX502, long double anonymous_var_nameX503);

double cos(double anonymous_var_nameX504);

float cosf(float anonymous_var_nameX505);

long double cosl(long double anonymous_var_nameX506);

double cosh(double anonymous_var_nameX507);

float coshf(float anonymous_var_nameX508);

long double coshl(long double anonymous_var_nameX509);

double erf(double anonymous_var_nameX510);

float erff(float anonymous_var_nameX511);

long double erfl(long double anonymous_var_nameX512);

double erfc(double anonymous_var_nameX513);

float erfcf(float anonymous_var_nameX514);

long double erfcl(long double anonymous_var_nameX515);

double exp(double anonymous_var_nameX516);

float expf(float anonymous_var_nameX517);

long double expl(long double anonymous_var_nameX518);

double exp2(double anonymous_var_nameX519);

float exp2f(float anonymous_var_nameX520);

long double exp2l(long double anonymous_var_nameX521);

double expm1(double anonymous_var_nameX522);

float expm1f(float anonymous_var_nameX523);

long double expm1l(long double anonymous_var_nameX524);

double fabs(double anonymous_var_nameX525);

float fabsf(float anonymous_var_nameX526);

long double fabsl(long double anonymous_var_nameX527);

double fdim(double anonymous_var_nameX528, double anonymous_var_nameX529);

float fdimf(float anonymous_var_nameX530, float anonymous_var_nameX531);

long double fdiml(long double anonymous_var_nameX532, long double anonymous_var_nameX533);

double floor(double anonymous_var_nameX534);

float floorf(float anonymous_var_nameX535);

long double floorl(long double anonymous_var_nameX536);

double fma(double anonymous_var_nameX537, double anonymous_var_nameX538, double anonymous_var_nameX539);

float fmaf(float anonymous_var_nameX540, float anonymous_var_nameX541, float anonymous_var_nameX542);

long double fmal(long double anonymous_var_nameX543, long double anonymous_var_nameX544, long double anonymous_var_nameX545);

double fmax(double anonymous_var_nameX546, double anonymous_var_nameX547);

float fmaxf(float anonymous_var_nameX548, float anonymous_var_nameX549);

long double fmaxl(long double anonymous_var_nameX550, long double anonymous_var_nameX551);

double fmin(double anonymous_var_nameX552, double anonymous_var_nameX553);

float fminf(float anonymous_var_nameX554, float anonymous_var_nameX555);

long double fminl(long double anonymous_var_nameX556, long double anonymous_var_nameX557);

double fmod(double anonymous_var_nameX558, double anonymous_var_nameX559);

float fmodf(float anonymous_var_nameX560, float anonymous_var_nameX561);

long double fmodl(long double anonymous_var_nameX562, long double anonymous_var_nameX563);

double frexp(double anonymous_var_nameX564, int* anonymous_var_nameX565);

float frexpf(float anonymous_var_nameX566, int* anonymous_var_nameX567);

long double frexpl(long double anonymous_var_nameX568, int* anonymous_var_nameX569);

double hypot(double anonymous_var_nameX570, double anonymous_var_nameX571);

float hypotf(float anonymous_var_nameX572, float anonymous_var_nameX573);

long double hypotl(long double anonymous_var_nameX574, long double anonymous_var_nameX575);

int ilogb(double anonymous_var_nameX576);

int ilogbf(float anonymous_var_nameX577);

int ilogbl(long double anonymous_var_nameX578);

double ldexp(double anonymous_var_nameX579, int anonymous_var_nameX580);

float ldexpf(float anonymous_var_nameX581, int anonymous_var_nameX582);

long double ldexpl(long double anonymous_var_nameX583, int anonymous_var_nameX584);

double lgamma(double anonymous_var_nameX585);

float lgammaf(float anonymous_var_nameX586);

long double lgammal(long double anonymous_var_nameX587);

long long llrint(double anonymous_var_nameX588);

long long llrintf(float anonymous_var_nameX589);

long long llrintl(long double anonymous_var_nameX590);

long long llround(double anonymous_var_nameX591);

long long llroundf(float anonymous_var_nameX592);

long long llroundl(long double anonymous_var_nameX593);

double log(double anonymous_var_nameX594);

float logf(float anonymous_var_nameX595);

long double logl(long double anonymous_var_nameX596);

double log10(double anonymous_var_nameX597);

float log10f(float anonymous_var_nameX598);

long double log10l(long double anonymous_var_nameX599);

double log1p(double anonymous_var_nameX600);

float log1pf(float anonymous_var_nameX601);

long double log1pl(long double anonymous_var_nameX602);

double log2(double anonymous_var_nameX603);

float log2f(float anonymous_var_nameX604);

long double log2l(long double anonymous_var_nameX605);

double logb(double anonymous_var_nameX606);

float logbf(float anonymous_var_nameX607);

long double logbl(long double anonymous_var_nameX608);

long lrint(double anonymous_var_nameX609);

long lrintf(float anonymous_var_nameX610);

long lrintl(long double anonymous_var_nameX611);

long lround(double anonymous_var_nameX612);

long lroundf(float anonymous_var_nameX613);

long lroundl(long double anonymous_var_nameX614);

double modf(double anonymous_var_nameX615, double* anonymous_var_nameX616);

float modff(float anonymous_var_nameX617, float* anonymous_var_nameX618);

long double modfl(long double anonymous_var_nameX619, long double* anonymous_var_nameX620);

double nan(const char* anonymous_var_nameX621);

float nanf(const char* anonymous_var_nameX622);

long double nanl(const char* anonymous_var_nameX623);

double nearbyint(double anonymous_var_nameX624);

float nearbyintf(float anonymous_var_nameX625);

long double nearbyintl(long double anonymous_var_nameX626);

double nextafter(double anonymous_var_nameX627, double anonymous_var_nameX628);

float nextafterf(float anonymous_var_nameX629, float anonymous_var_nameX630);

long double nextafterl(long double anonymous_var_nameX631, long double anonymous_var_nameX632);

double nexttoward(double anonymous_var_nameX633, long double anonymous_var_nameX634);

float nexttowardf(float anonymous_var_nameX635, long double anonymous_var_nameX636);

long double nexttowardl(long double anonymous_var_nameX637, long double anonymous_var_nameX638);

double pow(double anonymous_var_nameX639, double anonymous_var_nameX640);

float powf(float anonymous_var_nameX641, float anonymous_var_nameX642);

long double powl(long double anonymous_var_nameX643, long double anonymous_var_nameX644);

double remainder(double anonymous_var_nameX645, double anonymous_var_nameX646);

float remainderf(float anonymous_var_nameX647, float anonymous_var_nameX648);

long double remainderl(long double anonymous_var_nameX649, long double anonymous_var_nameX650);

double remquo(double anonymous_var_nameX651, double anonymous_var_nameX652, int* anonymous_var_nameX653);

float remquof(float anonymous_var_nameX654, float anonymous_var_nameX655, int* anonymous_var_nameX656);

long double remquol(long double anonymous_var_nameX657, long double anonymous_var_nameX658, int* anonymous_var_nameX659);

double rint(double anonymous_var_nameX660);

float rintf(float anonymous_var_nameX661);

long double rintl(long double anonymous_var_nameX662);

double round(double anonymous_var_nameX663);

float roundf(float anonymous_var_nameX664);

long double roundl(long double anonymous_var_nameX665);

double scalbln(double anonymous_var_nameX666, long anonymous_var_nameX667);

float scalblnf(float anonymous_var_nameX668, long anonymous_var_nameX669);

long double scalblnl(long double anonymous_var_nameX670, long anonymous_var_nameX671);

double scalbn(double anonymous_var_nameX672, int anonymous_var_nameX673);

float scalbnf(float anonymous_var_nameX674, int anonymous_var_nameX675);

long double scalbnl(long double anonymous_var_nameX676, int anonymous_var_nameX677);

double sin(double anonymous_var_nameX678);

float sinf(float anonymous_var_nameX679);

long double sinl(long double anonymous_var_nameX680);

double sinh(double anonymous_var_nameX681);

float sinhf(float anonymous_var_nameX682);

long double sinhl(long double anonymous_var_nameX683);

double sqrt(double anonymous_var_nameX684);

float sqrtf(float anonymous_var_nameX685);

long double sqrtl(long double anonymous_var_nameX686);

double tan(double anonymous_var_nameX687);

float tanf(float anonymous_var_nameX688);

long double tanl(long double anonymous_var_nameX689);

double tanh(double anonymous_var_nameX690);

float tanhf(float anonymous_var_nameX691);

long double tanhl(long double anonymous_var_nameX692);

double tgamma(double anonymous_var_nameX693);

float tgammaf(float anonymous_var_nameX694);

long double tgammal(long double anonymous_var_nameX695);

double trunc(double anonymous_var_nameX696);

float truncf(float anonymous_var_nameX697);

long double truncl(long double anonymous_var_nameX698);

double j0(double anonymous_var_nameX699);

double j1(double anonymous_var_nameX700);

double jn(int anonymous_var_nameX701, double anonymous_var_nameX702);

double y0(double anonymous_var_nameX703);

double y1(double anonymous_var_nameX704);

double yn(int anonymous_var_nameX705, double anonymous_var_nameX706);

double drem(double anonymous_var_nameX707, double anonymous_var_nameX708);

float dremf(float anonymous_var_nameX709, float anonymous_var_nameX710);

int finite(double anonymous_var_nameX711);

int finitef(float anonymous_var_nameX712);

double scalb(double anonymous_var_nameX713, double anonymous_var_nameX714);

float scalbf(float anonymous_var_nameX715, float anonymous_var_nameX716);

double significand(double anonymous_var_nameX717);

float significandf(float anonymous_var_nameX718);

double lgamma_r(double anonymous_var_nameX719, int* anonymous_var_nameX720);

float lgammaf_r(float anonymous_var_nameX721, int* anonymous_var_nameX722);

float j0f(float anonymous_var_nameX723);

float j1f(float anonymous_var_nameX724);

float jnf(int anonymous_var_nameX725, float anonymous_var_nameX726);

float y0f(float anonymous_var_nameX727);

float y1f(float anonymous_var_nameX728);

float ynf(int anonymous_var_nameX729, float anonymous_var_nameX730);

long double lgammal_r(long double anonymous_var_nameX731, int* anonymous_var_nameX732);

void sincos(double anonymous_var_nameX733, double* anonymous_var_nameX734, double* anonymous_var_nameX735);

void sincosf(float anonymous_var_nameX736, float* anonymous_var_nameX737, float* anonymous_var_nameX738);

void sincosl(long double anonymous_var_nameX739, long double* anonymous_var_nameX740, long double* anonymous_var_nameX741);

double exp10(double anonymous_var_nameX742);

float exp10f(float anonymous_var_nameX743);

long double exp10l(long double anonymous_var_nameX744);

double pow10(double anonymous_var_nameX745);

float pow10f(float anonymous_var_nameX746);

long double pow10l(long double anonymous_var_nameX747);

int __libc_current_sigrtmin();

int __libc_current_sigrtmax();

int kill(int anonymous_var_nameX760, int anonymous_var_nameX761);

int sigemptyset(struct __sigset_t* anonymous_var_nameX762);

int sigfillset(struct __sigset_t* anonymous_var_nameX763);

int sigaddset(struct __sigset_t* anonymous_var_nameX764, int anonymous_var_nameX765);

int sigdelset(struct __sigset_t* anonymous_var_nameX766, int anonymous_var_nameX767);

int sigismember(const struct __sigset_t* anonymous_var_nameX768, int anonymous_var_nameX769);

int sigprocmask(int anonymous_var_nameX770, const struct __sigset_t* anonymous_var_nameX771, struct __sigset_t* anonymous_var_nameX772);

int sigsuspend(const struct __sigset_t* anonymous_var_nameX773);

int sigaction(int anonymous_var_nameX774, const struct sigaction* anonymous_var_nameX775, struct sigaction* anonymous_var_nameX776);

int sigpending(struct __sigset_t* anonymous_var_nameX777);

int sigwait(const struct __sigset_t* anonymous_var_nameX778, int* anonymous_var_nameX779);

int sigwaitinfo(const struct __sigset_t* anonymous_var_nameX780, struct anonymous_typeX16* anonymous_var_nameX781);

int sigtimedwait(const struct __sigset_t* anonymous_var_nameX782, struct anonymous_typeX16* anonymous_var_nameX783, const struct timespec* anonymous_var_nameX784);

int sigqueue(int anonymous_var_nameX785, int anonymous_var_nameX786, union sigval anonymous_var_nameX787);

int pthread_sigmask(int anonymous_var_nameX788, const struct __sigset_t* anonymous_var_nameX789, struct __sigset_t* anonymous_var_nameX790);

int pthread_kill(struct __pthread* anonymous_var_nameX791, int anonymous_var_nameX792);

void psiginfo(const struct anonymous_typeX16* anonymous_var_nameX793, const char* anonymous_var_nameX794);

void psignal(int anonymous_var_nameX795, const char* anonymous_var_nameX796);

int killpg(int anonymous_var_nameX797, int anonymous_var_nameX798);

int sigaltstack(const struct sigaltstack* anonymous_var_nameX799, struct sigaltstack* anonymous_var_nameX800);

int sighold(int anonymous_var_nameX801);

int sigignore(int anonymous_var_nameX802);

int siginterrupt(int anonymous_var_nameX803, int anonymous_var_nameX804);

int sigpause(int anonymous_var_nameX805);

int sigrelse(int anonymous_var_nameX806);

void (*sigset(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);

void (*bsd_signal(int _function_pointer_result_var_name_a3, void (*_function_pointer_result_var_name_a4)(int)))(int);

int sigisemptyset(const struct __sigset_t* anonymous_var_nameX811);

int sigorset(struct __sigset_t* anonymous_var_nameX812, const struct __sigset_t* anonymous_var_nameX813, const struct __sigset_t* anonymous_var_nameX814);

int sigandset(struct __sigset_t* anonymous_var_nameX815, const struct __sigset_t* anonymous_var_nameX816, const struct __sigset_t* anonymous_var_nameX817);

void (*signal(int _function_pointer_result_var_name_a5, void (*_function_pointer_result_var_name_a6)(int)))(int);

int raise(int anonymous_var_nameX819);

int creat(const char* anonymous_var_nameX820, unsigned int anonymous_var_nameX821);

int fcntl(int anonymous_var_nameX822, int anonymous_var_nameX823, ...);

int open(const char* anonymous_var_nameX824, int anonymous_var_nameX825, ...);

int openat(int anonymous_var_nameX826, const char* anonymous_var_nameX827, int anonymous_var_nameX828, ...);

int posix_fadvise(int anonymous_var_nameX829, long anonymous_var_nameX830, long anonymous_var_nameX831, int anonymous_var_nameX832);

int posix_fallocate(int anonymous_var_nameX833, long anonymous_var_nameX834, long anonymous_var_nameX835);

int fallocate(int anonymous_var_nameX839, int anonymous_var_nameX840, long anonymous_var_nameX841, long anonymous_var_nameX842);

int name_to_handle_at(int anonymous_var_nameX843, const char* anonymous_var_nameX844, struct file_handle* anonymous_var_nameX845, int* anonymous_var_nameX846, int anonymous_var_nameX847);

int open_by_handle_at(int anonymous_var_nameX848, struct file_handle* anonymous_var_nameX849, int anonymous_var_nameX850);

long readahead(int anonymous_var_nameX851, long anonymous_var_nameX852, unsigned long int anonymous_var_nameX853);

int sync_file_range(int anonymous_var_nameX854, long anonymous_var_nameX855, long anonymous_var_nameX856, unsigned int anonymous_var_nameX857);

long vmsplice(int anonymous_var_nameX858, const struct iovec* anonymous_var_nameX859, unsigned long int anonymous_var_nameX860, unsigned int anonymous_var_nameX861);

long splice(int anonymous_var_nameX862, long* anonymous_var_nameX863, int anonymous_var_nameX864, long* anonymous_var_nameX865, unsigned long int anonymous_var_nameX866, unsigned int anonymous_var_nameX867);

long tee(int anonymous_var_nameX868, int anonymous_var_nameX869, unsigned long int anonymous_var_nameX870, unsigned int anonymous_var_nameX871);

int sigsetjmp(struct __jmp_buf_tag anonymous_var_nameX872[1], int anonymous_var_nameX873);

void siglongjmp(struct __jmp_buf_tag anonymous_var_nameX874[1], int anonymous_var_nameX875);

int _setjmp(struct __jmp_buf_tag anonymous_var_nameX876[1]);

void _longjmp(struct __jmp_buf_tag anonymous_var_nameX877[1], int anonymous_var_nameX878);

int setjmp(struct __jmp_buf_tag anonymous_var_nameX879[1]);

void longjmp(struct __jmp_buf_tag anonymous_var_nameX880[1], int anonymous_var_nameX881);

long clock();

long time(long* anonymous_var_nameX882);

double difftime(long anonymous_var_nameX883, long anonymous_var_nameX884);

long mktime(struct tm* anonymous_var_nameX885);

unsigned long int strftime(char* anonymous_var_nameX886, unsigned long int anonymous_var_nameX887, const char* anonymous_var_nameX888, const struct tm* anonymous_var_nameX889);

struct tm* gmtime(const long* anonymous_var_nameX890);

struct tm* localtime(const long* anonymous_var_nameX891);

char* asctime(const struct tm* anonymous_var_nameX892);

char* ctime(const long* anonymous_var_nameX893);

int timespec_get(struct timespec* anonymous_var_nameX894, int anonymous_var_nameX895);

unsigned long int strftime_l(char* anonymous_var_nameX896, unsigned long int anonymous_var_nameX897, const char* anonymous_var_nameX898, const struct tm* anonymous_var_nameX899, struct __locale_struct* anonymous_var_nameX900);

struct tm* gmtime_r(const long* anonymous_var_nameX901, struct tm* anonymous_var_nameX902);

struct tm* localtime_r(const long* anonymous_var_nameX903, struct tm* anonymous_var_nameX904);

char* asctime_r(const struct tm* anonymous_var_nameX905, char* anonymous_var_nameX906);

char* ctime_r(const long* anonymous_var_nameX907, char* anonymous_var_nameX908);

void tzset();

int nanosleep(const struct timespec* anonymous_var_nameX909, struct timespec* anonymous_var_nameX910);

int clock_getres(int anonymous_var_nameX911, struct timespec* anonymous_var_nameX912);

int clock_gettime(int anonymous_var_nameX913, struct timespec* anonymous_var_nameX914);

int clock_settime(int anonymous_var_nameX915, const struct timespec* anonymous_var_nameX916);

int clock_nanosleep(int anonymous_var_nameX917, int anonymous_var_nameX918, const struct timespec* anonymous_var_nameX919, struct timespec* anonymous_var_nameX920);

int clock_getcpuclockid(int anonymous_var_nameX921, int* anonymous_var_nameX922);

int timer_create(int anonymous_var_nameX923, struct sigevent* anonymous_var_nameX924, void** anonymous_var_nameX925);

int timer_delete(void* anonymous_var_nameX926);

int timer_settime(void* anonymous_var_nameX927, int anonymous_var_nameX928, const struct itimerspec* anonymous_var_nameX929, struct itimerspec* anonymous_var_nameX930);

int timer_gettime(void* anonymous_var_nameX931, struct itimerspec* anonymous_var_nameX932);

int timer_getoverrun(void* anonymous_var_nameX933);

char* strptime(const char* anonymous_var_nameX934, const char* anonymous_var_nameX935, struct tm* anonymous_var_nameX936);

struct tm* getdate(const char* anonymous_var_nameX937);

int stime(const long* anonymous_var_nameX938);

long timegm(struct tm* anonymous_var_nameX939);

int pipe(int anonymous_var_nameX940[2]);

int pipe2(int anonymous_var_nameX941[2], int anonymous_var_nameX942);

int close(int anonymous_var_nameX943);

int posix_close(int anonymous_var_nameX944, int anonymous_var_nameX945);

int dup(int anonymous_var_nameX946);

int dup2(int anonymous_var_nameX947, int anonymous_var_nameX948);

int dup3(int anonymous_var_nameX949, int anonymous_var_nameX950, int anonymous_var_nameX951);

long lseek(int anonymous_var_nameX952, long anonymous_var_nameX953, int anonymous_var_nameX954);

int fsync(int anonymous_var_nameX955);

int fdatasync(int anonymous_var_nameX956);

long read(int anonymous_var_nameX957, void* anonymous_var_nameX958, unsigned long int anonymous_var_nameX959);

long write(int anonymous_var_nameX960, const void* anonymous_var_nameX961, unsigned long int anonymous_var_nameX962);

long pread(int anonymous_var_nameX963, void* anonymous_var_nameX964, unsigned long int anonymous_var_nameX965, long anonymous_var_nameX966);

long pwrite(int anonymous_var_nameX967, const void* anonymous_var_nameX968, unsigned long int anonymous_var_nameX969, long anonymous_var_nameX970);

int chown(const char* anonymous_var_nameX971, unsigned int anonymous_var_nameX972, unsigned int anonymous_var_nameX973);

int fchown(int anonymous_var_nameX974, unsigned int anonymous_var_nameX975, unsigned int anonymous_var_nameX976);

int lchown(const char* anonymous_var_nameX977, unsigned int anonymous_var_nameX978, unsigned int anonymous_var_nameX979);

int fchownat(int anonymous_var_nameX980, const char* anonymous_var_nameX981, unsigned int anonymous_var_nameX982, unsigned int anonymous_var_nameX983, int anonymous_var_nameX984);

int link(const char* anonymous_var_nameX985, const char* anonymous_var_nameX986);

int linkat(int anonymous_var_nameX987, const char* anonymous_var_nameX988, int anonymous_var_nameX989, const char* anonymous_var_nameX990, int anonymous_var_nameX991);

int symlink(const char* anonymous_var_nameX992, const char* anonymous_var_nameX993);

int symlinkat(const char* anonymous_var_nameX994, int anonymous_var_nameX995, const char* anonymous_var_nameX996);

long readlink(const char* anonymous_var_nameX997, char* anonymous_var_nameX998, unsigned long int anonymous_var_nameX999);

long readlinkat(int anonymous_var_nameX1000, const char* anonymous_var_nameX1001, char* anonymous_var_nameX1002, unsigned long int anonymous_var_nameX1003);

int unlink(const char* anonymous_var_nameX1004);

int unlinkat(int anonymous_var_nameX1005, const char* anonymous_var_nameX1006, int anonymous_var_nameX1007);

int rmdir(const char* anonymous_var_nameX1008);

int truncate(const char* anonymous_var_nameX1009, long anonymous_var_nameX1010);

int ftruncate(int anonymous_var_nameX1011, long anonymous_var_nameX1012);

int access(const char* anonymous_var_nameX1013, int anonymous_var_nameX1014);

int faccessat(int anonymous_var_nameX1015, const char* anonymous_var_nameX1016, int anonymous_var_nameX1017, int anonymous_var_nameX1018);

int chdir(const char* anonymous_var_nameX1019);

int fchdir(int anonymous_var_nameX1020);

char* getcwd(char* anonymous_var_nameX1021, unsigned long int anonymous_var_nameX1022);

unsigned int alarm(unsigned int anonymous_var_nameX1023);

unsigned int sleep(unsigned int anonymous_var_nameX1024);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX1025, char** anonymous_var_nameX1026, char** anonymous_var_nameX1027);

int execv(const char* anonymous_var_nameX1028, char** anonymous_var_nameX1029);

int execle(const char* anonymous_var_nameX1030, const char* anonymous_var_nameX1031, ...);

int execl(const char* anonymous_var_nameX1032, const char* anonymous_var_nameX1033, ...);

int execvp(const char* anonymous_var_nameX1034, char** anonymous_var_nameX1035);

int execlp(const char* anonymous_var_nameX1036, const char* anonymous_var_nameX1037, ...);

int fexecve(int anonymous_var_nameX1038, char** anonymous_var_nameX1039, char** anonymous_var_nameX1040);

void _exit(int anonymous_var_nameX1041);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX1042);

int setpgid(int anonymous_var_nameX1043, int anonymous_var_nameX1044);

int setsid();

int getsid(int anonymous_var_nameX1045);

char* ttyname(int anonymous_var_nameX1046);

int ttyname_r(int anonymous_var_nameX1047, char* anonymous_var_nameX1048, unsigned long int anonymous_var_nameX1049);

int isatty(int anonymous_var_nameX1050);

int tcgetpgrp(int anonymous_var_nameX1051);

int tcsetpgrp(int anonymous_var_nameX1052, int anonymous_var_nameX1053);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX1054, unsigned int* anonymous_var_nameX1055);

int setuid(unsigned int anonymous_var_nameX1056);

int seteuid(unsigned int anonymous_var_nameX1057);

int setgid(unsigned int anonymous_var_nameX1058);

int setegid(unsigned int anonymous_var_nameX1059);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX1060, unsigned long int anonymous_var_nameX1061);

int gethostname(char* anonymous_var_nameX1062, unsigned long int anonymous_var_nameX1063);

char* ctermid(char* anonymous_var_nameX1064);

int getopt(int anonymous_var_nameX1065, char** anonymous_var_nameX1066, const char* anonymous_var_nameX1067);

long pathconf(const char* anonymous_var_nameX1068, int anonymous_var_nameX1069);

long fpathconf(int anonymous_var_nameX1070, int anonymous_var_nameX1071);

long sysconf(int anonymous_var_nameX1072);

unsigned long int confstr(int anonymous_var_nameX1073, char* anonymous_var_nameX1074, unsigned long int anonymous_var_nameX1075);

int setreuid(unsigned int anonymous_var_nameX1076, unsigned int anonymous_var_nameX1077);

int setregid(unsigned int anonymous_var_nameX1078, unsigned int anonymous_var_nameX1079);

int lockf(int anonymous_var_nameX1080, int anonymous_var_nameX1081, long anonymous_var_nameX1082);

long gethostid();

int nice(int anonymous_var_nameX1083);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX1084, const char* anonymous_var_nameX1085);

void encrypt(char* anonymous_var_nameX1086, int anonymous_var_nameX1087);

void swab(const void* anonymous_var_nameX1088, void* anonymous_var_nameX1089, long anonymous_var_nameX1090);

int usleep(unsigned int anonymous_var_nameX1091);

unsigned int ualarm(unsigned int anonymous_var_nameX1092, unsigned int anonymous_var_nameX1093);

int brk(void* anonymous_var_nameX1094);

void* sbrk(long anonymous_var_nameX1095);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX1096);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX1097, unsigned long int anonymous_var_nameX1098);

int getdomainname(char* anonymous_var_nameX1099, unsigned long int anonymous_var_nameX1100);

int setdomainname(const char* anonymous_var_nameX1101, unsigned long int anonymous_var_nameX1102);

int setgroups(unsigned long int anonymous_var_nameX1103, const unsigned int* anonymous_var_nameX1104);

char* getpass(const char* anonymous_var_nameX1105);

int daemon(int anonymous_var_nameX1106, int anonymous_var_nameX1107);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX1108);

long syscall(long anonymous_var_nameX1109, ...);

int execvpe(const char* anonymous_var_nameX1110, char** anonymous_var_nameX1111, char** anonymous_var_nameX1112);

int issetugid();

int getentropy(void* anonymous_var_nameX1113, unsigned long int anonymous_var_nameX1114);

int setresuid(unsigned int anonymous_var_nameX1115, unsigned int anonymous_var_nameX1116, unsigned int anonymous_var_nameX1117);

int setresgid(unsigned int anonymous_var_nameX1118, unsigned int anonymous_var_nameX1119, unsigned int anonymous_var_nameX1120);

int getresuid(unsigned int* anonymous_var_nameX1121, unsigned int* anonymous_var_nameX1122, unsigned int* anonymous_var_nameX1123);

int getresgid(unsigned int* anonymous_var_nameX1124, unsigned int* anonymous_var_nameX1125, unsigned int* anonymous_var_nameX1126);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX1127);

int euidaccess(const char* anonymous_var_nameX1128, int anonymous_var_nameX1129);

int eaccess(const char* anonymous_var_nameX1130, int anonymous_var_nameX1131);

long copy_file_range(int anonymous_var_nameX1132, long* anonymous_var_nameX1133, int anonymous_var_nameX1134, long* anonymous_var_nameX1135, unsigned long int anonymous_var_nameX1136, unsigned int anonymous_var_nameX1137);

int gettid();

int select(int anonymous_var_nameX1138, struct anonymous_typeX61* anonymous_var_nameX1139, struct anonymous_typeX61* anonymous_var_nameX1140, struct anonymous_typeX61* anonymous_var_nameX1141, struct timeval* anonymous_var_nameX1142);

int pselect(int anonymous_var_nameX1143, struct anonymous_typeX61* anonymous_var_nameX1144, struct anonymous_typeX61* anonymous_var_nameX1145, struct anonymous_typeX61* anonymous_var_nameX1146, const struct timespec* anonymous_var_nameX1147, const struct __sigset_t* anonymous_var_nameX1148);

int gettimeofday(struct timeval* anonymous_var_nameX1149, void* anonymous_var_nameX1150);

int getitimer(int anonymous_var_nameX1151, struct itimerval* anonymous_var_nameX1152);

int setitimer(int anonymous_var_nameX1153, const struct itimerval* anonymous_var_nameX1154, struct itimerval* anonymous_var_nameX1155);

int utimes(const char* anonymous_var_nameX1156, const struct timeval anonymous_var_nameX1157[2]);

int futimes(int anonymous_var_nameX1158, const struct timeval anonymous_var_nameX1159[2]);

int futimesat(int anonymous_var_nameX1160, const char* anonymous_var_nameX1161, const struct timeval anonymous_var_nameX1162[2]);

int lutimes(const char* anonymous_var_nameX1163, const struct timeval anonymous_var_nameX1164[2]);

int settimeofday(const struct timeval* anonymous_var_nameX1165, const struct timezone* anonymous_var_nameX1166);

int adjtime(const struct timeval* anonymous_var_nameX1167, struct timeval* anonymous_var_nameX1168);

int getcontext(struct ucontext* anonymous_var_nameX1169);

void makecontext(struct ucontext* anonymous_var_nameX1170, void (*anonymous_lambda_var_nameZ9)(), int anonymous_var_nameX1171, ...);

int setcontext(const struct ucontext* anonymous_var_nameX1172);

int swapcontext(struct ucontext* anonymous_var_nameX1173, const struct ucontext* anonymous_var_nameX1174);

void* mmap(void* anonymous_var_nameX1175, unsigned long int anonymous_var_nameX1176, int anonymous_var_nameX1177, int anonymous_var_nameX1178, int anonymous_var_nameX1179, long anonymous_var_nameX1180);

int munmap(void* anonymous_var_nameX1181, unsigned long int anonymous_var_nameX1182);

int mprotect(void* anonymous_var_nameX1183, unsigned long int anonymous_var_nameX1184, int anonymous_var_nameX1185);

int msync(void* anonymous_var_nameX1186, unsigned long int anonymous_var_nameX1187, int anonymous_var_nameX1188);

int posix_madvise(void* anonymous_var_nameX1189, unsigned long int anonymous_var_nameX1190, int anonymous_var_nameX1191);

int mlock(const void* anonymous_var_nameX1192, unsigned long int anonymous_var_nameX1193);

int munlock(const void* anonymous_var_nameX1194, unsigned long int anonymous_var_nameX1195);

int mlockall(int anonymous_var_nameX1196);

int munlockall();

void* mremap(void* anonymous_var_nameX1197, unsigned long int anonymous_var_nameX1198, unsigned long int anonymous_var_nameX1199, int anonymous_var_nameX1200, ...);

int remap_file_pages(void* anonymous_var_nameX1201, unsigned long int anonymous_var_nameX1202, int anonymous_var_nameX1203, unsigned long int anonymous_var_nameX1204, int anonymous_var_nameX1205);

int memfd_create(const char* anonymous_var_nameX1206, unsigned int anonymous_var_nameX1207);

int mlock2(const void* anonymous_var_nameX1208, unsigned long int anonymous_var_nameX1209, unsigned int anonymous_var_nameX1210);

int madvise(void* anonymous_var_nameX1211, unsigned long int anonymous_var_nameX1212, int anonymous_var_nameX1213);

int mincore(void* anonymous_var_nameX1214, unsigned long int anonymous_var_nameX1215, unsigned char* anonymous_var_nameX1216);

int shm_open(const char* anonymous_var_nameX1217, int anonymous_var_nameX1218, unsigned int anonymous_var_nameX1219);

int shm_unlink(const char* anonymous_var_nameX1220);

long imaxabs(long anonymous_var_nameX1221);

struct anonymous_typeX62 imaxdiv(long anonymous_var_nameX1222, long anonymous_var_nameX1223);

long strtoimax(const char* anonymous_var_nameX1224, char** anonymous_var_nameX1225, int anonymous_var_nameX1226);

unsigned long int strtoumax(const char* anonymous_var_nameX1227, char** anonymous_var_nameX1228, int anonymous_var_nameX1229);

long wcstoimax(const unsigned int* anonymous_var_nameX1230, unsigned int** anonymous_var_nameX1231, int anonymous_var_nameX1232);

unsigned long int wcstoumax(const unsigned int* anonymous_var_nameX1233, unsigned int** anonymous_var_nameX1234, int anonymous_var_nameX1235);

void tcc_enable_debug(struct TCCState* s);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

void tcc_set_lib_path_w32(struct TCCState* s);

void vnrott(int n);

void lexpand_nr();

int tcc_output_coff(struct TCCState* s1, struct _IO_FILE* f);

int pe_load_def_file(struct TCCState* s1, int fd);

int pe_test_res_file(void* v, int size);

int pe_load_res_file(struct TCCState* s1, int fd);

void pe_add_runtime(struct TCCState* s1);

void pe_guess_outfile(char* objfilename, int output_type);

int pe_output_file(struct TCCState* s1, const char* filename);

void __assert_fail(const char* anonymous_var_nameX1236, const char* anonymous_var_nameX1237, int anonymous_var_nameX1238, const char* anonymous_var_nameX1239);

void g(int c);

void o(unsigned int c);

void gen_le32(int c);

void gen_le64(long c);

void gsym_addr(int t, int a);

void gsym(int t);

static int is64_type(int t);
static int is_sse_float(int t);
static int oad(int c, int s);
static void gen_addr64(int r, struct Sym* sym, long c);
static void gen_addrpc32(int r, struct Sym* sym, int c);
static void gen_gotpcrel(int r, struct Sym* sym, int c);
static void gen_modrm_impl(int op_reg, int r, struct Sym* sym, int c, int is_got);
static void gen_modrm(int op_reg, int r, struct Sym* sym, int c);
static void gen_modrm64(int opcode, int op_reg, int r, struct Sym* sym, int c);
void load(int r, struct SValue* sv);

void store(int r, struct SValue* v);

static void gadd_sp(int val);
static void gcall_or_jmp(int is_jmp);
void gfunc_call(int nb_args);

static void push_arg_reg(int i);
void gfunc_prolog(struct CType* func_type);

void gfunc_epilog();

int gjmp(int t);

void gjmp_addr(int a);

int gtst(int inv, int t);

void gen_opi(int op);

void gen_opl(int op);

void gen_opf(int op);

void gen_cvt_itof(int t);

void gen_cvt_ftof(int t);

void gen_cvt_ftoi(int t);

void ggoto();

int dlclose(void* anonymous_var_nameX1240);

char* dlerror();

void* dlopen(const char* anonymous_var_nameX1241, int anonymous_var_nameX1242);

void* dlsym(void* anonymous_var_nameX1243, const char* anonymous_var_nameX1244);

int dladdr(const void* anonymous_var_nameX1245, struct anonymous_typeX108* anonymous_var_nameX1246);

int dlinfo(void* anonymous_var_nameX1247, int anonymous_var_nameX1248, void* anonymous_var_nameX1249);

void* resolve_sym(struct TCCState* s1, const char* sym, int type);

int ieee_finite(double d);

char* pstrcpy(char* buf, int buf_size, const char* s);

char* pstrcat(char* buf, int buf_size, const char* s);

char* tcc_basename(const char* name);

char* tcc_fileextension(const char* name);

void set_pages_executable(void* ptr, unsigned long int length);

void tcc_free(void* ptr);

void* tcc_malloc(unsigned long int size);

void* tcc_mallocz(unsigned long int size);

void* tcc_realloc(void* ptr, unsigned long int size);

char* tcc_strdup(const char* str);

void dynarray_add(void*** ptab, int* nb_ptr, void* data);

void dynarray_reset(void* pp, int* n);

static struct Sym* __sym_malloc();
struct Section* new_section(struct TCCState* s1, const char* name, int sh_type, int sh_flags);

static void free_section(struct Section* s);
static void section_realloc(struct Section* sec, unsigned long int new_size);
static void* section_ptr_add(struct Section* sec, unsigned long int size);
struct Section* find_section(struct TCCState* s1, const char* name);

static void put_extern_sym2(struct Sym* sym, struct Section* section, unsigned long int value, unsigned long int size, int can_add_underscore);
static void put_extern_sym(struct Sym* sym, struct Section* section, unsigned long int value, unsigned long int size);
static void greloc(struct Section* s, struct Sym* sym, unsigned long int offset, int type);
static void strcat_vprintf(char* buf, int buf_size, const char* fmt, va_list ap);
static void strcat_printf(char* buf, int buf_size, const char* fmt, ...);
static void va_list_finalize(va_list self);
void error1(struct TCCState* s1, int is_warning, const char* fmt, va_list ap);

void tcc_set_error_func(struct TCCState* s, void* error_opaque, void (*error_func)(void*,const char*));

void error_noabort(const char* fmt, ...);

void error(const char* fmt, ...);

void expect(const char* msg);

void warning(const char* fmt, ...);

void skip(int c);

static void test_lvalue();
static void cstr_realloc(struct CString* cstr, int new_size);
static void cstr_cat(struct CString* cstr, const char* str);
static void cstr_wccat(struct CString* cstr, int ch);
static void cstr_new(struct CString* cstr);
static void cstr_free(struct CString* cstr);
static void add_char(struct CString* cstr, int c);
static struct Sym* sym_push2(struct Sym** ps, int v, int t, long c);
static struct Sym* sym_find2(struct Sym* s, int v);
static struct Sym* sym_push(int v, struct CType* type, int r, int c);
static struct Sym* global_identifier_push(int v, int t, int c);
static void sym_pop(struct Sym** ptop, struct Sym* b);
struct BufferedFile* tcc_open(struct TCCState* s1, const char* filename);

void tcc_close(struct BufferedFile* bf);

static struct TokenSym* tok_alloc_new(struct TokenSym** pts, const char* str, int len);
static struct TokenSym* tok_alloc(const char* str, int len);
char* get_tok_str(int v, union CValue* cv);

static void CString_finalize(struct CString* self);
static int tcc_peekc_slow(struct BufferedFile* bf);
static int handle_eob();
static int handle_stray_noerror();
static void handle_stray();
static int handle_stray1(unsigned char* p);
static void minp();
static unsigned char* parse_line_comment(unsigned char* p);
static unsigned char* parse_comment(unsigned char* p);
static unsigned char* parse_pp_string(unsigned char* p, int sep, struct CString* str);
void preprocess_skip();

void save_parse_state(struct ParseState* s);

void restore_parse_state(struct ParseState* s);

static void tok_str_free(int* str);
static int* tok_str_realloc(struct TokenString* s);
static void tok_str_add(struct TokenString* s, int t);
static void tok_str_add2(struct TokenString* s, int t, union CValue* cv);
static void tok_str_add_tok(struct TokenString* s);
static void define_undef(struct Sym* s);
static void free_defines(struct Sym* b);
static struct Sym* label_find(int v);
static struct Sym* label_push(struct Sym** ptop, int v, int flags);
static void label_pop(struct Sym** ptop, struct Sym* slast);
static int expr_preprocess();
static void TokenString_finalize(struct TokenString* self);
static void parse_define();
static struct CachedInclude* search_cached_include(struct TCCState* s1, int type, const char* filename);
static void pragma_parse(struct TCCState* s1);
static void preprocess(int is_bof);
static void parse_escape_string(struct CString* outstr, const unsigned char* buf, int is_long);
void bn_lshift(unsigned int* bn, int shift, int or_val);

void bn_zero(unsigned int* bn);

void parse_number(const char* p);

static void next_nomacro_spc();
static void next_nomacro();
static int* macro_arg_subst(struct Sym** nested_list, int* macro_str, struct Sym* args);
static int macro_subst_tok(struct TokenString* tok_str, struct Sym** nested_list, struct Sym* s, struct macro_level** can_read_stream);
static void macro_subst(struct TokenString* tok_str, struct Sym** nested_list, const int* macro_str, struct macro_level** can_read_stream);
static void macro_level_finalize(struct macro_level* self);
static void next();
static void preprocess_init(struct TCCState* s1);
void preprocess_new();

static int tcc_preprocess(struct TCCState* s1);
void swap(int* p, int* q);

void vsetc(struct CType* type, int r, union CValue* vc);

void vpushi(int v);

void vpushll(long long v);

static void CType_finalize(struct CType* self);
static struct Sym* get_sym_ref(struct CType* type, struct Section* sec, unsigned long int offset, unsigned long int size);
static void vpush_ref(struct CType* type, struct Section* sec, unsigned long int offset, unsigned long int size);
static struct Sym* external_global_sym(int v, struct CType* type, int r);
static struct Sym* external_sym(int v, struct CType* type, int r);
static void vpush_global_sym(struct CType* type, int v);
void vset(struct CType* type, int r, int v);

void vseti(int r, int v);

void vswap();

static void SValue_finalize(struct SValue* self);
void vpushv(struct SValue* v);

void vdup();

void save_reg(int r);

int get_reg_ex(int rc, int rc2);

int get_reg(int rc);

void save_regs(int n);

void move_reg(int r, int s);

void gaddrof();

int gv(int rc);

void gv2(int rc1, int rc2);

int rc_fret(int t);

int reg_fret(int t);

void lexpand();

void lbuild(int t);

void vrotb(int n);

void vrott(int n);

void vpop();

void gv_dup();

void gen_opic(int op);

void gen_opif(int op);

static int pointed_size(struct CType* type);
static void check_comparison_pointer_types(struct SValue* p1, struct SValue* p2, int op);
void gen_op(int op);

void gen_cvt_itof1(int t);

void gen_cvt_ftoi1(int t);

void force_charshort_cast(int t);

static void gen_cast(struct CType* type);
static int type_size(struct CType* type, int* a);
static void mk_pointer(struct CType* type);
static int is_compatible_func(struct CType* type1, struct CType* type2);
static int compare_types(struct CType* type1, struct CType* type2, int unqualified);
static int is_compatible_types(struct CType* type1, struct CType* type2);
static int is_compatible_parameter_types(struct CType* type1, struct CType* type2);
void type_to_str(char* buf, int buf_size, struct CType* type, const char* varstr);

static void gen_assign_cast(struct CType* dt);
void vstore();

void inc(int post, int c);

static void parse_attribute(struct AttributeDef* ad);
static void struct_decl(struct CType* type, int u);
static void AttributeDef_finalize(struct AttributeDef* self);
static int parse_btype(struct CType* type, struct AttributeDef* ad);
static void post_type(struct CType* type, struct AttributeDef* ad);
static void type_decl(struct CType* type, struct AttributeDef* ad, int* v, int td);
static int lvalue_type(int t);
static void indir();
static void gfunc_param_typed(struct Sym* func, struct Sym* arg);
static void parse_expr_type(struct CType* type);
static void parse_type(struct CType* type);
static void vpush_tokc(int t);
static void unary();
static void uneq();
static void expr_prod();
static void expr_sum();
static void expr_shift();
static void expr_cmp();
static void expr_cmpeq();
static void expr_and();
static void expr_xor();
static void expr_or();
static void expr_land_const();
static void expr_lor_const();
static void expr_land();
static void expr_lor();
static void expr_eq();
static void gexpr();
static void expr_type(struct CType* type);
static void unary_type(struct CType* type);
static void expr_const1();
static int expr_const();
static int is_label();
static void block(int* bsym, int* csym, int* case_sym, int* def_sym, int case_reg, int is_expr);
static void decl_designator(struct CType* type, struct Section* sec, unsigned long int c, int* cur_index, struct Sym** cur_field, int size_only);
static void init_putv(struct CType* type, struct Section* sec, unsigned long int c, int v, int expr_type);
static void init_putz(struct CType* t, struct Section* sec, unsigned long int c, int size);
static void decl_initializer(struct CType* type, struct Section* sec, unsigned long int c, int first, int size_only);
static void decl_initializer_alloc(struct CType* type, struct AttributeDef* ad, int r, int has_init, int v, int scope);
void put_func_debug(struct Sym* sym);

static void func_decl_list(struct Sym* func_sym);
static void gen_function(struct Sym* sym);
static void gen_inline_functions();
static void decl(int l);
static int tcc_compile(struct TCCState* s1);
int tcc_compile_string(struct TCCState* s, const char* str);

void tcc_define_symbol(struct TCCState* s1, const char* sym, const char* value);

void tcc_undefine_symbol(struct TCCState* s1, const char* sym);

static void asm_instr();
static void asm_global_instr();
static int put_elf_str(struct Section* s, const char* sym);
static unsigned long int elf_hash(const unsigned char* name);
static void rebuild_hash(struct Section* s, unsigned int nb_buckets);
static int put_elf_sym(struct Section* s, unsigned long int value, unsigned long int size, int info, int other, int shndx, const char* name);
static int find_elf_sym(struct Section* s, const char* name);
void* tcc_get_symbol(struct TCCState* s, const char* name);

void* tcc_get_symbol_err(struct TCCState* s, const char* name);

static int add_elf_sym(struct Section* s, unsigned long int value, unsigned long int size, int info, int other, int sh_num, const char* name);
static void put_elf_reloc(struct Section* symtab, struct Section* s, unsigned long int offset, int type, int symbol);
static void put_stabs(const char* str, int type, int other, int desc, unsigned long int value);
static void put_stabs_r(const char* str, int type, int other, int desc, unsigned long int value, struct Section* sec, int sym_index);
static void put_stabn(int type, int other, int desc, int value);
static void put_stabd(int type, int other, int desc);
static void sort_syms(struct TCCState* s1, struct Section* s);
static void relocate_common_syms();
static void relocate_syms(struct TCCState* s1, int do_resolve);
static unsigned long int add_jmp_table(struct TCCState* s1, unsigned long int val);
static unsigned long int add_got_table(struct TCCState* s1, unsigned long int val);
static void relocate_section(struct TCCState* s1, struct Section* s);
static void relocate_rel(struct TCCState* s1, struct Section* sr);
static int prepare_dynamic_rel(struct TCCState* s1, struct Section* sr);
static void put_got_offset(struct TCCState* s1, int index, unsigned long int val);
static void put32(unsigned char* p, unsigned int val);
static unsigned int get32(unsigned char* p);
static void build_got(struct TCCState* s1);
static void put_got_entry(struct TCCState* s1, int reloc_type, unsigned long int size, int info, int sym_index);
static void build_got_entries(struct TCCState* s1);
static struct Section* new_symtab(struct TCCState* s1, const char* symtab_name, int sh_type, int sh_flags, const char* strtab_name, const char* hash_name, int hash_sh_flags);
static void put_dt(struct Section* dynamic, int dt, unsigned long int val);
static void add_init_array_defines(struct TCCState* s1, const char* section_name);
static void tcc_add_runtime(struct TCCState* s1);
static void tcc_add_linker_symbols(struct TCCState* s1);
static void tcc_output_binary(struct TCCState* s1, struct _IO_FILE* f, const int* section_order);
int elf_output_file(struct TCCState* s1, const char* filename);

static void Elf64_Ehdr_finalize(struct anonymous_typeX64* self);
int tcc_output_file(struct TCCState* s, const char* filename);

static void* load_data(int fd, unsigned long int file_offset, unsigned long int size);
static int tcc_load_object_file(struct TCCState* s1, int fd, unsigned long int file_offset);
static int get_be32(const unsigned char* b);
static int tcc_load_alacarte(struct TCCState* s1, int fd, int size);
static int tcc_load_archive(struct TCCState* s1, int fd);
static void ArchiveHeader_finalize(struct ArchiveHeader* self);
static int tcc_load_dll(struct TCCState* s1, int fd, const char* filename, int level);
static int ld_next(struct TCCState* s1, char* name, int name_size);
static int ld_add_file_list(struct TCCState* s1, int as_needed);
static int tcc_load_ldscript(struct TCCState* s1);
static void rt_printline(unsigned long int wanted_pc);
static int rt_get_caller_pc(unsigned long int* paddr, struct ucontext* uc, int level);
void rt_error(struct ucontext* uc, const char* fmt, ...);

static void sig_error(int signum, struct anonymous_typeX16* siginf, void* puc);
int tcc_relocate(struct TCCState* s1, void* ptr);

int tcc_run(struct TCCState* s1, int argc, char** argv);

void tcc_memstats();

static void tcc_cleanup();
struct TCCState* tcc_new();

void tcc_delete(struct TCCState* s1);

int tcc_add_include_path(struct TCCState* s1, const char* pathname);

int tcc_add_sysinclude_path(struct TCCState* s1, const char* pathname);

static int tcc_add_file_internal(struct TCCState* s1, const char* filename, int flags);
int tcc_add_file(struct TCCState* s, const char* filename);

int tcc_add_library_path(struct TCCState* s, const char* pathname);

static int tcc_add_dll(struct TCCState* s, const char* filename, int flags);
int tcc_add_library(struct TCCState* s, const char* libraryname);

int tcc_add_symbol(struct TCCState* s, const char* name, void* val);

int tcc_set_output_type(struct TCCState* s, int output_type);

static int set_flag(struct TCCState* s, const struct FlagDef* flags, int nb_flags, const char* name, int value);
int tcc_set_warning(struct TCCState* s, const char* warning_name, int value);

int tcc_set_flag(struct TCCState* s, const char* flag_name, int value);

void tcc_set_lib_path(struct TCCState* s, const char* path);

void tcc_print_stats(struct TCCState* s, long total_time);

void help();

static long getclock_us();
static void timeval_finalize(struct timeval* self);
static int strstart(const char* str, const char* val, const char** ptr);
static int expand_args(char*** pargv, const char* str);
int parse_args(struct TCCState* s, int argc, char** argv);

int main(int argc, char** argv);

// inline function
static inline unsigned int __FLOAT_BITS(float __f){
void* __result_obj__;
union anonymous_typeZ7 __u_0;
unsigned int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__u_0, 0, sizeof(union anonymous_typeZ7));
    # 57 "/usr/include/math.h"
    # 58 "/usr/include/math.h"
    __u_0.__f=__f;
    # 59 "/usr/include/math.h"
    __result1__ = __u_0.__i;
    return __result1__;
}
static inline unsigned long long __DOUBLE_BITS(double __f){
void* __result_obj__;
union anonymous_typeZ11 __u_1;
unsigned long long __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__u_1, 0, sizeof(union anonymous_typeZ11));
    # 63 "/usr/include/math.h"
    # 64 "/usr/include/math.h"
    __u_1.__f=__f;
    # 65 "/usr/include/math.h"
    __result2__ = __u_1.__i;
    return __result2__;
}
static inline int __islessf(float __x, float __y){
void* __result_obj__;
int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
    # 108 "/usr/include/math.h"
    __result3__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<__y;
    return __result3__;
}
static inline int __isless(double __x, double __y){
void* __result_obj__;
int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
    # 109 "/usr/include/math.h"
    __result4__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<__y;
    return __result4__;
}
static inline int __islessl(long double __x, long double __y){
void* __result_obj__;
int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
    # 110 "/usr/include/math.h"
    __result5__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<__y;
    return __result5__;
}
static inline int __islessequalf(float __x, float __y){
void* __result_obj__;
int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
    # 111 "/usr/include/math.h"
    __result6__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<=__y;
    return __result6__;
}
static inline int __islessequal(double __x, double __y){
void* __result_obj__;
int __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    # 112 "/usr/include/math.h"
    __result7__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<=__y;
    return __result7__;
}
static inline int __islessequall(long double __x, long double __y){
void* __result_obj__;
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    # 113 "/usr/include/math.h"
    __result8__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x<=__y;
    return __result8__;
}
static inline int __islessgreaterf(float __x, float __y){
void* __result_obj__;
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    # 114 "/usr/include/math.h"
    __result9__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x!=__y;
    return __result9__;
}
static inline int __islessgreater(double __x, double __y){
void* __result_obj__;
int __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    # 115 "/usr/include/math.h"
    __result10__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x!=__y;
    return __result10__;
}
static inline int __islessgreaterl(long double __x, long double __y){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    # 116 "/usr/include/math.h"
    __result11__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x!=__y;
    return __result11__;
}
static inline int __isgreaterf(float __x, float __y){
void* __result_obj__;
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    # 117 "/usr/include/math.h"
    __result12__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>__y;
    return __result12__;
}
static inline int __isgreater(double __x, double __y){
void* __result_obj__;
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    # 118 "/usr/include/math.h"
    __result13__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>__y;
    return __result13__;
}
static inline int __isgreaterl(long double __x, long double __y){
void* __result_obj__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    # 119 "/usr/include/math.h"
    __result14__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>__y;
    return __result14__;
}
static inline int __isgreaterequalf(float __x, float __y){
void* __result_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    # 120 "/usr/include/math.h"
    __result15__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>=__y;
    return __result15__;
}
static inline int __isgreaterequal(double __x, double __y){
void* __result_obj__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    # 121 "/usr/include/math.h"
    __result16__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>=__y;
    return __result16__;
}
static inline int __isgreaterequall(long double __x, long double __y){
void* __result_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    # 122 "/usr/include/math.h"
    __result17__ = !((sizeof((__x))==sizeof(float)?(__FLOAT_BITS((__x))&2147483647)>2139095040:sizeof((__x))==sizeof(double)?(__DOUBLE_BITS((__x))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__x))==0)?((void)(__y),1):(sizeof((__y))==sizeof(float)?(__FLOAT_BITS((__y))&2147483647)>2139095040:sizeof((__y))==sizeof(double)?(__DOUBLE_BITS((__y))&18446744073709551615>>1)>2047<<52:__fpclassifyl((__y))==0))&&__x>=__y;
    return __result17__;
}
static inline int is_float(int t){
void* __result_obj__;
int bt_2;
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&bt_2, 0, sizeof(int));
    # 762 "tcc.h"
    # 763 "tcc.h"
    bt_2=t&15;
    # 764 "tcc.h"
    __result18__ = bt_2==10||bt_2==9||bt_2==8;
    return __result18__;
}
static inline int is_space(int ch){
void* __result_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    # 770 "tcc.h"
    __result19__ = ch==32||ch==9||ch==11||ch==12||ch==13;
    return __result19__;
}
static inline struct Sym* sym_malloc(){
void* __result_obj__;
struct Sym* sym_103;
_Bool _if_conditional118;
struct Sym* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_103, 0, sizeof(struct Sym*));
    # 533 "libtcc.c"
    # 534 "libtcc.c"
    sym_103=sym_free_first;
    # 536 "libtcc.c"
    # 535 "libtcc.c"
    if(_if_conditional118=!sym_103,    _if_conditional118) {
        # 536 "libtcc.c"
        sym_103=__sym_malloc();
    }
    # 537 "libtcc.c"
    sym_free_first=sym_103->next;
    # 538 "libtcc.c"
    __result36__ = __result_obj__ = sym_103;
    return __result36__;
}
static inline void sym_free(struct Sym* sym){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 543 "libtcc.c"
    sym->next=sym_free_first;
    # 544 "libtcc.c"
    sym_free_first=sym;
}
static inline int isid(int c){
void* __result_obj__;
int __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    # 747 "libtcc.c"
    __result41__ = (c>=97&&c<=122)||(c>=65&&c<=90)||c==95;
    return __result41__;
}
static inline int isnum(int c){
void* __result_obj__;
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    # 752 "libtcc.c"
    __result42__ = c>=48&&c<=57;
    return __result42__;
}
static inline int isoct(int c){
void* __result_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 757 "libtcc.c"
    __result43__ = c>=48&&c<=55;
    return __result43__;
}
static inline int toup(int c){
void* __result_obj__;
_Bool _if_conditional130;
int __result44__;
int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 765 "libtcc.c"
    # 762 "libtcc.c"
    if(_if_conditional130=c>=97&&c<=122,    _if_conditional130) {
        # 763 "libtcc.c"
        __result44__ = c-97+65;
        return __result44__;
    }
    else {
        # 765 "libtcc.c"
        __result45__ = c;
        return __result45__;
    }
}
static inline void cstr_ccat(struct CString* cstr, int ch){
void* __result_obj__;
int size_132;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_132, 0, sizeof(int));
    # 907 "libtcc.c"
    # 908 "libtcc.c"
    size_132=cstr->size+1;
    # 911 "libtcc.c"
    # 909 "libtcc.c"
    if(_if_conditional142=size_132>cstr->size_allocated,    _if_conditional142) {
        # 910 "libtcc.c"
        cstr_realloc(cstr,size_132);
    }
    # 911 "libtcc.c"
    ((unsigned char*)cstr->data)[size_132-1]=ch;
    # 912 "libtcc.c"
    cstr->size=size_132;
}
static inline struct Sym* struct_find(int v){
void* __result_obj__;
_Bool _if_conditional149;
struct Sym* __result49__;
struct Sym* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1003 "libtcc.c"
    v-=256;
    # 1005 "libtcc.c"
    # 1004 "libtcc.c"
    if(_if_conditional149=(unsigned int)v>=(unsigned int)(tok_ident-256),    _if_conditional149) {
        # 1005 "libtcc.c"
        __result49__ = __result_obj__ = ((void*)0);
        return __result49__;
    }
    # 1006 "libtcc.c"
    __result50__ = __result_obj__ = table_ident[v]->sym_struct;
    return __result50__;
}
static inline struct Sym* sym_find(int v){
void* __result_obj__;
_Bool _if_conditional150;
struct Sym* __result51__;
struct Sym* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1012 "libtcc.c"
    v-=256;
    # 1014 "libtcc.c"
    # 1013 "libtcc.c"
    if(_if_conditional150=(unsigned int)v>=(unsigned int)(tok_ident-256),    _if_conditional150) {
        # 1014 "libtcc.c"
        __result51__ = __result_obj__ = ((void*)0);
        return __result51__;
    }
    # 1015 "libtcc.c"
    __result52__ = __result_obj__ = table_ident[v]->sym_identifier;
    return __result52__;
}
static inline void inp(){
void* __result_obj__;
_Bool _if_conditional172;
memset(&__result_obj__, 0, sizeof(void*));
    # 249 "tccpp.c"
    ch=*(++(file->buf_ptr));
    # 253 "tccpp.c"
    # 251 "tccpp.c"
    if(_if_conditional172=ch==92,    _if_conditional172) {
        # 252 "tccpp.c"
        ch=handle_eob();
    }
}
static inline void skip_spaces(){
void* __result_obj__;
_Bool _while_condtional13;
memset(&__result_obj__, 0, sizeof(void*));
    # 456 "tccpp.c"
    while(_while_condtional13=is_space(ch),    _while_condtional13) {
        # 456 "tccpp.c"
        minp();
    }
}
static inline int check_space(int t, int* spc){
void* __result_obj__;
_Bool _if_conditional199;
_Bool _if_conditional200;
int __result75__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 466 "tccpp.c"
    # 461 "tccpp.c"
    if(_if_conditional199=is_space(t),    _if_conditional199) {
        # 464 "tccpp.c"
        # 462 "tccpp.c"
        if(_if_conditional200=*spc,        _if_conditional200) {
            # 463 "tccpp.c"
            __result75__ = 1;
            return __result75__;
        }
        # 464 "tccpp.c"
        *spc=1;
    }
    else {
        # 466 "tccpp.c"
        *spc=0;
    }
    # 467 "tccpp.c"
    __result76__ = 0;
    return __result76__;
}
static inline int tok_ext_size(int t){
void* __result_obj__;
int __result78__;
int __result79__;
int __result80__;
int __result81__;
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 671 "tccpp.c"
    switch (t) {
        # 651 "tccpp.c"
        case 179:
        # 652 "tccpp.c"
        case 200:
        # 653 "tccpp.c"
        case 180:
        # 654 "tccpp.c"
        case 183:
        # 655 "tccpp.c"
        case 185:
        # 656 "tccpp.c"
        case 186:
        # 656 "tccpp.c"
        __result78__ = 1;
        return __result78__;
        # 658 "tccpp.c"
        case 181:
        # 659 "tccpp.c"
        case 184:
        # 660 "tccpp.c"
        case 206:
        # 660 "tccpp.c"
        error("unsupported token");
        # 661 "tccpp.c"
        __result79__ = 1;
        return __result79__;
        # 663 "tccpp.c"
        case 192:
        # 664 "tccpp.c"
        case 201:
        # 665 "tccpp.c"
        case 202:
        # 665 "tccpp.c"
        __result80__ = 2;
        return __result80__;
        # 667 "tccpp.c"
        case 193:
        # 667 "tccpp.c"
        __result81__ = 16/4;
        return __result81__;
        # 669 "tccpp.c"
        default:
        # 669 "tccpp.c"
        __result82__ = 0;
        return __result82__;
    }
}
static inline void tok_str_new(struct TokenString* s){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 677 "tccpp.c"
    s->str=((void*)0);
    # 678 "tccpp.c"
    s->len=0;
    # 679 "tccpp.c"
    s->allocated_len=0;
    # 680 "tccpp.c"
    s->last_line_num=-1;
}
static inline void define_push(int v, int macro_type, int* str, struct Sym* first_arg){
void* __result_obj__;
struct Sym* s_181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_181, 0, sizeof(struct Sym*));
    # 861 "tccpp.c"
    # 863 "tccpp.c"
    s_181=sym_push2(&define_stack,v,macro_type,(long)str);
    # 864 "tccpp.c"
    s_181->next=first_arg;
    # 865 "tccpp.c"
    table_ident[v-256]->sym_define=s_181;
}
static inline struct Sym* define_find(int v){
void* __result_obj__;
_Bool _if_conditional226;
struct Sym* __result84__;
struct Sym* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    # 880 "tccpp.c"
    v-=256;
    # 882 "tccpp.c"
    # 881 "tccpp.c"
    if(_if_conditional226=(unsigned int)v>=(unsigned int)(tok_ident-256),    _if_conditional226) {
        # 882 "tccpp.c"
        __result84__ = __result_obj__ = ((void*)0);
        return __result84__;
    }
    # 883 "tccpp.c"
    __result85__ = __result_obj__ = table_ident[v]->sym_define;
    return __result85__;
}
static inline int hash_cached_include(int type, const char* filename){
void* __result_obj__;
const unsigned char* s_202;
unsigned int h_203;
s_202=filename;
_Bool _while_condtional20;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&h_203, 0, sizeof(unsigned int));
    # 1085 "tccpp.c"
    # 1086 "tccpp.c"
    # 1088 "tccpp.c"
    h_203=1;
    # 1089 "tccpp.c"
    h_203=((h_203)*263+(type));
    # 1090 "tccpp.c"
    # 1095 "tccpp.c"
    while(_while_condtional20=*s_202,    _while_condtional20) {
        # 1092 "tccpp.c"
        h_203=((h_203)*263+(*s_202));
        # 1093 "tccpp.c"
        s_202++;
    }
    # 1095 "tccpp.c"
    h_203&=(512-1);
    # 1096 "tccpp.c"
    __result90__ = h_203;
    return __result90__;
}
static inline void add_cached_include(struct TCCState* s1, int type, const char* filename, int ifndef_macro){
void* __result_obj__;
struct CachedInclude* e_207;
int h_208;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
memset(&e_207, 0, sizeof(struct CachedInclude*));
memset(&h_208, 0, sizeof(int));
    # 1121 "tccpp.c"
    # 1122 "tccpp.c"
    # 1125 "tccpp.c"
    # 1124 "tccpp.c"
    if(_if_conditional247=search_cached_include(s1,type,filename),    _if_conditional247) {
        # 1125 "tccpp.c"
        return;
    }
    # 1129 "tccpp.c"
    e_207=tcc_malloc(sizeof(struct CachedInclude)+strlen(filename));
    # 1131 "tccpp.c"
    # 1130 "tccpp.c"
    if(_if_conditional248=!e_207,    _if_conditional248) {
        # 1131 "tccpp.c"
        return;
    }
    # 1132 "tccpp.c"
    e_207->type=type;
    # 1133 "tccpp.c"
    strcpy(e_207->filename,filename);
    # 1134 "tccpp.c"
    e_207->ifndef_macro=ifndef_macro;
    # 1135 "tccpp.c"
    dynarray_add((void***)&s1->cached_includes,&s1->nb_cached_includes,e_207);
    # 1137 "tccpp.c"
    h_208=hash_cached_include(type,filename);
    # 1138 "tccpp.c"
    e_207->hash_next=s1->cached_includes_hash[h_208];
    # 1139 "tccpp.c"
    s1->cached_includes_hash[h_208]=s1->nb_cached_includes;
}
static inline void next_nomacro1(){
void* __result_obj__;
int t_244;
int c_245;
int is_long_246;
struct TokenSym* ts_247;
unsigned char* p_248;
unsigned char* p1_249;
unsigned int h_250;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct TCCState* s1_251;
_Bool _if_conditional348;
_Bool _elif_conditional85;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
struct TokenSym** pts_252;
int len_253;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _while_condtional34;
_Bool _if_conditional360;
_Bool _while_condtional35;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _elif_conditional86;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
struct CString str_254;
int sep_255;
_Bool _if_conditional372;
int char_size_256;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _elif_conditional87;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _elif_conditional88;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _elif_conditional89;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _elif_conditional90;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _elif_conditional91;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _elif_conditional92;
_Bool _elif_conditional93;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _elif_conditional94;
_Bool _elif_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_247, 0, sizeof(struct TokenSym*));
memset(&h_250, 0, sizeof(unsigned int));
memset(&s1_251, 0, sizeof(struct TCCState*));
memset(&pts_252, 0, sizeof(struct TokenSym**));
memset(&len_253, 0, sizeof(int));
memset(&str_254, 0, sizeof(struct CString));
memset(&sep_255, 0, sizeof(int));
memset(&char_size_256, 0, sizeof(int));
    # 1896 "tccpp.c"
    # 1897 "tccpp.c"
    # 1898 "tccpp.c"
    # 1899 "tccpp.c"
    # 1901 "tccpp.c"
    p_248=file->buf_ptr;
    # 1903 "tccpp.c"
    redo_no_start:
    # 1903 "tccpp.c"
    c_245=*p_248;
    # 2309 "tccpp.c"
    switch (c_245) {
        # 1906 "tccpp.c"
        case 32:
        # 1907 "tccpp.c"
        case 9:
        # 1907 "tccpp.c"
        tok=c_245;
        # 1908 "tccpp.c"
        p_248++;
        # 1909 "tccpp.c"
        goto keep_tok_flags;
        # 1911 "tccpp.c"
        case 12:
        # 1912 "tccpp.c"
        case 11:
        # 1913 "tccpp.c"
        case 13:
        # 1913 "tccpp.c"
        p_248++;
        # 1914 "tccpp.c"
        goto redo_no_start;
        # 1917 "tccpp.c"
        case 92:
        # 1932 "tccpp.c"
        # 1917 "tccpp.c"
        if(_if_conditional346=p_248>=file->buf_end,        _if_conditional346) {
            # 1918 "tccpp.c"
            file->buf_ptr=p_248;
            # 1919 "tccpp.c"
            handle_eob();
            # 1920 "tccpp.c"
            p_248=file->buf_ptr;
            # 1924 "tccpp.c"
            # 1921 "tccpp.c"
            if(_if_conditional347=p_248>=file->buf_end,            _if_conditional347) {
                # 1922 "tccpp.c"
                goto parse_eof;
            }
            else {
                # 1924 "tccpp.c"
                goto redo_no_start;
            }
        }
        else {
            # 1926 "tccpp.c"
            file->buf_ptr=p_248;
            # 1927 "tccpp.c"
            ch=*p_248;
            # 1928 "tccpp.c"
            handle_stray();
            # 1929 "tccpp.c"
            p_248=file->buf_ptr;
            # 1930 "tccpp.c"
            goto redo_no_start;
        }
        # 1933 "tccpp.c"
        parse_eof:
        # 1970 "tccpp.c"
        {
            # 1934 "tccpp.c"
            s1_251=tcc_state;
            # 1969 "tccpp.c"
            # 1936 "tccpp.c"
            if(_if_conditional348=(parse_flags&4)&&!(tok_flags&8),            _if_conditional348) {
                # 1937 "tccpp.c"
                tok_flags|=8;
                # 1938 "tccpp.c"
                tok=10;
                # 1939 "tccpp.c"
                goto keep_tok_flags;
            }
            # 1941 "tccpp.c"
            else if(_elif_conditional85=s1_251->include_stack_ptr==s1_251->include_stack||!(parse_flags&1),            _elif_conditional85) {
                # 1943 "tccpp.c"
                tok=(-1);
            }
            else {
                # 1945 "tccpp.c"
                tok_flags&=~8;
                # 1959 "tccpp.c"
                # 1950 "tccpp.c"
                if(_if_conditional349=tok_flags&4,                _if_conditional349) {
                    # 1955 "tccpp.c"
                    add_cached_include(s1_251,file->inc_type,file->inc_filename,file->ifndef_macro_saved);
                }
                # 1963 "tccpp.c"
                # 1959 "tccpp.c"
                if(tcc_state->do_debug) {
                    # 1960 "tccpp.c"
                    put_stabd(162,0,0);
                }
                # 1963 "tccpp.c"
                tcc_close(file);
                # 1964 "tccpp.c"
                s1_251->include_stack_ptr--;
                # 1965 "tccpp.c"
                file=*s1_251->include_stack_ptr;
                # 1966 "tccpp.c"
                p_248=file->buf_ptr;
                # 1967 "tccpp.c"
                goto redo_no_start;
            }
        }
        # 1970 "tccpp.c"
        break;
        # 1973 "tccpp.c"
        case 10:
        # 1973 "tccpp.c"
        file->line_num++;
        # 1974 "tccpp.c"
        tok_flags|=1;
        # 1975 "tccpp.c"
        p_248++;
        # 1977 "tccpp.c"
        # 1976 "tccpp.c"
        if(_if_conditional351=0==(parse_flags&4),        _if_conditional351) {
            # 1977 "tccpp.c"
            goto redo_no_start;
        }
        # 1978 "tccpp.c"
        tok=10;
        # 1979 "tccpp.c"
        goto keep_tok_flags;
        # 1983 "tccpp.c"
        case 35:
        # 1983 "tccpp.c"
        {
            # 1983 "tccpp.c"
            p_248++;
            # 1983 "tccpp.c"
            c_245=*p_248;
            # 1983 "tccpp.c"
            # 1983 "tccpp.c"
            if(_if_conditional352=c_245==92,            _if_conditional352) {
                # 1983 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 1983 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2003 "tccpp.c"
        # 1985 "tccpp.c"
        if(_if_conditional353=(tok_flags&1)&&(parse_flags&1),        _if_conditional353) {
            # 1986 "tccpp.c"
            file->buf_ptr=p_248;
            # 1987 "tccpp.c"
            preprocess(tok_flags&2);
            # 1988 "tccpp.c"
            p_248=file->buf_ptr;
            # 1989 "tccpp.c"
            goto redo_no_start;
        }
        else {
            # 2002 "tccpp.c"
            # 1991 "tccpp.c"
            if(_if_conditional354=c_245==35,            _if_conditional354) {
                # 1992 "tccpp.c"
                p_248++;
                # 1993 "tccpp.c"
                tok=182;
            }
            else {
                # 2001 "tccpp.c"
                # 1995 "tccpp.c"
                if(_if_conditional355=parse_flags&8,                _if_conditional355) {
                    # 1996 "tccpp.c"
                    p_248=parse_line_comment(p_248-1);
                    # 1997 "tccpp.c"
                    goto redo_no_start;
                }
                else {
                    # 1999 "tccpp.c"
                    tok=35;
                }
            }
        }
        # 2003 "tccpp.c"
        break;
        # 2005 "tccpp.c"
        case 97:
        # 2005 "tccpp.c"
        case 98:
        # 2005 "tccpp.c"
        case 99:
        # 2006 "tccpp.c"
        case 100:
        # 2006 "tccpp.c"
        case 101:
        # 2006 "tccpp.c"
        case 102:
        # 2006 "tccpp.c"
        case 103:
        # 2007 "tccpp.c"
        case 104:
        # 2007 "tccpp.c"
        case 105:
        # 2007 "tccpp.c"
        case 106:
        # 2007 "tccpp.c"
        case 107:
        # 2008 "tccpp.c"
        case 108:
        # 2008 "tccpp.c"
        case 109:
        # 2008 "tccpp.c"
        case 110:
        # 2008 "tccpp.c"
        case 111:
        # 2009 "tccpp.c"
        case 112:
        # 2009 "tccpp.c"
        case 113:
        # 2009 "tccpp.c"
        case 114:
        # 2009 "tccpp.c"
        case 115:
        # 2010 "tccpp.c"
        case 116:
        # 2010 "tccpp.c"
        case 117:
        # 2010 "tccpp.c"
        case 118:
        # 2010 "tccpp.c"
        case 119:
        # 2011 "tccpp.c"
        case 120:
        # 2011 "tccpp.c"
        case 121:
        # 2012 "tccpp.c"
        case 122:
        # 2012 "tccpp.c"
        case 65:
        # 2012 "tccpp.c"
        case 66:
        # 2012 "tccpp.c"
        case 67:
        # 2013 "tccpp.c"
        case 68:
        # 2013 "tccpp.c"
        case 69:
        # 2013 "tccpp.c"
        case 70:
        # 2013 "tccpp.c"
        case 71:
        # 2014 "tccpp.c"
        case 72:
        # 2014 "tccpp.c"
        case 73:
        # 2014 "tccpp.c"
        case 74:
        # 2015 "tccpp.c"
        case 75:
        # 2015 "tccpp.c"
        case 77:
        # 2015 "tccpp.c"
        case 78:
        # 2015 "tccpp.c"
        case 79:
        # 2016 "tccpp.c"
        case 80:
        # 2016 "tccpp.c"
        case 81:
        # 2016 "tccpp.c"
        case 82:
        # 2016 "tccpp.c"
        case 83:
        # 2017 "tccpp.c"
        case 84:
        # 2017 "tccpp.c"
        case 85:
        # 2017 "tccpp.c"
        case 86:
        # 2017 "tccpp.c"
        case 87:
        # 2018 "tccpp.c"
        case 88:
        # 2018 "tccpp.c"
        case 89:
        # 2019 "tccpp.c"
        case 90:
        # 2020 "tccpp.c"
        case 95:
        # 2021 "tccpp.c"
        parse_ident_fast:
        # 2021 "tccpp.c"
        p1_249=p_248;
        # 2022 "tccpp.c"
        h_250=1;
        # 2023 "tccpp.c"
        h_250=((h_250)*263+(c_245));
        # 2024 "tccpp.c"
        p_248++;
        # 2032 "tccpp.c"
        for(        ;        ;        ){
            # 2026 "tccpp.c"
            c_245=*p_248;
            # 2028 "tccpp.c"
            # 2027 "tccpp.c"
            if(_if_conditional356=!isidnum_table[c_245-(-1)],            _if_conditional356) {
                # 2028 "tccpp.c"
                break;
            }
            # 2029 "tccpp.c"
            h_250=((h_250)*263+(c_245));
            # 2030 "tccpp.c"
            p_248++;
        }
        # 2068 "tccpp.c"
        # 2032 "tccpp.c"
        if(_if_conditional357=c_245!=92,        _if_conditional357) {
            # 2033 "tccpp.c"
            # 2034 "tccpp.c"
            # 2038 "tccpp.c"
            len_253=p_248-p1_249;
            # 2039 "tccpp.c"
            h_250&=(8192-1);
            # 2040 "tccpp.c"
            pts_252=&hash_ident[h_250];
            # 2049 "tccpp.c"
            for(            ;            ;            ){
                # 2042 "tccpp.c"
                ts_247=*pts_252;
                # 2044 "tccpp.c"
                # 2043 "tccpp.c"
                if(_if_conditional358=!ts_247,                _if_conditional358) {
                    # 2044 "tccpp.c"
                    break;
                }
                # 2046 "tccpp.c"
                # 2045 "tccpp.c"
                if(_if_conditional359=ts_247->len==len_253&&!memcmp(ts_247->str,p1_249,len_253),                _if_conditional359) {
                    # 2046 "tccpp.c"
                    goto token_found;
                }
                # 2047 "tccpp.c"
                pts_252=&(ts_247->hash_next);
            }
            # 2049 "tccpp.c"
            ts_247=tok_alloc_new(pts_252,p1_249,len_253);
            # 2050 "tccpp.c"
            token_found:
        }
        else {
            # 2053 "tccpp.c"
            cstr_free(&tokcstr);
            # 2059 "tccpp.c"
            while(_while_condtional34=p1_249<p_248,            _while_condtional34) {
                # 2056 "tccpp.c"
                cstr_ccat(&tokcstr,*p1_249);
                # 2057 "tccpp.c"
                p1_249++;
            }
            # 2059 "tccpp.c"
            p_248--;
            # 2060 "tccpp.c"
            {
                # 2060 "tccpp.c"
                p_248++;
                # 2060 "tccpp.c"
                c_245=*p_248;
                # 2060 "tccpp.c"
                # 2060 "tccpp.c"
                if(_if_conditional360=c_245==92,                _if_conditional360) {
                    # 2060 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2060 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2062 "tccpp.c"
            parse_ident_slow:
            # 2066 "tccpp.c"
            while(_while_condtional35=isidnum_table[c_245-(-1)],            _while_condtional35) {
                # 2063 "tccpp.c"
                cstr_ccat(&tokcstr,c_245);
                # 2064 "tccpp.c"
                {
                    # 2064 "tccpp.c"
                    p_248++;
                    # 2064 "tccpp.c"
                    c_245=*p_248;
                    # 2064 "tccpp.c"
                    # 2064 "tccpp.c"
                    if(_if_conditional361=c_245==92,                    _if_conditional361) {
                        # 2064 "tccpp.c"
                        c_245=handle_stray1(p_248);
                        # 2064 "tccpp.c"
                        p_248=file->buf_ptr;
                    }
                }
            }
            # 2066 "tccpp.c"
            ts_247=tok_alloc(tokcstr.data,tokcstr.size);
        }
        # 2068 "tccpp.c"
        tok=ts_247->tok;
        # 2069 "tccpp.c"
        break;
        # 2071 "tccpp.c"
        case 76:
        # 2071 "tccpp.c"
        t_244=p_248[1];
        # 2086 "tccpp.c"
        # 2072 "tccpp.c"
        if(_if_conditional362=t_244!=92&&t_244!=39&&t_244!=34,        _if_conditional362) {
            # 2074 "tccpp.c"
            goto parse_ident_fast;
        }
        else {
            # 2076 "tccpp.c"
            {
                # 2076 "tccpp.c"
                p_248++;
                # 2076 "tccpp.c"
                c_245=*p_248;
                # 2076 "tccpp.c"
                # 2076 "tccpp.c"
                if(_if_conditional363=c_245==92,                _if_conditional363) {
                    # 2076 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2076 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2085 "tccpp.c"
            # 2077 "tccpp.c"
            if(_if_conditional364=c_245==39||c_245==34,            _if_conditional364) {
                # 2078 "tccpp.c"
                is_long_246=1;
                # 2079 "tccpp.c"
                goto str_const;
            }
            else {
                # 2081 "tccpp.c"
                cstr_free(&tokcstr);
                # 2082 "tccpp.c"
                cstr_ccat(&tokcstr,76);
                # 2083 "tccpp.c"
                goto parse_ident_slow;
            }
        }
        # 2086 "tccpp.c"
        break;
        # 2087 "tccpp.c"
        case 48:
        # 2087 "tccpp.c"
        case 49:
        # 2087 "tccpp.c"
        case 50:
        # 2088 "tccpp.c"
        case 51:
        # 2088 "tccpp.c"
        case 52:
        # 2088 "tccpp.c"
        case 53:
        # 2088 "tccpp.c"
        case 54:
        # 2089 "tccpp.c"
        case 55:
        # 2089 "tccpp.c"
        case 56:
        # 2091 "tccpp.c"
        case 57:
        # 2091 "tccpp.c"
        cstr_free(&tokcstr);
        # 2095 "tccpp.c"
        parse_num:
        # 2105 "tccpp.c"
        for(        ;        ;        ){
            # 2096 "tccpp.c"
            t_244=c_245;
            # 2097 "tccpp.c"
            cstr_ccat(&tokcstr,c_245);
            # 2098 "tccpp.c"
            {
                # 2098 "tccpp.c"
                p_248++;
                # 2098 "tccpp.c"
                c_245=*p_248;
                # 2098 "tccpp.c"
                # 2098 "tccpp.c"
                if(_if_conditional365=c_245==92,                _if_conditional365) {
                    # 2098 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2098 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2103 "tccpp.c"
            # 2101 "tccpp.c"
            if(_if_conditional366=!(isnum(c_245)||isid(c_245)||c_245==46||((c_245==43||c_245==45)&&(t_244==101||t_244==69||t_244==112||t_244==80))),            _if_conditional366) {
                # 2102 "tccpp.c"
                break;
            }
        }
        # 2105 "tccpp.c"
        cstr_ccat(&tokcstr,0);
        # 2106 "tccpp.c"
        tokc.cstr=&tokcstr;
        # 2107 "tccpp.c"
        tok=206;
        # 2108 "tccpp.c"
        break;
        # 2111 "tccpp.c"
        case 46:
        # 2111 "tccpp.c"
        {
            # 2111 "tccpp.c"
            p_248++;
            # 2111 "tccpp.c"
            c_245=*p_248;
            # 2111 "tccpp.c"
            # 2111 "tccpp.c"
            if(_if_conditional367=c_245==92,            _if_conditional367) {
                # 2111 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2111 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2125 "tccpp.c"
        # 2112 "tccpp.c"
        if(_if_conditional368=isnum(c_245),        _if_conditional368) {
            # 2113 "tccpp.c"
            cstr_free(&tokcstr);
            # 2114 "tccpp.c"
            cstr_ccat(&tokcstr,46);
            # 2115 "tccpp.c"
            goto parse_num;
        }
        # 2116 "tccpp.c"
        else if(_elif_conditional86=c_245==46,        _elif_conditional86) {
            # 2117 "tccpp.c"
            {
                # 2117 "tccpp.c"
                p_248++;
                # 2117 "tccpp.c"
                c_245=*p_248;
                # 2117 "tccpp.c"
                # 2117 "tccpp.c"
                if(_if_conditional369=c_245==92,                _if_conditional369) {
                    # 2117 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2117 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2120 "tccpp.c"
            # 2118 "tccpp.c"
            if(_if_conditional370=c_245!=46,            _if_conditional370) {
                # 2119 "tccpp.c"
                expect("'.'");
            }
            # 2120 "tccpp.c"
            {
                # 2120 "tccpp.c"
                p_248++;
                # 2120 "tccpp.c"
                c_245=*p_248;
                # 2120 "tccpp.c"
                # 2120 "tccpp.c"
                if(_if_conditional371=c_245==92,                _if_conditional371) {
                    # 2120 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2120 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2121 "tccpp.c"
            tok=204;
        }
        else {
            # 2123 "tccpp.c"
            tok=46;
        }
        # 2125 "tccpp.c"
        break;
        # 2127 "tccpp.c"
        case 39:
        # 2128 "tccpp.c"
        case 34:
        # 2128 "tccpp.c"
        is_long_246=0;
        # 2130 "tccpp.c"
        str_const:
        # 2172 "tccpp.c"
        {
            # 2131 "tccpp.c"
            # 2132 "tccpp.c"
            # 2134 "tccpp.c"
            sep_255=c_245;
            # 2137 "tccpp.c"
            cstr_new(&str_254);
            # 2138 "tccpp.c"
            p_248=parse_pp_string(p_248,sep_255,&str_254);
            # 2139 "tccpp.c"
            cstr_ccat(&str_254,0);
            # 2142 "tccpp.c"
            cstr_free(&tokcstr);
            # 2143 "tccpp.c"
            parse_escape_string(&tokcstr,str_254.data,is_long_246);
            # 2144 "tccpp.c"
            cstr_free(&str_254);
            # 2171 "tccpp.c"
            # 2146 "tccpp.c"
            if(_if_conditional372=sep_255==39,            _if_conditional372) {
                # 2147 "tccpp.c"
                # 2152 "tccpp.c"
                # 2149 "tccpp.c"
                if(_if_conditional373=!is_long_246,                _if_conditional373) {
                    # 2150 "tccpp.c"
                    char_size_256=1;
                }
                else {
                    # 2152 "tccpp.c"
                    char_size_256=sizeof(int);
                }
                # 2154 "tccpp.c"
                # 2153 "tccpp.c"
                if(_if_conditional374=tokcstr.size<=char_size_256,                _if_conditional374) {
                    # 2154 "tccpp.c"
                    error("empty character constant");
                }
                # 2156 "tccpp.c"
                # 2155 "tccpp.c"
                if(_if_conditional375=tokcstr.size>2*char_size_256,                _if_conditional375) {
                    # 2156 "tccpp.c"
                    warning("multi-character character constant");
                }
                # 2164 "tccpp.c"
                # 2157 "tccpp.c"
                if(_if_conditional376=!is_long_246,                _if_conditional376) {
                    # 2158 "tccpp.c"
                    tokc.i=*(char*)tokcstr.data;
                    # 2159 "tccpp.c"
                    tok=180;
                }
                else {
                    # 2161 "tccpp.c"
                    tokc.i=*(int*)tokcstr.data;
                    # 2162 "tccpp.c"
                    tok=183;
                }
            }
            else {
                # 2165 "tccpp.c"
                tokc.cstr=&tokcstr;
                # 2169 "tccpp.c"
                # 2166 "tccpp.c"
                if(_if_conditional377=!is_long_246,                _if_conditional377) {
                    # 2167 "tccpp.c"
                    tok=181;
                }
                else {
                    # 2169 "tccpp.c"
                    tok=184;
                }
            }
            come_call_finalizer3((&str_254),CString_finalize, 1, 0, 0, 0, (void*)0);
        }
        # 2172 "tccpp.c"
        break;
        # 2175 "tccpp.c"
        case 60:
        # 2175 "tccpp.c"
        {
            # 2175 "tccpp.c"
            p_248++;
            # 2175 "tccpp.c"
            c_245=*p_248;
            # 2175 "tccpp.c"
            # 2175 "tccpp.c"
            if(_if_conditional378=c_245==92,            _if_conditional378) {
                # 2175 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2175 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2190 "tccpp.c"
        # 2176 "tccpp.c"
        if(_if_conditional379=c_245==61,        _if_conditional379) {
            # 2177 "tccpp.c"
            p_248++;
            # 2178 "tccpp.c"
            tok=158;
        }
        # 2179 "tccpp.c"
        else if(_elif_conditional87=c_245==60,        _elif_conditional87) {
            # 2180 "tccpp.c"
            {
                # 2180 "tccpp.c"
                p_248++;
                # 2180 "tccpp.c"
                c_245=*p_248;
                # 2180 "tccpp.c"
                # 2180 "tccpp.c"
                if(_if_conditional380=c_245==92,                _if_conditional380) {
                    # 2180 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2180 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2187 "tccpp.c"
            # 2181 "tccpp.c"
            if(_if_conditional381=c_245==61,            _if_conditional381) {
                # 2182 "tccpp.c"
                p_248++;
                # 2183 "tccpp.c"
                tok=129;
            }
            else {
                # 2185 "tccpp.c"
                tok=1;
            }
        }
        else {
            # 2188 "tccpp.c"
            tok=156;
        }
        # 2190 "tccpp.c"
        break;
        # 2193 "tccpp.c"
        case 62:
        # 2193 "tccpp.c"
        {
            # 2193 "tccpp.c"
            p_248++;
            # 2193 "tccpp.c"
            c_245=*p_248;
            # 2193 "tccpp.c"
            # 2193 "tccpp.c"
            if(_if_conditional382=c_245==92,            _if_conditional382) {
                # 2193 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2193 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2208 "tccpp.c"
        # 2194 "tccpp.c"
        if(_if_conditional383=c_245==61,        _if_conditional383) {
            # 2195 "tccpp.c"
            p_248++;
            # 2196 "tccpp.c"
            tok=157;
        }
        # 2197 "tccpp.c"
        else if(_elif_conditional88=c_245==62,        _elif_conditional88) {
            # 2198 "tccpp.c"
            {
                # 2198 "tccpp.c"
                p_248++;
                # 2198 "tccpp.c"
                c_245=*p_248;
                # 2198 "tccpp.c"
                # 2198 "tccpp.c"
                if(_if_conditional384=c_245==92,                _if_conditional384) {
                    # 2198 "tccpp.c"
                    c_245=handle_stray1(p_248);
                    # 2198 "tccpp.c"
                    p_248=file->buf_ptr;
                }
            }
            # 2205 "tccpp.c"
            # 2199 "tccpp.c"
            if(_if_conditional385=c_245==61,            _if_conditional385) {
                # 2200 "tccpp.c"
                p_248++;
                # 2201 "tccpp.c"
                tok=130;
            }
            else {
                # 2203 "tccpp.c"
                tok=2;
            }
        }
        else {
            # 2206 "tccpp.c"
            tok=159;
        }
        # 2208 "tccpp.c"
        break;
        # 2211 "tccpp.c"
        case 38:
        # 2211 "tccpp.c"
        {
            # 2211 "tccpp.c"
            p_248++;
            # 2211 "tccpp.c"
            c_245=*p_248;
            # 2211 "tccpp.c"
            # 2211 "tccpp.c"
            if(_if_conditional386=c_245==92,            _if_conditional386) {
                # 2211 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2211 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2221 "tccpp.c"
        # 2212 "tccpp.c"
        if(_if_conditional387=c_245==38,        _if_conditional387) {
            # 2213 "tccpp.c"
            p_248++;
            # 2214 "tccpp.c"
            tok=160;
        }
        # 2215 "tccpp.c"
        else if(_elif_conditional89=c_245==61,        _elif_conditional89) {
            # 2216 "tccpp.c"
            p_248++;
            # 2217 "tccpp.c"
            tok=166;
        }
        else {
            # 2219 "tccpp.c"
            tok=38;
        }
        # 2221 "tccpp.c"
        break;
        # 2224 "tccpp.c"
        case 124:
        # 2224 "tccpp.c"
        {
            # 2224 "tccpp.c"
            p_248++;
            # 2224 "tccpp.c"
            c_245=*p_248;
            # 2224 "tccpp.c"
            # 2224 "tccpp.c"
            if(_if_conditional388=c_245==92,            _if_conditional388) {
                # 2224 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2224 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2234 "tccpp.c"
        # 2225 "tccpp.c"
        if(_if_conditional389=c_245==124,        _if_conditional389) {
            # 2226 "tccpp.c"
            p_248++;
            # 2227 "tccpp.c"
            tok=161;
        }
        # 2228 "tccpp.c"
        else if(_elif_conditional90=c_245==61,        _elif_conditional90) {
            # 2229 "tccpp.c"
            p_248++;
            # 2230 "tccpp.c"
            tok=252;
        }
        else {
            # 2232 "tccpp.c"
            tok=124;
        }
        # 2234 "tccpp.c"
        break;
        # 2237 "tccpp.c"
        case 43:
        # 2237 "tccpp.c"
        {
            # 2237 "tccpp.c"
            p_248++;
            # 2237 "tccpp.c"
            c_245=*p_248;
            # 2237 "tccpp.c"
            # 2237 "tccpp.c"
            if(_if_conditional390=c_245==92,            _if_conditional390) {
                # 2237 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2237 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2247 "tccpp.c"
        # 2238 "tccpp.c"
        if(_if_conditional391=c_245==43,        _if_conditional391) {
            # 2239 "tccpp.c"
            p_248++;
            # 2240 "tccpp.c"
            tok=164;
        }
        # 2241 "tccpp.c"
        else if(_elif_conditional91=c_245==61,        _elif_conditional91) {
            # 2242 "tccpp.c"
            p_248++;
            # 2243 "tccpp.c"
            tok=171;
        }
        else {
            # 2245 "tccpp.c"
            tok=43;
        }
        # 2247 "tccpp.c"
        break;
        # 2250 "tccpp.c"
        case 45:
        # 2250 "tccpp.c"
        {
            # 2250 "tccpp.c"
            p_248++;
            # 2250 "tccpp.c"
            c_245=*p_248;
            # 2250 "tccpp.c"
            # 2250 "tccpp.c"
            if(_if_conditional392=c_245==92,            _if_conditional392) {
                # 2250 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2250 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2263 "tccpp.c"
        # 2251 "tccpp.c"
        if(_if_conditional393=c_245==45,        _if_conditional393) {
            # 2252 "tccpp.c"
            p_248++;
            # 2253 "tccpp.c"
            tok=162;
        }
        # 2254 "tccpp.c"
        else if(_elif_conditional92=c_245==61,        _elif_conditional92) {
            # 2255 "tccpp.c"
            p_248++;
            # 2256 "tccpp.c"
            tok=173;
        }
        # 2257 "tccpp.c"
        else if(_elif_conditional93=c_245==62,        _elif_conditional93) {
            # 2258 "tccpp.c"
            p_248++;
            # 2259 "tccpp.c"
            tok=203;
        }
        else {
            # 2261 "tccpp.c"
            tok=45;
        }
        # 2263 "tccpp.c"
        break;
        # 2265 "tccpp.c"
        case 33:
        # 2265 "tccpp.c"
        {
            # 2265 "tccpp.c"
            p_248++;
            # 2265 "tccpp.c"
            c_245=*p_248;
            # 2265 "tccpp.c"
            # 2265 "tccpp.c"
            if(_if_conditional394=c_245==92,            _if_conditional394) {
                # 2265 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2265 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2265 "tccpp.c"
        # 2265 "tccpp.c"
        if(_if_conditional395=c_245==61,        _if_conditional395) {
            # 2265 "tccpp.c"
            p_248++;
            # 2265 "tccpp.c"
            tok=149;
        }
        else {
            # 2265 "tccpp.c"
            tok=33;
        }
        # 2265 "tccpp.c"
        break;
        # 2266 "tccpp.c"
        case 61:
        # 2266 "tccpp.c"
        {
            # 2266 "tccpp.c"
            p_248++;
            # 2266 "tccpp.c"
            c_245=*p_248;
            # 2266 "tccpp.c"
            # 2266 "tccpp.c"
            if(_if_conditional396=c_245==92,            _if_conditional396) {
                # 2266 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2266 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2266 "tccpp.c"
        # 2266 "tccpp.c"
        if(_if_conditional397=c_245==61,        _if_conditional397) {
            # 2266 "tccpp.c"
            p_248++;
            # 2266 "tccpp.c"
            tok=148;
        }
        else {
            # 2266 "tccpp.c"
            tok=61;
        }
        # 2266 "tccpp.c"
        break;
        # 2267 "tccpp.c"
        case 42:
        # 2267 "tccpp.c"
        {
            # 2267 "tccpp.c"
            p_248++;
            # 2267 "tccpp.c"
            c_245=*p_248;
            # 2267 "tccpp.c"
            # 2267 "tccpp.c"
            if(_if_conditional398=c_245==92,            _if_conditional398) {
                # 2267 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2267 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2267 "tccpp.c"
        # 2267 "tccpp.c"
        if(_if_conditional399=c_245==61,        _if_conditional399) {
            # 2267 "tccpp.c"
            p_248++;
            # 2267 "tccpp.c"
            tok=170;
        }
        else {
            # 2267 "tccpp.c"
            tok=42;
        }
        # 2267 "tccpp.c"
        break;
        # 2268 "tccpp.c"
        case 37:
        # 2268 "tccpp.c"
        {
            # 2268 "tccpp.c"
            p_248++;
            # 2268 "tccpp.c"
            c_245=*p_248;
            # 2268 "tccpp.c"
            # 2268 "tccpp.c"
            if(_if_conditional400=c_245==92,            _if_conditional400) {
                # 2268 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2268 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2268 "tccpp.c"
        # 2268 "tccpp.c"
        if(_if_conditional401=c_245==61,        _if_conditional401) {
            # 2268 "tccpp.c"
            p_248++;
            # 2268 "tccpp.c"
            tok=165;
        }
        else {
            # 2268 "tccpp.c"
            tok=37;
        }
        # 2268 "tccpp.c"
        break;
        # 2269 "tccpp.c"
        case 94:
        # 2269 "tccpp.c"
        {
            # 2269 "tccpp.c"
            p_248++;
            # 2269 "tccpp.c"
            c_245=*p_248;
            # 2269 "tccpp.c"
            # 2269 "tccpp.c"
            if(_if_conditional402=c_245==92,            _if_conditional402) {
                # 2269 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2269 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2269 "tccpp.c"
        # 2269 "tccpp.c"
        if(_if_conditional403=c_245==61,        _if_conditional403) {
            # 2269 "tccpp.c"
            p_248++;
            # 2269 "tccpp.c"
            tok=222;
        }
        else {
            # 2269 "tccpp.c"
            tok=94;
        }
        # 2269 "tccpp.c"
        break;
        # 2273 "tccpp.c"
        case 47:
        # 2273 "tccpp.c"
        {
            # 2273 "tccpp.c"
            p_248++;
            # 2273 "tccpp.c"
            c_245=*p_248;
            # 2273 "tccpp.c"
            # 2273 "tccpp.c"
            if(_if_conditional404=c_245==92,            _if_conditional404) {
                # 2273 "tccpp.c"
                c_245=handle_stray1(p_248);
                # 2273 "tccpp.c"
                p_248=file->buf_ptr;
            }
        }
        # 2286 "tccpp.c"
        # 2274 "tccpp.c"
        if(_if_conditional405=c_245==42,        _if_conditional405) {
            # 2275 "tccpp.c"
            p_248=parse_comment(p_248);
            # 2276 "tccpp.c"
            goto redo_no_start;
        }
        # 2277 "tccpp.c"
        else if(_elif_conditional94=c_245==47,        _elif_conditional94) {
            # 2278 "tccpp.c"
            p_248=parse_line_comment(p_248);
            # 2279 "tccpp.c"
            goto redo_no_start;
        }
        # 2280 "tccpp.c"
        else if(_elif_conditional95=c_245==61,        _elif_conditional95) {
            # 2281 "tccpp.c"
            p_248++;
            # 2282 "tccpp.c"
            tok=175;
        }
        else {
            # 2284 "tccpp.c"
            tok=47;
        }
        # 2286 "tccpp.c"
        break;
        # 2290 "tccpp.c"
        case 40:
        # 2291 "tccpp.c"
        case 41:
        # 2292 "tccpp.c"
        case 91:
        # 2293 "tccpp.c"
        case 93:
        # 2294 "tccpp.c"
        case 123:
        # 2295 "tccpp.c"
        case 125:
        # 2296 "tccpp.c"
        case 44:
        # 2297 "tccpp.c"
        case 59:
        # 2298 "tccpp.c"
        case 58:
        # 2299 "tccpp.c"
        case 63:
        # 2300 "tccpp.c"
        case 126:
        # 2301 "tccpp.c"
        case 36:
        # 2302 "tccpp.c"
        case 64:
        # 2302 "tccpp.c"
        tok=c_245;
        # 2303 "tccpp.c"
        p_248++;
        # 2304 "tccpp.c"
        break;
        # 2306 "tccpp.c"
        default:
        # 2306 "tccpp.c"
        error("unrecognized character \\x%02x",c_245);
        # 2307 "tccpp.c"
        break;
    }
    # 2309 "tccpp.c"
    tok_flags=0;
    # 2311 "tccpp.c"
    keep_tok_flags:
    # 2311 "tccpp.c"
    file->buf_ptr=p_248;
}
static inline int* macro_twosharps(const int* macro_str){
void* __result_obj__;
struct TokenSym* ts_284;
const int* ptr_285;
const int* saved_macro_ptr_286;
int t_287;
const char* p1_288;
const char* p2_289;
union CValue cval_290;
struct TokenString macro_str1_291;
struct CString cstr_292;
ptr_285=macro_str;
_Bool _if_conditional436;
_Bool _if_conditional437;
int* __result96__;
saved_macro_ptr_286=macro_ptr;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _while_condtional41;
_Bool _if_conditional440;
p1_288=get_tok_str(tok,&tokc);
p2_289=get_tok_str(t_287,&cval_290);
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
const char* p_293;
int c_294;
p_293=p2_289;
_Bool _if_conditional444;
_Bool _if_conditional445;
const char* str_295=cstr_292.data;
const unsigned char* q_296;
_Bool _if_conditional446;
_Bool _elif_conditional100;
_Bool _elif_conditional101;
q_296=tok_two_chars;
_Bool _if_conditional447;
_Bool _if_conditional448;
p1_288=get_tok_str(tok,&tokc);
p2_289=get_tok_str(t_287,&cval_290);
int* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_284, 0, sizeof(struct TokenSym*));
memset(&t_287, 0, sizeof(int));
memset(&cval_290, 0, sizeof(union CValue));
memset(&macro_str1_291, 0, sizeof(struct TokenString));
memset(&cstr_292, 0, sizeof(struct CString));
memset(&c_294, 0, sizeof(int));
    # 2601 "tccpp.c"
    # 2602 "tccpp.c"
    # 2603 "tccpp.c"
    # 2604 "tccpp.c"
    # 2605 "tccpp.c"
    # 2606 "tccpp.c"
    # 2607 "tccpp.c"
    # 2620 "tccpp.c"
    for(    ;    ;    ){
        # 2611 "tccpp.c"
        {
            # 2611 "tccpp.c"
            t_287=*ptr_285++;
            # 2611 "tccpp.c"
            switch (t_287) {
                # 2611 "tccpp.c"
                case 179:
                # 2611 "tccpp.c"
                case 200:
                # 2611 "tccpp.c"
                case 180:
                # 2611 "tccpp.c"
                case 183:
                # 2611 "tccpp.c"
                case 185:
                # 2611 "tccpp.c"
                case 186:
                # 2611 "tccpp.c"
                cval_290.tab[0]=*ptr_285++;
                # 2611 "tccpp.c"
                break;
                # 2611 "tccpp.c"
                case 181:
                # 2611 "tccpp.c"
                case 184:
                # 2611 "tccpp.c"
                case 206:
                # 2611 "tccpp.c"
                cval_290.cstr=(struct CString*)ptr_285;
                # 2611 "tccpp.c"
                cval_290.cstr->data=(char*)ptr_285+sizeof(struct CString);
                # 2611 "tccpp.c"
                ptr_285+=(sizeof(struct CString)+cval_290.cstr->size+3)>>2;
                # 2611 "tccpp.c"
                break;
                # 2611 "tccpp.c"
                case 192:
                # 2611 "tccpp.c"
                case 201:
                # 2611 "tccpp.c"
                case 202:
                # 2611 "tccpp.c"
                cval_290.tab[0]=ptr_285[0];
                # 2611 "tccpp.c"
                cval_290.tab[1]=ptr_285[1];
                # 2611 "tccpp.c"
                ptr_285+=2;
                # 2611 "tccpp.c"
                break;
                # 2611 "tccpp.c"
                case 193:
                # 2611 "tccpp.c"
                cval_290.tab[0]=ptr_285[0];
                # 2611 "tccpp.c"
                cval_290.tab[1]=ptr_285[1];
                # 2611 "tccpp.c"
                cval_290.tab[2]=ptr_285[2];
                # 2611 "tccpp.c"
                cval_290.tab[3]=ptr_285[3];
                # 2611 "tccpp.c"
                ptr_285+=16/4;
                # 2611 "tccpp.c"
                break;
                # 2611 "tccpp.c"
                default:
                # 2611 "tccpp.c"
                break;
            }
        }
        # 2613 "tccpp.c"
        # 2612 "tccpp.c"
        if(_if_conditional436=t_287==182,        _if_conditional436) {
            # 2613 "tccpp.c"
            break;
        }
        # 2617 "tccpp.c"
        # 2615 "tccpp.c"
        if(_if_conditional437=t_287==0,        _if_conditional437) {
            # 2616 "tccpp.c"
            __result96__ = __result_obj__ = ((void*)0);
            come_call_finalizer3((&macro_str1_291),TokenString_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3((&cstr_292),CString_finalize, 1, 0, 0, 0, (void*)0);
            return __result96__;
        }
    }
    # 2620 "tccpp.c"
    cstr_new(&cstr_292);
    # 2621 "tccpp.c"
    tok_str_new(&macro_str1_291);
    # 2622 "tccpp.c"
    # 2624 "tccpp.c"
    macro_ptr=(int*)macro_str;
    # 2716 "tccpp.c"
    for(    ;    ;    ){
        # 2626 "tccpp.c"
        next_nomacro_spc();
        # 2628 "tccpp.c"
        # 2627 "tccpp.c"
        if(_if_conditional438=tok==0,        _if_conditional438) {
            # 2628 "tccpp.c"
            break;
        }
        # 2630 "tccpp.c"
        # 2629 "tccpp.c"
        if(_if_conditional439=tok==182,        _if_conditional439) {
            # 2630 "tccpp.c"
            continue;
        }
        # 2714 "tccpp.c"
        while(_while_condtional41=*macro_ptr==182,        _while_condtional41) {
            # 2632 "tccpp.c"
            t_287=*++macro_ptr;
            # 2713 "tccpp.c"
            # 2633 "tccpp.c"
            if(_if_conditional440=t_287&&t_287!=182,            _if_conditional440) {
                # 2634 "tccpp.c"
                {
                    # 2634 "tccpp.c"
                    t_287=*macro_ptr++;
                    # 2634 "tccpp.c"
                    switch (t_287) {
                        # 2634 "tccpp.c"
                        case 179:
                        # 2634 "tccpp.c"
                        case 200:
                        # 2634 "tccpp.c"
                        case 180:
                        # 2634 "tccpp.c"
                        case 183:
                        # 2634 "tccpp.c"
                        case 185:
                        # 2634 "tccpp.c"
                        case 186:
                        # 2634 "tccpp.c"
                        cval_290.tab[0]=*macro_ptr++;
                        # 2634 "tccpp.c"
                        break;
                        # 2634 "tccpp.c"
                        case 181:
                        # 2634 "tccpp.c"
                        case 184:
                        # 2634 "tccpp.c"
                        case 206:
                        # 2634 "tccpp.c"
                        cval_290.cstr=(struct CString*)macro_ptr;
                        # 2634 "tccpp.c"
                        cval_290.cstr->data=(char*)macro_ptr+sizeof(struct CString);
                        # 2634 "tccpp.c"
                        macro_ptr+=(sizeof(struct CString)+cval_290.cstr->size+3)>>2;
                        # 2634 "tccpp.c"
                        break;
                        # 2634 "tccpp.c"
                        case 192:
                        # 2634 "tccpp.c"
                        case 201:
                        # 2634 "tccpp.c"
                        case 202:
                        # 2634 "tccpp.c"
                        cval_290.tab[0]=macro_ptr[0];
                        # 2634 "tccpp.c"
                        cval_290.tab[1]=macro_ptr[1];
                        # 2634 "tccpp.c"
                        macro_ptr+=2;
                        # 2634 "tccpp.c"
                        break;
                        # 2634 "tccpp.c"
                        case 193:
                        # 2634 "tccpp.c"
                        cval_290.tab[0]=macro_ptr[0];
                        # 2634 "tccpp.c"
                        cval_290.tab[1]=macro_ptr[1];
                        # 2634 "tccpp.c"
                        cval_290.tab[2]=macro_ptr[2];
                        # 2634 "tccpp.c"
                        cval_290.tab[3]=macro_ptr[3];
                        # 2634 "tccpp.c"
                        macro_ptr+=16/4;
                        # 2634 "tccpp.c"
                        break;
                        # 2634 "tccpp.c"
                        default:
                        # 2634 "tccpp.c"
                        break;
                    }
                }
                # 2637 "tccpp.c"
                cstr_free(&cstr_292);
                # 2638 "tccpp.c"
                # 2639 "tccpp.c"
                cstr_cat(&cstr_292,p1_288);
                # 2640 "tccpp.c"
                # 2641 "tccpp.c"
                cstr_cat(&cstr_292,p2_289);
                # 2642 "tccpp.c"
                cstr_ccat(&cstr_292,0);
                # 2712 "tccpp.c"
                # 2645 "tccpp.c"
                if(_if_conditional441=(tok>=256||tok==206)&&(t_287>=256||t_287==206),                _if_conditional441) {
                    # 2674 "tccpp.c"
                    # 2646 "tccpp.c"
                    if(_if_conditional442=tok==206,                    _if_conditional442) {
                        # 2650 "tccpp.c"
                        cstr_free(&tokcstr);
                        # 2651 "tccpp.c"
                        tokcstr=cstr_292;
                        # 2652 "tccpp.c"
                        cstr_new(&cstr_292);
                        # 2653 "tccpp.c"
                        tokc.cstr=&tokcstr;
                    }
                    else {
                        # 2671 "tccpp.c"
                        # 2657 "tccpp.c"
                        if(_if_conditional443=t_287==206,                        _if_conditional443) {
                            # 2658 "tccpp.c"
                            # 2659 "tccpp.c"
                            # 2661 "tccpp.c"
                            # 2670 "tccpp.c"
                            for(                            ;                            ;                            ){
                                # 2663 "tccpp.c"
                                c_294=*p_293;
                                # 2665 "tccpp.c"
                                # 2664 "tccpp.c"
                                if(_if_conditional444=c_294==0,                                _if_conditional444) {
                                    # 2665 "tccpp.c"
                                    break;
                                }
                                # 2666 "tccpp.c"
                                p_293++;
                                # 2669 "tccpp.c"
                                # 2667 "tccpp.c"
                                if(_if_conditional445=!isnum(c_294)&&!isid(c_294),                                _if_conditional445) {
                                    # 2668 "tccpp.c"
                                    goto error_pasting;
                                }
                            }
                        }
                        # 2671 "tccpp.c"
                        ts_284=tok_alloc(cstr_292.data,strlen(cstr_292.data));
                        # 2672 "tccpp.c"
                        tok=ts_284->tok;
                    }
                }
                else {
                    # 2675 "tccpp.c"
                    # 2676 "tccpp.c"
                    # 2711 "tccpp.c"
                    # 2680 "tccpp.c"
                    if(_if_conditional446=!strcmp(str_295,">>="),                    _if_conditional446) {
                        # 2681 "tccpp.c"
                        tok=130;
                    }
                    # 2682 "tccpp.c"
                    else if(_elif_conditional100=!strcmp(str_295,"<<="),                    _elif_conditional100) {
                        # 2683 "tccpp.c"
                        tok=129;
                    }
                    # 2684 "tccpp.c"
                    else if(_elif_conditional101=strlen(str_295)==2,                    _elif_conditional101) {
                        # 2686 "tccpp.c"
                        # 2694 "tccpp.c"
                        for(                        ;                        ;                        ){
                            # 2689 "tccpp.c"
                            # 2688 "tccpp.c"
                            if(_if_conditional447=!*q_296,                            _if_conditional447) {
                                # 2689 "tccpp.c"
                                goto error_pasting;
                            }
                            # 2691 "tccpp.c"
                            # 2690 "tccpp.c"
                            if(_if_conditional448=q_296[0]==str_295[0]&&q_296[1]==str_295[1],                            _if_conditional448) {
                                # 2691 "tccpp.c"
                                break;
                            }
                            # 2692 "tccpp.c"
                            q_296+=3;
                        }
                        # 2694 "tccpp.c"
                        tok=q_296[2];
                    }
                    else {
                        # 2699 "tccpp.c"
                        error_pasting:
                        # 2699 "tccpp.c"
                        cstr_free(&cstr_292);
                        # 2700 "tccpp.c"
                        # 2701 "tccpp.c"
                        cstr_cat(&cstr_292,p1_288);
                        # 2702 "tccpp.c"
                        cstr_ccat(&cstr_292,0);
                        # 2703 "tccpp.c"
                        # 2704 "tccpp.c"
                        warning("pasting \"%s\" and \"%s\" does not give a valid preprocessing token",cstr_292.data,p2_289);
                        # 2706 "tccpp.c"
                        tok_str_add2(&macro_str1_291,tok,&tokc);
                        # 2708 "tccpp.c"
                        tok=t_287;
                        # 2709 "tccpp.c"
                        tokc=cval_290;
                    }
                }
            }
        }
        # 2714 "tccpp.c"
        tok_str_add2(&macro_str1_291,tok,&tokc);
    }
    # 2716 "tccpp.c"
    macro_ptr=(int*)saved_macro_ptr_286;
    # 2717 "tccpp.c"
    cstr_free(&cstr_292);
    # 2718 "tccpp.c"
    tok_str_add(&macro_str1_291,0);
    # 2719 "tccpp.c"
    __result97__ = __result_obj__ = macro_str1_291.str;
    come_call_finalizer3((&macro_str1_291),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_292),CString_finalize, 1, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer3((&macro_str1_291),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_292),CString_finalize, 1, 0, 0, 0, (void*)0);
}
static inline void unget_tok(int last_tok){
void* __result_obj__;
int i_309;
int n_310;
int* q_311;
memset(&__result_obj__, 0, sizeof(void*));
memset(&q_311, 0, sizeof(int*));
    # 2835 "tccpp.c"
    # 2836 "tccpp.c"
    # 2837 "tccpp.c"
    unget_saved_macro_ptr=macro_ptr;
    # 2838 "tccpp.c"
    unget_buffer_enabled=1;
    # 2839 "tccpp.c"
    q_311=unget_saved_buffer;
    # 2840 "tccpp.c"
    macro_ptr=q_311;
    # 2841 "tccpp.c"
    *q_311++=tok;
    # 2842 "tccpp.c"
    n_310=tok_ext_size(tok)-1;
    # 2844 "tccpp.c"
    for(    i_309=0;    i_309<n_310;    i_309++    ){
        # 2844 "tccpp.c"
        *q_311++=tokc.tab[i_309];
    }
    # 2845 "tccpp.c"
    *q_311=0;
    # 2846 "tccpp.c"
    tok=last_tok;
}
static inline int is_null_pointer(struct SValue* p){
void* __result_obj__;
_Bool _if_conditional530;
int __result113__;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1195 "tccgen.c"
    # 1194 "tccgen.c"
    if(_if_conditional530=(p->r&(255|256|512))!=240,    _if_conditional530) {
        # 1195 "tccgen.c"
        __result113__ = 0;
        return __result113__;
    }
    # 1197 "tccgen.c"
    __result114__ = ((p->type.t&15)==0&&p->c.i==0)||((p->type.t&15)==12&&p->c.ll==0);
    return __result114__;
}
static inline int is_integer_btype(int bt){
void* __result_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1203 "tccgen.c"
    __result115__ = (bt==1||bt==2||bt==0||bt==12);
    return __result115__;
}
static inline struct CType* pointed_type(struct CType* type){
void* __result_obj__;
struct CType* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1722 "tccgen.c"
    __result124__ = __result_obj__ = &type->ref->type;
    return __result124__;
}
static inline void convert_parameter_type(struct CType* pt){
void* __result_obj__;
_Bool _if_conditional679;
memset(&__result_obj__, 0, sizeof(void*));
    # 2667 "tccgen.c"
    pt->t&=~(2048|4096);
    # 2669 "tccgen.c"
    pt->t&=~32;
    # 2673 "tccgen.c"
    # 2670 "tccgen.c"
    if(_if_conditional679=(pt->t&15)==6,    _if_conditional679) {
        # 2671 "tccgen.c"
        mk_pointer(pt);
    }
}

// body function



















void g(int c){
void* __result_obj__;
int ind1_3;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ind1_3, 0, sizeof(int));
    # 112 "x86_64-gen.c"
    # 113 "x86_64-gen.c"
    ind1_3=ind+1;
    # 115 "x86_64-gen.c"
    # 114 "x86_64-gen.c"
    if(_if_conditional1=ind1_3>cur_text_section->data_allocated,    _if_conditional1) {
        # 115 "x86_64-gen.c"
        section_realloc(cur_text_section,ind1_3);
    }
    # 116 "x86_64-gen.c"
    cur_text_section->data[ind]=c;
    # 117 "x86_64-gen.c"
    ind=ind1_3;
}

void o(unsigned int c){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 126 "x86_64-gen.c"
    while(c) {
        # 123 "x86_64-gen.c"
        g(c);
        # 124 "x86_64-gen.c"
        c=c>>8;
    }
}

void gen_le32(int c){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 130 "x86_64-gen.c"
    g(c);
    # 131 "x86_64-gen.c"
    g(c>>8);
    # 132 "x86_64-gen.c"
    g(c>>16);
    # 133 "x86_64-gen.c"
    g(c>>24);
}

void gen_le64(long c){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 138 "x86_64-gen.c"
    g(c);
    # 139 "x86_64-gen.c"
    g(c>>8);
    # 140 "x86_64-gen.c"
    g(c>>16);
    # 141 "x86_64-gen.c"
    g(c>>24);
    # 142 "x86_64-gen.c"
    g(c>>32);
    # 143 "x86_64-gen.c"
    g(c>>40);
    # 144 "x86_64-gen.c"
    g(c>>48);
    # 145 "x86_64-gen.c"
    g(c>>56);
}

void gsym_addr(int t, int a){
void* __result_obj__;
int n_4;
int* ptr_5;
memset(&__result_obj__, 0, sizeof(void*));
    # 151 "x86_64-gen.c"
    # 158 "x86_64-gen.c"
    while(t) {
        # 153 "x86_64-gen.c"
        ptr_5=(int*)(cur_text_section->data+t);
        # 154 "x86_64-gen.c"
        n_4=*ptr_5;
        # 155 "x86_64-gen.c"
        *ptr_5=a-t-4;
        # 156 "x86_64-gen.c"
        t=n_4;
    }
}

void gsym(int t){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 162 "x86_64-gen.c"
    gsym_addr(t,ind);
}

static int is64_type(int t){
void* __result_obj__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    # 173 "x86_64-gen.c"
    __result20__ = ((t&15)==4||(t&15)==6||(t&15)==12);
    return __result20__;
}

static int is_sse_float(int t){
void* __result_obj__;
int bt_6;
int __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&bt_6, 0, sizeof(int));
    # 177 "x86_64-gen.c"
    # 178 "x86_64-gen.c"
    bt_6=t&15;
    # 179 "x86_64-gen.c"
    __result21__ = bt_6==9||bt_6==8;
    return __result21__;
}

static int oad(int c, int s){
void* __result_obj__;
int ind1_7;
_Bool _if_conditional2;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ind1_7, 0, sizeof(int));
    # 185 "x86_64-gen.c"
    # 187 "x86_64-gen.c"
    o(c);
    # 188 "x86_64-gen.c"
    ind1_7=ind+4;
    # 191 "x86_64-gen.c"
    # 189 "x86_64-gen.c"
    if(_if_conditional2=ind1_7>cur_text_section->data_allocated,    _if_conditional2) {
        # 190 "x86_64-gen.c"
        section_realloc(cur_text_section,ind1_7);
    }
    # 191 "x86_64-gen.c"
    *(int*)(cur_text_section->data+ind)=s;
    # 192 "x86_64-gen.c"
    s=ind;
    # 193 "x86_64-gen.c"
    ind=ind1_7;
    # 194 "x86_64-gen.c"
    __result22__ = s;
    return __result22__;
}

static void gen_addr64(int r, struct Sym* sym, long c){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
    # 201 "x86_64-gen.c"
    # 200 "x86_64-gen.c"
    if(_if_conditional3=r&512,    _if_conditional3) {
        # 201 "x86_64-gen.c"
        greloc(cur_text_section,sym,ind,1);
    }
    # 202 "x86_64-gen.c"
    gen_le64(c);
}

static void gen_addrpc32(int r, struct Sym* sym, int c){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
    # 209 "x86_64-gen.c"
    # 208 "x86_64-gen.c"
    if(_if_conditional4=r&512,    _if_conditional4) {
        # 209 "x86_64-gen.c"
        greloc(cur_text_section,sym,ind,2);
    }
    # 210 "x86_64-gen.c"
    gen_le32(c-4);
}

static void gen_gotpcrel(int r, struct Sym* sym, int c){
void* __result_obj__;
struct Section* sr_8;
struct anonymous_typeX74* rel_9;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sr_8, 0, sizeof(struct Section*));
memset(&rel_9, 0, sizeof(struct anonymous_typeX74*));
    # 216 "x86_64-gen.c"
    # 217 "x86_64-gen.c"
    # 218 "x86_64-gen.c"
    greloc(cur_text_section,sym,ind,9);
    # 219 "x86_64-gen.c"
    sr_8=cur_text_section->reloc;
    # 220 "x86_64-gen.c"
    rel_9=(struct anonymous_typeX74*)(sr_8->data+sr_8->data_offset-sizeof(struct anonymous_typeX74));
    # 221 "x86_64-gen.c"
    rel_9->r_addend=-4;
    # 222 "x86_64-gen.c"
    gen_le32(0);
    # 231 "x86_64-gen.c"
    # 224 "x86_64-gen.c"
    if(c) {
        # 226 "x86_64-gen.c"
        o(72+(((r)>>3)&1));
        # 227 "x86_64-gen.c"
        o(129);
        # 228 "x86_64-gen.c"
        o(192+((r)&7));
        # 229 "x86_64-gen.c"
        gen_le32(c);
    }
}

static void gen_modrm_impl(int op_reg, int r, struct Sym* sym, int c, int is_got){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _elif_conditional1;
_Bool _if_conditional8;
_Bool _elif_conditional2;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
    # 235 "x86_64-gen.c"
    op_reg=((op_reg)&7)<<3;
    # 263 "x86_64-gen.c"
    # 236 "x86_64-gen.c"
    if(_if_conditional6=(r&255)==240,    _if_conditional6) {
        # 238 "x86_64-gen.c"
        o(5|op_reg);
        # 244 "x86_64-gen.c"
        # 239 "x86_64-gen.c"
        if(is_got) {
            # 240 "x86_64-gen.c"
            gen_gotpcrel(r,sym,c);
        }
        else {
            # 242 "x86_64-gen.c"
            gen_addrpc32(r,sym,c);
        }
    }
    # 244 "x86_64-gen.c"
    else if(_elif_conditional1=(r&255)==242,    _elif_conditional1) {
        # 253 "x86_64-gen.c"
        # 246 "x86_64-gen.c"
        if(_if_conditional8=c==(char)c,        _if_conditional8) {
            # 248 "x86_64-gen.c"
            o(69|op_reg);
            # 249 "x86_64-gen.c"
            g(c);
        }
        else {
            # 251 "x86_64-gen.c"
            oad(133|op_reg,c);
        }
    }
    # 253 "x86_64-gen.c"
    else if(_elif_conditional2=(r&255)>=16,    _elif_conditional2) {
        # 260 "x86_64-gen.c"
        # 254 "x86_64-gen.c"
        if(c) {
            # 255 "x86_64-gen.c"
            g(128|op_reg|((r)&7));
            # 256 "x86_64-gen.c"
            gen_le32(c);
        }
        else {
            # 258 "x86_64-gen.c"
            g(0|op_reg|((r)&7));
        }
    }
    else {
        # 261 "x86_64-gen.c"
        g(0|op_reg|(r&255));
    }
}

static void gen_modrm(int op_reg, int r, struct Sym* sym, int c){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 269 "x86_64-gen.c"
    gen_modrm_impl(op_reg,r,sym,c,0);
}

static void gen_modrm64(int opcode, int op_reg, int r, struct Sym* sym, int c){
void* __result_obj__;
int is_got_10;
int rex_11;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_got_10, 0, sizeof(int));
memset(&rex_11, 0, sizeof(int));
    # 276 "x86_64-gen.c"
    # 277 "x86_64-gen.c"
    rex_11=72|((((op_reg)>>3)&1)<<2);
    # 282 "x86_64-gen.c"
    # 279 "x86_64-gen.c"
    if(_if_conditional10=(r&255)!=240&&(r&255)!=242,    _if_conditional10) {
        # 280 "x86_64-gen.c"
        rex_11|=(((255&r)>>3)&1);
    }
    # 282 "x86_64-gen.c"
    o(rex_11);
    # 283 "x86_64-gen.c"
    o(opcode);
    # 284 "x86_64-gen.c"
    is_got_10=(op_reg&16)&&!(sym->type.t&256);
    # 285 "x86_64-gen.c"
    gen_modrm_impl(op_reg,r,sym,c,is_got_10);
}

void load(int r, struct SValue* sv){
void* __result_obj__;
int v_12;
int t_13;
int ft_14;
int fc_15;
int fr_16;
struct SValue v1_17;
_Bool _if_conditional11;
int tr_18;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _elif_conditional3;
_Bool _elif_conditional4;
_Bool _elif_conditional5;
_Bool _elif_conditional6;
_Bool _elif_conditional7;
_Bool _elif_conditional8;
_Bool _elif_conditional9;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _elif_conditional10;
_Bool _elif_conditional11;
_Bool _elif_conditional12;
_Bool _elif_conditional13;
_Bool _if_conditional20;
_Bool _elif_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v1_17, 0, sizeof(struct SValue));
memset(&tr_18, 0, sizeof(int));
    # 292 "x86_64-gen.c"
    # 293 "x86_64-gen.c"
    # 295 "x86_64-gen.c"
    fr_16=sv->r;
    # 296 "x86_64-gen.c"
    ft_14=sv->type.t;
    # 297 "x86_64-gen.c"
    fc_15=sv->c.ul;
    # 314 "x86_64-gen.c"
    # 301 "x86_64-gen.c"
    if(_if_conditional11=(fr_16&255)==240&&(fr_16&512)&&(fr_16&256)&&!(sv->sym->type.t&256),    _if_conditional11) {
        # 303 "x86_64-gen.c"
        tr_18=r|16;
        # 308 "x86_64-gen.c"
        # 304 "x86_64-gen.c"
        if(_if_conditional12=is_float(ft_14),        _if_conditional12) {
            # 306 "x86_64-gen.c"
            tr_18=get_reg(1)|16;
        }
        # 308 "x86_64-gen.c"
        gen_modrm64(139,tr_18,fr_16,sv->sym,0);
        # 311 "x86_64-gen.c"
        fr_16=tr_18|256;
    }
    # 314 "x86_64-gen.c"
    v_12=fr_16&255;
    # 407 "x86_64-gen.c"
    # 315 "x86_64-gen.c"
    if(_if_conditional13=fr_16&256,    _if_conditional13) {
        # 323 "x86_64-gen.c"
        # 316 "x86_64-gen.c"
        if(_if_conditional14=v_12==241,        _if_conditional14) {
            # 317 "x86_64-gen.c"
            v1_17.type.t=4;
            # 318 "x86_64-gen.c"
            v1_17.r=242|256;
            # 319 "x86_64-gen.c"
            v1_17.c.ul=fc_15;
            # 320 "x86_64-gen.c"
            load(r,&v1_17);
            # 321 "x86_64-gen.c"
            fr_16=r;
        }
        # 346 "x86_64-gen.c"
        # 323 "x86_64-gen.c"
        if(_if_conditional15=(ft_14&15)==8,        _if_conditional15) {
            # 324 "x86_64-gen.c"
            o(7212902);
            # 325 "x86_64-gen.c"
            r=0;
        }
        # 326 "x86_64-gen.c"
        else if(_elif_conditional3=(ft_14&15)==9,        _elif_conditional3) {
            # 327 "x86_64-gen.c"
            o(8261619);
            # 328 "x86_64-gen.c"
            r=0;
        }
        # 329 "x86_64-gen.c"
        else if(_elif_conditional4=(ft_14&15)==10,        _elif_conditional4) {
            # 330 "x86_64-gen.c"
            o(219);
            # 331 "x86_64-gen.c"
            r=5;
        }
        # 332 "x86_64-gen.c"
        else if(_elif_conditional5=(ft_14&(~((128|256|512|1024))))==1,        _elif_conditional5) {
            # 333 "x86_64-gen.c"
            o(48655);
        }
        # 334 "x86_64-gen.c"
        else if(_elif_conditional6=(ft_14&(~((128|256|512|1024))))==(1|16),        _elif_conditional6) {
            # 335 "x86_64-gen.c"
            o(46607);
        }
        # 336 "x86_64-gen.c"
        else if(_elif_conditional7=(ft_14&(~((128|256|512|1024))))==2,        _elif_conditional7) {
            # 337 "x86_64-gen.c"
            o(48911);
        }
        # 338 "x86_64-gen.c"
        else if(_elif_conditional8=(ft_14&(~((128|256|512|1024))))==(2|16),        _elif_conditional8) {
            # 339 "x86_64-gen.c"
            o(46863);
        }
        # 340 "x86_64-gen.c"
        else if(_elif_conditional9=is64_type(ft_14),        _elif_conditional9) {
            # 341 "x86_64-gen.c"
            gen_modrm64(139,r,fr_16,sv->sym,fc_15);
            # 342 "x86_64-gen.c"
            return;
        }
        else {
            # 344 "x86_64-gen.c"
            o(139);
        }
        # 346 "x86_64-gen.c"
        gen_modrm(r,fr_16,sv->sym,fc_15);
    }
    else {
        # 406 "x86_64-gen.c"
        # 348 "x86_64-gen.c"
        if(_if_conditional16=v_12==240,        _if_conditional16) {
            # 370 "x86_64-gen.c"
            # 349 "x86_64-gen.c"
            if(_if_conditional17=(ft_14&15)==12,            _if_conditional17) {
                # 350 "x86_64-gen.c"
                ((void)((!(fr_16&512))||(__assert_fail("!(fr & VT_SYM)","x86_64-gen.c",350,"load"),0)));
                # 351 "x86_64-gen.c"
                o(72);
                # 352 "x86_64-gen.c"
                o(184+((r)&7));
                # 353 "x86_64-gen.c"
                gen_addr64(fr_16,sv->sym,sv->c.ull);
            }
            else {
                # 369 "x86_64-gen.c"
                # 355 "x86_64-gen.c"
                if(_if_conditional18=fr_16&512,                _if_conditional18) {
                    # 365 "x86_64-gen.c"
                    # 356 "x86_64-gen.c"
                    if(_if_conditional19=sv->sym->type.t&256,                    _if_conditional19) {
                        # 357 "x86_64-gen.c"
                        o(36168);
                        # 358 "x86_64-gen.c"
                        o(5+((r)&7)*8);
                        # 359 "x86_64-gen.c"
                        gen_addrpc32(fr_16,sv->sym,fc_15);
                    }
                    else {
                        # 361 "x86_64-gen.c"
                        o(35656);
                        # 362 "x86_64-gen.c"
                        o(5+((r)&7)*8);
                        # 363 "x86_64-gen.c"
                        gen_gotpcrel(r,sv->sym,fc_15);
                    }
                }
                else {
                    # 366 "x86_64-gen.c"
                    o(184+((r)&7));
                    # 367 "x86_64-gen.c"
                    gen_le32(fc_15);
                }
            }
        }
        # 370 "x86_64-gen.c"
        else if(_elif_conditional10=v_12==242,        _elif_conditional10) {
            # 371 "x86_64-gen.c"
            o(72|(((r)>>3)&1));
            # 372 "x86_64-gen.c"
            o(141);
            # 373 "x86_64-gen.c"
            gen_modrm(r,242,sv->sym,fc_15);
        }
        # 374 "x86_64-gen.c"
        else if(_elif_conditional11=v_12==243,        _elif_conditional11) {
            # 375 "x86_64-gen.c"
            oad(184+r,0);
            # 376 "x86_64-gen.c"
            o(15);
            # 377 "x86_64-gen.c"
            o(fc_15);
            # 378 "x86_64-gen.c"
            o(192+r);
        }
        # 379 "x86_64-gen.c"
        else if(_elif_conditional12=v_12==244||v_12==245,        _elif_conditional12) {
            # 380 "x86_64-gen.c"
            t_13=v_12&1;
            # 381 "x86_64-gen.c"
            oad(184+r,t_13);
            # 382 "x86_64-gen.c"
            o(1515);
            # 383 "x86_64-gen.c"
            gsym(fc_15);
            # 384 "x86_64-gen.c"
            oad(184+r,t_13^1);
        }
        # 385 "x86_64-gen.c"
        else if(_elif_conditional13=v_12!=r,        _elif_conditional13) {
            # 405 "x86_64-gen.c"
            # 386 "x86_64-gen.c"
            if(_if_conditional20=r==3,            _if_conditional20) {
                # 387 "x86_64-gen.c"
                ((void)((v_12==4)||(__assert_fail("v == TREG_ST0","x86_64-gen.c",387,"load"),0)));
                # 389 "x86_64-gen.c"
                o(-266052387);
                # 391 "x86_64-gen.c"
                o(1141903346);
                # 392 "x86_64-gen.c"
                o(61476);
            }
            # 393 "x86_64-gen.c"
            else if(_elif_conditional14=r==4,            _elif_conditional14) {
                # 394 "x86_64-gen.c"
                ((void)((v_12==3)||(__assert_fail("v == TREG_XMM0","x86_64-gen.c",394,"load"),0)));
                # 397 "x86_64-gen.c"
                o(1141968882);
                # 398 "x86_64-gen.c"
                o(61476);
                # 399 "x86_64-gen.c"
                o(-266058531);
            }
            else {
                # 401 "x86_64-gen.c"
                o(72|(((r)>>3)&1)|((((v_12)>>3)&1)<<2));
                # 402 "x86_64-gen.c"
                o(137);
                # 403 "x86_64-gen.c"
                o(192+r+v_12*8);
            }
        }
    }
}

void store(int r, struct SValue* v){
void* __result_obj__;
int fr_19;
int bt_20;
int ft_21;
int fc_22;
int op64_23;
int pic_24;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _elif_conditional15;
_Bool _elif_conditional16;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _elif_conditional17;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _elif_conditional18;
_Bool _if_conditional28;
_Bool _elif_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&op64_23, 0, sizeof(int));
memset(&pic_24, 0, sizeof(int));
    # 412 "x86_64-gen.c"
    # 413 "x86_64-gen.c"
    op64_23=0;
    # 415 "x86_64-gen.c"
    pic_24=0;
    # 417 "x86_64-gen.c"
    ft_21=v->type.t;
    # 418 "x86_64-gen.c"
    fc_22=v->c.ul;
    # 419 "x86_64-gen.c"
    fr_19=v->r&255;
    # 420 "x86_64-gen.c"
    bt_20=ft_21&15;
    # 431 "x86_64-gen.c"
    # 423 "x86_64-gen.c"
    if(_if_conditional21=fr_19==240&&(v->r&512),    _if_conditional21) {
        # 425 "x86_64-gen.c"
        o(1936204);
        # 426 "x86_64-gen.c"
        gen_gotpcrel(11,v->sym,v->c.ul);
        # 427 "x86_64-gen.c"
        pic_24=is64_type(bt_20)?73:65;
    }
    # 457 "x86_64-gen.c"
    # 431 "x86_64-gen.c"
    if(_if_conditional22=bt_20==8,    _if_conditional22) {
        # 432 "x86_64-gen.c"
        o(102);
        # 433 "x86_64-gen.c"
        o(pic_24);
        # 434 "x86_64-gen.c"
        o(32271);
        # 435 "x86_64-gen.c"
        r=0;
    }
    # 436 "x86_64-gen.c"
    else if(_elif_conditional15=bt_20==9,    _elif_conditional15) {
        # 437 "x86_64-gen.c"
        o(102);
        # 438 "x86_64-gen.c"
        o(pic_24);
        # 439 "x86_64-gen.c"
        o(54799);
        # 440 "x86_64-gen.c"
        r=0;
    }
    # 441 "x86_64-gen.c"
    else if(_elif_conditional16=bt_20==10,    _elif_conditional16) {
        # 442 "x86_64-gen.c"
        o(49369);
        # 443 "x86_64-gen.c"
        o(pic_24);
        # 444 "x86_64-gen.c"
        o(219);
        # 445 "x86_64-gen.c"
        r=7;
    }
    else {
        # 448 "x86_64-gen.c"
        # 447 "x86_64-gen.c"
        if(_if_conditional23=bt_20==2,        _if_conditional23) {
            # 448 "x86_64-gen.c"
            o(102);
        }
        # 449 "x86_64-gen.c"
        o(pic_24);
        # 455 "x86_64-gen.c"
        # 450 "x86_64-gen.c"
        if(_if_conditional24=bt_20==1||bt_20==11,        _if_conditional24) {
            # 451 "x86_64-gen.c"
            o(136);
        }
        # 452 "x86_64-gen.c"
        else if(_elif_conditional17=is64_type(bt_20),        _elif_conditional17) {
            # 453 "x86_64-gen.c"
            op64_23=137;
        }
        else {
            # 455 "x86_64-gen.c"
            o(137);
        }
    }
    # 483 "x86_64-gen.c"
    # 457 "x86_64-gen.c"
    if(pic_24) {
        # 460 "x86_64-gen.c"
        # 459 "x86_64-gen.c"
        if(op64_23) {
            # 460 "x86_64-gen.c"
            o(op64_23);
        }
        # 461 "x86_64-gen.c"
        o(3+(r<<3));
    }
    # 462 "x86_64-gen.c"
    else if(op64_23) {
        # 472 "x86_64-gen.c"
        # 465 "x86_64-gen.c"
        if(_if_conditional27=fr_19==240||fr_19==242||(v->r&256),        _if_conditional27) {
            # 466 "x86_64-gen.c"
            gen_modrm64(op64_23,r,v->r,v->sym,fc_22);
        }
        # 467 "x86_64-gen.c"
        else if(_elif_conditional18=fr_19!=r,        _elif_conditional18) {
            # 469 "x86_64-gen.c"
            abort();
            # 470 "x86_64-gen.c"
            o(192+fr_19+r*8);
        }
    }
    else {
        # 482 "x86_64-gen.c"
        # 475 "x86_64-gen.c"
        if(_if_conditional28=fr_19==240||fr_19==242||(v->r&256),        _if_conditional28) {
            # 476 "x86_64-gen.c"
            gen_modrm(r,v->r,v->sym,fc_22);
        }
        # 477 "x86_64-gen.c"
        else if(_elif_conditional19=fr_19!=r,        _elif_conditional19) {
            # 479 "x86_64-gen.c"
            abort();
            # 480 "x86_64-gen.c"
            o(192+fr_19+r*8);
        }
    }
}

static void gadd_sp(int val){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
    # 493 "x86_64-gen.c"
    # 487 "x86_64-gen.c"
    if(_if_conditional29=val==(char)val,    _if_conditional29) {
        # 488 "x86_64-gen.c"
        o(12878664);
        # 489 "x86_64-gen.c"
        g(val);
    }
    else {
        # 491 "x86_64-gen.c"
        oad(12878152,val);
    }
}

static void gcall_or_jmp(int is_jmp){
void* __result_obj__;
int r_25;
_Bool _if_conditional30;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&r_25, 0, sizeof(int));
    # 498 "x86_64-gen.c"
    # 519 "x86_64-gen.c"
    # 499 "x86_64-gen.c"
    if(_if_conditional30=(vtop->r&(255|256))==240,    _if_conditional30) {
        # 510 "x86_64-gen.c"
        # 501 "x86_64-gen.c"
        if(_if_conditional31=vtop->r&512,        _if_conditional31) {
            # 504 "x86_64-gen.c"
            greloc(cur_text_section,vtop->sym,ind+1,2);
        }
        else {
            # 508 "x86_64-gen.c"
            put_elf_reloc(symtab_section,cur_text_section,ind+1,2,0);
        }
        # 510 "x86_64-gen.c"
        oad(232+is_jmp,vtop->c.ul-4);
    }
    else {
        # 513 "x86_64-gen.c"
        r_25=11;
        # 514 "x86_64-gen.c"
        load(r_25,vtop);
        # 515 "x86_64-gen.c"
        o(65);
        # 516 "x86_64-gen.c"
        o(255);
        # 517 "x86_64-gen.c"
        o(208+((r_25)&7)+(is_jmp<<4));
    }
}

void gfunc_call(int nb_args){
void* __result_obj__;
int size_26;
int align_27;
int r_28;
int args_size_29;
int i_30;
int func_call_31;
struct Sym* func_sym_32;
struct SValue* orig_vtop_33;
int nb_reg_args_34;
int nb_sse_args_35;
int sse_reg_36;
int gen_reg_37;
_Bool _if_conditional32;
_Bool _elif_conditional20;
_Bool _elif_conditional21;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
struct SValue tmp_38;
_Bool _elif_conditional22;
_Bool _elif_conditional23;
int j_39;
_Bool _if_conditional37;
int j_40;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _elif_conditional24;
int j_41;
_Bool _if_conditional40;
int j_42;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _elif_conditional25;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&func_sym_32, 0, sizeof(struct Sym*));
memset(&orig_vtop_33, 0, sizeof(struct SValue*));
memset(&nb_reg_args_34, 0, sizeof(int));
memset(&nb_sse_args_35, 0, sizeof(int));
memset(&tmp_38, 0, sizeof(struct SValue));
memset(&j_39, 0, sizeof(int));
memset(&j_40, 0, sizeof(int));
memset(&j_41, 0, sizeof(int));
memset(&j_42, 0, sizeof(int));
    # 529 "x86_64-gen.c"
    # 530 "x86_64-gen.c"
    # 531 "x86_64-gen.c"
    # 532 "x86_64-gen.c"
    nb_reg_args_34=0;
    # 533 "x86_64-gen.c"
    nb_sse_args_35=0;
    # 534 "x86_64-gen.c"
    # 537 "x86_64-gen.c"
    args_size_29=0;
    # 555 "x86_64-gen.c"
    for(    i_30=0;    i_30<nb_args;    i_30++    ){
        # 550 "x86_64-gen.c"
        # 539 "x86_64-gen.c"
        if(_if_conditional32=(vtop[-i_30].type.t&15)==7,        _if_conditional32) {
            # 540 "x86_64-gen.c"
            args_size_29+=type_size(&vtop->type,&align_27);
        }
        # 541 "x86_64-gen.c"
        else if(_elif_conditional20=(vtop[-i_30].type.t&15)==10,        _elif_conditional20) {
            # 542 "x86_64-gen.c"
            args_size_29+=16;
        }
        # 543 "x86_64-gen.c"
        else if(_elif_conditional21=is_sse_float(vtop[-i_30].type.t),        _elif_conditional21) {
            # 544 "x86_64-gen.c"
            nb_sse_args_35++;
            # 546 "x86_64-gen.c"
            # 545 "x86_64-gen.c"
            if(_if_conditional33=nb_sse_args_35>8,            _if_conditional33) {
                # 545 "x86_64-gen.c"
                args_size_29+=8;
            }
        }
        else {
            # 547 "x86_64-gen.c"
            nb_reg_args_34++;
            # 549 "x86_64-gen.c"
            # 548 "x86_64-gen.c"
            if(_if_conditional34=nb_reg_args_34>6,            _if_conditional34) {
                # 548 "x86_64-gen.c"
                args_size_29+=8;
            }
        }
    }
    # 555 "x86_64-gen.c"
    orig_vtop_33=vtop;
    # 556 "x86_64-gen.c"
    gen_reg_37=nb_reg_args_34;
    # 557 "x86_64-gen.c"
    sse_reg_36=nb_sse_args_35;
    # 562 "x86_64-gen.c"
    # 559 "x86_64-gen.c"
    if(_if_conditional35=args_size_29&=8,    _if_conditional35) {
        # 560 "x86_64-gen.c"
        o(80);
    }
    # 614 "x86_64-gen.c"
    for(    i_30=0;    i_30<nb_args;    i_30++    ){
        # 612 "x86_64-gen.c"
        # 563 "x86_64-gen.c"
        if(_if_conditional36=(vtop->type.t&15)==7,        _if_conditional36) {
            # 564 "x86_64-gen.c"
            size_26=type_size(&vtop->type,&align_27);
            # 566 "x86_64-gen.c"
            size_26=(size_26+3)&~3;
            # 568 "x86_64-gen.c"
            o(72);
            # 569 "x86_64-gen.c"
            oad(60545,size_26);
            # 571 "x86_64-gen.c"
            r_28=get_reg(1);
            # 572 "x86_64-gen.c"
            o(72+(((r_28)>>3)&1));
            # 573 "x86_64-gen.c"
            o(137);
            # 574 "x86_64-gen.c"
            o(224+r_28);
            # 583 "x86_64-gen.c"
            {
                # 577 "x86_64-gen.c"
                tmp_38=vtop[1];
                # 578 "x86_64-gen.c"
                vset(&vtop->type,r_28|256,0);
                # 579 "x86_64-gen.c"
                vswap();
                # 580 "x86_64-gen.c"
                vstore();
                # 581 "x86_64-gen.c"
                vtop[1]=tmp_38;
            }
            # 583 "x86_64-gen.c"
            args_size_29+=size_26;
        }
        # 584 "x86_64-gen.c"
        else if(_elif_conditional22=(vtop->type.t&15)==10,        _elif_conditional22) {
            # 585 "x86_64-gen.c"
            gv(64);
            # 586 "x86_64-gen.c"
            size_26=16;
            # 587 "x86_64-gen.c"
            oad(15499592,size_26);
            # 588 "x86_64-gen.c"
            o(31963);
            # 589 "x86_64-gen.c"
            g(36);
            # 590 "x86_64-gen.c"
            g(0);
            # 591 "x86_64-gen.c"
            args_size_29+=size_26;
        }
        # 592 "x86_64-gen.c"
        else if(_elif_conditional23=is_sse_float(vtop->type.t),        _elif_conditional23) {
            # 593 "x86_64-gen.c"
            j_39=--sse_reg_36;
            # 602 "x86_64-gen.c"
            # 594 "x86_64-gen.c"
            if(_if_conditional37=j_39>=8,            _if_conditional37) {
                # 595 "x86_64-gen.c"
                gv(2);
                # 596 "x86_64-gen.c"
                o(80);
                # 598 "x86_64-gen.c"
                o(81137510);
                # 599 "x86_64-gen.c"
                o(36);
                # 600 "x86_64-gen.c"
                args_size_29+=8;
            }
        }
        else {
            # 603 "x86_64-gen.c"
            j_40=--gen_reg_37;
            # 611 "x86_64-gen.c"
            # 606 "x86_64-gen.c"
            if(_if_conditional38=j_40>=6,            _if_conditional38) {
                # 607 "x86_64-gen.c"
                r_28=gv(1);
                # 608 "x86_64-gen.c"
                o(80+r_28);
                # 609 "x86_64-gen.c"
                args_size_29+=8;
            }
        }
        # 612 "x86_64-gen.c"
        vtop--;
    }
    # 614 "x86_64-gen.c"
    vtop=orig_vtop_33;
    # 620 "x86_64-gen.c"
    gen_reg_37=nb_reg_args_34;
    # 621 "x86_64-gen.c"
    sse_reg_36=nb_sse_args_35;
    # 656 "x86_64-gen.c"
    for(    i_30=0;    i_30<nb_args;    i_30++    ){
        # 653 "x86_64-gen.c"
        # 624 "x86_64-gen.c"
        if(_if_conditional39=(vtop->type.t&15)==7||(vtop->type.t&15)==10,        _if_conditional39) {
        }
        # 625 "x86_64-gen.c"
        else if(_elif_conditional24=is_sse_float(vtop->type.t),        _elif_conditional24) {
            # 626 "x86_64-gen.c"
            j_41=--sse_reg_36;
            # 633 "x86_64-gen.c"
            # 627 "x86_64-gen.c"
            if(_if_conditional40=j_41<8,            _if_conditional40) {
                # 628 "x86_64-gen.c"
                gv(2);
                # 630 "x86_64-gen.c"
                o(10255);
                # 631 "x86_64-gen.c"
                o(192+(sse_reg_36<<3));
            }
        }
        else {
            # 634 "x86_64-gen.c"
            j_42=--gen_reg_37;
            # 652 "x86_64-gen.c"
            # 637 "x86_64-gen.c"
            if(_if_conditional41=j_42<6,            _if_conditional41) {
                # 638 "x86_64-gen.c"
                r_28=gv(1);
                # 651 "x86_64-gen.c"
                # 639 "x86_64-gen.c"
                if(_if_conditional42=j_42<2,                _if_conditional42) {
                    # 640 "x86_64-gen.c"
                    o(35144);
                    # 641 "x86_64-gen.c"
                    o(192+r_28*8+arg_regs[j_42]);
                }
                # 642 "x86_64-gen.c"
                else if(_elif_conditional25=j_42<4,                _elif_conditional25) {
                    # 643 "x86_64-gen.c"
                    o(35145);
                    # 645 "x86_64-gen.c"
                    o(192+r_28*8+j_42);
                }
                else {
                    # 647 "x86_64-gen.c"
                    o(35145);
                    # 649 "x86_64-gen.c"
                    o(192+r_28*8+j_42-4);
                }
            }
        }
        # 653 "x86_64-gen.c"
        vtop--;
    }
    # 656 "x86_64-gen.c"
    save_regs(0);
    # 666 "x86_64-gen.c"
    # 659 "x86_64-gen.c"
    if(_if_conditional43=nb_reg_args_34>2,    _if_conditional43) {
        # 660 "x86_64-gen.c"
        o(13797708);
        # 664 "x86_64-gen.c"
        # 661 "x86_64-gen.c"
        if(_if_conditional44=nb_reg_args_34>3,        _if_conditional44) {
            # 662 "x86_64-gen.c"
            o(14256460);
        }
    }
    # 666 "x86_64-gen.c"
    func_sym_32=vtop->type.ref;
    # 667 "x86_64-gen.c"
    func_call_31=(((struct anonymous_typeX107*)&(func_sym_32->r))->func_call);
    # 668 "x86_64-gen.c"
    oad(184,nb_sse_args_35<8?nb_sse_args_35:8);
    # 669 "x86_64-gen.c"
    gcall_or_jmp(0);
    # 671 "x86_64-gen.c"
    # 670 "x86_64-gen.c"
    if(args_size_29) {
        # 671 "x86_64-gen.c"
        gadd_sp(args_size_29);
    }
    # 672 "x86_64-gen.c"
    vtop--;
}

static void push_arg_reg(int i){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 684 "x86_64-gen.c"
    loc-=8;
    # 685 "x86_64-gen.c"
    gen_modrm64(137,arg_regs[i],242,((void*)0),loc);
}

void gfunc_prolog(struct CType* func_type){
void* __result_obj__;
int i_43;
int addr_44;
int align_45;
int size_46;
int func_call_47;
int param_index_48;
int param_addr_49;
int reg_param_index_50;
int sse_param_index_51;
struct Sym* sym_52;
struct CType* type_53;
_Bool _if_conditional46;
int seen_reg_num_54;
int seen_sse_num_55;
int seen_stack_size_56;
_Bool _while_condtional1;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _elif_conditional26;
_Bool _elif_conditional27;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _while_condtional2;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _elif_conditional28;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_52, 0, sizeof(struct Sym*));
memset(&type_53, 0, sizeof(struct CType*));
    # 691 "x86_64-gen.c"
    # 692 "x86_64-gen.c"
    # 693 "x86_64-gen.c"
    # 694 "x86_64-gen.c"
    # 696 "x86_64-gen.c"
    func_ret_sub=0;
    # 698 "x86_64-gen.c"
    sym_52=func_type->ref;
    # 699 "x86_64-gen.c"
    func_call_47=(((struct anonymous_typeX107*)&(sym_52->r))->func_call);
    # 700 "x86_64-gen.c"
    addr_44=8*2;
    # 701 "x86_64-gen.c"
    loc=0;
    # 702 "x86_64-gen.c"
    ind+=11;
    # 703 "x86_64-gen.c"
    func_sub_sp_offset=ind;
    # 761 "x86_64-gen.c"
    # 705 "x86_64-gen.c"
    if(_if_conditional46=func_type->ref->c==3,    _if_conditional46) {
        # 706 "x86_64-gen.c"
        # 707 "x86_64-gen.c"
        seen_reg_num_54=seen_sse_num_55=0;
        # 709 "x86_64-gen.c"
        seen_stack_size_56=8*2;
        # 711 "x86_64-gen.c"
        sym_52=func_type->ref;
        # 735 "x86_64-gen.c"
        while(_while_condtional1=(sym_52=sym_52->next)!=((void*)0),        _while_condtional1) {
            # 713 "x86_64-gen.c"
            type_53=&sym_52->type;
            # 733 "x86_64-gen.c"
            # 714 "x86_64-gen.c"
            if(_if_conditional47=is_sse_float(type_53->t),            _if_conditional47) {
                # 720 "x86_64-gen.c"
                # 715 "x86_64-gen.c"
                if(_if_conditional48=seen_sse_num_55<8,                _if_conditional48) {
                    # 716 "x86_64-gen.c"
                    seen_sse_num_55++;
                }
                else {
                    # 718 "x86_64-gen.c"
                    seen_stack_size_56+=8;
                }
            }
            # 720 "x86_64-gen.c"
            else if(_elif_conditional26=(type_53->t&15)==7,            _elif_conditional26) {
                # 721 "x86_64-gen.c"
                size_46=type_size(type_53,&align_45);
                # 722 "x86_64-gen.c"
                size_46=(size_46+3)&~3;
                # 723 "x86_64-gen.c"
                seen_stack_size_56+=size_46;
            }
            # 724 "x86_64-gen.c"
            else if(_elif_conditional27=(type_53->t&15)==10,            _elif_conditional27) {
                # 725 "x86_64-gen.c"
                seen_stack_size_56+=16;
            }
            else {
                # 732 "x86_64-gen.c"
                # 727 "x86_64-gen.c"
                if(_if_conditional49=seen_reg_num_54<6,                _if_conditional49) {
                    # 728 "x86_64-gen.c"
                    seen_reg_num_54++;
                }
                else {
                    # 730 "x86_64-gen.c"
                    seen_stack_size_56+=8;
                }
            }
        }
        # 735 "x86_64-gen.c"
        loc-=16;
        # 737 "x86_64-gen.c"
        o(15746503);
        # 738 "x86_64-gen.c"
        gen_le32(seen_reg_num_54*8);
        # 740 "x86_64-gen.c"
        o(16008647);
        # 741 "x86_64-gen.c"
        gen_le32(seen_sse_num_55*16+48);
        # 743 "x86_64-gen.c"
        o(16270791);
        # 744 "x86_64-gen.c"
        gen_le32(seen_stack_size_56);
        # 756 "x86_64-gen.c"
        for(        i_43=0;        i_43<8;        i_43++        ){
            # 748 "x86_64-gen.c"
            loc-=16;
            # 749 "x86_64-gen.c"
            o(14028646);
            # 750 "x86_64-gen.c"
            gen_modrm(7-i_43,242,((void*)0),loc);
            # 752 "x86_64-gen.c"
            o(8767304);
            # 753 "x86_64-gen.c"
            gen_le32(loc+8);
            # 754 "x86_64-gen.c"
            gen_le32(0);
        }
        # 759 "x86_64-gen.c"
        for(        i_43=0;        i_43<6;        i_43++        ){
            # 757 "x86_64-gen.c"
            push_arg_reg(5-i_43);
        }
    }
    # 761 "x86_64-gen.c"
    sym_52=func_type->ref;
    # 762 "x86_64-gen.c"
    param_index_48=0;
    # 763 "x86_64-gen.c"
    reg_param_index_50=0;
    # 764 "x86_64-gen.c"
    sse_param_index_51=0;
    # 768 "x86_64-gen.c"
    func_vt=sym_52->type;
    # 778 "x86_64-gen.c"
    # 769 "x86_64-gen.c"
    if(_if_conditional50=(func_vt.t&15)==7,    _if_conditional50) {
        # 770 "x86_64-gen.c"
        push_arg_reg(reg_param_index_50);
        # 771 "x86_64-gen.c"
        param_addr_49=loc;
        # 773 "x86_64-gen.c"
        func_vc=loc;
        # 774 "x86_64-gen.c"
        param_index_48++;
        # 775 "x86_64-gen.c"
        reg_param_index_50++;
    }
    # 813 "x86_64-gen.c"
    while(_while_condtional2=(sym_52=sym_52->next)!=((void*)0),    _while_condtional2) {
        # 779 "x86_64-gen.c"
        type_53=&sym_52->type;
        # 780 "x86_64-gen.c"
        size_46=type_size(type_53,&align_45);
        # 781 "x86_64-gen.c"
        size_46=(size_46+3)&~3;
        # 809 "x86_64-gen.c"
        # 782 "x86_64-gen.c"
        if(_if_conditional51=is_sse_float(type_53->t),        _if_conditional51) {
            # 793 "x86_64-gen.c"
            # 783 "x86_64-gen.c"
            if(_if_conditional52=sse_param_index_51<8,            _if_conditional52) {
                # 785 "x86_64-gen.c"
                loc-=8;
                # 786 "x86_64-gen.c"
                o(14028646);
                # 787 "x86_64-gen.c"
                gen_modrm(sse_param_index_51,242,((void*)0),loc);
                # 788 "x86_64-gen.c"
                param_addr_49=loc;
            }
            else {
                # 790 "x86_64-gen.c"
                param_addr_49=addr_44;
                # 791 "x86_64-gen.c"
                addr_44+=size_46;
            }
            # 793 "x86_64-gen.c"
            sse_param_index_51++;
        }
        # 795 "x86_64-gen.c"
        else if(_elif_conditional28=(type_53->t&15)==7||(type_53->t&15)==10,        _elif_conditional28) {
            # 796 "x86_64-gen.c"
            param_addr_49=addr_44;
            # 797 "x86_64-gen.c"
            addr_44+=size_46;
        }
        else {
            # 807 "x86_64-gen.c"
            # 799 "x86_64-gen.c"
            if(_if_conditional53=reg_param_index_50<6,            _if_conditional53) {
                # 801 "x86_64-gen.c"
                push_arg_reg(reg_param_index_50);
                # 802 "x86_64-gen.c"
                param_addr_49=loc;
            }
            else {
                # 804 "x86_64-gen.c"
                param_addr_49=addr_44;
                # 805 "x86_64-gen.c"
                addr_44+=8;
            }
            # 807 "x86_64-gen.c"
            reg_param_index_50++;
        }
        # 810 "x86_64-gen.c"
        sym_push(sym_52->v&~536870912,type_53,242|256,param_addr_49);
        # 811 "x86_64-gen.c"
        param_index_48++;
    }
}

void gfunc_epilog(){
void* __result_obj__;
int v_57;
int saved_ind_58;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
    # 818 "x86_64-gen.c"
    # 820 "x86_64-gen.c"
    o(201);
    # 829 "x86_64-gen.c"
    # 821 "x86_64-gen.c"
    if(_if_conditional54=func_ret_sub==0,    _if_conditional54) {
        # 822 "x86_64-gen.c"
        o(195);
    }
    else {
        # 824 "x86_64-gen.c"
        o(194);
        # 825 "x86_64-gen.c"
        g(func_ret_sub);
        # 826 "x86_64-gen.c"
        g(func_ret_sub>>8);
    }
    # 829 "x86_64-gen.c"
    v_57=(-loc+15)&-16;
    # 830 "x86_64-gen.c"
    saved_ind_58=ind;
    # 831 "x86_64-gen.c"
    ind=func_sub_sp_offset-11;
    # 848 "x86_64-gen.c"
    {
        # 841 "x86_64-gen.c"
        o(-443987883);
        # 842 "x86_64-gen.c"
        o(15499592);
        # 843 "x86_64-gen.c"
        gen_le32(v_57);
    }
    # 848 "x86_64-gen.c"
    ind=saved_ind_58;
}

int gjmp(int t){
void* __result_obj__;
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    # 854 "x86_64-gen.c"
    __result23__ = oad(233,t);
    return __result23__;
}

void gjmp_addr(int a){
void* __result_obj__;
int r_59;
_Bool _if_conditional55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&r_59, 0, sizeof(int));
    # 860 "x86_64-gen.c"
    # 861 "x86_64-gen.c"
    r_59=a-ind-2;
    # 868 "x86_64-gen.c"
    # 862 "x86_64-gen.c"
    if(_if_conditional55=r_59==(char)r_59,    _if_conditional55) {
        # 863 "x86_64-gen.c"
        g(235);
        # 864 "x86_64-gen.c"
        g(r_59);
    }
    else {
        # 866 "x86_64-gen.c"
        oad(233,a-ind-5);
    }
}

int gtst(int inv, int t){
void* __result_obj__;
int v_60;
int* p_61;
_Bool _if_conditional56;
_Bool _elif_conditional29;
_Bool _if_conditional57;
_Bool _while_condtional3;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    # 873 "x86_64-gen.c"
    # 875 "x86_64-gen.c"
    v_60=vtop->r&255;
    # 911 "x86_64-gen.c"
    # 876 "x86_64-gen.c"
    if(_if_conditional56=v_60==243,    _if_conditional56) {
        # 878 "x86_64-gen.c"
        g(15);
        # 879 "x86_64-gen.c"
        t=oad((vtop->c.i-16)^inv,t);
    }
    # 880 "x86_64-gen.c"
    else if(_elif_conditional29=v_60==244||v_60==245,    _elif_conditional29) {
        # 893 "x86_64-gen.c"
        # 882 "x86_64-gen.c"
        if(_if_conditional57=(v_60&1)==inv,        _if_conditional57) {
            # 884 "x86_64-gen.c"
            p_61=&vtop->c.i;
            # 886 "x86_64-gen.c"
            while(_while_condtional3=*p_61!=0,            _while_condtional3) {
                # 886 "x86_64-gen.c"
                p_61=(int*)(cur_text_section->data+*p_61);
            }
            # 887 "x86_64-gen.c"
            *p_61=t;
            # 888 "x86_64-gen.c"
            t=vtop->c.i;
        }
        else {
            # 890 "x86_64-gen.c"
            t=gjmp(t);
            # 891 "x86_64-gen.c"
            gsym(vtop->c.i);
        }
    }
    else {
        # 899 "x86_64-gen.c"
        # 895 "x86_64-gen.c"
        if(_if_conditional58=is_float(vtop->type.t)||(vtop->type.t&15)==12,        _if_conditional58) {
            # 896 "x86_64-gen.c"
            vpushi(0);
            # 897 "x86_64-gen.c"
            gen_op(149);
        }
        # 910 "x86_64-gen.c"
        # 899 "x86_64-gen.c"
        if(_if_conditional59=(vtop->r&(255|256|512))==240,        _if_conditional59) {
            # 903 "x86_64-gen.c"
            # 901 "x86_64-gen.c"
            if(_if_conditional60=(vtop->c.i!=0)!=inv,            _if_conditional60) {
                # 902 "x86_64-gen.c"
                t=gjmp(t);
            }
        }
        else {
            # 904 "x86_64-gen.c"
            v_60=gv(1);
            # 905 "x86_64-gen.c"
            o(133);
            # 906 "x86_64-gen.c"
            o(192+v_60*9);
            # 907 "x86_64-gen.c"
            g(15);
            # 908 "x86_64-gen.c"
            t=oad(133^inv,t);
        }
    }
    # 911 "x86_64-gen.c"
    vtop--;
    # 912 "x86_64-gen.c"
    __result24__ = t;
    return __result24__;
}

void gen_opi(int op){
void* __result_obj__;
int r_62;
int fr_63;
int opc_64;
int c_65;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
    # 918 "x86_64-gen.c"
    # 1073 "x86_64-gen.c"
    switch (op) {
        # 922 "x86_64-gen.c"
        case 43:
        # 923 "x86_64-gen.c"
        case 195:
        # 923 "x86_64-gen.c"
        opc_64=0;
        # 925 "x86_64-gen.c"
        gen_op8:
        # 956 "x86_64-gen.c"
        # 926 "x86_64-gen.c"
        if(_if_conditional61=(vtop->r&(255|256|512))==240&&!is64_type(vtop->type.t),        _if_conditional61) {
            # 928 "x86_64-gen.c"
            vswap();
            # 929 "x86_64-gen.c"
            r_62=gv(1);
            # 933 "x86_64-gen.c"
            # 930 "x86_64-gen.c"
            if(_if_conditional62=is64_type(vtop->type.t),            _if_conditional62) {
                # 931 "x86_64-gen.c"
                o(72|(((r_62)>>3)&1));
            }
            # 933 "x86_64-gen.c"
            vswap();
            # 934 "x86_64-gen.c"
            c_65=vtop->c.i;
            # 944 "x86_64-gen.c"
            # 935 "x86_64-gen.c"
            if(_if_conditional63=c_65==(char)c_65,            _if_conditional63) {
                # 937 "x86_64-gen.c"
                o(131);
                # 938 "x86_64-gen.c"
                o(192|(opc_64<<3)|((r_62)&7));
                # 939 "x86_64-gen.c"
                g(c_65);
            }
            else {
                # 941 "x86_64-gen.c"
                o(129);
                # 942 "x86_64-gen.c"
                oad(192|(opc_64<<3)|((r_62)&7),c_65);
            }
        }
        else {
            # 945 "x86_64-gen.c"
            gv2(1,1);
            # 946 "x86_64-gen.c"
            r_62=vtop[-1].r;
            # 947 "x86_64-gen.c"
            fr_63=vtop[0].r;
            # 953 "x86_64-gen.c"
            # 950 "x86_64-gen.c"
            if(_if_conditional64=opc_64!=7||is64_type(vtop[0].type.t)||(vtop[0].type.t&16)||is64_type(vtop[-1].type.t)||(vtop[-1].type.t&16),            _if_conditional64) {
                # 951 "x86_64-gen.c"
                o(72|(((r_62)>>3)&1)|((((fr_63)>>3)&1)<<2));
            }
            # 953 "x86_64-gen.c"
            o((opc_64<<3)|1);
            # 954 "x86_64-gen.c"
            o(192+((r_62)&7)+((fr_63)&7)*8);
        }
        # 956 "x86_64-gen.c"
        vtop--;
        # 961 "x86_64-gen.c"
        # 957 "x86_64-gen.c"
        if(_if_conditional65=op>=146&&op<=159,        _if_conditional65) {
            # 958 "x86_64-gen.c"
            vtop->r=243;
            # 959 "x86_64-gen.c"
            vtop->c.i=op;
        }
        # 961 "x86_64-gen.c"
        break;
        # 963 "x86_64-gen.c"
        case 45:
        # 964 "x86_64-gen.c"
        case 197:
        # 964 "x86_64-gen.c"
        opc_64=5;
        # 965 "x86_64-gen.c"
        goto gen_op8;
        # 967 "x86_64-gen.c"
        case 196:
        # 967 "x86_64-gen.c"
        opc_64=2;
        # 968 "x86_64-gen.c"
        goto gen_op8;
        # 970 "x86_64-gen.c"
        case 198:
        # 970 "x86_64-gen.c"
        opc_64=3;
        # 971 "x86_64-gen.c"
        goto gen_op8;
        # 973 "x86_64-gen.c"
        case 38:
        # 973 "x86_64-gen.c"
        opc_64=4;
        # 974 "x86_64-gen.c"
        goto gen_op8;
        # 976 "x86_64-gen.c"
        case 94:
        # 976 "x86_64-gen.c"
        opc_64=6;
        # 977 "x86_64-gen.c"
        goto gen_op8;
        # 979 "x86_64-gen.c"
        case 124:
        # 979 "x86_64-gen.c"
        opc_64=1;
        # 980 "x86_64-gen.c"
        goto gen_op8;
        # 982 "x86_64-gen.c"
        case 42:
        # 982 "x86_64-gen.c"
        gv2(1,1);
        # 983 "x86_64-gen.c"
        r_62=vtop[-1].r;
        # 984 "x86_64-gen.c"
        fr_63=vtop[0].r;
        # 989 "x86_64-gen.c"
        # 986 "x86_64-gen.c"
        if(_if_conditional66=is64_type(vtop[0].type.t)||(vtop[0].type.t&16)||is64_type(vtop[-1].type.t)||(vtop[-1].type.t&16),        _if_conditional66) {
            # 987 "x86_64-gen.c"
            o(72|(((fr_63)>>3)&1)|((((r_62)>>3)&1)<<2));
        }
        # 989 "x86_64-gen.c"
        vtop--;
        # 990 "x86_64-gen.c"
        o(44815);
        # 991 "x86_64-gen.c"
        o(192+fr_63+r_62*8);
        # 992 "x86_64-gen.c"
        break;
        # 994 "x86_64-gen.c"
        case 1:
        # 994 "x86_64-gen.c"
        opc_64=4;
        # 995 "x86_64-gen.c"
        goto gen_shift;
        # 997 "x86_64-gen.c"
        case 205:
        # 997 "x86_64-gen.c"
        opc_64=5;
        # 998 "x86_64-gen.c"
        goto gen_shift;
        # 1000 "x86_64-gen.c"
        case 2:
        # 1000 "x86_64-gen.c"
        opc_64=7;
        # 1002 "x86_64-gen.c"
        gen_shift:
        # 1002 "x86_64-gen.c"
        opc_64=192|(opc_64<<3);
        # 1028 "x86_64-gen.c"
        # 1003 "x86_64-gen.c"
        if(_if_conditional67=(vtop->r&(255|256|512))==240,        _if_conditional67) {
            # 1005 "x86_64-gen.c"
            vswap();
            # 1006 "x86_64-gen.c"
            r_62=gv(1);
            # 1013 "x86_64-gen.c"
            # 1007 "x86_64-gen.c"
            if(_if_conditional68=(vtop->type.t&15)==12,            _if_conditional68) {
                # 1008 "x86_64-gen.c"
                o(72|(((r_62)>>3)&1));
                # 1009 "x86_64-gen.c"
                c_65=63;
            }
            else {
                # 1011 "x86_64-gen.c"
                c_65=31;
            }
            # 1013 "x86_64-gen.c"
            vswap();
            # 1014 "x86_64-gen.c"
            c_65&=vtop->c.i;
            # 1015 "x86_64-gen.c"
            o(193);
            # 1016 "x86_64-gen.c"
            o(opc_64|r_62);
            # 1017 "x86_64-gen.c"
            g(c_65);
        }
        else {
            # 1020 "x86_64-gen.c"
            gv2(1,8);
            # 1021 "x86_64-gen.c"
            r_62=vtop[-1].r;
            # 1025 "x86_64-gen.c"
            # 1022 "x86_64-gen.c"
            if(_if_conditional69=(vtop[-1].type.t&15)==12,            _if_conditional69) {
                # 1023 "x86_64-gen.c"
                o(72|(((r_62)>>3)&1));
            }
            # 1025 "x86_64-gen.c"
            o(211);
            # 1026 "x86_64-gen.c"
            o(opc_64|r_62);
        }
        # 1028 "x86_64-gen.c"
        vtop--;
        # 1029 "x86_64-gen.c"
        break;
        # 1031 "x86_64-gen.c"
        case 47:
        # 1032 "x86_64-gen.c"
        case 176:
        # 1033 "x86_64-gen.c"
        case 178:
        # 1034 "x86_64-gen.c"
        case 37:
        # 1035 "x86_64-gen.c"
        case 177:
        # 1038 "x86_64-gen.c"
        case 194:
        # 1038 "x86_64-gen.c"
        gv2(4,8);
        # 1039 "x86_64-gen.c"
        r_62=vtop[-1].r;
        # 1040 "x86_64-gen.c"
        fr_63=vtop[0].r;
        # 1041 "x86_64-gen.c"
        vtop--;
        # 1042 "x86_64-gen.c"
        save_reg(2);
        # 1067 "x86_64-gen.c"
        # 1043 "x86_64-gen.c"
        if(_if_conditional70=op==194,        _if_conditional70) {
            # 1044 "x86_64-gen.c"
            o(247);
            # 1045 "x86_64-gen.c"
            o(224+fr_63);
            # 1046 "x86_64-gen.c"
            vtop->r2=2;
            # 1047 "x86_64-gen.c"
            r_62=0;
        }
        else {
            # 1062 "x86_64-gen.c"
            # 1049 "x86_64-gen.c"
            if(_if_conditional71=op==176||op==177,            _if_conditional71) {
                # 1050 "x86_64-gen.c"
                o(16241201);
                # 1051 "x86_64-gen.c"
                o(240+fr_63);
            }
            else {
                # 1059 "x86_64-gen.c"
                # 1053 "x86_64-gen.c"
                if(_if_conditional72=(vtop->type.t&15)&12,                _if_conditional72) {
                    # 1054 "x86_64-gen.c"
                    o(39240);
                    # 1055 "x86_64-gen.c"
                    o(72+(((fr_63)>>3)&1));
                }
                else {
                    # 1057 "x86_64-gen.c"
                    o(153);
                }
                # 1059 "x86_64-gen.c"
                o(247);
                # 1060 "x86_64-gen.c"
                o(248+fr_63);
            }
            # 1065 "x86_64-gen.c"
            # 1062 "x86_64-gen.c"
            if(_if_conditional73=op==37||op==177,            _if_conditional73) {
                # 1063 "x86_64-gen.c"
                r_62=2;
            }
            else {
                # 1065 "x86_64-gen.c"
                r_62=0;
            }
        }
        # 1067 "x86_64-gen.c"
        vtop->r=r_62;
        # 1068 "x86_64-gen.c"
        break;
        # 1070 "x86_64-gen.c"
        default:
        # 1070 "x86_64-gen.c"
        opc_64=7;
        # 1071 "x86_64-gen.c"
        goto gen_op8;
    }
}

void gen_opl(int op){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1077 "x86_64-gen.c"
    gen_opi(op);
}

void gen_opf(int op){
void* __result_obj__;
int a_66;
int ft_67;
int fc_68;
int swapped_69;
int r_70;
int float_type_71;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _elif_conditional30;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _elif_conditional31;
_Bool _elif_conditional32;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct SValue v1_72;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct SValue v1_73;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&float_type_71, 0, sizeof(int));
memset(&v1_72, 0, sizeof(struct SValue));
memset(&v1_73, 0, sizeof(struct SValue));
    # 1085 "x86_64-gen.c"
    # 1087 "x86_64-gen.c"
    float_type_71=(vtop->type.t&15)==10?64:2;
    # 1095 "x86_64-gen.c"
    # 1090 "x86_64-gen.c"
    if(_if_conditional74=(vtop[-1].r&(255|256))==240,    _if_conditional74) {
        # 1091 "x86_64-gen.c"
        vswap();
        # 1092 "x86_64-gen.c"
        gv(float_type_71);
        # 1093 "x86_64-gen.c"
        vswap();
    }
    # 1096 "x86_64-gen.c"
    # 1095 "x86_64-gen.c"
    if(_if_conditional75=(vtop[0].r&(255|256))==240,    _if_conditional75) {
        # 1096 "x86_64-gen.c"
        gv(float_type_71);
    }
    # 1105 "x86_64-gen.c"
    # 1100 "x86_64-gen.c"
    if(_if_conditional76=(vtop[-1].r&256)&&(vtop[0].r&256),    _if_conditional76) {
        # 1101 "x86_64-gen.c"
        vswap();
        # 1102 "x86_64-gen.c"
        gv(float_type_71);
        # 1103 "x86_64-gen.c"
        vswap();
    }
    # 1105 "x86_64-gen.c"
    swapped_69=0;
    # 1112 "x86_64-gen.c"
    # 1108 "x86_64-gen.c"
    if(_if_conditional77=vtop[-1].r&256,    _if_conditional77) {
        # 1109 "x86_64-gen.c"
        vswap();
        # 1110 "x86_64-gen.c"
        swapped_69=1;
    }
    # 1285 "x86_64-gen.c"
    # 1112 "x86_64-gen.c"
    if(_if_conditional78=(vtop->type.t&15)==10,    _if_conditional78) {
        # 1172 "x86_64-gen.c"
        # 1113 "x86_64-gen.c"
        if(_if_conditional79=op>=146&&op<=159,        _if_conditional79) {
            # 1115 "x86_64-gen.c"
            load(4,vtop);
            # 1116 "x86_64-gen.c"
            save_reg(0);
            # 1120 "x86_64-gen.c"
            # 1117 "x86_64-gen.c"
            if(_if_conditional80=op==157||op==159,            _if_conditional80) {
                # 1118 "x86_64-gen.c"
                swapped_69=!swapped_69;
            }
            # 1119 "x86_64-gen.c"
            else if(_elif_conditional30=op==148||op==149,            _elif_conditional30) {
                # 1120 "x86_64-gen.c"
                swapped_69=0;
            }
            # 1122 "x86_64-gen.c"
            # 1121 "x86_64-gen.c"
            if(swapped_69) {
                # 1122 "x86_64-gen.c"
                o(51673);
            }
            # 1123 "x86_64-gen.c"
            o(59866);
            # 1124 "x86_64-gen.c"
            o(57567);
            # 1139 "x86_64-gen.c"
            # 1125 "x86_64-gen.c"
            if(_if_conditional82=op==148,            _if_conditional82) {
                # 1126 "x86_64-gen.c"
                o(4580480);
                # 1127 "x86_64-gen.c"
                o(4258944);
            }
            # 1128 "x86_64-gen.c"
            else if(_elif_conditional31=op==149,            _elif_conditional31) {
                # 1129 "x86_64-gen.c"
                o(4580480);
                # 1130 "x86_64-gen.c"
                o(4256896);
                # 1131 "x86_64-gen.c"
                op=149;
            }
            # 1132 "x86_64-gen.c"
            else if(_elif_conditional32=op==157||op==158,            _elif_conditional32) {
                # 1133 "x86_64-gen.c"
                o(378102);
                # 1134 "x86_64-gen.c"
                op=148;
            }
            else {
                # 1136 "x86_64-gen.c"
                o(4572406);
                # 1137 "x86_64-gen.c"
                op=148;
            }
            # 1139 "x86_64-gen.c"
            vtop--;
            # 1140 "x86_64-gen.c"
            vtop->r=243;
            # 1141 "x86_64-gen.c"
            vtop->c.i=op;
        }
        else {
            # 1144 "x86_64-gen.c"
            load(4,vtop);
            # 1145 "x86_64-gen.c"
            swapped_69=!swapped_69;
            # 1166 "x86_64-gen.c"
            switch (op) {
                # 1149 "x86_64-gen.c"
                default:
                # 1150 "x86_64-gen.c"
                case 43:
                # 1150 "x86_64-gen.c"
                a_66=0;
                # 1151 "x86_64-gen.c"
                break;
                # 1153 "x86_64-gen.c"
                case 45:
                # 1153 "x86_64-gen.c"
                a_66=4;
                # 1155 "x86_64-gen.c"
                # 1154 "x86_64-gen.c"
                if(swapped_69) {
                    # 1155 "x86_64-gen.c"
                    a_66++;
                }
                # 1156 "x86_64-gen.c"
                break;
                # 1158 "x86_64-gen.c"
                case 42:
                # 1158 "x86_64-gen.c"
                a_66=1;
                # 1159 "x86_64-gen.c"
                break;
                # 1161 "x86_64-gen.c"
                case 47:
                # 1161 "x86_64-gen.c"
                a_66=6;
                # 1163 "x86_64-gen.c"
                # 1162 "x86_64-gen.c"
                if(swapped_69) {
                    # 1163 "x86_64-gen.c"
                    a_66++;
                }
                # 1164 "x86_64-gen.c"
                break;
            }
            # 1166 "x86_64-gen.c"
            ft_67=vtop->type.t;
            # 1167 "x86_64-gen.c"
            fc_68=vtop->c.ul;
            # 1168 "x86_64-gen.c"
            o(222);
            # 1169 "x86_64-gen.c"
            o(193+(a_66<<3));
            # 1170 "x86_64-gen.c"
            vtop--;
        }
    }
    else {
        # 1284 "x86_64-gen.c"
        # 1173 "x86_64-gen.c"
        if(_if_conditional85=op>=146&&op<=159,        _if_conditional85) {
            # 1175 "x86_64-gen.c"
            r_70=vtop->r;
            # 1176 "x86_64-gen.c"
            fc_68=vtop->c.ul;
            # 1187 "x86_64-gen.c"
            # 1177 "x86_64-gen.c"
            if(_if_conditional86=(r_70&255)==241,            _if_conditional86) {
                # 1178 "x86_64-gen.c"
                # 1179 "x86_64-gen.c"
                r_70=get_reg(1);
                # 1180 "x86_64-gen.c"
                v1_72.type.t=0;
                # 1181 "x86_64-gen.c"
                v1_72.r=242|256;
                # 1182 "x86_64-gen.c"
                v1_72.c.ul=fc_68;
                # 1183 "x86_64-gen.c"
                load(r_70,&v1_72);
                # 1184 "x86_64-gen.c"
                fc_68=0;
            }
            # 1199 "x86_64-gen.c"
            # 1187 "x86_64-gen.c"
            if(_if_conditional87=op==148||op==149,            _if_conditional87) {
                # 1188 "x86_64-gen.c"
                swapped_69=0;
            }
            else {
                # 1191 "x86_64-gen.c"
                # 1190 "x86_64-gen.c"
                if(_if_conditional88=op==158||op==156,                _if_conditional88) {
                    # 1191 "x86_64-gen.c"
                    swapped_69=!swapped_69;
                }
                # 1197 "x86_64-gen.c"
                # 1192 "x86_64-gen.c"
                if(_if_conditional89=op==158||op==157,                _if_conditional89) {
                    # 1193 "x86_64-gen.c"
                    op=147;
                }
                else {
                    # 1195 "x86_64-gen.c"
                    op=151;
                }
            }
            # 1216 "x86_64-gen.c"
            # 1199 "x86_64-gen.c"
            if(swapped_69) {
                # 1200 "x86_64-gen.c"
                o(8261619);
                # 1201 "x86_64-gen.c"
                gen_modrm(1,r_70,vtop->sym,fc_68);
                # 1206 "x86_64-gen.c"
                # 1203 "x86_64-gen.c"
                if(_if_conditional91=(vtop->type.t&15)==9,                _if_conditional91) {
                    # 1204 "x86_64-gen.c"
                    o(102);
                }
                # 1206 "x86_64-gen.c"
                o(11791);
                # 1207 "x86_64-gen.c"
                o(200);
            }
            else {
                # 1212 "x86_64-gen.c"
                # 1209 "x86_64-gen.c"
                if(_if_conditional92=(vtop->type.t&15)==9,                _if_conditional92) {
                    # 1210 "x86_64-gen.c"
                    o(102);
                }
                # 1212 "x86_64-gen.c"
                o(11791);
                # 1213 "x86_64-gen.c"
                gen_modrm(0,r_70,vtop->sym,fc_68);
            }
            # 1216 "x86_64-gen.c"
            vtop--;
            # 1217 "x86_64-gen.c"
            vtop->r=243;
            # 1218 "x86_64-gen.c"
            vtop->c.i=op;
        }
        else {
            # 1225 "x86_64-gen.c"
            # 1221 "x86_64-gen.c"
            if(_if_conditional93=(vtop->type.t&15)==10,            _if_conditional93) {
                # 1222 "x86_64-gen.c"
                load(3,vtop);
                # 1223 "x86_64-gen.c"
                swapped_69=!swapped_69;
            }
            # 1240 "x86_64-gen.c"
            switch (op) {
                # 1227 "x86_64-gen.c"
                default:
                # 1228 "x86_64-gen.c"
                case 43:
                # 1228 "x86_64-gen.c"
                a_66=0;
                # 1229 "x86_64-gen.c"
                break;
                # 1231 "x86_64-gen.c"
                case 45:
                # 1231 "x86_64-gen.c"
                a_66=4;
                # 1232 "x86_64-gen.c"
                break;
                # 1234 "x86_64-gen.c"
                case 42:
                # 1234 "x86_64-gen.c"
                a_66=1;
                # 1235 "x86_64-gen.c"
                break;
                # 1237 "x86_64-gen.c"
                case 47:
                # 1237 "x86_64-gen.c"
                a_66=6;
                # 1238 "x86_64-gen.c"
                break;
            }
            # 1240 "x86_64-gen.c"
            ft_67=vtop->type.t;
            # 1241 "x86_64-gen.c"
            fc_68=vtop->c.ul;
            # 1282 "x86_64-gen.c"
            # 1242 "x86_64-gen.c"
            if(_if_conditional94=(ft_67&15)==10,            _if_conditional94) {
                # 1243 "x86_64-gen.c"
                o(222);
                # 1244 "x86_64-gen.c"
                o(193+(a_66<<3));
            }
            else {
                # 1247 "x86_64-gen.c"
                r_70=vtop->r;
                # 1257 "x86_64-gen.c"
                # 1248 "x86_64-gen.c"
                if(_if_conditional95=(r_70&255)==241,                _if_conditional95) {
                    # 1249 "x86_64-gen.c"
                    # 1250 "x86_64-gen.c"
                    r_70=get_reg(1);
                    # 1251 "x86_64-gen.c"
                    v1_73.type.t=0;
                    # 1252 "x86_64-gen.c"
                    v1_73.r=242|256;
                    # 1253 "x86_64-gen.c"
                    v1_73.c.ul=fc_68;
                    # 1254 "x86_64-gen.c"
                    load(r_70,&v1_73);
                    # 1255 "x86_64-gen.c"
                    fc_68=0;
                }
                # 1281 "x86_64-gen.c"
                # 1257 "x86_64-gen.c"
                if(swapped_69) {
                    # 1259 "x86_64-gen.c"
                    o(8261619);
                    # 1260 "x86_64-gen.c"
                    o(200);
                    # 1261 "x86_64-gen.c"
                    load(3,vtop);
                    # 1268 "x86_64-gen.c"
                    # 1263 "x86_64-gen.c"
                    if(_if_conditional97=(ft_67&15)==9,                    _if_conditional97) {
                        # 1264 "x86_64-gen.c"
                        o(242);
                    }
                    else {
                        # 1266 "x86_64-gen.c"
                        o(243);
                    }
                    # 1268 "x86_64-gen.c"
                    o(15);
                    # 1269 "x86_64-gen.c"
                    o(88+a_66);
                    # 1270 "x86_64-gen.c"
                    o(193);
                }
                else {
                    # 1277 "x86_64-gen.c"
                    # 1272 "x86_64-gen.c"
                    if(_if_conditional98=(ft_67&15)==9,                    _if_conditional98) {
                        # 1273 "x86_64-gen.c"
                        o(242);
                    }
                    else {
                        # 1275 "x86_64-gen.c"
                        o(243);
                    }
                    # 1277 "x86_64-gen.c"
                    o(15);
                    # 1278 "x86_64-gen.c"
                    o(88+a_66);
                    # 1279 "x86_64-gen.c"
                    gen_modrm(0,r_70,vtop->sym,fc_68);
                }
            }
            # 1282 "x86_64-gen.c"
            vtop--;
        }
    }
}

void gen_cvt_itof(int t){
void* __result_obj__;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _elif_conditional33;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
    # 1328 "x86_64-gen.c"
    # 1291 "x86_64-gen.c"
    if(_if_conditional99=(t&15)==10,    _if_conditional99) {
        # 1292 "x86_64-gen.c"
        save_reg(4);
        # 1293 "x86_64-gen.c"
        gv(1);
        # 1314 "x86_64-gen.c"
        # 1294 "x86_64-gen.c"
        if(_if_conditional100=(vtop->type.t&15)==12,        _if_conditional100) {
            # 1297 "x86_64-gen.c"
            o(80+(vtop->r&255));
            # 1298 "x86_64-gen.c"
            o(2370783);
            # 1299 "x86_64-gen.c"
            o(147096392);
        }
        # 1301 "x86_64-gen.c"
        else if(_elif_conditional33=(vtop->type.t&(15|16))==(0|16),        _elif_conditional33) {
            # 1303 "x86_64-gen.c"
            o(106);
            # 1304 "x86_64-gen.c"
            g(0);
            # 1305 "x86_64-gen.c"
            o(80+(vtop->r&255));
            # 1306 "x86_64-gen.c"
            o(2370783);
            # 1307 "x86_64-gen.c"
            o(281314120);
        }
        else {
            # 1310 "x86_64-gen.c"
            o(80+(vtop->r&255));
            # 1311 "x86_64-gen.c"
            o(2360539);
            # 1312 "x86_64-gen.c"
            o(147096392);
        }
        # 1314 "x86_64-gen.c"
        vtop->r=4;
    }
    else {
        # 1316 "x86_64-gen.c"
        save_reg(3);
        # 1317 "x86_64-gen.c"
        gv(1);
        # 1318 "x86_64-gen.c"
        o(242+((t&15)==8));
        # 1324 "x86_64-gen.c"
        # 1321 "x86_64-gen.c"
        if(_if_conditional101=(vtop->type.t&(15|16))==(0|16)||(vtop->type.t&15)==12,        _if_conditional101) {
            # 1322 "x86_64-gen.c"
            o(72);
        }
        # 1324 "x86_64-gen.c"
        o(10767);
        # 1325 "x86_64-gen.c"
        o(192+(vtop->r&255));
        # 1326 "x86_64-gen.c"
        vtop->r=3;
    }
}

void gen_cvt_ftof(int t){
void* __result_obj__;
int ft_74;
int bt_75;
int tbt_76;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _elif_conditional34;
_Bool _elif_conditional35;
_Bool _if_conditional104;
_Bool _elif_conditional36;
_Bool _if_conditional105;
_Bool _elif_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
    # 1333 "x86_64-gen.c"
    # 1335 "x86_64-gen.c"
    ft_74=vtop->type.t;
    # 1336 "x86_64-gen.c"
    bt_75=ft_74&15;
    # 1337 "x86_64-gen.c"
    tbt_76=t&15;
    # 1379 "x86_64-gen.c"
    # 1339 "x86_64-gen.c"
    if(_if_conditional102=bt_75==8,    _if_conditional102) {
        # 1340 "x86_64-gen.c"
        gv(2);
        # 1351 "x86_64-gen.c"
        # 1341 "x86_64-gen.c"
        if(_if_conditional103=tbt_76==9,        _if_conditional103) {
            # 1342 "x86_64-gen.c"
            o(12588047);
            # 1343 "x86_64-gen.c"
            o(12605967);
        }
        # 1344 "x86_64-gen.c"
        else if(_elif_conditional34=tbt_76==10,        _elif_conditional34) {
            # 1346 "x86_64-gen.c"
            o(1141968883);
            # 1347 "x86_64-gen.c"
            o(61476);
            # 1348 "x86_64-gen.c"
            o(-266058535);
            # 1349 "x86_64-gen.c"
            vtop->r=4;
        }
    }
    # 1351 "x86_64-gen.c"
    else if(_elif_conditional35=bt_75==9,    _elif_conditional35) {
        # 1352 "x86_64-gen.c"
        gv(2);
        # 1363 "x86_64-gen.c"
        # 1353 "x86_64-gen.c"
        if(_if_conditional104=tbt_76==8,        _if_conditional104) {
            # 1354 "x86_64-gen.c"
            o(-1072427162);
            # 1355 "x86_64-gen.c"
            o(-1067839642);
        }
        # 1356 "x86_64-gen.c"
        else if(_elif_conditional36=tbt_76==10,        _elif_conditional36) {
            # 1358 "x86_64-gen.c"
            o(1141968882);
            # 1359 "x86_64-gen.c"
            o(61476);
            # 1360 "x86_64-gen.c"
            o(-266058531);
            # 1361 "x86_64-gen.c"
            vtop->r=4;
        }
    }
    else {
        # 1364 "x86_64-gen.c"
        gv(64);
        # 1378 "x86_64-gen.c"
        # 1365 "x86_64-gen.c"
        if(_if_conditional105=tbt_76==9,        _if_conditional105) {
            # 1366 "x86_64-gen.c"
            o(-266052387);
            # 1368 "x86_64-gen.c"
            o(1141903346);
            # 1369 "x86_64-gen.c"
            o(61476);
            # 1370 "x86_64-gen.c"
            vtop->r=3;
        }
        # 1371 "x86_64-gen.c"
        else if(_elif_conditional37=tbt_76==8,        _elif_conditional37) {
            # 1372 "x86_64-gen.c"
            o(-266052391);
            # 1374 "x86_64-gen.c"
            o(1141903347);
            # 1375 "x86_64-gen.c"
            o(61476);
            # 1376 "x86_64-gen.c"
            vtop->r=3;
        }
    }
}

void gen_cvt_ftoi(int t){
void* __result_obj__;
int ft_77;
int bt_78;
int size_79;
int r_80;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _elif_conditional38;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
    # 1384 "x86_64-gen.c"
    # 1385 "x86_64-gen.c"
    ft_77=vtop->type.t;
    # 1386 "x86_64-gen.c"
    bt_78=ft_77&15;
    # 1392 "x86_64-gen.c"
    # 1387 "x86_64-gen.c"
    if(_if_conditional106=bt_78==10,    _if_conditional106) {
        # 1388 "x86_64-gen.c"
        gen_cvt_ftof(9);
        # 1389 "x86_64-gen.c"
        bt_78=9;
    }
    # 1392 "x86_64-gen.c"
    gv(2);
    # 1396 "x86_64-gen.c"
    # 1393 "x86_64-gen.c"
    if(_if_conditional107=t!=0,    _if_conditional107) {
        # 1394 "x86_64-gen.c"
        size_79=8;
    }
    else {
        # 1396 "x86_64-gen.c"
        size_79=4;
    }
    # 1398 "x86_64-gen.c"
    r_80=get_reg(1);
    # 1406 "x86_64-gen.c"
    # 1399 "x86_64-gen.c"
    if(_if_conditional108=bt_78==8,    _if_conditional108) {
        # 1400 "x86_64-gen.c"
        o(243);
    }
    # 1401 "x86_64-gen.c"
    else if(_elif_conditional38=bt_78==9,    _elif_conditional38) {
        # 1402 "x86_64-gen.c"
        o(242);
    }
    else {
        # 1404 "x86_64-gen.c"
        ((void)((0)||(__assert_fail("0","x86_64-gen.c",1404,"gen_cvt_ftoi"),0)));
    }
    # 1409 "x86_64-gen.c"
    # 1406 "x86_64-gen.c"
    if(_if_conditional109=size_79==8,    _if_conditional109) {
        # 1407 "x86_64-gen.c"
        o(72+(((r_80)>>3)&1));
    }
    # 1409 "x86_64-gen.c"
    o(11279);
    # 1410 "x86_64-gen.c"
    o(192+(((r_80)&7)<<3));
    # 1411 "x86_64-gen.c"
    vtop->r=r_80;
}

void ggoto(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1417 "x86_64-gen.c"
    gcall_or_jmp(1);
    # 1418 "x86_64-gen.c"
    vtop--;
}

void* resolve_sym(struct TCCState* s1, const char* sym, int type){
void* __result_obj__;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 312 "libtcc.c"
    __result25__ = __result_obj__ = dlsym(((void*)0),sym);
    return __result25__;
}

int ieee_finite(double d){
void* __result_obj__;
int* p_81;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_81, 0, sizeof(int*));
    # 324 "libtcc.c"
    p_81=(int*)&d;
    # 325 "libtcc.c"
    __result26__ = ((unsigned int)((p_81[1]|-2146435073)+1))>>31;
    return __result26__;
}

char* pstrcpy(char* buf, int buf_size, const char* s){
void* __result_obj__;
char* q_82;
char* q_end_83;
int c_84;
_Bool _if_conditional110;
_Bool _while_condtional4;
_Bool _if_conditional111;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_84, 0, sizeof(int));
    # 331 "libtcc.c"
    # 332 "libtcc.c"
    # 345 "libtcc.c"
    # 334 "libtcc.c"
    if(_if_conditional110=buf_size>0,    _if_conditional110) {
        # 335 "libtcc.c"
        q_82=buf;
        # 336 "libtcc.c"
        q_end_83=buf+buf_size-1;
        # 343 "libtcc.c"
        while(_while_condtional4=q_82<q_end_83,        _while_condtional4) {
            # 338 "libtcc.c"
            c_84=*s++;
            # 341 "libtcc.c"
            # 339 "libtcc.c"
            if(_if_conditional111=c_84==0,            _if_conditional111) {
                # 340 "libtcc.c"
                break;
            }
            # 341 "libtcc.c"
            *q_82++=c_84;
        }
        # 343 "libtcc.c"
        *q_82=0;
    }
    # 345 "libtcc.c"
    __result27__ = __result_obj__ = buf;
    return __result27__;
}

char* pstrcat(char* buf, int buf_size, const char* s){
void* __result_obj__;
int len_85;
_Bool _if_conditional112;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_85, 0, sizeof(int));
    # 351 "libtcc.c"
    # 352 "libtcc.c"
    len_85=strlen(buf);
    # 354 "libtcc.c"
    # 353 "libtcc.c"
    if(_if_conditional112=len_85<buf_size,    _if_conditional112) {
        # 354 "libtcc.c"
        pstrcpy(buf+len_85,buf_size-len_85,s);
    }
    # 355 "libtcc.c"
    __result28__ = __result_obj__ = buf;
    return __result28__;
}

char* tcc_basename(const char* name){
void* __result_obj__;
char* p_86;
_Bool _while_condtional5;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_86, 0, sizeof(char*));
    # 361 "libtcc.c"
    p_86=strchr(name,0);
    # 363 "libtcc.c"
    while(_while_condtional5=p_86>name&&!(p_86[-1]==47),    _while_condtional5) {
        # 363 "libtcc.c"
        --p_86;
    }
    # 364 "libtcc.c"
    __result29__ = __result_obj__ = p_86;
    return __result29__;
}

char* tcc_fileextension(const char* name){
void* __result_obj__;
char* b_87;
char* e_88;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&b_87, 0, sizeof(char*));
memset(&e_88, 0, sizeof(char*));
    # 369 "libtcc.c"
    b_87=tcc_basename(name);
    # 370 "libtcc.c"
    e_88=strrchr(b_87,46);
    # 371 "libtcc.c"
    __result30__ = __result_obj__ = e_88?e_88:strchr(b_87,0);
    return __result30__;
}

void set_pages_executable(void* ptr, unsigned long int length){
void* __result_obj__;
unsigned long int start_89;
unsigned long int end_90;
memset(&__result_obj__, 0, sizeof(void*));
    # 406 "libtcc.c"
    # 407 "libtcc.c"
    start_89=(unsigned long int)ptr&~(4096-1);
    # 408 "libtcc.c"
    end_90=(unsigned long int)ptr+length;
    # 409 "libtcc.c"
    end_90=(end_90+4096-1)&~(4096-1);
    # 410 "libtcc.c"
    mprotect((void*)start_89,end_90-start_89,1|2|4);
}

void tcc_free(void* ptr){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 426 "libtcc.c"
    free(ptr);
}

void* tcc_malloc(unsigned long int size){
void* __result_obj__;
void* ptr_91;
_Bool _if_conditional113;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_91, 0, sizeof(void*));
    # 431 "libtcc.c"
    # 432 "libtcc.c"
    ptr_91=malloc(size);
    # 434 "libtcc.c"
    # 433 "libtcc.c"
    if(_if_conditional113=!ptr_91&&size,    _if_conditional113) {
        # 434 "libtcc.c"
        error("memory full");
    }
    # 440 "libtcc.c"
    __result31__ = __result_obj__ = ptr_91;
    return __result31__;
}

void* tcc_mallocz(unsigned long int size){
void* __result_obj__;
void* ptr_92;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_92, 0, sizeof(void*));
    # 445 "libtcc.c"
    # 446 "libtcc.c"
    ptr_92=tcc_malloc(size);
    # 447 "libtcc.c"
    memset(ptr_92,0,size);
    # 448 "libtcc.c"
    __result32__ = __result_obj__ = ptr_92;
    return __result32__;
}

void* tcc_realloc(void* ptr, unsigned long int size){
void* __result_obj__;
void* ptr1_93;
void* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr1_93, 0, sizeof(void*));
    # 453 "libtcc.c"
    # 457 "libtcc.c"
    ptr1_93=realloc(ptr,size);
    # 464 "libtcc.c"
    __result33__ = __result_obj__ = ptr1_93;
    return __result33__;
}

char* tcc_strdup(const char* str){
void* __result_obj__;
char* ptr_94;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_94, 0, sizeof(char*));
    # 469 "libtcc.c"
    # 470 "libtcc.c"
    ptr_94=tcc_malloc(strlen(str)+1);
    # 471 "libtcc.c"
    strcpy(ptr_94,str);
    # 472 "libtcc.c"
    __result34__ = __result_obj__ = ptr_94;
    return __result34__;
}

void dynarray_add(void*** ptab, int* nb_ptr, void* data){
void* __result_obj__;
int nb_95;
int nb_alloc_96;
void** pp_97;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pp_97, 0, sizeof(void**));
    # 481 "libtcc.c"
    # 482 "libtcc.c"
    # 484 "libtcc.c"
    nb_95=*nb_ptr;
    # 485 "libtcc.c"
    pp_97=*ptab;
    # 497 "libtcc.c"
    # 487 "libtcc.c"
    if(_if_conditional114=(nb_95&(nb_95-1))==0,    _if_conditional114) {
        # 491 "libtcc.c"
        # 488 "libtcc.c"
        if(_if_conditional115=!nb_95,        _if_conditional115) {
            # 489 "libtcc.c"
            nb_alloc_96=1;
        }
        else {
            # 491 "libtcc.c"
            nb_alloc_96=nb_95*2;
        }
        # 492 "libtcc.c"
        pp_97=tcc_realloc(pp_97,nb_alloc_96*sizeof(void*));
        # 495 "libtcc.c"
        # 493 "libtcc.c"
        if(_if_conditional116=!pp_97,        _if_conditional116) {
            # 494 "libtcc.c"
            error("memory full");
        }
        # 495 "libtcc.c"
        *ptab=pp_97;
    }
    # 497 "libtcc.c"
    pp_97[nb_95++]=data;
    # 498 "libtcc.c"
    *nb_ptr=nb_95;
}

void dynarray_reset(void* pp, int* n){
void* __result_obj__;
void** p_98;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_98, 0, sizeof(void**));
    # 503 "libtcc.c"
    # 506 "libtcc.c"
    for(    p_98=*(void***)pp;    *n;    ++p_98,--*n    ){
        # 506 "libtcc.c"
        # 505 "libtcc.c"
        if(_if_conditional117=*p_98,        _if_conditional117) {
            # 506 "libtcc.c"
            tcc_free(*p_98);
        }
    }
    # 507 "libtcc.c"
    tcc_free(*(void**)pp);
    # 508 "libtcc.c"
    *(void**)pp=((void*)0);
}

static struct Sym* __sym_malloc(){
void* __result_obj__;
struct Sym* sym_pool_99;
struct Sym* sym_100;
struct Sym* last_sym_101;
int i_102;
struct Sym* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_102, 0, sizeof(int));
    # 514 "libtcc.c"
    # 515 "libtcc.c"
    # 517 "libtcc.c"
    sym_pool_99=tcc_malloc((8192/sizeof(struct Sym))*sizeof(struct Sym));
    # 518 "libtcc.c"
    dynarray_add(&sym_pools,&nb_sym_pools,sym_pool_99);
    # 520 "libtcc.c"
    last_sym_101=sym_free_first;
    # 521 "libtcc.c"
    sym_100=sym_pool_99;
    # 527 "libtcc.c"
    for(    i_102=0;    i_102<(8192/sizeof(struct Sym));    i_102++    ){
        # 523 "libtcc.c"
        sym_100->next=last_sym_101;
        # 524 "libtcc.c"
        last_sym_101=sym_100;
        # 525 "libtcc.c"
        sym_100++;
    }
    # 527 "libtcc.c"
    sym_free_first=last_sym_101;
    # 528 "libtcc.c"
    __result35__ = __result_obj__ = last_sym_101;
    return __result35__;
}



struct Section* new_section(struct TCCState* s1, const char* name, int sh_type, int sh_flags){
void* __result_obj__;
struct Section* sec_104;
_Bool _if_conditional119;
struct Section* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sec_104, 0, sizeof(struct Section*));
    # 549 "libtcc.c"
    # 551 "libtcc.c"
    sec_104=tcc_mallocz(sizeof(struct Section)+strlen(name));
    # 552 "libtcc.c"
    strcpy(sec_104->name,name);
    # 553 "libtcc.c"
    sec_104->sh_type=sh_type;
    # 554 "libtcc.c"
    sec_104->sh_flags=sh_flags;
    # 572 "libtcc.c"
    switch (sh_type) {
        # 557 "libtcc.c"
        case 5:
        # 558 "libtcc.c"
        case 9:
        # 559 "libtcc.c"
        case 4:
        # 560 "libtcc.c"
        case 11:
        # 561 "libtcc.c"
        case 2:
        # 562 "libtcc.c"
        case 6:
        # 562 "libtcc.c"
        sec_104->sh_addralign=4;
        # 563 "libtcc.c"
        break;
        # 565 "libtcc.c"
        case 3:
        # 565 "libtcc.c"
        sec_104->sh_addralign=1;
        # 566 "libtcc.c"
        break;
        # 568 "libtcc.c"
        default:
        # 568 "libtcc.c"
        sec_104->sh_addralign=32;
        # 569 "libtcc.c"
        break;
    }
    # 579 "libtcc.c"
    # 572 "libtcc.c"
    if(_if_conditional119=sh_flags&-2147483648,    _if_conditional119) {
        # 573 "libtcc.c"
        dynarray_add((void***)&s1->priv_sections,&s1->nb_priv_sections,sec_104);
    }
    else {
        # 575 "libtcc.c"
        sec_104->sh_num=s1->nb_sections;
        # 576 "libtcc.c"
        dynarray_add((void***)&s1->sections,&s1->nb_sections,sec_104);
    }
    # 579 "libtcc.c"
    __result37__ = __result_obj__ = sec_104;
    return __result37__;
}

static void free_section(struct Section* s){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 584 "libtcc.c"
    tcc_free(s->data);
}

static void section_realloc(struct Section* sec, unsigned long int new_size){
void* __result_obj__;
unsigned long int size_105;
unsigned char* data_106;
_Bool _if_conditional120;
_Bool _while_condtional6;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_105, 0, sizeof(unsigned long int));
memset(&data_106, 0, sizeof(unsigned char*));
    # 590 "libtcc.c"
    # 591 "libtcc.c"
    # 593 "libtcc.c"
    size_105=sec->data_allocated;
    # 595 "libtcc.c"
    # 594 "libtcc.c"
    if(_if_conditional120=size_105==0,    _if_conditional120) {
        # 595 "libtcc.c"
        size_105=1;
    }
    # 597 "libtcc.c"
    while(_while_condtional6=size_105<new_size,    _while_condtional6) {
        # 597 "libtcc.c"
        size_105=size_105*2;
    }
    # 598 "libtcc.c"
    data_106=tcc_realloc(sec->data,size_105);
    # 600 "libtcc.c"
    # 599 "libtcc.c"
    if(_if_conditional121=!data_106,    _if_conditional121) {
        # 600 "libtcc.c"
        error("memory full");
    }
    # 601 "libtcc.c"
    memset(data_106+sec->data_allocated,0,size_105-sec->data_allocated);
    # 602 "libtcc.c"
    sec->data=data_106;
    # 603 "libtcc.c"
    sec->data_allocated=size_105;
}

static void* section_ptr_add(struct Section* sec, unsigned long int size){
void* __result_obj__;
unsigned long int offset_107;
unsigned long int offset1_108;
_Bool _if_conditional122;
void* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    # 610 "libtcc.c"
    # 612 "libtcc.c"
    offset_107=sec->data_offset;
    # 613 "libtcc.c"
    offset1_108=offset_107+size;
    # 615 "libtcc.c"
    # 614 "libtcc.c"
    if(_if_conditional122=offset1_108>sec->data_allocated,    _if_conditional122) {
        # 615 "libtcc.c"
        section_realloc(sec,offset1_108);
    }
    # 616 "libtcc.c"
    sec->data_offset=offset1_108;
    # 617 "libtcc.c"
    __result38__ = __result_obj__ = sec->data+offset_107;
    return __result38__;
}

struct Section* find_section(struct TCCState* s1, const char* name){
void* __result_obj__;
struct Section* sec_109;
int i_110;
_Bool _if_conditional123;
struct Section* __result39__;
struct Section* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sec_109, 0, sizeof(struct Section*));
memset(&i_110, 0, sizeof(int));
    # 624 "libtcc.c"
    # 625 "libtcc.c"
    # 632 "libtcc.c"
    for(    i_110=1;    i_110<s1->nb_sections;    i_110++    ){
        # 627 "libtcc.c"
        sec_109=s1->sections[i_110];
        # 630 "libtcc.c"
        # 628 "libtcc.c"
        if(_if_conditional123=!strcmp(name,sec_109->name),        _if_conditional123) {
            # 629 "libtcc.c"
            __result39__ = __result_obj__ = sec_109;
            return __result39__;
        }
    }
    # 632 "libtcc.c"
    __result40__ = __result_obj__ = new_section(s1,name,1,(1<<1));
    return __result40__;
}

static void put_extern_sym2(struct Sym* sym, struct Section* section, unsigned long int value, unsigned long int size, int can_add_underscore){
void* __result_obj__;
int sym_type_111;
int sym_bind_112;
int sh_num_113;
int info_114;
int other_115;
int attr_116;
struct anonymous_typeX68* esym_117;
const char* name_118;
_Bool _if_conditional124;
_Bool _elif_conditional39;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
name_118=get_tok_str(sym->v,((void*)0));
_Bool _if_conditional128;
name_118=buf1_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&esym_117, 0, sizeof(struct anonymous_typeX68*));
    # 641 "libtcc.c"
    # 642 "libtcc.c"
    # 643 "libtcc.c"
    # 644 "libtcc.c"
    char buf1_119[256];
    memset(&buf1_119, 0, sizeof(char)    *(256)    );
    # 651 "libtcc.c"
    # 646 "libtcc.c"
    if(_if_conditional124=section==((void*)0),    _if_conditional124) {
        # 647 "libtcc.c"
        sh_num_113=0;
    }
    # 648 "libtcc.c"
    else if(_elif_conditional39=section==((void*)1),    _elif_conditional39) {
        # 649 "libtcc.c"
        sh_num_113=65521;
    }
    else {
        # 651 "libtcc.c"
        sh_num_113=section->sh_num;
    }
    # 653 "libtcc.c"
    other_115=attr_116=0;
    # 669 "libtcc.c"
    # 655 "libtcc.c"
    if(_if_conditional125=(sym->type.t&15)==6,    _if_conditional125) {
        # 656 "libtcc.c"
        sym_type_111=2;
    }
    else {
        # 666 "libtcc.c"
        sym_type_111=1;
    }
    # 672 "libtcc.c"
    # 669 "libtcc.c"
    if(_if_conditional126=sym->type.t&256,    _if_conditional126) {
        # 670 "libtcc.c"
        sym_bind_112=0;
    }
    else {
        # 672 "libtcc.c"
        sym_bind_112=1;
    }
    # 726 "libtcc.c"
    # 674 "libtcc.c"
    if(_if_conditional127=!sym->c,    _if_conditional127) {
        # 675 "libtcc.c"
        # 717 "libtcc.c"
        # 712 "libtcc.c"
        if(_if_conditional128=tcc_state->leading_underscore&&can_add_underscore,        _if_conditional128) {
            # 713 "libtcc.c"
            buf1_119[0]=95;
            # 714 "libtcc.c"
            pstrcpy(buf1_119+1,sizeof(buf1_119)-1,name_118);
            # 715 "libtcc.c"
        }
        # 717 "libtcc.c"
        info_114=((((sym_bind_112))<<4)+(((sym_type_111))&15));
        # 718 "libtcc.c"
        sym->c=add_elf_sym(symtab_section,value,size,info_114,other_115,sh_num_113,name_118);
    }
    else {
        # 720 "libtcc.c"
        esym_117=&((struct anonymous_typeX68*)symtab_section->data)[sym->c];
        # 721 "libtcc.c"
        esym_117->st_value=value;
        # 722 "libtcc.c"
        esym_117->st_size=size;
        # 723 "libtcc.c"
        esym_117->st_shndx=sh_num_113;
        # 724 "libtcc.c"
        esym_117->st_other|=other_115;
    }
}

static void put_extern_sym(struct Sym* sym, struct Section* section, unsigned long int value, unsigned long int size){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 731 "libtcc.c"
    put_extern_sym2(sym,section,value,size,1);
}

static void greloc(struct Section* s, struct Sym* sym, unsigned long int offset, int type){
void* __result_obj__;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
    # 738 "libtcc.c"
    # 737 "libtcc.c"
    if(_if_conditional129=!sym->c,    _if_conditional129) {
        # 738 "libtcc.c"
        put_extern_sym(sym,((void*)0),0,0);
    }
    # 740 "libtcc.c"
    put_elf_reloc(symtab_section,s,offset,type,sym->c);
}





static void strcat_vprintf(char* buf, int buf_size, const char* fmt, va_list ap){
void* __result_obj__;
int len_120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_120, 0, sizeof(int));
    # 770 "libtcc.c"
    # 771 "libtcc.c"
    len_120=strlen(buf);
    # 772 "libtcc.c"
    vsnprintf(buf+len_120,buf_size-len_120,fmt,ap);
}

static void strcat_printf(char* buf, int buf_size, const char* fmt, ...){
void* __result_obj__;
va_list ap_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ap_121, 0, sizeof(va_list));
    # 777 "libtcc.c"
    # 778 "libtcc.c"
    __builtin_va_start(ap_121,fmt);
    # 779 "libtcc.c"
    strcat_vprintf(buf,buf_size,fmt,ap_121);
    # 780 "libtcc.c"
    __builtin_va_end(ap_121);
    come_call_finalizer3((&ap_121),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void error1(struct TCCState* s1, int is_warning, const char* fmt, va_list ap){
void* __result_obj__;
struct BufferedFile** f_123;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_123, 0, sizeof(struct BufferedFile**));
    # 785 "libtcc.c"
    char buf_122[2048];
    memset(&buf_122, 0, sizeof(char)    *(2048)    );
    # 786 "libtcc.c"
    # 788 "libtcc.c"
    buf_122[0]=0;
    # 804 "libtcc.c"
    # 789 "libtcc.c"
    if(file) {
        # 792 "libtcc.c"
        for(        f_123=s1->include_stack;        f_123<s1->include_stack_ptr;        f_123++        ){
            # 792 "libtcc.c"
            strcat_printf(buf_122,sizeof(buf_122),"In file included from %s:%d:\n",(*f_123)->filename,(*f_123)->line_num);
        }
        # 800 "libtcc.c"
        # 793 "libtcc.c"
        if(_if_conditional132=file->line_num>0,        _if_conditional132) {
            # 795 "libtcc.c"
            strcat_printf(buf_122,sizeof(buf_122),"%s:%d: ",file->filename,file->line_num);
        }
        else {
            # 798 "libtcc.c"
            strcat_printf(buf_122,sizeof(buf_122),"%s: ",file->filename);
        }
    }
    else {
        # 802 "libtcc.c"
        strcat_printf(buf_122,sizeof(buf_122),"tcc: ");
    }
    # 805 "libtcc.c"
    # 804 "libtcc.c"
    if(is_warning) {
        # 805 "libtcc.c"
        strcat_printf(buf_122,sizeof(buf_122),"warning: ");
    }
    # 806 "libtcc.c"
    strcat_vprintf(buf_122,sizeof(buf_122),fmt,ap);
    # 814 "libtcc.c"
    # 808 "libtcc.c"
    if(_if_conditional134=!s1->error_func,    _if_conditional134) {
        # 810 "libtcc.c"
        fprintf((stderr),"%s\n",buf_122);
    }
    else {
        # 812 "libtcc.c"
        s1->error_func(s1->_protocol_obj,s1->error_opaque,buf_122);
    }
    # 816 "libtcc.c"
    # 814 "libtcc.c"
    if(_if_conditional135=!is_warning||s1->warn_error,    _if_conditional135) {
        # 815 "libtcc.c"
        s1->nb_errors++;
    }
}

void tcc_set_error_func(struct TCCState* s, void* error_opaque, void (*error_func)(void*,const char*)){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 821 "libtcc.c"
    s->error_opaque=error_opaque;
    # 822 "libtcc.c"
    s->error_func=error_func;
}

void error_noabort(const char* fmt, ...){
void* __result_obj__;
struct TCCState* s1_124;
va_list ap_125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s1_124, 0, sizeof(struct TCCState*));
memset(&ap_125, 0, sizeof(va_list));
    # 828 "libtcc.c"
    s1_124=tcc_state;
    # 829 "libtcc.c"
    # 831 "libtcc.c"
    __builtin_va_start(ap_125,fmt);
    # 832 "libtcc.c"
    error1(s1_124,0,fmt,ap_125);
    # 833 "libtcc.c"
    __builtin_va_end(ap_125);
    come_call_finalizer3((&ap_125),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void error(const char* fmt, ...){
void* __result_obj__;
struct TCCState* s1_126;
va_list ap_127;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s1_126, 0, sizeof(struct TCCState*));
memset(&ap_127, 0, sizeof(va_list));
    # 838 "libtcc.c"
    s1_126=tcc_state;
    # 839 "libtcc.c"
    # 841 "libtcc.c"
    __builtin_va_start(ap_127,fmt);
    # 842 "libtcc.c"
    error1(s1_126,0,fmt,ap_127);
    # 843 "libtcc.c"
    __builtin_va_end(ap_127);
    # 851 "libtcc.c"
    # 845 "libtcc.c"
    if(s1_126->error_set_jmp_enabled) {
        # 846 "libtcc.c"
        longjmp(s1_126->error_jmp_buf,1);
    }
    else {
        # 849 "libtcc.c"
        exit(1);
    }
    come_call_finalizer3((&ap_127),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void expect(const char* msg){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 855 "libtcc.c"
    error("%s expected",msg);
}

void warning(const char* fmt, ...){
void* __result_obj__;
struct TCCState* s1_128;
va_list ap_129;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s1_128, 0, sizeof(struct TCCState*));
memset(&ap_129, 0, sizeof(va_list));
    # 860 "libtcc.c"
    s1_128=tcc_state;
    # 861 "libtcc.c"
    # 867 "libtcc.c"
    # 863 "libtcc.c"
    if(s1_128->warn_none) {
        # 864 "libtcc.c"
        come_call_finalizer3((&ap_129),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return;
    }
    # 866 "libtcc.c"
    __builtin_va_start(ap_129,fmt);
    # 867 "libtcc.c"
    error1(s1_128,1,fmt,ap_129);
    # 868 "libtcc.c"
    __builtin_va_end(ap_129);
    come_call_finalizer3((&ap_129),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void skip(int c){
void* __result_obj__;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
    # 874 "libtcc.c"
    # 873 "libtcc.c"
    if(_if_conditional138=tok!=c,    _if_conditional138) {
        # 874 "libtcc.c"
        error("'%c' expected",c);
    }
    # 875 "libtcc.c"
    next();
}

static void test_lvalue(){
void* __result_obj__;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
    # 882 "libtcc.c"
    # 880 "libtcc.c"
    if(_if_conditional139=!(vtop->r&256),    _if_conditional139) {
        # 881 "libtcc.c"
        expect("lvalue");
    }
}

static void cstr_realloc(struct CString* cstr, int new_size){
void* __result_obj__;
int size_130;
void* data_131;
_Bool _if_conditional140;
_Bool _while_condtional7;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_130, 0, sizeof(int));
memset(&data_131, 0, sizeof(void*));
    # 888 "libtcc.c"
    # 889 "libtcc.c"
    # 891 "libtcc.c"
    size_130=cstr->size_allocated;
    # 893 "libtcc.c"
    # 892 "libtcc.c"
    if(_if_conditional140=size_130==0,    _if_conditional140) {
        # 893 "libtcc.c"
        size_130=8;
    }
    # 895 "libtcc.c"
    while(_while_condtional7=size_130<new_size,    _while_condtional7) {
        # 895 "libtcc.c"
        size_130=size_130*2;
    }
    # 896 "libtcc.c"
    data_131=tcc_realloc(cstr->data_allocated,size_130);
    # 898 "libtcc.c"
    # 897 "libtcc.c"
    if(_if_conditional141=!data_131,    _if_conditional141) {
        # 898 "libtcc.c"
        error("memory full");
    }
    # 899 "libtcc.c"
    cstr->data_allocated=data_131;
    # 900 "libtcc.c"
    cstr->size_allocated=size_130;
    # 901 "libtcc.c"
    cstr->data=data_131;
}


static void cstr_cat(struct CString* cstr, const char* str){
void* __result_obj__;
int c_133;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_133, 0, sizeof(int));
    # 917 "libtcc.c"
    # 925 "libtcc.c"
    for(    ;    ;    ){
        # 919 "libtcc.c"
        c_133=*str;
        # 921 "libtcc.c"
        # 920 "libtcc.c"
        if(_if_conditional143=c_133==0,        _if_conditional143) {
            # 921 "libtcc.c"
            break;
        }
        # 922 "libtcc.c"
        cstr_ccat(cstr,c_133);
        # 923 "libtcc.c"
        str++;
    }
}

static void cstr_wccat(struct CString* cstr, int ch){
void* __result_obj__;
int size_134;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
    # 930 "libtcc.c"
    # 931 "libtcc.c"
    size_134=cstr->size+sizeof(int);
    # 934 "libtcc.c"
    # 932 "libtcc.c"
    if(_if_conditional144=size_134>cstr->size_allocated,    _if_conditional144) {
        # 933 "libtcc.c"
        cstr_realloc(cstr,size_134);
    }
    # 934 "libtcc.c"
    *(int*)(((unsigned char*)cstr->data)+size_134-sizeof(int))=ch;
    # 935 "libtcc.c"
    cstr->size=size_134;
}

static void cstr_new(struct CString* cstr){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 940 "libtcc.c"
    memset(cstr,0,sizeof(struct CString));
}

static void cstr_free(struct CString* cstr){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 946 "libtcc.c"
    tcc_free(cstr->data_allocated);
    # 947 "libtcc.c"
    cstr_new(cstr);
}

static void add_char(struct CString* cstr, int c){
void* __result_obj__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
    # 959 "libtcc.c"
    # 955 "libtcc.c"
    if(_if_conditional145=c==39||c==34||c==92,    _if_conditional145) {
        # 957 "libtcc.c"
        cstr_ccat(cstr,92);
    }
    # 971 "libtcc.c"
    # 959 "libtcc.c"
    if(_if_conditional146=c>=32&&c<=126,    _if_conditional146) {
        # 960 "libtcc.c"
        cstr_ccat(cstr,c);
    }
    else {
        # 962 "libtcc.c"
        cstr_ccat(cstr,92);
        # 970 "libtcc.c"
        # 963 "libtcc.c"
        if(_if_conditional147=c==10,        _if_conditional147) {
            # 964 "libtcc.c"
            cstr_ccat(cstr,110);
        }
        else {
            # 966 "libtcc.c"
            cstr_ccat(cstr,48+((c>>6)&7));
            # 967 "libtcc.c"
            cstr_ccat(cstr,48+((c>>3)&7));
            # 968 "libtcc.c"
            cstr_ccat(cstr,48+(c&7));
        }
    }
}

static struct Sym* sym_push2(struct Sym** ps, int v, int t, long c){
void* __result_obj__;
struct Sym* s_135;
struct Sym* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_135, 0, sizeof(struct Sym*));
    # 976 "libtcc.c"
    # 977 "libtcc.c"
    s_135=sym_malloc();
    # 978 "libtcc.c"
    s_135->v=v;
    # 979 "libtcc.c"
    s_135->type.t=t;
    # 980 "libtcc.c"
    s_135->c=c;
    # 981 "libtcc.c"
    s_135->next=((void*)0);
    # 983 "libtcc.c"
    s_135->prev=*ps;
    # 984 "libtcc.c"
    *ps=s_135;
    # 985 "libtcc.c"
    __result46__ = __result_obj__ = s_135;
    return __result46__;
}

static struct Sym* sym_find2(struct Sym* s, int v){
void* __result_obj__;
_Bool _if_conditional148;
struct Sym* __result47__;
struct Sym* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 997 "libtcc.c"
    while(s) {
        # 994 "libtcc.c"
        # 993 "libtcc.c"
        if(_if_conditional148=s->v==v,        _if_conditional148) {
            # 994 "libtcc.c"
            __result47__ = __result_obj__ = s;
            return __result47__;
        }
        # 995 "libtcc.c"
        s=s->prev;
    }
    # 997 "libtcc.c"
    __result48__ = __result_obj__ = ((void*)0);
    return __result48__;
}



static struct Sym* sym_push(int v, struct CType* type, int r, int c){
void* __result_obj__;
struct Sym* s_136;
struct Sym** ps_137;
struct TokenSym* ts_138;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct Sym* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_138, 0, sizeof(struct TokenSym*));
    # 1021 "libtcc.c"
    # 1022 "libtcc.c"
    # 1027 "libtcc.c"
    # 1024 "libtcc.c"
    if(local_stack) {
        # 1025 "libtcc.c"
        ps_137=&local_stack;
    }
    else {
        # 1027 "libtcc.c"
        ps_137=&global_stack;
    }
    # 1028 "libtcc.c"
    s_136=sym_push2(ps_137,v,type->t,c);
    # 1029 "libtcc.c"
    s_136->type.ref=type->ref;
    # 1030 "libtcc.c"
    s_136->r=r;
    # 1043 "libtcc.c"
    # 1033 "libtcc.c"
    if(_if_conditional152=!(v&536870912)&&(v&~1073741824)<268435456,    _if_conditional152) {
        # 1035 "libtcc.c"
        ts_138=table_ident[(v&~1073741824)-256];
        # 1039 "libtcc.c"
        # 1036 "libtcc.c"
        if(_if_conditional153=v&1073741824,        _if_conditional153) {
            # 1037 "libtcc.c"
            ps_137=&ts_138->sym_struct;
        }
        else {
            # 1039 "libtcc.c"
            ps_137=&ts_138->sym_identifier;
        }
        # 1040 "libtcc.c"
        s_136->prev_tok=*ps_137;
        # 1041 "libtcc.c"
        *ps_137=s_136;
    }
    # 1043 "libtcc.c"
    __result53__ = __result_obj__ = s_136;
    return __result53__;
}

static struct Sym* global_identifier_push(int v, int t, int c){
void* __result_obj__;
struct Sym* s_139;
struct Sym** ps_140;
_Bool _if_conditional154;
_Bool _while_condtional8;
struct Sym* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1049 "libtcc.c"
    # 1050 "libtcc.c"
    s_139=sym_push2(&global_stack,v,t,c);
    # 1061 "libtcc.c"
    # 1052 "libtcc.c"
    if(_if_conditional154=v<268435456,    _if_conditional154) {
        # 1053 "libtcc.c"
        ps_140=&table_ident[v-256]->sym_identifier;
        # 1057 "libtcc.c"
        while(_while_condtional8=*ps_140!=((void*)0),        _while_condtional8) {
            # 1057 "libtcc.c"
            ps_140=&(*ps_140)->prev_tok;
        }
        # 1058 "libtcc.c"
        s_139->prev_tok=((void*)0);
        # 1059 "libtcc.c"
        *ps_140=s_139;
    }
    # 1061 "libtcc.c"
    __result54__ = __result_obj__ = s_139;
    return __result54__;
}

static void sym_pop(struct Sym** ptop, struct Sym* b){
void* __result_obj__;
struct Sym* s_141;
struct Sym* ss_142;
struct Sym** ps_143;
struct TokenSym* ts_144;
int v_145;
_Bool _while_condtional9;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_144, 0, sizeof(struct TokenSym*));
memset(&v_145, 0, sizeof(int));
    # 1067 "libtcc.c"
    # 1068 "libtcc.c"
    # 1069 "libtcc.c"
    # 1071 "libtcc.c"
    s_141=*ptop;
    # 1088 "libtcc.c"
    while(_while_condtional9=s_141!=b,    _while_condtional9) {
        # 1073 "libtcc.c"
        ss_142=s_141->prev;
        # 1074 "libtcc.c"
        v_145=s_141->v;
        # 1085 "libtcc.c"
        # 1077 "libtcc.c"
        if(_if_conditional155=!(v_145&536870912)&&(v_145&~1073741824)<268435456,        _if_conditional155) {
            # 1078 "libtcc.c"
            ts_144=table_ident[(v_145&~1073741824)-256];
            # 1082 "libtcc.c"
            # 1079 "libtcc.c"
            if(_if_conditional156=v_145&1073741824,            _if_conditional156) {
                # 1080 "libtcc.c"
                ps_143=&ts_144->sym_struct;
            }
            else {
                # 1082 "libtcc.c"
                ps_143=&ts_144->sym_identifier;
            }
            # 1083 "libtcc.c"
            *ps_143=s_141->prev_tok;
        }
        # 1085 "libtcc.c"
        sym_free(s_141);
        # 1086 "libtcc.c"
        s_141=ss_142;
    }
    # 1088 "libtcc.c"
    *ptop=b;
}

struct BufferedFile* tcc_open(struct TCCState* s1, const char* filename){
void* __result_obj__;
int fd_146;
struct BufferedFile* bf_147;
_Bool _if_conditional157;
filename="stdin";
_Bool _if_conditional158;
_Bool _if_conditional159;
struct BufferedFile* __result55__;
struct BufferedFile* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fd_146, 0, sizeof(int));
memset(&bf_147, 0, sizeof(struct BufferedFile*));
    # 1095 "libtcc.c"
    # 1096 "libtcc.c"
    # 1101 "libtcc.c"
    # 1098 "libtcc.c"
    if(_if_conditional157=strcmp(filename,"-")==0,    _if_conditional157) {
        # 1099 "libtcc.c"
        fd_146=0,;
    }
    else {
        # 1101 "libtcc.c"
        fd_146=open(filename,0|0);
    }
    # 1104 "libtcc.c"
    # 1102 "libtcc.c"
    if(_if_conditional158=(s1->verbose==2&&fd_146>=0)||s1->verbose==3,    _if_conditional158) {
        # 1104 "libtcc.c"
        printf("%s %*s%s\n",fd_146<0?"nf":"->",(s1->include_stack_ptr-s1->include_stack),"",filename);
    }
    # 1106 "libtcc.c"
    # 1105 "libtcc.c"
    if(_if_conditional159=fd_146<0,    _if_conditional159) {
        # 1106 "libtcc.c"
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    # 1107 "libtcc.c"
    bf_147=tcc_malloc(sizeof(struct BufferedFile));
    # 1108 "libtcc.c"
    bf_147->fd=fd_146;
    # 1109 "libtcc.c"
    bf_147->buf_ptr=bf_147->buffer;
    # 1110 "libtcc.c"
    bf_147->buf_end=bf_147->buffer;
    # 1111 "libtcc.c"
    bf_147->buffer[0]=92;
    # 1112 "libtcc.c"
    pstrcpy(bf_147->filename,sizeof(bf_147->filename),filename);
    # 1116 "libtcc.c"
    bf_147->line_num=1;
    # 1117 "libtcc.c"
    bf_147->ifndef_macro=0;
    # 1118 "libtcc.c"
    bf_147->ifdef_stack_ptr=s1->ifdef_stack_ptr;
    # 1120 "libtcc.c"
    __result56__ = __result_obj__ = bf_147;
    return __result56__;
}

void tcc_close(struct BufferedFile* bf){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1125 "libtcc.c"
    total_lines+=bf->line_num;
    # 1126 "libtcc.c"
    close(bf->fd);
    # 1127 "libtcc.c"
    tcc_free(bf);
}

static struct TokenSym* tok_alloc_new(struct TokenSym** pts, const char* str, int len){
void* __result_obj__;
struct TokenSym* ts_148;
struct TokenSym** ptable_149;
int i_150;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct TokenSym* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_150, 0, sizeof(int));
    # 49 "tccpp.c"
    # 50 "tccpp.c"
    # 53 "tccpp.c"
    # 52 "tccpp.c"
    if(_if_conditional160=tok_ident>=268435456,    _if_conditional160) {
        # 53 "tccpp.c"
        error("memory full");
    }
    # 56 "tccpp.c"
    i_150=tok_ident-256;
    # 64 "tccpp.c"
    # 57 "tccpp.c"
    if(_if_conditional161=(i_150%512)==0,    _if_conditional161) {
        # 58 "tccpp.c"
        ptable_149=tcc_realloc(table_ident,(i_150+512)*sizeof(struct TokenSym*));
        # 60 "tccpp.c"
        # 59 "tccpp.c"
        if(_if_conditional162=!ptable_149,        _if_conditional162) {
            # 60 "tccpp.c"
            error("memory full");
        }
        # 61 "tccpp.c"
        table_ident=ptable_149;
    }
    # 64 "tccpp.c"
    ts_148=tcc_malloc(sizeof(struct TokenSym)+len);
    # 65 "tccpp.c"
    table_ident[i_150]=ts_148;
    # 66 "tccpp.c"
    ts_148->tok=tok_ident++;
    # 67 "tccpp.c"
    ts_148->sym_define=((void*)0);
    # 68 "tccpp.c"
    ts_148->sym_label=((void*)0);
    # 69 "tccpp.c"
    ts_148->sym_struct=((void*)0);
    # 70 "tccpp.c"
    ts_148->sym_identifier=((void*)0);
    # 71 "tccpp.c"
    ts_148->len=len;
    # 72 "tccpp.c"
    ts_148->hash_next=((void*)0);
    # 73 "tccpp.c"
    memcpy(ts_148->str,str,len);
    # 74 "tccpp.c"
    ts_148->str[len]=0;
    # 75 "tccpp.c"
    *pts=ts_148;
    # 76 "tccpp.c"
    __result57__ = __result_obj__ = ts_148;
    return __result57__;
}

static struct TokenSym* tok_alloc(const char* str, int len){
void* __result_obj__;
struct TokenSym* ts_151;
struct TokenSym** pts_152;
int i_153;
unsigned int h_154;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct TokenSym* __result58__;
struct TokenSym* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_153, 0, sizeof(int));
memset(&h_154, 0, sizeof(unsigned int));
    # 85 "tccpp.c"
    # 86 "tccpp.c"
    # 87 "tccpp.c"
    # 89 "tccpp.c"
    h_154=1;
    # 91 "tccpp.c"
    for(    i_153=0;    i_153<len;    i_153++    ){
        # 91 "tccpp.c"
        h_154=((h_154)*263+(((unsigned char*)str)[i_153]));
    }
    # 92 "tccpp.c"
    h_154&=(8192-1);
    # 94 "tccpp.c"
    pts_152=&hash_ident[h_154];
    # 103 "tccpp.c"
    for(    ;    ;    ){
        # 96 "tccpp.c"
        ts_151=*pts_152;
        # 98 "tccpp.c"
        # 97 "tccpp.c"
        if(_if_conditional163=!ts_151,        _if_conditional163) {
            # 98 "tccpp.c"
            break;
        }
        # 100 "tccpp.c"
        # 99 "tccpp.c"
        if(_if_conditional164=ts_151->len==len&&!memcmp(ts_151->str,str,len),        _if_conditional164) {
            # 100 "tccpp.c"
            __result58__ = __result_obj__ = ts_151;
            return __result58__;
        }
        # 101 "tccpp.c"
        pts_152=&(ts_151->hash_next);
    }
    # 103 "tccpp.c"
    __result59__ = __result_obj__ = tok_alloc_new(pts_152,str,len);
    return __result59__;
}

char* get_tok_str(int v, union CValue* cv){
void* __result_obj__;
struct CString cstr_buf_156;
struct CString* cstr_157;
unsigned char* q_158;
char* p_159;
int i_160;
int len_161;
_Bool _if_conditional165;
char* __result60__;
char* __result61__;
char* __result62__;
_Bool _if_conditional166;
_Bool _while_condtional10;
_Bool _if_conditional167;
char* __result63__;
_Bool _elif_conditional40;
char* __result64__;
_Bool _elif_conditional41;
char* __result65__;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cstr_157, 0, sizeof(struct CString*));
memset(&q_158, 0, sizeof(unsigned char*));
memset(&p_159, 0, sizeof(char*));
    # 110 "tccpp.c"
    static char buf_155[1024+1];
    # 111 "tccpp.c"
    # 112 "tccpp.c"
    # 113 "tccpp.c"
    # 114 "tccpp.c"
    # 115 "tccpp.c"
    # 118 "tccpp.c"
    cstr_free(&cstr_buf_156);
    # 119 "tccpp.c"
    cstr_buf_156.data=buf_155;
    # 120 "tccpp.c"
    cstr_buf_156.size_allocated=sizeof(buf_155);
    # 121 "tccpp.c"
    p_159=buf_155;
    # 205 "tccpp.c"
    switch (v) {
        # 125 "tccpp.c"
        case 179:
        # 127 "tccpp.c"
        case 200:
        # 127 "tccpp.c"
        sprintf(p_159,"%u",cv->ui);
        # 128 "tccpp.c"
        break;
        # 130 "tccpp.c"
        case 201:
        # 132 "tccpp.c"
        case 202:
        # 132 "tccpp.c"
        sprintf(p_159,"%Lu",cv->ull);
        # 133 "tccpp.c"
        break;
        # 135 "tccpp.c"
        case 183:
        # 135 "tccpp.c"
        cstr_ccat(&cstr_buf_156,76);
        # 137 "tccpp.c"
        case 180:
        # 137 "tccpp.c"
        cstr_ccat(&cstr_buf_156,39);
        # 138 "tccpp.c"
        add_char(&cstr_buf_156,cv->i);
        # 139 "tccpp.c"
        cstr_ccat(&cstr_buf_156,39);
        # 140 "tccpp.c"
        cstr_ccat(&cstr_buf_156,0);
        # 141 "tccpp.c"
        break;
        # 143 "tccpp.c"
        case 206:
        # 143 "tccpp.c"
        cstr_157=cv->cstr;
        # 144 "tccpp.c"
        len_161=cstr_157->size-1;
        # 146 "tccpp.c"
        for(        i_160=0;        i_160<len_161;        i_160++        ){
            # 146 "tccpp.c"
            add_char(&cstr_buf_156,((unsigned char*)cstr_157->data)[i_160]);
        }
        # 147 "tccpp.c"
        cstr_ccat(&cstr_buf_156,0);
        # 148 "tccpp.c"
        break;
        # 150 "tccpp.c"
        case 184:
        # 150 "tccpp.c"
        cstr_ccat(&cstr_buf_156,76);
        # 152 "tccpp.c"
        case 181:
        # 152 "tccpp.c"
        cstr_157=cv->cstr;
        # 153 "tccpp.c"
        cstr_ccat(&cstr_buf_156,34);
        # 163 "tccpp.c"
        # 154 "tccpp.c"
        if(_if_conditional165=v==181,        _if_conditional165) {
            # 155 "tccpp.c"
            len_161=cstr_157->size-1;
            # 157 "tccpp.c"
            for(            i_160=0;            i_160<len_161;            i_160++            ){
                # 157 "tccpp.c"
                add_char(&cstr_buf_156,((unsigned char*)cstr_157->data)[i_160]);
            }
        }
        else {
            # 159 "tccpp.c"
            len_161=(cstr_157->size/sizeof(int))-1;
            # 161 "tccpp.c"
            for(            i_160=0;            i_160<len_161;            i_160++            ){
                # 161 "tccpp.c"
                add_char(&cstr_buf_156,((int*)cstr_157->data)[i_160]);
            }
        }
        # 163 "tccpp.c"
        cstr_ccat(&cstr_buf_156,34);
        # 164 "tccpp.c"
        cstr_ccat(&cstr_buf_156,0);
        # 165 "tccpp.c"
        break;
        # 167 "tccpp.c"
        case 156:
        # 167 "tccpp.c"
        v=60;
        # 168 "tccpp.c"
        goto addv;
        # 170 "tccpp.c"
        case 159:
        # 170 "tccpp.c"
        v=62;
        # 171 "tccpp.c"
        goto addv;
        # 173 "tccpp.c"
        case 204:
        # 173 "tccpp.c"
        __result60__ = __result_obj__ = strcpy(p_159,"...");
        come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
        return __result60__;
        # 175 "tccpp.c"
        case 129:
        # 175 "tccpp.c"
        __result61__ = __result_obj__ = strcpy(p_159,"<<=");
        come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
        return __result61__;
        # 177 "tccpp.c"
        case 130:
        # 177 "tccpp.c"
        __result62__ = __result_obj__ = strcpy(p_159,">>=");
        come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
        return __result62__;
        # 179 "tccpp.c"
        default:
        # 203 "tccpp.c"
        # 179 "tccpp.c"
        if(_if_conditional166=v<256,        _if_conditional166) {
            # 181 "tccpp.c"
            q_158=tok_two_chars;
            # 191 "tccpp.c"
            while(_while_condtional10=*q_158,            _while_condtional10) {
                # 189 "tccpp.c"
                # 183 "tccpp.c"
                if(_if_conditional167=q_158[2]==v,                _if_conditional167) {
                    # 184 "tccpp.c"
                    *p_159++=q_158[0];
                    # 185 "tccpp.c"
                    *p_159++=q_158[1];
                    # 186 "tccpp.c"
                    *p_159=0;
                    # 187 "tccpp.c"
                    __result63__ = __result_obj__ = buf_155;
                    come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
                    return __result63__;
                }
                # 189 "tccpp.c"
                q_158+=3;
            }
            # 192 "tccpp.c"
            addv:
            # 192 "tccpp.c"
            *p_159++=v;
            # 193 "tccpp.c"
            *p_159=0;
        }
        # 194 "tccpp.c"
        else if(_elif_conditional40=v<tok_ident,        _elif_conditional40) {
            # 195 "tccpp.c"
            __result64__ = __result_obj__ = table_ident[v-256]->str;
            come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
            return __result64__;
        }
        # 196 "tccpp.c"
        else if(_elif_conditional41=v>=268435456,        _elif_conditional41) {
            # 198 "tccpp.c"
            sprintf(p_159,"L.%u",v-268435456);
        }
        else {
            # 201 "tccpp.c"
            __result65__ = __result_obj__ = ((void*)0);
            come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
            return __result65__;
        }
        # 203 "tccpp.c"
        break;
    }
    # 205 "tccpp.c"
    __result66__ = __result_obj__ = cstr_buf_156.data;
    come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer3((&cstr_buf_156),CString_finalize, 1, 0, 0, 0, (void*)0);
}

static void CString_finalize(struct CString* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int tcc_peekc_slow(struct BufferedFile* bf){
void* __result_obj__;
int len_162;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
int __result67__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_162, 0, sizeof(int));
    # 211 "tccpp.c"
    # 231 "tccpp.c"
    # 213 "tccpp.c"
    if(_if_conditional168=bf->buf_ptr>=bf->buf_end,    _if_conditional168) {
        # 226 "tccpp.c"
        # 214 "tccpp.c"
        if(_if_conditional169=bf->fd!=-1,        _if_conditional169) {
            # 218 "tccpp.c"
            len_162=8192;
            # 220 "tccpp.c"
            len_162=read(bf->fd,bf->buffer,len_162);
            # 223 "tccpp.c"
            # 221 "tccpp.c"
            if(_if_conditional170=len_162<0,            _if_conditional170) {
                # 222 "tccpp.c"
                len_162=0;
            }
        }
        else {
            # 224 "tccpp.c"
            len_162=0;
        }
        # 226 "tccpp.c"
        total_bytes+=len_162;
        # 227 "tccpp.c"
        bf->buf_ptr=bf->buffer;
        # 228 "tccpp.c"
        bf->buf_end=bf->buffer+len_162;
        # 229 "tccpp.c"
        *bf->buf_end=92;
    }
    # 237 "tccpp.c"
    # 231 "tccpp.c"
    if(_if_conditional171=bf->buf_ptr<bf->buf_end,    _if_conditional171) {
        # 232 "tccpp.c"
        __result67__ = bf->buf_ptr[0];
        return __result67__;
    }
    else {
        # 234 "tccpp.c"
        bf->buf_ptr=bf->buf_end;
        # 235 "tccpp.c"
        __result68__ = (-1);
        return __result68__;
    }
}

static int handle_eob(){
void* __result_obj__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    # 243 "tccpp.c"
    __result69__ = tcc_peekc_slow(file);
    return __result69__;
}


static int handle_stray_noerror(){
void* __result_obj__;
_Bool _while_condtional11;
_Bool _if_conditional173;
_Bool _elif_conditional42;
_Bool _if_conditional174;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    # 274 "tccpp.c"
    while(_while_condtional11=ch==92,    _while_condtional11) {
        # 259 "tccpp.c"
        inp();
        # 273 "tccpp.c"
        # 260 "tccpp.c"
        if(_if_conditional173=ch==10,        _if_conditional173) {
            # 261 "tccpp.c"
            file->line_num++;
            # 262 "tccpp.c"
            inp();
        }
        # 263 "tccpp.c"
        else if(_elif_conditional42=ch==13,        _elif_conditional42) {
            # 264 "tccpp.c"
            inp();
            # 266 "tccpp.c"
            # 265 "tccpp.c"
            if(_if_conditional174=ch!=10,            _if_conditional174) {
                # 266 "tccpp.c"
                goto fail;
            }
            # 267 "tccpp.c"
            file->line_num++;
            # 268 "tccpp.c"
            inp();
        }
        else {
            # 271 "tccpp.c"
            fail:
            # 271 "tccpp.c"
            __result70__ = 1;
            return __result70__;
        }
    }
    # 274 "tccpp.c"
    __result71__ = 0;
    return __result71__;
}

static void handle_stray(){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
    # 281 "tccpp.c"
    # 279 "tccpp.c"
    if(_if_conditional175=handle_stray_noerror(),    _if_conditional175) {
        # 280 "tccpp.c"
        error("stray '\\' in program");
    }
}

static int handle_stray1(unsigned char* p){
void* __result_obj__;
int c_163;
_Bool _if_conditional176;
_Bool _if_conditional177;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_163, 0, sizeof(int));
    # 287 "tccpp.c"
    # 303 "tccpp.c"
    # 289 "tccpp.c"
    if(_if_conditional176=p>=file->buf_end,    _if_conditional176) {
        # 290 "tccpp.c"
        file->buf_ptr=p;
        # 291 "tccpp.c"
        c_163=handle_eob();
        # 292 "tccpp.c"
        p=file->buf_ptr;
        # 295 "tccpp.c"
        # 293 "tccpp.c"
        if(_if_conditional177=c_163==92,        _if_conditional177) {
            # 294 "tccpp.c"
            goto parse_stray;
        }
    }
    else {
        # 297 "tccpp.c"
        parse_stray:
        # 297 "tccpp.c"
        file->buf_ptr=p;
        # 298 "tccpp.c"
        ch=*p;
        # 299 "tccpp.c"
        handle_stray();
        # 300 "tccpp.c"
        p=file->buf_ptr;
        # 301 "tccpp.c"
        c_163=*p;
    }
    # 303 "tccpp.c"
    __result72__ = c_163;
    return __result72__;
}

static void minp(){
void* __result_obj__;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
    # 334 "tccpp.c"
    inp();
    # 337 "tccpp.c"
    # 335 "tccpp.c"
    if(_if_conditional178=ch==92,    _if_conditional178) {
        # 336 "tccpp.c"
        handle_stray();
    }
}

static unsigned char* parse_line_comment(unsigned char* p){
void* __result_obj__;
int c_164;
_Bool _if_conditional179;
_Bool _elif_conditional43;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _elif_conditional44;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
unsigned char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_164, 0, sizeof(int));
    # 343 "tccpp.c"
    # 345 "tccpp.c"
    p++;
    # 374 "tccpp.c"
    for(    ;    ;    ){
        # 347 "tccpp.c"
        c_164=*p;
        # 349 "tccpp.c"
        redo:
        # 373 "tccpp.c"
        # 349 "tccpp.c"
        if(_if_conditional179=c_164==10||c_164==(-1),        _if_conditional179) {
            # 350 "tccpp.c"
            break;
        }
        # 351 "tccpp.c"
        else if(_elif_conditional43=c_164==92,        _elif_conditional43) {
            # 352 "tccpp.c"
            file->buf_ptr=p;
            # 353 "tccpp.c"
            c_164=handle_eob();
            # 354 "tccpp.c"
            p=file->buf_ptr;
            # 370 "tccpp.c"
            # 355 "tccpp.c"
            if(_if_conditional180=c_164==92,            _if_conditional180) {
                # 356 "tccpp.c"
                {
                    # 356 "tccpp.c"
                    p++;
                    # 356 "tccpp.c"
                    c_164=*p;
                    # 356 "tccpp.c"
                    # 356 "tccpp.c"
                    if(_if_conditional181=c_164==92,                    _if_conditional181) {
                        # 356 "tccpp.c"
                        file->buf_ptr=p;
                        # 356 "tccpp.c"
                        c_164=handle_eob();
                        # 356 "tccpp.c"
                        p=file->buf_ptr;
                    }
                }
                # 367 "tccpp.c"
                # 357 "tccpp.c"
                if(_if_conditional182=c_164==10,                _if_conditional182) {
                    # 358 "tccpp.c"
                    file->line_num++;
                    # 359 "tccpp.c"
                    {
                        # 359 "tccpp.c"
                        p++;
                        # 359 "tccpp.c"
                        c_164=*p;
                        # 359 "tccpp.c"
                        # 359 "tccpp.c"
                        if(_if_conditional183=c_164==92,                        _if_conditional183) {
                            # 359 "tccpp.c"
                            file->buf_ptr=p;
                            # 359 "tccpp.c"
                            c_164=handle_eob();
                            # 359 "tccpp.c"
                            p=file->buf_ptr;
                        }
                    }
                }
                # 360 "tccpp.c"
                else if(_elif_conditional44=c_164==13,                _elif_conditional44) {
                    # 361 "tccpp.c"
                    {
                        # 361 "tccpp.c"
                        p++;
                        # 361 "tccpp.c"
                        c_164=*p;
                        # 361 "tccpp.c"
                        # 361 "tccpp.c"
                        if(_if_conditional184=c_164==92,                        _if_conditional184) {
                            # 361 "tccpp.c"
                            file->buf_ptr=p;
                            # 361 "tccpp.c"
                            c_164=handle_eob();
                            # 361 "tccpp.c"
                            p=file->buf_ptr;
                        }
                    }
                    # 366 "tccpp.c"
                    # 362 "tccpp.c"
                    if(_if_conditional185=c_164==10,                    _if_conditional185) {
                        # 363 "tccpp.c"
                        file->line_num++;
                        # 364 "tccpp.c"
                        {
                            # 364 "tccpp.c"
                            p++;
                            # 364 "tccpp.c"
                            c_164=*p;
                            # 364 "tccpp.c"
                            # 364 "tccpp.c"
                            if(_if_conditional186=c_164==92,                            _if_conditional186) {
                                # 364 "tccpp.c"
                                file->buf_ptr=p;
                                # 364 "tccpp.c"
                                c_164=handle_eob();
                                # 364 "tccpp.c"
                                p=file->buf_ptr;
                            }
                        }
                    }
                }
            }
            else {
                # 368 "tccpp.c"
                goto redo;
            }
        }
        else {
            # 371 "tccpp.c"
            p++;
        }
    }
    # 374 "tccpp.c"
    __result73__ = __result_obj__ = p;
    return __result73__;
}

static unsigned char* parse_comment(unsigned char* p){
void* __result_obj__;
int c_165;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _elif_conditional45;
_Bool _if_conditional190;
_Bool _elif_conditional46;
_Bool _elif_conditional47;
_Bool _if_conditional191;
_Bool _while_condtional12;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _elif_conditional48;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _elif_conditional49;
unsigned char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_165, 0, sizeof(int));
    # 380 "tccpp.c"
    # 382 "tccpp.c"
    p++;
    # 446 "tccpp.c"
    for(    ;    ;    ){
        # 396 "tccpp.c"
        for(        ;        ;        ){
            # 386 "tccpp.c"
            c_165=*p;
            # 388 "tccpp.c"
            # 387 "tccpp.c"
            if(_if_conditional187=c_165==10||c_165==42||c_165==92,            _if_conditional187) {
                # 388 "tccpp.c"
                break;
            }
            # 389 "tccpp.c"
            p++;
            # 390 "tccpp.c"
            c_165=*p;
            # 392 "tccpp.c"
            # 391 "tccpp.c"
            if(_if_conditional188=c_165==10||c_165==42||c_165==92,            _if_conditional188) {
                # 392 "tccpp.c"
                break;
            }
            # 393 "tccpp.c"
            p++;
        }
        # 445 "tccpp.c"
        # 396 "tccpp.c"
        if(_if_conditional189=c_165==10,        _if_conditional189) {
            # 397 "tccpp.c"
            file->line_num++;
            # 398 "tccpp.c"
            p++;
        }
        # 399 "tccpp.c"
        else if(_elif_conditional45=c_165==42,        _elif_conditional45) {
            # 400 "tccpp.c"
            p++;
            # 433 "tccpp.c"
            for(            ;            ;            ){
                # 402 "tccpp.c"
                c_165=*p;
                # 432 "tccpp.c"
                # 403 "tccpp.c"
                if(_if_conditional190=c_165==42,                _if_conditional190) {
                    # 404 "tccpp.c"
                    p++;
                }
                # 405 "tccpp.c"
                else if(_elif_conditional46=c_165==47,                _elif_conditional46) {
                    # 406 "tccpp.c"
                    goto end_of_comment;
                }
                # 407 "tccpp.c"
                else if(_elif_conditional47=c_165==92,                _elif_conditional47) {
                    # 408 "tccpp.c"
                    file->buf_ptr=p;
                    # 409 "tccpp.c"
                    c_165=handle_eob();
                    # 410 "tccpp.c"
                    p=file->buf_ptr;
                    # 429 "tccpp.c"
                    # 411 "tccpp.c"
                    if(_if_conditional191=c_165==92,                    _if_conditional191) {
                        # 428 "tccpp.c"
                        while(_while_condtional12=c_165==92,                        _while_condtional12) {
                            # 414 "tccpp.c"
                            {
                                # 414 "tccpp.c"
                                p++;
                                # 414 "tccpp.c"
                                c_165=*p;
                                # 414 "tccpp.c"
                                # 414 "tccpp.c"
                                if(_if_conditional192=c_165==92,                                _if_conditional192) {
                                    # 414 "tccpp.c"
                                    file->buf_ptr=p;
                                    # 414 "tccpp.c"
                                    c_165=handle_eob();
                                    # 414 "tccpp.c"
                                    p=file->buf_ptr;
                                }
                            }
                            # 427 "tccpp.c"
                            # 415 "tccpp.c"
                            if(_if_conditional193=c_165==10,                            _if_conditional193) {
                                # 416 "tccpp.c"
                                file->line_num++;
                                # 417 "tccpp.c"
                                {
                                    # 417 "tccpp.c"
                                    p++;
                                    # 417 "tccpp.c"
                                    c_165=*p;
                                    # 417 "tccpp.c"
                                    # 417 "tccpp.c"
                                    if(_if_conditional194=c_165==92,                                    _if_conditional194) {
                                        # 417 "tccpp.c"
                                        file->buf_ptr=p;
                                        # 417 "tccpp.c"
                                        c_165=handle_eob();
                                        # 417 "tccpp.c"
                                        p=file->buf_ptr;
                                    }
                                }
                            }
                            # 418 "tccpp.c"
                            else if(_elif_conditional48=c_165==13,                            _elif_conditional48) {
                                # 419 "tccpp.c"
                                {
                                    # 419 "tccpp.c"
                                    p++;
                                    # 419 "tccpp.c"
                                    c_165=*p;
                                    # 419 "tccpp.c"
                                    # 419 "tccpp.c"
                                    if(_if_conditional195=c_165==92,                                    _if_conditional195) {
                                        # 419 "tccpp.c"
                                        file->buf_ptr=p;
                                        # 419 "tccpp.c"
                                        c_165=handle_eob();
                                        # 419 "tccpp.c"
                                        p=file->buf_ptr;
                                    }
                                }
                                # 424 "tccpp.c"
                                # 420 "tccpp.c"
                                if(_if_conditional196=c_165==10,                                _if_conditional196) {
                                    # 421 "tccpp.c"
                                    file->line_num++;
                                    # 422 "tccpp.c"
                                    {
                                        # 422 "tccpp.c"
                                        p++;
                                        # 422 "tccpp.c"
                                        c_165=*p;
                                        # 422 "tccpp.c"
                                        # 422 "tccpp.c"
                                        if(_if_conditional197=c_165==92,                                        _if_conditional197) {
                                            # 422 "tccpp.c"
                                            file->buf_ptr=p;
                                            # 422 "tccpp.c"
                                            c_165=handle_eob();
                                            # 422 "tccpp.c"
                                            p=file->buf_ptr;
                                        }
                                    }
                                }
                            }
                            else {
                                # 425 "tccpp.c"
                                goto after_star;
                            }
                        }
                    }
                }
                else {
                    # 430 "tccpp.c"
                    break;
                }
            }
            # 433 "tccpp.c"
            after_star:
        }
        else {
            # 436 "tccpp.c"
            file->buf_ptr=p;
            # 437 "tccpp.c"
            c_165=handle_eob();
            # 438 "tccpp.c"
            p=file->buf_ptr;
            # 444 "tccpp.c"
            # 439 "tccpp.c"
            if(_if_conditional198=c_165==(-1),            _if_conditional198) {
                # 440 "tccpp.c"
                error("unexpected end of file in comment");
            }
            # 441 "tccpp.c"
            else if(_elif_conditional49=c_165==92,            _elif_conditional49) {
                # 442 "tccpp.c"
                p++;
            }
        }
    }
    # 447 "tccpp.c"
    end_of_comment:
    # 447 "tccpp.c"
    p++;
    # 448 "tccpp.c"
    __result74__ = __result_obj__ = p;
    return __result74__;
}



static unsigned char* parse_pp_string(unsigned char* p, int sep, struct CString* str){
void* __result_obj__;
int c_166;
_Bool _if_conditional201;
_Bool _elif_conditional50;
_Bool _if_conditional202;
_Bool _elif_conditional51;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _elif_conditional52;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _elif_conditional53;
_Bool _if_conditional207;
_Bool _elif_conditional54;
_Bool _elif_conditional55;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
unsigned char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_166, 0, sizeof(int));
    # 474 "tccpp.c"
    # 475 "tccpp.c"
    p++;
    # 529 "tccpp.c"
    for(    ;    ;    ){
        # 477 "tccpp.c"
        c_166=*p;
        # 528 "tccpp.c"
        # 478 "tccpp.c"
        if(_if_conditional201=c_166==sep,        _if_conditional201) {
            # 479 "tccpp.c"
            break;
        }
        # 480 "tccpp.c"
        else if(_elif_conditional50=c_166==92,        _elif_conditional50) {
            # 481 "tccpp.c"
            file->buf_ptr=p;
            # 482 "tccpp.c"
            c_166=handle_eob();
            # 483 "tccpp.c"
            p=file->buf_ptr;
            # 510 "tccpp.c"
            # 484 "tccpp.c"
            if(_if_conditional202=c_166==(-1),            _if_conditional202) {
                # 487 "tccpp.c"
                unterminated_string:
                # 487 "tccpp.c"
                error("missing terminating %c character",sep);
            }
            # 488 "tccpp.c"
            else if(_elif_conditional51=c_166==92,            _elif_conditional51) {
                # 490 "tccpp.c"
                {
                    # 490 "tccpp.c"
                    p++;
                    # 490 "tccpp.c"
                    c_166=*p;
                    # 490 "tccpp.c"
                    # 490 "tccpp.c"
                    if(_if_conditional203=c_166==92,                    _if_conditional203) {
                        # 490 "tccpp.c"
                        file->buf_ptr=p;
                        # 490 "tccpp.c"
                        c_166=handle_eob();
                        # 490 "tccpp.c"
                        p=file->buf_ptr;
                    }
                }
                # 509 "tccpp.c"
                # 491 "tccpp.c"
                if(_if_conditional204=c_166==10,                _if_conditional204) {
                    # 492 "tccpp.c"
                    file->line_num++;
                    # 493 "tccpp.c"
                    p++;
                }
                # 494 "tccpp.c"
                else if(_elif_conditional52=c_166==13,                _elif_conditional52) {
                    # 495 "tccpp.c"
                    {
                        # 495 "tccpp.c"
                        p++;
                        # 495 "tccpp.c"
                        c_166=*p;
                        # 495 "tccpp.c"
                        # 495 "tccpp.c"
                        if(_if_conditional205=c_166==92,                        _if_conditional205) {
                            # 495 "tccpp.c"
                            file->buf_ptr=p;
                            # 495 "tccpp.c"
                            c_166=handle_eob();
                            # 495 "tccpp.c"
                            p=file->buf_ptr;
                        }
                    }
                    # 497 "tccpp.c"
                    # 496 "tccpp.c"
                    if(_if_conditional206=c_166!=10,                    _if_conditional206) {
                        # 497 "tccpp.c"
                        expect("'\n' after '\r'");
                    }
                    # 498 "tccpp.c"
                    file->line_num++;
                    # 499 "tccpp.c"
                    p++;
                }
                # 500 "tccpp.c"
                else if(_elif_conditional53=c_166==(-1),                _elif_conditional53) {
                    # 501 "tccpp.c"
                    goto unterminated_string;
                }
                else {
                    # 507 "tccpp.c"
                    # 503 "tccpp.c"
                    if(str) {
                        # 504 "tccpp.c"
                        cstr_ccat(str,92);
                        # 505 "tccpp.c"
                        cstr_ccat(str,c_166);
                    }
                    # 507 "tccpp.c"
                    p++;
                }
            }
        }
        # 510 "tccpp.c"
        else if(_elif_conditional54=c_166==10,        _elif_conditional54) {
            # 511 "tccpp.c"
            file->line_num++;
            # 512 "tccpp.c"
            goto add_char;
        }
        # 513 "tccpp.c"
        else if(_elif_conditional55=c_166==13,        _elif_conditional55) {
            # 514 "tccpp.c"
            {
                # 514 "tccpp.c"
                p++;
                # 514 "tccpp.c"
                c_166=*p;
                # 514 "tccpp.c"
                # 514 "tccpp.c"
                if(_if_conditional208=c_166==92,                _if_conditional208) {
                    # 514 "tccpp.c"
                    file->buf_ptr=p;
                    # 514 "tccpp.c"
                    c_166=handle_eob();
                    # 514 "tccpp.c"
                    p=file->buf_ptr;
                }
            }
            # 522 "tccpp.c"
            # 515 "tccpp.c"
            if(_if_conditional209=c_166!=10,            _if_conditional209) {
                # 518 "tccpp.c"
                # 516 "tccpp.c"
                if(str) {
                    # 517 "tccpp.c"
                    cstr_ccat(str,13);
                }
            }
            else {
                # 519 "tccpp.c"
                file->line_num++;
                # 520 "tccpp.c"
                goto add_char;
            }
        }
        else {
            # 524 "tccpp.c"
            add_char:
            # 525 "tccpp.c"
            # 524 "tccpp.c"
            if(str) {
                # 525 "tccpp.c"
                cstr_ccat(str,c_166);
            }
            # 526 "tccpp.c"
            p++;
        }
    }
    # 529 "tccpp.c"
    p++;
    # 530 "tccpp.c"
    __result77__ = __result_obj__ = p;
    return __result77__;
}

void preprocess_skip(){
void* __result_obj__;
int a_167;
int start_of_line_168;
int c_169;
int in_warn_or_error_170;
unsigned char* p_171;
_Bool _if_conditional212;
_Bool _elif_conditional56;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _elif_conditional57;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _elif_conditional58;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_171, 0, sizeof(unsigned char*));
    # 537 "tccpp.c"
    # 538 "tccpp.c"
    # 540 "tccpp.c"
    p_171=file->buf_ptr;
    # 541 "tccpp.c"
    a_167=0;
    # 543 "tccpp.c"
    redo_start:
    # 543 "tccpp.c"
    start_of_line_168=1;
    # 544 "tccpp.c"
    in_warn_or_error_170=0;
    # 616 "tccpp.c"
    for(    ;    ;    ){
        # 547 "tccpp.c"
        redo_no_start:
        # 547 "tccpp.c"
        c_169=*p_171;
        # 614 "tccpp.c"
        switch (c_169) {
            # 550 "tccpp.c"
            case 32:
            # 551 "tccpp.c"
            case 9:
            # 552 "tccpp.c"
            case 12:
            # 553 "tccpp.c"
            case 11:
            # 554 "tccpp.c"
            case 13:
            # 554 "tccpp.c"
            p_171++;
            # 555 "tccpp.c"
            goto redo_no_start;
            # 557 "tccpp.c"
            case 10:
            # 557 "tccpp.c"
            file->line_num++;
            # 558 "tccpp.c"
            p_171++;
            # 559 "tccpp.c"
            goto redo_start;
            # 561 "tccpp.c"
            case 92:
            # 561 "tccpp.c"
            file->buf_ptr=p_171;
            # 562 "tccpp.c"
            c_169=handle_eob();
            # 569 "tccpp.c"
            # 563 "tccpp.c"
            if(_if_conditional212=c_169==(-1),            _if_conditional212) {
                # 564 "tccpp.c"
                expect("#endif");
            }
            # 565 "tccpp.c"
            else if(_elif_conditional56=c_169==92,            _elif_conditional56) {
                # 566 "tccpp.c"
                ch=file->buf_ptr[0];
                # 567 "tccpp.c"
                handle_stray_noerror();
            }
            # 569 "tccpp.c"
            p_171=file->buf_ptr;
            # 570 "tccpp.c"
            goto redo_no_start;
            # 573 "tccpp.c"
            case 34:
            # 574 "tccpp.c"
            case 39:
            # 575 "tccpp.c"
            # 574 "tccpp.c"
            if(in_warn_or_error_170) {
                # 575 "tccpp.c"
                goto _default;
            }
            # 576 "tccpp.c"
            p_171=parse_pp_string(p_171,c_169,((void*)0));
            # 577 "tccpp.c"
            break;
            # 580 "tccpp.c"
            case 47:
            # 581 "tccpp.c"
            # 580 "tccpp.c"
            if(in_warn_or_error_170) {
                # 581 "tccpp.c"
                goto _default;
            }
            # 582 "tccpp.c"
            file->buf_ptr=p_171;
            # 583 "tccpp.c"
            ch=*p_171;
            # 584 "tccpp.c"
            minp();
            # 585 "tccpp.c"
            p_171=file->buf_ptr;
            # 591 "tccpp.c"
            # 586 "tccpp.c"
            if(_if_conditional215=ch==42,            _if_conditional215) {
                # 587 "tccpp.c"
                p_171=parse_comment(p_171);
            }
            # 588 "tccpp.c"
            else if(_elif_conditional57=ch==47,            _elif_conditional57) {
                # 589 "tccpp.c"
                p_171=parse_line_comment(p_171);
            }
            # 591 "tccpp.c"
            break;
            # 593 "tccpp.c"
            case 35:
            # 593 "tccpp.c"
            p_171++;
            # 608 "tccpp.c"
            # 594 "tccpp.c"
            if(start_of_line_168) {
                # 595 "tccpp.c"
                file->buf_ptr=p_171;
                # 596 "tccpp.c"
                next_nomacro();
                # 597 "tccpp.c"
                p_171=file->buf_ptr;
                # 600 "tccpp.c"
                # 599 "tccpp.c"
                if(_if_conditional217=a_167==0&&(tok==261||tok==319||tok==320),                _if_conditional217) {
                    # 600 "tccpp.c"
                    goto the_end;
                }
                # 607 "tccpp.c"
                # 601 "tccpp.c"
                if(_if_conditional218=tok==260||tok==317||tok==318,                _if_conditional218) {
                    # 602 "tccpp.c"
                    a_167++;
                }
                # 603 "tccpp.c"
                else if(_elif_conditional58=tok==320,                _elif_conditional58) {
                    # 604 "tccpp.c"
                    a_167--;
                }
                else {
                    # 607 "tccpp.c"
                    # 605 "tccpp.c"
                    if(_if_conditional219=tok==323||tok==324,                    _if_conditional219) {
                        # 606 "tccpp.c"
                        in_warn_or_error_170=1;
                    }
                }
            }
            # 608 "tccpp.c"
            break;
            # 610 "tccpp.c"
            _default:
            # 611 "tccpp.c"
            default:
            # 611 "tccpp.c"
            p_171++;
            # 612 "tccpp.c"
            break;
        }
        # 614 "tccpp.c"
        start_of_line_168=0;
    }
    # 616 "tccpp.c"
    the_end:
    # 617 "tccpp.c"
    file->buf_ptr=p_171;
}

void save_parse_state(struct ParseState* s){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 629 "tccpp.c"
    s->line_num=file->line_num;
    # 630 "tccpp.c"
    s->macro_ptr=macro_ptr;
    # 631 "tccpp.c"
    s->tok=tok;
    # 632 "tccpp.c"
    s->tokc=tokc;
}

void restore_parse_state(struct ParseState* s){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 638 "tccpp.c"
    file->line_num=s->line_num;
    # 639 "tccpp.c"
    macro_ptr=s->macro_ptr;
    # 640 "tccpp.c"
    tok=s->tok;
    # 641 "tccpp.c"
    tokc=s->tokc;
}



static void tok_str_free(int* str){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 685 "tccpp.c"
    tcc_free(str);
}

static int* tok_str_realloc(struct TokenString* s){
void* __result_obj__;
int* str_172;
int len_173;
_Bool _if_conditional220;
_Bool _if_conditional221;
int* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 690 "tccpp.c"
    # 697 "tccpp.c"
    # 692 "tccpp.c"
    if(_if_conditional220=s->allocated_len==0,    _if_conditional220) {
        # 693 "tccpp.c"
        len_173=8;
    }
    else {
        # 695 "tccpp.c"
        len_173=s->allocated_len*2;
    }
    # 697 "tccpp.c"
    str_172=tcc_realloc(s->str,len_173*sizeof(int));
    # 699 "tccpp.c"
    # 698 "tccpp.c"
    if(_if_conditional221=!str_172,    _if_conditional221) {
        # 699 "tccpp.c"
        error("memory full");
    }
    # 700 "tccpp.c"
    s->allocated_len=len_173;
    # 701 "tccpp.c"
    s->str=str_172;
    # 702 "tccpp.c"
    __result83__ = __result_obj__ = str_172;
    return __result83__;
}

static void tok_str_add(struct TokenString* s, int t){
void* __result_obj__;
int len_174;
int* str_175;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
    # 707 "tccpp.c"
    # 709 "tccpp.c"
    len_174=s->len;
    # 710 "tccpp.c"
    str_175=s->str;
    # 712 "tccpp.c"
    # 711 "tccpp.c"
    if(_if_conditional222=len_174>=s->allocated_len,    _if_conditional222) {
        # 712 "tccpp.c"
        str_175=tok_str_realloc(s);
    }
    # 713 "tccpp.c"
    str_175[len_174++]=t;
    # 714 "tccpp.c"
    s->len=len_174;
}

static void tok_str_add2(struct TokenString* s, int t, union CValue* cv){
void* __result_obj__;
int len_176;
int* str_177;
_Bool _if_conditional223;
int nb_words_178;
struct CString* cstr_179;
_Bool _while_condtional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nb_words_178, 0, sizeof(int));
memset(&cstr_179, 0, sizeof(struct CString*));
    # 719 "tccpp.c"
    # 721 "tccpp.c"
    len_176=s->len;
    # 722 "tccpp.c"
    str_177=s->str;
    # 726 "tccpp.c"
    # 725 "tccpp.c"
    if(_if_conditional223=len_176+4>s->allocated_len,    _if_conditional223) {
        # 726 "tccpp.c"
        str_177=tok_str_realloc(s);
    }
    # 727 "tccpp.c"
    str_177[len_176++]=t;
    # 784 "tccpp.c"
    switch (t) {
        # 730 "tccpp.c"
        case 179:
        # 731 "tccpp.c"
        case 200:
        # 732 "tccpp.c"
        case 180:
        # 733 "tccpp.c"
        case 183:
        # 734 "tccpp.c"
        case 185:
        # 735 "tccpp.c"
        case 186:
        # 735 "tccpp.c"
        str_177[len_176++]=cv->tab[0];
        # 736 "tccpp.c"
        break;
        # 738 "tccpp.c"
        case 206:
        # 739 "tccpp.c"
        case 181:
        # 740 "tccpp.c"
        case 184:
        # 756 "tccpp.c"
        {
            # 741 "tccpp.c"
            # 742 "tccpp.c"
            # 744 "tccpp.c"
            nb_words_178=(sizeof(struct CString)+cv->cstr->size+3)>>2;
            # 746 "tccpp.c"
            while(_while_condtional14=(len_176+nb_words_178)>s->allocated_len,            _while_condtional14) {
                # 746 "tccpp.c"
                str_177=tok_str_realloc(s);
            }
            # 747 "tccpp.c"
            cstr_179=(struct CString*)(str_177+len_176);
            # 748 "tccpp.c"
            cstr_179->data=((void*)0);
            # 749 "tccpp.c"
            cstr_179->size=cv->cstr->size;
            # 750 "tccpp.c"
            cstr_179->data_allocated=((void*)0);
            # 751 "tccpp.c"
            cstr_179->size_allocated=cstr_179->size;
            # 753 "tccpp.c"
            memcpy((char*)cstr_179+sizeof(struct CString),cv->cstr->data,cstr_179->size);
            # 754 "tccpp.c"
            len_176+=nb_words_178;
        }
        # 756 "tccpp.c"
        break;
        # 758 "tccpp.c"
        case 192:
        # 759 "tccpp.c"
        case 201:
        # 763 "tccpp.c"
        case 202:
        # 763 "tccpp.c"
        str_177[len_176++]=cv->tab[0];
        # 764 "tccpp.c"
        str_177[len_176++]=cv->tab[1];
        # 765 "tccpp.c"
        break;
        # 773 "tccpp.c"
        case 193:
        # 773 "tccpp.c"
        str_177[len_176++]=cv->tab[0];
        # 774 "tccpp.c"
        str_177[len_176++]=cv->tab[1];
        # 775 "tccpp.c"
        str_177[len_176++]=cv->tab[2];
        # 776 "tccpp.c"
        str_177[len_176++]=cv->tab[3];
        # 780 "tccpp.c"
        break;
        # 782 "tccpp.c"
        default:
        # 782 "tccpp.c"
        break;
    }
    # 784 "tccpp.c"
    s->len=len_176;
}

static void tok_str_add_tok(struct TokenString* s){
void* __result_obj__;
union CValue cval_180;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cval_180, 0, sizeof(union CValue));
    # 790 "tccpp.c"
    # 798 "tccpp.c"
    # 793 "tccpp.c"
    if(_if_conditional224=file->line_num!=s->last_line_num,    _if_conditional224) {
        # 794 "tccpp.c"
        s->last_line_num=file->line_num;
        # 795 "tccpp.c"
        cval_180.i=s->last_line_num;
        # 796 "tccpp.c"
        tok_str_add2(s,186,&cval_180);
    }
    # 798 "tccpp.c"
    tok_str_add2(s,tok,&tokc);
}


static void define_undef(struct Sym* s){
void* __result_obj__;
int v_182;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_182, 0, sizeof(int));
    # 871 "tccpp.c"
    # 872 "tccpp.c"
    v_182=s->v;
    # 874 "tccpp.c"
    # 873 "tccpp.c"
    if(_if_conditional225=v_182>=256&&v_182<tok_ident,    _if_conditional225) {
        # 874 "tccpp.c"
        table_ident[v_182-256]->sym_define=((void*)0);
    }
    # 875 "tccpp.c"
    s->v=0;
}


static void free_defines(struct Sym* b){
void* __result_obj__;
struct Sym* top_183;
struct Sym* top1_184;
int v_185;
_Bool _while_condtional15;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_185, 0, sizeof(int));
    # 889 "tccpp.c"
    # 890 "tccpp.c"
    # 892 "tccpp.c"
    top_183=define_stack;
    # 904 "tccpp.c"
    while(_while_condtional15=top_183!=b,    _while_condtional15) {
        # 894 "tccpp.c"
        top1_184=top_183->prev;
        # 897 "tccpp.c"
        # 896 "tccpp.c"
        if(top_183->c) {
            # 897 "tccpp.c"
            tok_str_free((int*)top_183->c);
        }
        # 898 "tccpp.c"
        v_185=top_183->v;
        # 900 "tccpp.c"
        # 899 "tccpp.c"
        if(_if_conditional228=v_185>=256&&v_185<tok_ident,        _if_conditional228) {
            # 900 "tccpp.c"
            table_ident[v_185-256]->sym_define=((void*)0);
        }
        # 901 "tccpp.c"
        sym_free(top_183);
        # 902 "tccpp.c"
        top_183=top1_184;
    }
    # 904 "tccpp.c"
    define_stack=b;
}

static struct Sym* label_find(int v){
void* __result_obj__;
_Bool _if_conditional229;
struct Sym* __result86__;
struct Sym* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    # 910 "tccpp.c"
    v-=256;
    # 912 "tccpp.c"
    # 911 "tccpp.c"
    if(_if_conditional229=(unsigned int)v>=(unsigned int)(tok_ident-256),    _if_conditional229) {
        # 912 "tccpp.c"
        __result86__ = __result_obj__ = ((void*)0);
        return __result86__;
    }
    # 913 "tccpp.c"
    __result87__ = __result_obj__ = table_ident[v]->sym_label;
    return __result87__;
}

static struct Sym* label_push(struct Sym** ptop, int v, int flags){
void* __result_obj__;
struct Sym* s_186;
struct Sym** ps_187;
_Bool _if_conditional230;
_Bool _while_condtional16;
struct Sym* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 918 "tccpp.c"
    # 919 "tccpp.c"
    s_186=sym_push2(ptop,v,0,0);
    # 920 "tccpp.c"
    s_186->r=flags;
    # 921 "tccpp.c"
    ps_187=&table_ident[v-256]->sym_label;
    # 928 "tccpp.c"
    # 922 "tccpp.c"
    if(_if_conditional230=ptop==&global_label_stack,    _if_conditional230) {
        # 926 "tccpp.c"
        while(_while_condtional16=*ps_187!=((void*)0),        _while_condtional16) {
            # 926 "tccpp.c"
            ps_187=&(*ps_187)->prev_tok;
        }
    }
    # 928 "tccpp.c"
    s_186->prev_tok=*ps_187;
    # 929 "tccpp.c"
    *ps_187=s_186;
    # 930 "tccpp.c"
    __result88__ = __result_obj__ = s_186;
    return __result88__;
}

static void label_pop(struct Sym** ptop, struct Sym* slast){
void* __result_obj__;
struct Sym* s_188;
struct Sym* s1_189;
_Bool _if_conditional231;
_Bool _elif_conditional59;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
    # 937 "tccpp.c"
    # 956 "tccpp.c"
    for(    s_188=*ptop;    s_188!=slast;    s_188=s1_189    ){
        # 939 "tccpp.c"
        s1_189=s_188->prev;
        # 953 "tccpp.c"
        # 940 "tccpp.c"
        if(_if_conditional231=s_188->r==2,        _if_conditional231) {
            # 941 "tccpp.c"
            warning("label '%s' declared but not used",get_tok_str(s_188->v,((void*)0)));
        }
        # 942 "tccpp.c"
        else if(_elif_conditional59=s_188->r==1,        _elif_conditional59) {
            # 944 "tccpp.c"
            error("label '%s' used but not defined",get_tok_str(s_188->v,((void*)0)));
        }
        else {
            # 951 "tccpp.c"
            # 946 "tccpp.c"
            if(s_188->c) {
                # 949 "tccpp.c"
                put_extern_sym(s_188,cur_text_section,(long)s_188->next,1);
            }
        }
        # 953 "tccpp.c"
        table_ident[s_188->v-256]->sym_label=s_188->prev_tok;
        # 954 "tccpp.c"
        sym_free(s_188);
    }
    # 956 "tccpp.c"
    *ptop=slast;
}

static int expr_preprocess(){
void* __result_obj__;
int c_190;
int t_191;
struct TokenString str_192;
_Bool _while_condtional17;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _elif_conditional60;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&str_192, 0, sizeof(struct TokenString));
    # 962 "tccpp.c"
    # 963 "tccpp.c"
    # 965 "tccpp.c"
    tok_str_new(&str_192);
    # 985 "tccpp.c"
    while(_while_condtional17=tok!=10&&tok!=(-1),    _while_condtional17) {
        # 967 "tccpp.c"
        next();
        # 983 "tccpp.c"
        # 968 "tccpp.c"
        if(_if_conditional233=tok==321,        _if_conditional233) {
            # 969 "tccpp.c"
            next_nomacro();
            # 970 "tccpp.c"
            t_191=tok;
            # 972 "tccpp.c"
            # 971 "tccpp.c"
            if(_if_conditional234=t_191==40,            _if_conditional234) {
                # 972 "tccpp.c"
                next_nomacro();
            }
            # 973 "tccpp.c"
            c_190=define_find(tok)!=0;
            # 975 "tccpp.c"
            # 974 "tccpp.c"
            if(_if_conditional235=t_191==40,            _if_conditional235) {
                # 975 "tccpp.c"
                next_nomacro();
            }
            # 976 "tccpp.c"
            tok=179;
            # 977 "tccpp.c"
            tokc.i=c_190;
        }
        # 978 "tccpp.c"
        else if(_elif_conditional60=tok>=256,        _elif_conditional60) {
            # 980 "tccpp.c"
            tok=179;
            # 981 "tccpp.c"
            tokc.i=0;
        }
        # 983 "tccpp.c"
        tok_str_add_tok(&str_192);
    }
    # 985 "tccpp.c"
    tok_str_add(&str_192,-1);
    # 986 "tccpp.c"
    tok_str_add(&str_192,0);
    # 988 "tccpp.c"
    macro_ptr=str_192.str;
    # 989 "tccpp.c"
    next();
    # 990 "tccpp.c"
    c_190=expr_const();
    # 991 "tccpp.c"
    macro_ptr=((void*)0);
    # 992 "tccpp.c"
    tok_str_free(str_192.str);
    # 993 "tccpp.c"
    __result89__ = c_190!=0;
    come_call_finalizer3((&str_192),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer3((&str_192),TokenString_finalize, 1, 0, 0, 0, (void*)0);
}

static void TokenString_finalize(struct TokenString* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void parse_define(){
void* __result_obj__;
struct Sym* s_193;
struct Sym* first_194;
struct Sym** ps_195;
int v_196;
int t_197;
int varg_198;
int is_vaargs_199;
int spc_200;
struct TokenString str_201;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _while_condtional18;
_Bool _if_conditional238;
_Bool _elif_conditional61;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _while_condtional19;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _elif_conditional62;
_Bool _elif_conditional63;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
memset(&str_201, 0, sizeof(struct TokenString));
    # 1016 "tccpp.c"
    # 1017 "tccpp.c"
    # 1018 "tccpp.c"
    # 1020 "tccpp.c"
    v_196=tok;
    # 1022 "tccpp.c"
    # 1021 "tccpp.c"
    if(_if_conditional236=v_196<256,    _if_conditional236) {
        # 1022 "tccpp.c"
        error("invalid macro name '%s'",get_tok_str(tok,&tokc));
    }
    # 1024 "tccpp.c"
    first_194=((void*)0);
    # 1025 "tccpp.c"
    t_197=0;
    # 1027 "tccpp.c"
    next_nomacro_spc();
    # 1055 "tccpp.c"
    # 1028 "tccpp.c"
    if(_if_conditional237=tok==40,    _if_conditional237) {
        # 1029 "tccpp.c"
        next_nomacro();
        # 1030 "tccpp.c"
        ps_195=&first_194;
        # 1051 "tccpp.c"
        while(_while_condtional18=tok!=41,        _while_condtional18) {
            # 1032 "tccpp.c"
            varg_198=tok;
            # 1033 "tccpp.c"
            next_nomacro();
            # 1034 "tccpp.c"
            is_vaargs_199=0;
            # 1042 "tccpp.c"
            # 1035 "tccpp.c"
            if(_if_conditional238=varg_198==204,            _if_conditional238) {
                # 1036 "tccpp.c"
                varg_198=332;
                # 1037 "tccpp.c"
                is_vaargs_199=1;
            }
            # 1038 "tccpp.c"
            else if(_elif_conditional61=tok==204&&gnu_ext,            _elif_conditional61) {
                # 1039 "tccpp.c"
                is_vaargs_199=1;
                # 1040 "tccpp.c"
                next_nomacro();
            }
            # 1043 "tccpp.c"
            # 1042 "tccpp.c"
            if(_if_conditional239=varg_198<256,            _if_conditional239) {
                # 1043 "tccpp.c"
                error("badly punctuated parameter list");
            }
            # 1044 "tccpp.c"
            s_193=sym_push2(&define_stack,varg_198|536870912,is_vaargs_199,0);
            # 1045 "tccpp.c"
            *ps_195=s_193;
            # 1046 "tccpp.c"
            ps_195=&s_193->next;
            # 1048 "tccpp.c"
            # 1047 "tccpp.c"
            if(_if_conditional240=tok!=44,            _if_conditional240) {
                # 1048 "tccpp.c"
                break;
            }
            # 1049 "tccpp.c"
            next_nomacro();
        }
        # 1052 "tccpp.c"
        # 1051 "tccpp.c"
        if(_if_conditional241=tok==41,        _if_conditional241) {
            # 1052 "tccpp.c"
            next_nomacro_spc();
        }
        # 1053 "tccpp.c"
        t_197=1;
    }
    # 1055 "tccpp.c"
    tok_str_new(&str_201);
    # 1056 "tccpp.c"
    spc_200=2;
    # 1073 "tccpp.c"
    while(_while_condtional19=tok!=10&&tok!=(-1),    _while_condtional19) {
        # 1069 "tccpp.c"
        # 1060 "tccpp.c"
        if(_if_conditional242=182==tok,        _if_conditional242) {
            # 1062 "tccpp.c"
            # 1061 "tccpp.c"
            if(_if_conditional243=1==spc_200,            _if_conditional243) {
                # 1062 "tccpp.c"
                --str_201.len;
            }
            # 1063 "tccpp.c"
            spc_200=2;
        }
        # 1064 "tccpp.c"
        else if(_elif_conditional62=35==tok,        _elif_conditional62) {
            # 1065 "tccpp.c"
            spc_200=2;
        }
        # 1066 "tccpp.c"
        else if(_elif_conditional63=check_space(tok,&spc_200),        _elif_conditional63) {
            # 1067 "tccpp.c"
            goto skip;
        }
        # 1069 "tccpp.c"
        tok_str_add2(&str_201,tok,&tokc);
        # 1071 "tccpp.c"
        skip:
        # 1071 "tccpp.c"
        next_nomacro_spc();
    }
    # 1074 "tccpp.c"
    # 1073 "tccpp.c"
    if(_if_conditional244=spc_200==1,    _if_conditional244) {
        # 1074 "tccpp.c"
        --str_201.len;
    }
    # 1075 "tccpp.c"
    tok_str_add(&str_201,0);
    # 1080 "tccpp.c"
    define_push(v_196,t_197,str_201.str,first_194);
    come_call_finalizer3((&str_201),TokenString_finalize, 1, 0, 0, 0, (void*)0);
}


static struct CachedInclude* search_cached_include(struct TCCState* s1, int type, const char* filename){
void* __result_obj__;
struct CachedInclude* e_204;
int i_205;
int h_206;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct CachedInclude* __result91__;
struct CachedInclude* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&e_204, 0, sizeof(struct CachedInclude*));
    # 1103 "tccpp.c"
    # 1104 "tccpp.c"
    # 1105 "tccpp.c"
    h_206=hash_cached_include(type,filename);
    # 1106 "tccpp.c"
    i_205=s1->cached_includes_hash[h_206];
    # 1115 "tccpp.c"
    for(    ;    ;    ){
        # 1109 "tccpp.c"
        # 1108 "tccpp.c"
        if(_if_conditional245=i_205==0,        _if_conditional245) {
            # 1109 "tccpp.c"
            break;
        }
        # 1110 "tccpp.c"
        e_204=s1->cached_includes[i_205-1];
        # 1112 "tccpp.c"
        # 1111 "tccpp.c"
        if(_if_conditional246=e_204->type==type&&!strcmp(e_204->filename,filename),        _if_conditional246) {
            # 1112 "tccpp.c"
            __result91__ = __result_obj__ = e_204;
            return __result91__;
        }
        # 1113 "tccpp.c"
        i_205=e_204->hash_next;
    }
    # 1115 "tccpp.c"
    __result92__ = __result_obj__ = ((void*)0);
    return __result92__;
}


static void pragma_parse(struct TCCState* s1){
void* __result_obj__;
int val_209;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
memset(&val_209, 0, sizeof(int));
    # 1144 "tccpp.c"
    # 1146 "tccpp.c"
    next();
    # 1187 "tccpp.c"
    # 1147 "tccpp.c"
    if(_if_conditional249=tok==363,    _if_conditional249) {
        # 1155 "tccpp.c"
        next();
        # 1156 "tccpp.c"
        skip(40);
        # 1186 "tccpp.c"
        # 1157 "tccpp.c"
        if(_if_conditional250=tok==365,        _if_conditional250) {
            # 1158 "tccpp.c"
            next();
            # 1163 "tccpp.c"
            # 1159 "tccpp.c"
            if(_if_conditional251=s1->pack_stack_ptr<=s1->pack_stack,            _if_conditional251) {
                # 1161 "tccpp.c"
                stk_error:
                # 1161 "tccpp.c"
                error("out of pack stack");
            }
            # 1163 "tccpp.c"
            s1->pack_stack_ptr--;
        }
        else {
            # 1165 "tccpp.c"
            val_209=0;
            # 1183 "tccpp.c"
            # 1166 "tccpp.c"
            if(_if_conditional252=tok!=41,            _if_conditional252) {
                # 1174 "tccpp.c"
                # 1167 "tccpp.c"
                if(_if_conditional253=tok==364,                _if_conditional253) {
                    # 1168 "tccpp.c"
                    next();
                    # 1170 "tccpp.c"
                    # 1169 "tccpp.c"
                    if(_if_conditional254=s1->pack_stack_ptr>=s1->pack_stack+8-1,                    _if_conditional254) {
                        # 1170 "tccpp.c"
                        goto stk_error;
                    }
                    # 1171 "tccpp.c"
                    s1->pack_stack_ptr++;
                    # 1172 "tccpp.c"
                    skip(44);
                }
                # 1178 "tccpp.c"
                # 1174 "tccpp.c"
                if(_if_conditional255=tok!=179,                _if_conditional255) {
                    # 1176 "tccpp.c"
                    pack_error:
                    # 1176 "tccpp.c"
                    error("invalid pack pragma");
                }
                # 1178 "tccpp.c"
                val_209=tokc.i;
                # 1180 "tccpp.c"
                # 1179 "tccpp.c"
                if(_if_conditional256=val_209<1||val_209>16||(val_209&(val_209-1))!=0,                _if_conditional256) {
                    # 1180 "tccpp.c"
                    goto pack_error;
                }
                # 1181 "tccpp.c"
                next();
            }
            # 1183 "tccpp.c"
            *s1->pack_stack_ptr=(void*)val_209;
            # 1184 "tccpp.c"
            skip(41);
        }
    }
}

static void preprocess(int is_bof){
void* __result_obj__;
struct TCCState* s1_210;
int i_211;
int c_212;
int n_213;
int saved_parse_flags_214;
char buf_215[1024];
char* q_216;
struct Sym* s_217;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _elif_conditional64;
_Bool _while_condtional21;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _while_condtional22;
_Bool _if_conditional263;
int len_218;
_Bool _while_condtional23;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct BufferedFile* f_220;
struct CachedInclude* e_221;
const char* path_222;
int size_223;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _elif_conditional65;
_Bool _if_conditional268;
_Bool _if_conditional269;
path_222=s1_210->include_paths[i_211];
path_222=s1_210->sysinclude_paths[i_211-s1_210->nb_include_paths];
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _while_condtional24;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _while_condtional25;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _while_condtional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s1_210, 0, sizeof(struct TCCState*));
memset(&s_217, 0, sizeof(struct Sym*));
memset(&len_218, 0, sizeof(int));
memset(&f_220, 0, sizeof(struct BufferedFile*));
memset(&e_221, 0, sizeof(struct CachedInclude*));
memset(&size_223, 0, sizeof(int));
    # 1192 "tccpp.c"
    s1_210=tcc_state;
    # 1193 "tccpp.c"
    # 1194 "tccpp.c"
    # 1195 "tccpp.c"
    # 1197 "tccpp.c"
    saved_parse_flags_214=parse_flags;
    # 1199 "tccpp.c"
    parse_flags=1|2|4;
    # 1200 "tccpp.c"
    next_nomacro();
    # 1202 "tccpp.c"
    redo:
    # 1475 "tccpp.c"
    switch (tok) {
        # 1204 "tccpp.c"
        case 314:
        # 1204 "tccpp.c"
        next_nomacro();
        # 1205 "tccpp.c"
        parse_define();
        # 1206 "tccpp.c"
        break;
        # 1208 "tccpp.c"
        case 322:
        # 1208 "tccpp.c"
        next_nomacro();
        # 1209 "tccpp.c"
        s_217=define_find(tok);
        # 1212 "tccpp.c"
        # 1211 "tccpp.c"
        if(s_217) {
            # 1212 "tccpp.c"
            define_undef(s_217);
        }
        # 1213 "tccpp.c"
        break;
        # 1215 "tccpp.c"
        case 315:
        # 1216 "tccpp.c"
        case 316:
        # 1216 "tccpp.c"
        ch=file->buf_ptr[0];
        # 1218 "tccpp.c"
        skip_spaces();
        # 1275 "tccpp.c"
        # 1219 "tccpp.c"
        if(_if_conditional258=ch==60,        _if_conditional258) {
            # 1220 "tccpp.c"
            c_212=62;
            # 1221 "tccpp.c"
            goto read_name;
        }
        # 1222 "tccpp.c"
        else if(_elif_conditional64=ch==34,        _elif_conditional64) {
            # 1223 "tccpp.c"
            c_212=ch;
            # 1225 "tccpp.c"
            read_name:
            # 1225 "tccpp.c"
            inp();
            # 1226 "tccpp.c"
            q_216=buf_215;
            # 1236 "tccpp.c"
            while(_while_condtional21=ch!=c_212&&ch!=10&&ch!=(-1),            _while_condtional21) {
                # 1229 "tccpp.c"
                # 1228 "tccpp.c"
                if(_if_conditional259=(q_216-buf_215)<sizeof(buf_215)-1,                _if_conditional259) {
                    # 1229 "tccpp.c"
                    *q_216++=ch;
                }
                # 1234 "tccpp.c"
                # 1230 "tccpp.c"
                if(_if_conditional260=ch==92,                _if_conditional260) {
                    # 1233 "tccpp.c"
                    # 1231 "tccpp.c"
                    if(_if_conditional261=handle_stray_noerror()==0,                    _if_conditional261) {
                        # 1232 "tccpp.c"
                        --q_216;
                    }
                }
                else {
                    # 1234 "tccpp.c"
                    inp();
                }
            }
            # 1236 "tccpp.c"
            *q_216=0;
            # 1237 "tccpp.c"
            minp();
        }
        else {
            # 1247 "tccpp.c"
            next();
            # 1248 "tccpp.c"
            buf_215[0]=0;
            # 1273 "tccpp.c"
            # 1249 "tccpp.c"
            if(_if_conditional262=tok==181,            _if_conditional262) {
                # 1258 "tccpp.c"
                while(_while_condtional22=tok!=10,                _while_condtional22) {
                    # 1255 "tccpp.c"
                    # 1251 "tccpp.c"
                    if(_if_conditional263=tok!=181,                    _if_conditional263) {
                        # 1253 "tccpp.c"
                        include_syntax:
                        # 1253 "tccpp.c"
                        error("'#include' expects \"FILENAME\" or <FILENAME>");
                    }
                    # 1255 "tccpp.c"
                    pstrcat(buf_215,sizeof(buf_215),(char*)tokc.cstr->data);
                    # 1256 "tccpp.c"
                    next();
                }
                # 1258 "tccpp.c"
                c_212=34;
            }
            else {
                # 1260 "tccpp.c"
                # 1265 "tccpp.c"
                while(_while_condtional23=tok!=10,                _while_condtional23) {
                    # 1262 "tccpp.c"
                    pstrcat(buf_215,sizeof(buf_215),get_tok_str(tok,&tokc));
                    # 1263 "tccpp.c"
                    next();
                }
                # 1265 "tccpp.c"
                len_218=strlen(buf_215);
                # 1268 "tccpp.c"
                # 1267 "tccpp.c"
                if(_if_conditional264=len_218<2||buf_215[0]!=60||buf_215[len_218-1]!=62,                _if_conditional264) {
                    # 1268 "tccpp.c"
                    goto include_syntax;
                }
                # 1269 "tccpp.c"
                memmove(buf_215,buf_215+1,len_218-2);
                # 1270 "tccpp.c"
                buf_215[len_218-2]=0;
                # 1271 "tccpp.c"
                c_212=62;
            }
        }
        # 1276 "tccpp.c"
        # 1275 "tccpp.c"
        if(_if_conditional265=s1_210->include_stack_ptr>=s1_210->include_stack+32,        _if_conditional265) {
            # 1276 "tccpp.c"
            error("#include recursion too deep");
        }
        # 1278 "tccpp.c"
        n_213=s1_210->nb_include_paths+s1_210->nb_sysinclude_paths;
        # 1354 "tccpp.c"
        for(        i_211=-2;        i_211<n_213;        ++i_211        ){
            # 1280 "tccpp.c"
            char buf1_219[sizeof(file->filename)];
            memset(&buf1_219, 0, sizeof(char)            *(sizeof(file->filename))            );
            # 1281 "tccpp.c"
            # 1282 "tccpp.c"
            # 1283 "tccpp.c"
            # 1284 "tccpp.c"
            # 1310 "tccpp.c"
            # 1286 "tccpp.c"
            if(_if_conditional266=i_211==-2,            _if_conditional266) {
                # 1289 "tccpp.c"
                # 1288 "tccpp.c"
                if(_if_conditional267=!(buf_215[0]==47),                _if_conditional267) {
                    # 1289 "tccpp.c"
                    continue;
                }
                # 1290 "tccpp.c"
                buf1_219[0]=0;
            }
            # 1292 "tccpp.c"
            else if(_elif_conditional65=i_211==-1,            _elif_conditional65) {
                # 1295 "tccpp.c"
                # 1294 "tccpp.c"
                if(_if_conditional268=c_212!=34,                _if_conditional268) {
                    # 1295 "tccpp.c"
                    continue;
                }
                # 1296 "tccpp.c"
                size_223=tcc_basename(file->filename)-file->filename;
                # 1297 "tccpp.c"
                memcpy(buf1_219,file->filename,size_223);
                # 1298 "tccpp.c"
                buf1_219[size_223]=0;
            }
            else {
                # 1305 "tccpp.c"
                # 1302 "tccpp.c"
                if(_if_conditional269=i_211<s1_210->nb_include_paths,                _if_conditional269) {
                    # 1303 "tccpp.c"
                }
                else {
                    # 1305 "tccpp.c"
                }
                # 1306 "tccpp.c"
                pstrcpy(buf1_219,sizeof(buf1_219),path_222);
                # 1307 "tccpp.c"
                pstrcat(buf1_219,sizeof(buf1_219),"/");
            }
            # 1310 "tccpp.c"
            pstrcat(buf1_219,sizeof(buf1_219),buf_215);
            # 1312 "tccpp.c"
            e_221=search_cached_include(s1_210,c_212,buf1_219);
            # 1326 "tccpp.c"
            # 1313 "tccpp.c"
            if(_if_conditional270=e_221&&define_find(e_221->ifndef_macro),            _if_conditional270) {
                # 1319 "tccpp.c"
                f_220=((void*)0);
            }
            else {
                # 1321 "tccpp.c"
                f_220=tcc_open(s1_210,buf1_219);
                # 1324 "tccpp.c"
                # 1322 "tccpp.c"
                if(_if_conditional271=!f_220,                _if_conditional271) {
                    # 1323 "tccpp.c"
                    continue;
                }
            }
            # 1333 "tccpp.c"
            # 1326 "tccpp.c"
            if(_if_conditional272=tok==316,            _if_conditional272) {
                # 1327 "tccpp.c"
                tok=315;
                # 1329 "tccpp.c"
                # 1328 "tccpp.c"
                if(f_220) {
                    # 1329 "tccpp.c"
                    tcc_close(f_220);
                }
                # 1330 "tccpp.c"
                continue;
            }
            # 1342 "tccpp.c"
            # 1333 "tccpp.c"
            if(_if_conditional274=!f_220,            _if_conditional274) {
                # 1334 "tccpp.c"
                goto include_done;
            }
            # 1342 "tccpp.c"
            *s1_210->include_stack_ptr++=file;
            # 1343 "tccpp.c"
            f_220->inc_type=c_212;
            # 1344 "tccpp.c"
            pstrcpy(f_220->inc_filename,sizeof(f_220->inc_filename),buf1_219);
            # 1345 "tccpp.c"
            file=f_220;
            # 1350 "tccpp.c"
            # 1347 "tccpp.c"
            if(tcc_state->do_debug) {
                # 1348 "tccpp.c"
                put_stabs(file->filename,130,0,0,0);
            }
            # 1350 "tccpp.c"
            tok_flags|=2|1;
            # 1351 "tccpp.c"
            ch=file->buf_ptr[0];
            # 1352 "tccpp.c"
            goto the_end;
        }
        # 1354 "tccpp.c"
        error("include file '%s' not found",buf_215);
        # 1356 "tccpp.c"
        include_done:
        # 1356 "tccpp.c"
        break;
        # 1358 "tccpp.c"
        case 318:
        # 1358 "tccpp.c"
        c_212=1;
        # 1359 "tccpp.c"
        goto do_ifdef;
        # 1361 "tccpp.c"
        case 260:
        # 1361 "tccpp.c"
        c_212=expr_preprocess();
        # 1362 "tccpp.c"
        goto do_if;
        # 1364 "tccpp.c"
        case 317:
        # 1364 "tccpp.c"
        c_212=0;
        # 1366 "tccpp.c"
        do_ifdef:
        # 1366 "tccpp.c"
        next_nomacro();
        # 1368 "tccpp.c"
        # 1367 "tccpp.c"
        if(_if_conditional276=tok<256,        _if_conditional276) {
            # 1368 "tccpp.c"
            error("invalid argument for '#if%sdef'",c_212?"n":"");
        }
        # 1377 "tccpp.c"
        # 1369 "tccpp.c"
        if(is_bof) {
            # 1376 "tccpp.c"
            # 1370 "tccpp.c"
            if(c_212) {
                # 1374 "tccpp.c"
                file->ifndef_macro=tok;
            }
        }
        # 1377 "tccpp.c"
        c_212=(define_find(tok)!=0)^c_212;
        # 1379 "tccpp.c"
        do_if:
        # 1381 "tccpp.c"
        # 1379 "tccpp.c"
        if(_if_conditional279=s1_210->ifdef_stack_ptr>=s1_210->ifdef_stack+64,        _if_conditional279) {
            # 1380 "tccpp.c"
            error("memory full");
        }
        # 1381 "tccpp.c"
        *s1_210->ifdef_stack_ptr++=c_212;
        # 1382 "tccpp.c"
        goto test_skip;
        # 1384 "tccpp.c"
        case 261:
        # 1385 "tccpp.c"
        # 1384 "tccpp.c"
        if(_if_conditional280=s1_210->ifdef_stack_ptr==s1_210->ifdef_stack,        _if_conditional280) {
            # 1385 "tccpp.c"
            error("#else without matching #if");
        }
        # 1387 "tccpp.c"
        # 1386 "tccpp.c"
        if(_if_conditional281=s1_210->ifdef_stack_ptr[-1]&2,        _if_conditional281) {
            # 1387 "tccpp.c"
            error("#else after #else");
        }
        # 1388 "tccpp.c"
        c_212=(s1_210->ifdef_stack_ptr[-1]^=3);
        # 1389 "tccpp.c"
        goto test_skip;
        # 1391 "tccpp.c"
        case 319:
        # 1392 "tccpp.c"
        # 1391 "tccpp.c"
        if(_if_conditional282=s1_210->ifdef_stack_ptr==s1_210->ifdef_stack,        _if_conditional282) {
            # 1392 "tccpp.c"
            error("#elif without matching #if");
        }
        # 1393 "tccpp.c"
        c_212=s1_210->ifdef_stack_ptr[-1];
        # 1395 "tccpp.c"
        # 1394 "tccpp.c"
        if(_if_conditional283=c_212>1,        _if_conditional283) {
            # 1395 "tccpp.c"
            error("#elif after #else");
        }
        # 1398 "tccpp.c"
        # 1397 "tccpp.c"
        if(_if_conditional284=c_212==1,        _if_conditional284) {
            # 1398 "tccpp.c"
            goto skip;
        }
        # 1399 "tccpp.c"
        c_212=expr_preprocess();
        # 1400 "tccpp.c"
        s1_210->ifdef_stack_ptr[-1]=c_212;
        # 1402 "tccpp.c"
        test_skip:
        # 1408 "tccpp.c"
        # 1402 "tccpp.c"
        if(_if_conditional285=!(c_212&1),        _if_conditional285) {
            # 1404 "tccpp.c"
            skip:
            # 1404 "tccpp.c"
            preprocess_skip();
            # 1405 "tccpp.c"
            is_bof=0;
            # 1406 "tccpp.c"
            goto redo;
        }
        # 1408 "tccpp.c"
        break;
        # 1410 "tccpp.c"
        case 320:
        # 1411 "tccpp.c"
        # 1410 "tccpp.c"
        if(_if_conditional286=s1_210->ifdef_stack_ptr<=file->ifdef_stack_ptr,        _if_conditional286) {
            # 1411 "tccpp.c"
            error("#endif without matching #if");
        }
        # 1412 "tccpp.c"
        s1_210->ifdef_stack_ptr--;
        # 1426 "tccpp.c"
        # 1416 "tccpp.c"
        if(_if_conditional287=file->ifndef_macro&&s1_210->ifdef_stack_ptr==file->ifdef_stack_ptr,        _if_conditional287) {
            # 1417 "tccpp.c"
            file->ifndef_macro_saved=file->ifndef_macro;
            # 1420 "tccpp.c"
            file->ifndef_macro=0;
            # 1422 "tccpp.c"
            while(_while_condtional24=tok!=10,            _while_condtional24) {
                # 1422 "tccpp.c"
                next_nomacro();
            }
            # 1423 "tccpp.c"
            tok_flags|=4;
            # 1424 "tccpp.c"
            goto the_end;
        }
        # 1426 "tccpp.c"
        break;
        # 1428 "tccpp.c"
        case 325:
        # 1428 "tccpp.c"
        next();
        # 1430 "tccpp.c"
        # 1429 "tccpp.c"
        if(_if_conditional288=tok!=179,        _if_conditional288) {
            # 1430 "tccpp.c"
            error("#line");
        }
        # 1431 "tccpp.c"
        file->line_num=tokc.i-1;
        # 1432 "tccpp.c"
        next();
        # 1439 "tccpp.c"
        # 1433 "tccpp.c"
        if(_if_conditional289=tok!=10,        _if_conditional289) {
            # 1435 "tccpp.c"
            # 1434 "tccpp.c"
            if(_if_conditional290=tok!=181,            _if_conditional290) {
                # 1435 "tccpp.c"
                error("#line");
            }
            # 1437 "tccpp.c"
            pstrcpy(file->filename,sizeof(file->filename),(char*)tokc.cstr->data);
        }
        # 1439 "tccpp.c"
        break;
        # 1441 "tccpp.c"
        case 323:
        # 1442 "tccpp.c"
        case 324:
        # 1442 "tccpp.c"
        c_212=tok;
        # 1443 "tccpp.c"
        ch=file->buf_ptr[0];
        # 1444 "tccpp.c"
        skip_spaces();
        # 1445 "tccpp.c"
        q_216=buf_215;
        # 1455 "tccpp.c"
        while(_while_condtional25=ch!=10&&ch!=(-1),        _while_condtional25) {
            # 1448 "tccpp.c"
            # 1447 "tccpp.c"
            if(_if_conditional291=(q_216-buf_215)<sizeof(buf_215)-1,            _if_conditional291) {
                # 1448 "tccpp.c"
                *q_216++=ch;
            }
            # 1453 "tccpp.c"
            # 1449 "tccpp.c"
            if(_if_conditional292=ch==92,            _if_conditional292) {
                # 1452 "tccpp.c"
                # 1450 "tccpp.c"
                if(_if_conditional293=handle_stray_noerror()==0,                _if_conditional293) {
                    # 1451 "tccpp.c"
                    --q_216;
                }
            }
            else {
                # 1453 "tccpp.c"
                inp();
            }
        }
        # 1455 "tccpp.c"
        *q_216=0;
        # 1459 "tccpp.c"
        # 1456 "tccpp.c"
        if(_if_conditional294=c_212==323,        _if_conditional294) {
            # 1457 "tccpp.c"
            error("#error %s",buf_215);
        }
        else {
            # 1459 "tccpp.c"
            warning("#warning %s",buf_215);
        }
        # 1460 "tccpp.c"
        break;
        # 1462 "tccpp.c"
        case 326:
        # 1462 "tccpp.c"
        pragma_parse(s1_210);
        # 1463 "tccpp.c"
        break;
        # 1465 "tccpp.c"
        default:
        # 1472 "tccpp.c"
        # 1465 "tccpp.c"
        if(_if_conditional295=tok==10||tok==33||tok==179,        _if_conditional295) {
        }
        else {
            # 1471 "tccpp.c"
            # 1469 "tccpp.c"
            if(_if_conditional296=!(saved_parse_flags_214&8),            _if_conditional296) {
                # 1470 "tccpp.c"
                warning("Ignoring unknown preprocessing directive #%s",get_tok_str(tok,&tokc));
            }
        }
        # 1472 "tccpp.c"
        break;
    }
    # 1476 "tccpp.c"
    while(_while_condtional26=tok!=10,    _while_condtional26) {
        # 1476 "tccpp.c"
        next_nomacro();
    }
    # 1478 "tccpp.c"
    the_end:
    # 1478 "tccpp.c"
    parse_flags=saved_parse_flags_214;
}

static void parse_escape_string(struct CString* outstr, const unsigned char* buf, int is_long){
void* __result_obj__;
int c_224;
int n_225;
const unsigned char* p_226;
p_226=buf;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _elif_conditional66;
_Bool _elif_conditional67;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
    # 1484 "tccpp.c"
    # 1485 "tccpp.c"
    # 1487 "tccpp.c"
    # 1582 "tccpp.c"
    for(    ;    ;    ){
        # 1489 "tccpp.c"
        c_224=*p_226;
        # 1491 "tccpp.c"
        # 1490 "tccpp.c"
        if(_if_conditional297=c_224==0,        _if_conditional297) {
            # 1491 "tccpp.c"
            break;
        }
        # 1574 "tccpp.c"
        # 1492 "tccpp.c"
        if(_if_conditional298=c_224==92,        _if_conditional298) {
            # 1493 "tccpp.c"
            p_226++;
            # 1495 "tccpp.c"
            c_224=*p_226;
            # 1573 "tccpp.c"
            switch (c_224) {
                # 1497 "tccpp.c"
                case 48:
                # 1497 "tccpp.c"
                case 49:
                # 1497 "tccpp.c"
                case 50:
                # 1498 "tccpp.c"
                case 51:
                # 1498 "tccpp.c"
                case 52:
                # 1498 "tccpp.c"
                case 53:
                # 1498 "tccpp.c"
                case 54:
                # 1500 "tccpp.c"
                case 55:
                # 1500 "tccpp.c"
                n_225=c_224-48;
                # 1501 "tccpp.c"
                p_226++;
                # 1502 "tccpp.c"
                c_224=*p_226;
                # 1512 "tccpp.c"
                # 1503 "tccpp.c"
                if(_if_conditional299=isoct(c_224),                _if_conditional299) {
                    # 1504 "tccpp.c"
                    n_225=n_225*8+c_224-48;
                    # 1505 "tccpp.c"
                    p_226++;
                    # 1506 "tccpp.c"
                    c_224=*p_226;
                    # 1511 "tccpp.c"
                    # 1507 "tccpp.c"
                    if(_if_conditional300=isoct(c_224),                    _if_conditional300) {
                        # 1508 "tccpp.c"
                        n_225=n_225*8+c_224-48;
                        # 1509 "tccpp.c"
                        p_226++;
                    }
                }
                # 1512 "tccpp.c"
                c_224=n_225;
                # 1513 "tccpp.c"
                goto add_char_nonext;
                # 1515 "tccpp.c"
                case 120:
                # 1516 "tccpp.c"
                case 117:
                # 1517 "tccpp.c"
                case 85:
                # 1517 "tccpp.c"
                p_226++;
                # 1518 "tccpp.c"
                n_225=0;
                # 1532 "tccpp.c"
                for(                ;                ;                ){
                    # 1520 "tccpp.c"
                    c_224=*p_226;
                    # 1528 "tccpp.c"
                    # 1521 "tccpp.c"
                    if(_if_conditional301=c_224>=97&&c_224<=102,                    _if_conditional301) {
                        # 1522 "tccpp.c"
                        c_224=c_224-97+10;
                    }
                    # 1523 "tccpp.c"
                    else if(_elif_conditional66=c_224>=65&&c_224<=70,                    _elif_conditional66) {
                        # 1524 "tccpp.c"
                        c_224=c_224-65+10;
                    }
                    # 1525 "tccpp.c"
                    else if(_elif_conditional67=isnum(c_224),                    _elif_conditional67) {
                        # 1526 "tccpp.c"
                        c_224=c_224-48;
                    }
                    else {
                        # 1528 "tccpp.c"
                        break;
                    }
                    # 1529 "tccpp.c"
                    n_225=n_225*16+c_224;
                    # 1530 "tccpp.c"
                    p_226++;
                }
                # 1532 "tccpp.c"
                c_224=n_225;
                # 1533 "tccpp.c"
                goto add_char_nonext;
                # 1535 "tccpp.c"
                case 97:
                # 1535 "tccpp.c"
                c_224=7;
                # 1536 "tccpp.c"
                break;
                # 1538 "tccpp.c"
                case 98:
                # 1538 "tccpp.c"
                c_224=8;
                # 1539 "tccpp.c"
                break;
                # 1541 "tccpp.c"
                case 102:
                # 1541 "tccpp.c"
                c_224=12;
                # 1542 "tccpp.c"
                break;
                # 1544 "tccpp.c"
                case 110:
                # 1544 "tccpp.c"
                c_224=10;
                # 1545 "tccpp.c"
                break;
                # 1547 "tccpp.c"
                case 114:
                # 1547 "tccpp.c"
                c_224=13;
                # 1548 "tccpp.c"
                break;
                # 1550 "tccpp.c"
                case 116:
                # 1550 "tccpp.c"
                c_224=9;
                # 1551 "tccpp.c"
                break;
                # 1553 "tccpp.c"
                case 118:
                # 1553 "tccpp.c"
                c_224=11;
                # 1554 "tccpp.c"
                break;
                # 1556 "tccpp.c"
                case 101:
                # 1557 "tccpp.c"
                # 1556 "tccpp.c"
                if(_if_conditional302=!gnu_ext,                _if_conditional302) {
                    # 1557 "tccpp.c"
                    goto invalid_escape;
                }
                # 1558 "tccpp.c"
                c_224=27;
                # 1559 "tccpp.c"
                break;
                # 1561 "tccpp.c"
                case 39:
                # 1562 "tccpp.c"
                case 34:
                # 1563 "tccpp.c"
                case 92:
                # 1564 "tccpp.c"
                case 63:
                # 1564 "tccpp.c"
                break;
                # 1566 "tccpp.c"
                default:
                # 1567 "tccpp.c"
                invalid_escape:
                # 1570 "tccpp.c"
                # 1567 "tccpp.c"
                if(_if_conditional303=c_224>=33&&c_224<=126,                _if_conditional303) {
                    # 1568 "tccpp.c"
                    warning("unknown escape sequence: \'\\%c\'",c_224);
                }
                else {
                    # 1570 "tccpp.c"
                    warning("unknown escape sequence: \'\\x%x\'",c_224);
                }
                # 1571 "tccpp.c"
                break;
            }
        }
        # 1574 "tccpp.c"
        p_226++;
        # 1576 "tccpp.c"
        add_char_nonext:
        # 1579 "tccpp.c"
        # 1576 "tccpp.c"
        if(_if_conditional304=!is_long,        _if_conditional304) {
            # 1577 "tccpp.c"
            cstr_ccat(outstr,c_224);
        }
        else {
            # 1579 "tccpp.c"
            cstr_wccat(outstr,c_224);
        }
    }
    # 1585 "tccpp.c"
    # 1582 "tccpp.c"
    if(_if_conditional305=!is_long,    _if_conditional305) {
        # 1583 "tccpp.c"
        cstr_ccat(outstr,0);
    }
    else {
        # 1585 "tccpp.c"
        cstr_wccat(outstr,0);
    }
}

void bn_lshift(unsigned int* bn, int shift, int or_val){
void* __result_obj__;
int i_227;
unsigned int v_228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_227, 0, sizeof(int));
memset(&v_228, 0, sizeof(unsigned int));
    # 1594 "tccpp.c"
    # 1595 "tccpp.c"
    # 1601 "tccpp.c"
    for(    i_227=0;    i_227<2;    i_227++    ){
        # 1597 "tccpp.c"
        v_228=bn[i_227];
        # 1598 "tccpp.c"
        bn[i_227]=(v_228<<shift)|or_val;
        # 1599 "tccpp.c"
        or_val=v_228>>(32-shift);
    }
}

void bn_zero(unsigned int* bn){
void* __result_obj__;
int i_229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_229, 0, sizeof(int));
    # 1605 "tccpp.c"
    # 1609 "tccpp.c"
    for(    i_229=0;    i_229<2;    i_229++    ){
        # 1607 "tccpp.c"
        bn[i_229]=0;
    }
}

void parse_number(const char* p){
void* __result_obj__;
int b_230;
int t_231;
int shift_232;
int frac_bits_233;
int s_234;
int exp_val_235;
int ch_236;
char* q_237;
double d_239;
_Bool _if_conditional306;
_Bool _elif_conditional68;
_Bool _if_conditional307;
_Bool _elif_conditional69;
_Bool _while_condtional27;
_Bool _if_conditional308;
_Bool _elif_conditional70;
_Bool _elif_conditional71;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _while_condtional28;
_Bool _if_conditional314;
_Bool _elif_conditional72;
_Bool _elif_conditional73;
_Bool _if_conditional315;
_Bool _while_condtional29;
_Bool _if_conditional316;
_Bool _elif_conditional74;
_Bool _elif_conditional75;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _elif_conditional76;
_Bool _if_conditional320;
_Bool _while_condtional30;
_Bool _if_conditional321;
_Bool _elif_conditional77;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _while_condtional31;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _while_condtional32;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _elif_conditional78;
unsigned long long n_240;
unsigned long long n1_241;
int lcount_242;
int ucount_243;
_Bool _if_conditional332;
_Bool _while_condtional33;
_Bool _if_conditional333;
_Bool _elif_conditional79;
_Bool _elif_conditional80;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _elif_conditional81;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _elif_conditional82;
_Bool _elif_conditional83;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _elif_conditional84;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&q_237, 0, sizeof(char*));
memset(&d_239, 0, sizeof(double));
    # 1615 "tccpp.c"
    # 1616 "tccpp.c"
    # 1617 "tccpp.c"
    unsigned int bn_238[2];
    memset(&bn_238, 0, sizeof(unsigned int)    *(2)    );
    # 1618 "tccpp.c"
    # 1621 "tccpp.c"
    q_237=token_buf;
    # 1622 "tccpp.c"
    ch_236=*p++;
    # 1623 "tccpp.c"
    t_231=ch_236;
    # 1624 "tccpp.c"
    ch_236=*p++;
    # 1625 "tccpp.c"
    *q_237++=t_231;
    # 1626 "tccpp.c"
    b_230=10;
    # 1642 "tccpp.c"
    # 1627 "tccpp.c"
    if(_if_conditional306=t_231==46,    _if_conditional306) {
        # 1628 "tccpp.c"
        goto float_frac_parse;
    }
    # 1629 "tccpp.c"
    else if(_elif_conditional68=t_231==48,    _elif_conditional68) {
        # 1639 "tccpp.c"
        # 1630 "tccpp.c"
        if(_if_conditional307=ch_236==120||ch_236==88,        _if_conditional307) {
            # 1631 "tccpp.c"
            q_237--;
            # 1632 "tccpp.c"
            ch_236=*p++;
            # 1633 "tccpp.c"
            b_230=16;
        }
        # 1634 "tccpp.c"
        else if(_elif_conditional69=tcc_ext&&(ch_236==98||ch_236==66),        _elif_conditional69) {
            # 1635 "tccpp.c"
            q_237--;
            # 1636 "tccpp.c"
            ch_236=*p++;
            # 1637 "tccpp.c"
            b_230=2;
        }
    }
    # 1660 "tccpp.c"
    while(_while_condtional27=1,    _while_condtional27) {
        # 1650 "tccpp.c"
        # 1643 "tccpp.c"
        if(_if_conditional308=ch_236>=97&&ch_236<=102,        _if_conditional308) {
            # 1644 "tccpp.c"
            t_231=ch_236-97+10;
        }
        # 1645 "tccpp.c"
        else if(_elif_conditional70=ch_236>=65&&ch_236<=70,        _elif_conditional70) {
            # 1646 "tccpp.c"
            t_231=ch_236-65+10;
        }
        # 1647 "tccpp.c"
        else if(_elif_conditional71=isnum(ch_236),        _elif_conditional71) {
            # 1648 "tccpp.c"
            t_231=ch_236-48;
        }
        else {
            # 1650 "tccpp.c"
            break;
        }
        # 1652 "tccpp.c"
        # 1651 "tccpp.c"
        if(_if_conditional309=t_231>=b_230,        _if_conditional309) {
            # 1652 "tccpp.c"
            break;
        }
        # 1657 "tccpp.c"
        # 1653 "tccpp.c"
        if(_if_conditional310=q_237>=token_buf+1024,        _if_conditional310) {
            # 1655 "tccpp.c"
            num_too_long:
            # 1655 "tccpp.c"
            error("number too long");
        }
        # 1657 "tccpp.c"
        *q_237++=ch_236;
        # 1658 "tccpp.c"
        ch_236=*p++;
    }
    # 1877 "tccpp.c"
    # 1662 "tccpp.c"
    if(_if_conditional311=ch_236==46||((ch_236==101||ch_236==69)&&b_230==10)||((ch_236==112||ch_236==80)&&(b_230==16||b_230==2)),    _if_conditional311) {
        # 1799 "tccpp.c"
        # 1663 "tccpp.c"
        if(_if_conditional312=b_230!=10,        _if_conditional312) {
            # 1669 "tccpp.c"
            *q_237=0;
            # 1673 "tccpp.c"
            # 1670 "tccpp.c"
            if(_if_conditional313=b_230==16,            _if_conditional313) {
                # 1671 "tccpp.c"
                shift_232=4;
            }
            else {
                # 1673 "tccpp.c"
                shift_232=2;
            }
            # 1674 "tccpp.c"
            bn_zero(bn_238);
            # 1675 "tccpp.c"
            q_237=token_buf;
            # 1689 "tccpp.c"
            while(_while_condtional28=1,            _while_condtional28) {
                # 1677 "tccpp.c"
                t_231=*q_237++;
                # 1687 "tccpp.c"
                # 1678 "tccpp.c"
                if(_if_conditional314=t_231==0,                _if_conditional314) {
                    # 1679 "tccpp.c"
                    break;
                }
                # 1680 "tccpp.c"
                else if(_elif_conditional72=t_231>=97,                _elif_conditional72) {
                    # 1681 "tccpp.c"
                    t_231=t_231-97+10;
                }
                # 1682 "tccpp.c"
                else if(_elif_conditional73=t_231>=65,                _elif_conditional73) {
                    # 1683 "tccpp.c"
                    t_231=t_231-65+10;
                }
                else {
                    # 1685 "tccpp.c"
                    t_231=t_231-48;
                }
                # 1687 "tccpp.c"
                bn_lshift(bn_238,shift_232,t_231);
            }
            # 1689 "tccpp.c"
            frac_bits_233=0;
            # 1710 "tccpp.c"
            # 1690 "tccpp.c"
            if(_if_conditional315=ch_236==46,            _if_conditional315) {
                # 1691 "tccpp.c"
                ch_236=*p++;
                # 1709 "tccpp.c"
                while(_while_condtional29=1,                _while_condtional29) {
                    # 1693 "tccpp.c"
                    t_231=ch_236;
                    # 1703 "tccpp.c"
                    # 1694 "tccpp.c"
                    if(_if_conditional316=t_231>=97&&t_231<=102,                    _if_conditional316) {
                        # 1695 "tccpp.c"
                        t_231=t_231-97+10;
                    }
                    # 1696 "tccpp.c"
                    else if(_elif_conditional74=t_231>=65&&t_231<=70,                    _elif_conditional74) {
                        # 1697 "tccpp.c"
                        t_231=t_231-65+10;
                    }
                    # 1698 "tccpp.c"
                    else if(_elif_conditional75=t_231>=48&&t_231<=57,                    _elif_conditional75) {
                        # 1699 "tccpp.c"
                        t_231=t_231-48;
                    }
                    else {
                        # 1701 "tccpp.c"
                        break;
                    }
                    # 1704 "tccpp.c"
                    # 1703 "tccpp.c"
                    if(_if_conditional317=t_231>=b_230,                    _if_conditional317) {
                        # 1704 "tccpp.c"
                        error("invalid digit");
                    }
                    # 1705 "tccpp.c"
                    bn_lshift(bn_238,shift_232,t_231);
                    # 1706 "tccpp.c"
                    frac_bits_233+=shift_232;
                    # 1707 "tccpp.c"
                    ch_236=*p++;
                }
            }
            # 1711 "tccpp.c"
            # 1710 "tccpp.c"
            if(_if_conditional318=ch_236!=112&&ch_236!=80,            _if_conditional318) {
                # 1711 "tccpp.c"
                expect("exponent");
            }
            # 1712 "tccpp.c"
            ch_236=*p++;
            # 1713 "tccpp.c"
            s_234=1;
            # 1714 "tccpp.c"
            exp_val_235=0;
            # 1721 "tccpp.c"
            # 1715 "tccpp.c"
            if(_if_conditional319=ch_236==43,            _if_conditional319) {
                # 1716 "tccpp.c"
                ch_236=*p++;
            }
            # 1717 "tccpp.c"
            else if(_elif_conditional76=ch_236==45,            _elif_conditional76) {
                # 1718 "tccpp.c"
                s_234=-1;
                # 1719 "tccpp.c"
                ch_236=*p++;
            }
            # 1722 "tccpp.c"
            # 1721 "tccpp.c"
            if(_if_conditional320=ch_236<48||ch_236>57,            _if_conditional320) {
                # 1722 "tccpp.c"
                expect("exponent digits");
            }
            # 1727 "tccpp.c"
            while(_while_condtional30=ch_236>=48&&ch_236<=57,            _while_condtional30) {
                # 1724 "tccpp.c"
                exp_val_235=exp_val_235*10+ch_236-48;
                # 1725 "tccpp.c"
                ch_236=*p++;
            }
            # 1727 "tccpp.c"
            exp_val_235=exp_val_235*s_234;
            # 1731 "tccpp.c"
            d_239=(double)bn_238[1]*4294967296.000000+(double)bn_238[0];
            # 1732 "tccpp.c"
            d_239=ldexp(d_239,exp_val_235-frac_bits_233);
            # 1733 "tccpp.c"
            t_231=toup(ch_236);
            # 1748 "tccpp.c"
            # 1734 "tccpp.c"
            if(_if_conditional321=t_231==70,            _if_conditional321) {
                # 1735 "tccpp.c"
                ch_236=*p++;
                # 1736 "tccpp.c"
                tok=185;
                # 1738 "tccpp.c"
                tokc.f=(float)d_239;
            }
            # 1739 "tccpp.c"
            else if(_elif_conditional77=t_231==76,            _elif_conditional77) {
                # 1740 "tccpp.c"
                ch_236=*p++;
                # 1741 "tccpp.c"
                tok=193;
                # 1743 "tccpp.c"
                tokc.ld=(long double)d_239;
            }
            else {
                # 1745 "tccpp.c"
                tok=192;
                # 1746 "tccpp.c"
                tokc.d=d_239;
            }
        }
        else {
            # 1763 "tccpp.c"
            # 1750 "tccpp.c"
            if(_if_conditional322=ch_236==46,            _if_conditional322) {
                # 1753 "tccpp.c"
                # 1751 "tccpp.c"
                if(_if_conditional323=q_237>=token_buf+1024,                _if_conditional323) {
                    # 1752 "tccpp.c"
                    goto num_too_long;
                }
                # 1753 "tccpp.c"
                *q_237++=ch_236;
                # 1754 "tccpp.c"
                ch_236=*p++;
                # 1756 "tccpp.c"
                float_frac_parse:
                # 1762 "tccpp.c"
                while(_while_condtional31=ch_236>=48&&ch_236<=57,                _while_condtional31) {
                    # 1759 "tccpp.c"
                    # 1757 "tccpp.c"
                    if(_if_conditional324=q_237>=token_buf+1024,                    _if_conditional324) {
                        # 1758 "tccpp.c"
                        goto num_too_long;
                    }
                    # 1759 "tccpp.c"
                    *q_237++=ch_236;
                    # 1760 "tccpp.c"
                    ch_236=*p++;
                }
            }
            # 1783 "tccpp.c"
            # 1763 "tccpp.c"
            if(_if_conditional325=ch_236==101||ch_236==69,            _if_conditional325) {
                # 1766 "tccpp.c"
                # 1764 "tccpp.c"
                if(_if_conditional326=q_237>=token_buf+1024,                _if_conditional326) {
                    # 1765 "tccpp.c"
                    goto num_too_long;
                }
                # 1766 "tccpp.c"
                *q_237++=ch_236;
                # 1767 "tccpp.c"
                ch_236=*p++;
                # 1774 "tccpp.c"
                # 1768 "tccpp.c"
                if(_if_conditional327=ch_236==45||ch_236==43,                _if_conditional327) {
                    # 1771 "tccpp.c"
                    # 1769 "tccpp.c"
                    if(_if_conditional328=q_237>=token_buf+1024,                    _if_conditional328) {
                        # 1770 "tccpp.c"
                        goto num_too_long;
                    }
                    # 1771 "tccpp.c"
                    *q_237++=ch_236;
                    # 1772 "tccpp.c"
                    ch_236=*p++;
                }
                # 1775 "tccpp.c"
                # 1774 "tccpp.c"
                if(_if_conditional329=ch_236<48||ch_236>57,                _if_conditional329) {
                    # 1775 "tccpp.c"
                    expect("exponent digits");
                }
                # 1782 "tccpp.c"
                while(_while_condtional32=ch_236>=48&&ch_236<=57,                _while_condtional32) {
                    # 1779 "tccpp.c"
                    # 1777 "tccpp.c"
                    if(_if_conditional330=q_237>=token_buf+1024,                    _if_conditional330) {
                        # 1778 "tccpp.c"
                        goto num_too_long;
                    }
                    # 1779 "tccpp.c"
                    *q_237++=ch_236;
                    # 1780 "tccpp.c"
                    ch_236=*p++;
                }
            }
            # 1783 "tccpp.c"
            *q_237=0;
            # 1784 "tccpp.c"
            t_231=toup(ch_236);
            # 1785 "tccpp.c"
            (*__errno_location())=0;
            # 1798 "tccpp.c"
            # 1786 "tccpp.c"
            if(_if_conditional331=t_231==70,            _if_conditional331) {
                # 1787 "tccpp.c"
                ch_236=*p++;
                # 1788 "tccpp.c"
                tok=185;
                # 1789 "tccpp.c"
                tokc.f=strtof(token_buf,((void*)0));
            }
            # 1790 "tccpp.c"
            else if(_elif_conditional78=t_231==76,            _elif_conditional78) {
                # 1791 "tccpp.c"
                ch_236=*p++;
                # 1792 "tccpp.c"
                tok=193;
                # 1793 "tccpp.c"
                tokc.ld=strtold(token_buf,((void*)0));
            }
            else {
                # 1795 "tccpp.c"
                tok=192;
                # 1796 "tccpp.c"
                tokc.d=strtod(token_buf,((void*)0));
            }
        }
    }
    else {
        # 1800 "tccpp.c"
        # 1801 "tccpp.c"
        # 1804 "tccpp.c"
        *q_237=0;
        # 1805 "tccpp.c"
        q_237=token_buf;
        # 1810 "tccpp.c"
        # 1806 "tccpp.c"
        if(_if_conditional332=b_230==10&&*q_237==48,        _if_conditional332) {
            # 1807 "tccpp.c"
            b_230=8;
            # 1808 "tccpp.c"
            q_237++;
        }
        # 1810 "tccpp.c"
        n_240=0;
        # 1834 "tccpp.c"
        while(_while_condtional33=1,        _while_condtional33) {
            # 1812 "tccpp.c"
            t_231=*q_237++;
            # 1825 "tccpp.c"
            # 1814 "tccpp.c"
            if(_if_conditional333=t_231==0,            _if_conditional333) {
                # 1815 "tccpp.c"
                break;
            }
            # 1816 "tccpp.c"
            else if(_elif_conditional79=t_231>=97,            _elif_conditional79) {
                # 1817 "tccpp.c"
                t_231=t_231-97+10;
            }
            # 1818 "tccpp.c"
            else if(_elif_conditional80=t_231>=65,            _elif_conditional80) {
                # 1819 "tccpp.c"
                t_231=t_231-65+10;
            }
            else {
                # 1821 "tccpp.c"
                t_231=t_231-48;
                # 1824 "tccpp.c"
                # 1822 "tccpp.c"
                if(_if_conditional334=t_231>=b_230,                _if_conditional334) {
                    # 1823 "tccpp.c"
                    error("invalid digit");
                }
            }
            # 1825 "tccpp.c"
            n1_241=n_240;
            # 1826 "tccpp.c"
            n_240=n_240*b_230+t_231;
            # 1831 "tccpp.c"
            # 1829 "tccpp.c"
            if(_if_conditional335=n_240<n1_241,            _if_conditional335) {
                # 1830 "tccpp.c"
                error("integer constant overflow");
            }
        }
        # 1844 "tccpp.c"
        # 1834 "tccpp.c"
        if(_if_conditional336=(n_240&-4294967296)!=0,        _if_conditional336) {
            # 1838 "tccpp.c"
            # 1835 "tccpp.c"
            if(_if_conditional337=(n_240>>63)!=0,            _if_conditional337) {
                # 1836 "tccpp.c"
                tok=202;
            }
            else {
                # 1838 "tccpp.c"
                tok=201;
            }
        }
        # 1839 "tccpp.c"
        else if(_elif_conditional81=n_240>2147483647,        _elif_conditional81) {
            # 1840 "tccpp.c"
            tok=200;
        }
        else {
            # 1842 "tccpp.c"
            tok=179;
        }
        # 1844 "tccpp.c"
        lcount_242=0;
        # 1845 "tccpp.c"
        ucount_243=0;
        # 1872 "tccpp.c"
        for(        ;        ;        ){
            # 1847 "tccpp.c"
            t_231=toup(ch_236);
            # 1871 "tccpp.c"
            # 1848 "tccpp.c"
            if(_if_conditional338=t_231==76,            _if_conditional338) {
                # 1850 "tccpp.c"
                # 1849 "tccpp.c"
                if(_if_conditional339=lcount_242>=2,                _if_conditional339) {
                    # 1850 "tccpp.c"
                    error("three 'l's in integer constant");
                }
                # 1851 "tccpp.c"
                lcount_242++;
                # 1858 "tccpp.c"
                # 1852 "tccpp.c"
                if(_if_conditional340=lcount_242==2,                _if_conditional340) {
                    # 1857 "tccpp.c"
                    # 1853 "tccpp.c"
                    if(_if_conditional341=tok==179,                    _if_conditional341) {
                        # 1854 "tccpp.c"
                        tok=201;
                    }
                    # 1855 "tccpp.c"
                    else if(_elif_conditional82=tok==200,                    _elif_conditional82) {
                        # 1856 "tccpp.c"
                        tok=202;
                    }
                }
                # 1858 "tccpp.c"
                ch_236=*p++;
            }
            # 1859 "tccpp.c"
            else if(_elif_conditional83=t_231==85,            _elif_conditional83) {
                # 1861 "tccpp.c"
                # 1860 "tccpp.c"
                if(_if_conditional342=ucount_243>=1,                _if_conditional342) {
                    # 1861 "tccpp.c"
                    error("two 'u's in integer constant");
                }
                # 1862 "tccpp.c"
                ucount_243++;
                # 1866 "tccpp.c"
                # 1863 "tccpp.c"
                if(_if_conditional343=tok==179,                _if_conditional343) {
                    # 1864 "tccpp.c"
                    tok=200;
                }
                # 1865 "tccpp.c"
                else if(_elif_conditional84=tok==201,                _elif_conditional84) {
                    # 1866 "tccpp.c"
                    tok=202;
                }
                # 1867 "tccpp.c"
                ch_236=*p++;
            }
            else {
                # 1869 "tccpp.c"
                break;
            }
        }
        # 1875 "tccpp.c"
        # 1872 "tccpp.c"
        if(_if_conditional344=tok==179||tok==200,        _if_conditional344) {
            # 1873 "tccpp.c"
            tokc.ui=n_240;
        }
        else {
            # 1875 "tccpp.c"
            tokc.ull=n_240;
        }
    }
    # 1879 "tccpp.c"
    # 1877 "tccpp.c"
    if(ch_236) {
        # 1878 "tccpp.c"
        error("invalid number\n");
    }
}


static void next_nomacro_spc(){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
    # 2334 "tccpp.c"
    # 2321 "tccpp.c"
    if(macro_ptr) {
        # 2323 "tccpp.c"
        redo:
        # 2323 "tccpp.c"
        tok=*macro_ptr;
        # 2331 "tccpp.c"
        # 2324 "tccpp.c"
        if(tok) {
            # 2325 "tccpp.c"
            {
                # 2325 "tccpp.c"
                tok=*macro_ptr++;
                # 2325 "tccpp.c"
                switch (tok) {
                    # 2325 "tccpp.c"
                    case 179:
                    # 2325 "tccpp.c"
                    case 200:
                    # 2325 "tccpp.c"
                    case 180:
                    # 2325 "tccpp.c"
                    case 183:
                    # 2325 "tccpp.c"
                    case 185:
                    # 2325 "tccpp.c"
                    case 186:
                    # 2325 "tccpp.c"
                    tokc.tab[0]=*macro_ptr++;
                    # 2325 "tccpp.c"
                    break;
                    # 2325 "tccpp.c"
                    case 181:
                    # 2325 "tccpp.c"
                    case 184:
                    # 2325 "tccpp.c"
                    case 206:
                    # 2325 "tccpp.c"
                    tokc.cstr=(struct CString*)macro_ptr;
                    # 2325 "tccpp.c"
                    tokc.cstr->data=(char*)macro_ptr+sizeof(struct CString);
                    # 2325 "tccpp.c"
                    macro_ptr+=(sizeof(struct CString)+tokc.cstr->size+3)>>2;
                    # 2325 "tccpp.c"
                    break;
                    # 2325 "tccpp.c"
                    case 192:
                    # 2325 "tccpp.c"
                    case 201:
                    # 2325 "tccpp.c"
                    case 202:
                    # 2325 "tccpp.c"
                    tokc.tab[0]=macro_ptr[0];
                    # 2325 "tccpp.c"
                    tokc.tab[1]=macro_ptr[1];
                    # 2325 "tccpp.c"
                    macro_ptr+=2;
                    # 2325 "tccpp.c"
                    break;
                    # 2325 "tccpp.c"
                    case 193:
                    # 2325 "tccpp.c"
                    tokc.tab[0]=macro_ptr[0];
                    # 2325 "tccpp.c"
                    tokc.tab[1]=macro_ptr[1];
                    # 2325 "tccpp.c"
                    tokc.tab[2]=macro_ptr[2];
                    # 2325 "tccpp.c"
                    tokc.tab[3]=macro_ptr[3];
                    # 2325 "tccpp.c"
                    macro_ptr+=16/4;
                    # 2325 "tccpp.c"
                    break;
                    # 2325 "tccpp.c"
                    default:
                    # 2325 "tccpp.c"
                    break;
                }
            }
            # 2330 "tccpp.c"
            # 2326 "tccpp.c"
            if(_if_conditional408=tok==186,            _if_conditional408) {
                # 2327 "tccpp.c"
                file->line_num=tokc.i;
                # 2328 "tccpp.c"
                goto redo;
            }
        }
    }
    else {
        # 2332 "tccpp.c"
        next_nomacro1();
    }
}

static void next_nomacro(){
void* __result_obj__;
_Bool _do_while_condtional1;
memset(&__result_obj__, 0, sizeof(void*));
    # 2340 "tccpp.c"
    do {
        # 2339 "tccpp.c"
        next_nomacro_spc();
    # 2340 "tccpp.c"
    } while(_do_while_condtional1=is_space(tok),    _do_while_condtional1);
}

static int* macro_arg_subst(struct Sym** nested_list, int* macro_str, struct Sym* args){
void* __result_obj__;
int* st_257;
int last_tok_258;
int t_259;
int spc_260;
struct Sym* s_261;
union CValue cval_262;
struct TokenString str_263;
struct CString cstr_264;
_Bool _while_condtional36;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _while_condtional37;
_Bool _if_conditional413;
_Bool _elif_conditional96;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
int t1_265;
_Bool _if_conditional418;
int* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_261, 0, sizeof(struct Sym*));
memset(&cval_262, 0, sizeof(union CValue));
memset(&str_263, 0, sizeof(struct TokenString));
memset(&cstr_264, 0, sizeof(struct CString));
memset(&t1_265, 0, sizeof(int));
    # 2346 "tccpp.c"
    # 2347 "tccpp.c"
    # 2348 "tccpp.c"
    # 2349 "tccpp.c"
    # 2350 "tccpp.c"
    # 2352 "tccpp.c"
    tok_str_new(&str_263);
    # 2353 "tccpp.c"
    last_tok_258=0;
    # 2430 "tccpp.c"
    while(_while_condtional36=1,    _while_condtional36) {
        # 2355 "tccpp.c"
        {
            # 2355 "tccpp.c"
            t_259=*macro_str++;
            # 2355 "tccpp.c"
            switch (t_259) {
                # 2355 "tccpp.c"
                case 179:
                # 2355 "tccpp.c"
                case 200:
                # 2355 "tccpp.c"
                case 180:
                # 2355 "tccpp.c"
                case 183:
                # 2355 "tccpp.c"
                case 185:
                # 2355 "tccpp.c"
                case 186:
                # 2355 "tccpp.c"
                cval_262.tab[0]=*macro_str++;
                # 2355 "tccpp.c"
                break;
                # 2355 "tccpp.c"
                case 181:
                # 2355 "tccpp.c"
                case 184:
                # 2355 "tccpp.c"
                case 206:
                # 2355 "tccpp.c"
                cval_262.cstr=(struct CString*)macro_str;
                # 2355 "tccpp.c"
                cval_262.cstr->data=(char*)macro_str+sizeof(struct CString);
                # 2355 "tccpp.c"
                macro_str+=(sizeof(struct CString)+cval_262.cstr->size+3)>>2;
                # 2355 "tccpp.c"
                break;
                # 2355 "tccpp.c"
                case 192:
                # 2355 "tccpp.c"
                case 201:
                # 2355 "tccpp.c"
                case 202:
                # 2355 "tccpp.c"
                cval_262.tab[0]=macro_str[0];
                # 2355 "tccpp.c"
                cval_262.tab[1]=macro_str[1];
                # 2355 "tccpp.c"
                macro_str+=2;
                # 2355 "tccpp.c"
                break;
                # 2355 "tccpp.c"
                case 193:
                # 2355 "tccpp.c"
                cval_262.tab[0]=macro_str[0];
                # 2355 "tccpp.c"
                cval_262.tab[1]=macro_str[1];
                # 2355 "tccpp.c"
                cval_262.tab[2]=macro_str[2];
                # 2355 "tccpp.c"
                cval_262.tab[3]=macro_str[3];
                # 2355 "tccpp.c"
                macro_str+=16/4;
                # 2355 "tccpp.c"
                break;
                # 2355 "tccpp.c"
                default:
                # 2355 "tccpp.c"
                break;
            }
        }
        # 2357 "tccpp.c"
        # 2356 "tccpp.c"
        if(_if_conditional409=!t_259,        _if_conditional409) {
            # 2357 "tccpp.c"
            break;
        }
        # 2428 "tccpp.c"
        # 2358 "tccpp.c"
        if(_if_conditional410=t_259==35,        _if_conditional410) {
            # 2360 "tccpp.c"
            {
                # 2360 "tccpp.c"
                t_259=*macro_str++;
                # 2360 "tccpp.c"
                switch (t_259) {
                    # 2360 "tccpp.c"
                    case 179:
                    # 2360 "tccpp.c"
                    case 200:
                    # 2360 "tccpp.c"
                    case 180:
                    # 2360 "tccpp.c"
                    case 183:
                    # 2360 "tccpp.c"
                    case 185:
                    # 2360 "tccpp.c"
                    case 186:
                    # 2360 "tccpp.c"
                    cval_262.tab[0]=*macro_str++;
                    # 2360 "tccpp.c"
                    break;
                    # 2360 "tccpp.c"
                    case 181:
                    # 2360 "tccpp.c"
                    case 184:
                    # 2360 "tccpp.c"
                    case 206:
                    # 2360 "tccpp.c"
                    cval_262.cstr=(struct CString*)macro_str;
                    # 2360 "tccpp.c"
                    cval_262.cstr->data=(char*)macro_str+sizeof(struct CString);
                    # 2360 "tccpp.c"
                    macro_str+=(sizeof(struct CString)+cval_262.cstr->size+3)>>2;
                    # 2360 "tccpp.c"
                    break;
                    # 2360 "tccpp.c"
                    case 192:
                    # 2360 "tccpp.c"
                    case 201:
                    # 2360 "tccpp.c"
                    case 202:
                    # 2360 "tccpp.c"
                    cval_262.tab[0]=macro_str[0];
                    # 2360 "tccpp.c"
                    cval_262.tab[1]=macro_str[1];
                    # 2360 "tccpp.c"
                    macro_str+=2;
                    # 2360 "tccpp.c"
                    break;
                    # 2360 "tccpp.c"
                    case 193:
                    # 2360 "tccpp.c"
                    cval_262.tab[0]=macro_str[0];
                    # 2360 "tccpp.c"
                    cval_262.tab[1]=macro_str[1];
                    # 2360 "tccpp.c"
                    cval_262.tab[2]=macro_str[2];
                    # 2360 "tccpp.c"
                    cval_262.tab[3]=macro_str[3];
                    # 2360 "tccpp.c"
                    macro_str+=16/4;
                    # 2360 "tccpp.c"
                    break;
                    # 2360 "tccpp.c"
                    default:
                    # 2360 "tccpp.c"
                    break;
                }
            }
            # 2362 "tccpp.c"
            # 2361 "tccpp.c"
            if(_if_conditional411=!t_259,            _if_conditional411) {
                # 2362 "tccpp.c"
                break;
            }
            # 2363 "tccpp.c"
            s_261=sym_find2(args,t_259);
            # 2385 "tccpp.c"
            # 2364 "tccpp.c"
            if(s_261) {
                # 2365 "tccpp.c"
                cstr_new(&cstr_264);
                # 2366 "tccpp.c"
                st_257=(int*)s_261->c;
                # 2367 "tccpp.c"
                spc_260=0;
                # 2373 "tccpp.c"
                while(_while_condtional37=*st_257,                _while_condtional37) {
                    # 2369 "tccpp.c"
                    {
                        # 2369 "tccpp.c"
                        t_259=*st_257++;
                        # 2369 "tccpp.c"
                        switch (t_259) {
                            # 2369 "tccpp.c"
                            case 179:
                            # 2369 "tccpp.c"
                            case 200:
                            # 2369 "tccpp.c"
                            case 180:
                            # 2369 "tccpp.c"
                            case 183:
                            # 2369 "tccpp.c"
                            case 185:
                            # 2369 "tccpp.c"
                            case 186:
                            # 2369 "tccpp.c"
                            cval_262.tab[0]=*st_257++;
                            # 2369 "tccpp.c"
                            break;
                            # 2369 "tccpp.c"
                            case 181:
                            # 2369 "tccpp.c"
                            case 184:
                            # 2369 "tccpp.c"
                            case 206:
                            # 2369 "tccpp.c"
                            cval_262.cstr=(struct CString*)st_257;
                            # 2369 "tccpp.c"
                            cval_262.cstr->data=(char*)st_257+sizeof(struct CString);
                            # 2369 "tccpp.c"
                            st_257+=(sizeof(struct CString)+cval_262.cstr->size+3)>>2;
                            # 2369 "tccpp.c"
                            break;
                            # 2369 "tccpp.c"
                            case 192:
                            # 2369 "tccpp.c"
                            case 201:
                            # 2369 "tccpp.c"
                            case 202:
                            # 2369 "tccpp.c"
                            cval_262.tab[0]=st_257[0];
                            # 2369 "tccpp.c"
                            cval_262.tab[1]=st_257[1];
                            # 2369 "tccpp.c"
                            st_257+=2;
                            # 2369 "tccpp.c"
                            break;
                            # 2369 "tccpp.c"
                            case 193:
                            # 2369 "tccpp.c"
                            cval_262.tab[0]=st_257[0];
                            # 2369 "tccpp.c"
                            cval_262.tab[1]=st_257[1];
                            # 2369 "tccpp.c"
                            cval_262.tab[2]=st_257[2];
                            # 2369 "tccpp.c"
                            cval_262.tab[3]=st_257[3];
                            # 2369 "tccpp.c"
                            st_257+=16/4;
                            # 2369 "tccpp.c"
                            break;
                            # 2369 "tccpp.c"
                            default:
                            # 2369 "tccpp.c"
                            break;
                        }
                    }
                    # 2372 "tccpp.c"
                    # 2370 "tccpp.c"
                    if(_if_conditional413=!check_space(t_259,&spc_260),                    _if_conditional413) {
                        # 2371 "tccpp.c"
                        cstr_cat(&cstr_264,get_tok_str(t_259,&cval_262));
                    }
                }
                # 2373 "tccpp.c"
                cstr_264.size-=spc_260;
                # 2374 "tccpp.c"
                cstr_ccat(&cstr_264,0);
                # 2379 "tccpp.c"
                cval_262.cstr=&cstr_264;
                # 2380 "tccpp.c"
                tok_str_add2(&str_263,181,&cval_262);
                # 2381 "tccpp.c"
                cstr_free(&cstr_264);
            }
            else {
                # 2383 "tccpp.c"
                tok_str_add2(&str_263,t_259,&cval_262);
            }
        }
        # 2385 "tccpp.c"
        else if(_elif_conditional96=t_259>=256,        _elif_conditional96) {
            # 2386 "tccpp.c"
            s_261=sym_find2(args,t_259);
            # 2425 "tccpp.c"
            # 2387 "tccpp.c"
            if(s_261) {
                # 2388 "tccpp.c"
                st_257=(int*)s_261->c;
                # 2422 "tccpp.c"
                # 2390 "tccpp.c"
                if(_if_conditional415=*macro_str==182||last_tok_258==182,                _if_conditional415) {
                    # 2417 "tccpp.c"
                    # 2398 "tccpp.c"
                    if(_if_conditional416=gnu_ext&&s_261->type.t&&last_tok_258==182&&str_263.len>=2&&str_263.str[str_263.len-2]==44,                    _if_conditional416) {
                        # 2407 "tccpp.c"
                        # 2399 "tccpp.c"
                        if(_if_conditional417=*st_257==0,                        _if_conditional417) {
                            # 2401 "tccpp.c"
                            str_263.len-=2;
                        }
                        else {
                            # 2404 "tccpp.c"
                            str_263.len--;
                            # 2405 "tccpp.c"
                            goto add_var;
                        }
                    }
                    else {
                        # 2408 "tccpp.c"
                        # 2410 "tccpp.c"
                        add_var:
                        # 2416 "tccpp.c"
                        for(                        ;                        ;                        ){
                            # 2411 "tccpp.c"
                            {
                                # 2411 "tccpp.c"
                                t1_265=*st_257++;
                                # 2411 "tccpp.c"
                                switch (t1_265) {
                                    # 2411 "tccpp.c"
                                    case 179:
                                    # 2411 "tccpp.c"
                                    case 200:
                                    # 2411 "tccpp.c"
                                    case 180:
                                    # 2411 "tccpp.c"
                                    case 183:
                                    # 2411 "tccpp.c"
                                    case 185:
                                    # 2411 "tccpp.c"
                                    case 186:
                                    # 2411 "tccpp.c"
                                    cval_262.tab[0]=*st_257++;
                                    # 2411 "tccpp.c"
                                    break;
                                    # 2411 "tccpp.c"
                                    case 181:
                                    # 2411 "tccpp.c"
                                    case 184:
                                    # 2411 "tccpp.c"
                                    case 206:
                                    # 2411 "tccpp.c"
                                    cval_262.cstr=(struct CString*)st_257;
                                    # 2411 "tccpp.c"
                                    cval_262.cstr->data=(char*)st_257+sizeof(struct CString);
                                    # 2411 "tccpp.c"
                                    st_257+=(sizeof(struct CString)+cval_262.cstr->size+3)>>2;
                                    # 2411 "tccpp.c"
                                    break;
                                    # 2411 "tccpp.c"
                                    case 192:
                                    # 2411 "tccpp.c"
                                    case 201:
                                    # 2411 "tccpp.c"
                                    case 202:
                                    # 2411 "tccpp.c"
                                    cval_262.tab[0]=st_257[0];
                                    # 2411 "tccpp.c"
                                    cval_262.tab[1]=st_257[1];
                                    # 2411 "tccpp.c"
                                    st_257+=2;
                                    # 2411 "tccpp.c"
                                    break;
                                    # 2411 "tccpp.c"
                                    case 193:
                                    # 2411 "tccpp.c"
                                    cval_262.tab[0]=st_257[0];
                                    # 2411 "tccpp.c"
                                    cval_262.tab[1]=st_257[1];
                                    # 2411 "tccpp.c"
                                    cval_262.tab[2]=st_257[2];
                                    # 2411 "tccpp.c"
                                    cval_262.tab[3]=st_257[3];
                                    # 2411 "tccpp.c"
                                    st_257+=16/4;
                                    # 2411 "tccpp.c"
                                    break;
                                    # 2411 "tccpp.c"
                                    default:
                                    # 2411 "tccpp.c"
                                    break;
                                }
                            }
                            # 2413 "tccpp.c"
                            # 2412 "tccpp.c"
                            if(_if_conditional418=!t1_265,                            _if_conditional418) {
                                # 2413 "tccpp.c"
                                break;
                            }
                            # 2414 "tccpp.c"
                            tok_str_add2(&str_263,t1_265,&cval_262);
                        }
                    }
                }
                else {
                    # 2420 "tccpp.c"
                    macro_subst(&str_263,nested_list,st_257,((void*)0));
                }
            }
            else {
                # 2423 "tccpp.c"
                tok_str_add(&str_263,t_259);
            }
        }
        else {
            # 2426 "tccpp.c"
            tok_str_add2(&str_263,t_259,&cval_262);
        }
        # 2428 "tccpp.c"
        last_tok_258=t_259;
    }
    # 2430 "tccpp.c"
    tok_str_add(&str_263,0);
    # 2431 "tccpp.c"
    __result93__ = __result_obj__ = str_263.str;
    come_call_finalizer3((&str_263),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_264),CString_finalize, 1, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3((&str_263),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_264),CString_finalize, 1, 0, 0, 0, (void*)0);
}

static int macro_subst_tok(struct TokenString* tok_str, struct Sym** nested_list, struct Sym* s, struct macro_level** can_read_stream){
void* __result_obj__;
struct Sym* args_266;
struct Sym* sa_267;
struct Sym* sa1_268;
int mstr_allocated_269;
int parlevel_270;
int* mstr_271;
int t_272;
int t1_273;
int* p_274;
int spc_275;
struct TokenString str_276;
char* cstrval_277;
union CValue cval_278;
struct CString cstr_279;
_Bool _if_conditional419;
_Bool _elif_conditional97;
_Bool _elif_conditional98;
long ti_281;
struct tm* tm2_282;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _while_condtional38;
_Bool _if_conditional423;
struct macro_level* ml_283;
_Bool _if_conditional424;
_Bool _while_condtional39;
_Bool _if_conditional425;
int __result94__;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _while_condtional40;
_Bool _if_conditional428;
_Bool _elif_conditional99;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&str_276, 0, sizeof(struct TokenString));
memset(&cstrval_277, 0, sizeof(char*));
memset(&cval_278, 0, sizeof(union CValue));
memset(&cstr_279, 0, sizeof(struct CString));
memset(&ti_281, 0, sizeof(long));
memset(&tm2_282, 0, sizeof(struct tm*));
memset(&ml_283, 0, sizeof(struct macro_level*));
    # 2447 "tccpp.c"
    # 2448 "tccpp.c"
    # 2449 "tccpp.c"
    # 2450 "tccpp.c"
    # 2451 "tccpp.c"
    # 2452 "tccpp.c"
    # 2453 "tccpp.c"
    char buf_280[32];
    memset(&buf_280, 0, sizeof(char)    *(32)    );
    # 2594 "tccpp.c"
    # 2457 "tccpp.c"
    if(_if_conditional419=tok==327,    _if_conditional419) {
        # 2458 "tccpp.c"
        snprintf(buf_280,sizeof(buf_280),"%d",file->line_num);
        # 2459 "tccpp.c"
        cstrval_277=buf_280;
        # 2460 "tccpp.c"
        t1_273=206;
        # 2461 "tccpp.c"
        goto add_cstr1;
    }
    # 2462 "tccpp.c"
    else if(_elif_conditional97=tok==328,    _elif_conditional97) {
        # 2463 "tccpp.c"
        cstrval_277=file->filename;
        # 2464 "tccpp.c"
        goto add_cstr;
    }
    # 2465 "tccpp.c"
    else if(_elif_conditional98=tok==329||tok==330,    _elif_conditional98) {
        # 2466 "tccpp.c"
        # 2467 "tccpp.c"
        # 2469 "tccpp.c"
        time(&ti_281);
        # 2470 "tccpp.c"
        tm2_282=localtime(&ti_281);
        # 2478 "tccpp.c"
        # 2471 "tccpp.c"
        if(_if_conditional420=tok==329,        _if_conditional420) {
            # 2473 "tccpp.c"
            snprintf(buf_280,sizeof(buf_280),"%s %2d %d",ab_month_name[tm2_282->tm_mon],tm2_282->tm_mday,tm2_282->tm_year+1900);
        }
        else {
            # 2476 "tccpp.c"
            snprintf(buf_280,sizeof(buf_280),"%02d:%02d:%02d",tm2_282->tm_hour,tm2_282->tm_min,tm2_282->tm_sec);
        }
        # 2478 "tccpp.c"
        cstrval_277=buf_280;
        # 2480 "tccpp.c"
        add_cstr:
        # 2480 "tccpp.c"
        t1_273=181;
        # 2482 "tccpp.c"
        add_cstr1:
        # 2482 "tccpp.c"
        cstr_new(&cstr_279);
        # 2483 "tccpp.c"
        cstr_cat(&cstr_279,cstrval_277);
        # 2484 "tccpp.c"
        cstr_ccat(&cstr_279,0);
        # 2485 "tccpp.c"
        cval_278.cstr=&cstr_279;
        # 2486 "tccpp.c"
        tok_str_add2(tok_str,t1_273,&cval_278);
        # 2487 "tccpp.c"
        cstr_free(&cstr_279);
    }
    else {
        # 2489 "tccpp.c"
        mstr_271=(int*)s->c;
        # 2490 "tccpp.c"
        mstr_allocated_269=0;
        # 2585 "tccpp.c"
        # 2491 "tccpp.c"
        if(_if_conditional421=s->type.t==1,        _if_conditional421) {
            # 2495 "tccpp.c"
            redo:
            # 2519 "tccpp.c"
            # 2495 "tccpp.c"
            if(macro_ptr) {
                # 2496 "tccpp.c"
                p_274=macro_ptr;
                # 2498 "tccpp.c"
                while(_while_condtional38=is_space(t_272=*p_274)||10==t_272,                _while_condtional38) {
                    # 2498 "tccpp.c"
                    ++p_274;
                }
                # 2512 "tccpp.c"
                # 2499 "tccpp.c"
                if(_if_conditional423=t_272==0&&can_read_stream,                _if_conditional423) {
                    # 2502 "tccpp.c"
                    ml_283=*can_read_stream;
                    # 2503 "tccpp.c"
                    macro_ptr=((void*)0);
                    # 2510 "tccpp.c"
                    # 2504 "tccpp.c"
                    if(ml_283) {
                        # 2506 "tccpp.c"
                        macro_ptr=ml_283->p;
                        # 2507 "tccpp.c"
                        ml_283->p=((void*)0);
                        # 2508 "tccpp.c"
                        *can_read_stream=ml_283->prev;
                    }
                    # 2510 "tccpp.c"
                    goto redo;
                }
            }
            else {
                # 2514 "tccpp.c"
                ch=file->buf_ptr[0];
                # 2516 "tccpp.c"
                while(_while_condtional39=is_space(ch)||ch==10,                _while_condtional39) {
                    # 2516 "tccpp.c"
                    minp();
                }
                # 2517 "tccpp.c"
                t_272=ch;
            }
            # 2520 "tccpp.c"
            # 2519 "tccpp.c"
            if(_if_conditional425=t_272!=40,            _if_conditional425) {
                # 2520 "tccpp.c"
                __result94__ = -1;
                come_call_finalizer3((&str_276),TokenString_finalize, 1, 0, 0, 0, (void*)0);
                come_call_finalizer3((&cstr_279),CString_finalize, 1, 0, 0, 0, (void*)0);
                return __result94__;
            }
            # 2523 "tccpp.c"
            next_nomacro();
            # 2524 "tccpp.c"
            next_nomacro();
            # 2525 "tccpp.c"
            args_266=((void*)0);
            # 2526 "tccpp.c"
            sa_267=s->next;
            # 2568 "tccpp.c"
            for(            ;            ;            ){
                # 2531 "tccpp.c"
                # 2530 "tccpp.c"
                if(_if_conditional426=!args_266&&!sa_267&&tok==41,                _if_conditional426) {
                    # 2531 "tccpp.c"
                    break;
                }
                # 2534 "tccpp.c"
                # 2532 "tccpp.c"
                if(_if_conditional427=!sa_267,                _if_conditional427) {
                    # 2534 "tccpp.c"
                    error("macro '%s' used with too many args",get_tok_str(s->v,(void*)0));
                }
                # 2535 "tccpp.c"
                tok_str_new(&str_276);
                # 2536 "tccpp.c"
                parlevel_270=spc_275=0;
                # 2552 "tccpp.c"
                while(_while_condtional40=(parlevel_270>0||(tok!=41&&(tok!=44||sa_267->type.t)))&&tok!=-1,                _while_condtional40) {
                    # 2545 "tccpp.c"
                    # 2542 "tccpp.c"
                    if(_if_conditional428=tok==40,                    _if_conditional428) {
                        # 2543 "tccpp.c"
                        parlevel_270++;
                    }
                    # 2544 "tccpp.c"
                    else if(_elif_conditional99=tok==41,                    _elif_conditional99) {
                        # 2545 "tccpp.c"
                        parlevel_270--;
                    }
                    # 2547 "tccpp.c"
                    # 2546 "tccpp.c"
                    if(_if_conditional429=tok==10,                    _if_conditional429) {
                        # 2547 "tccpp.c"
                        tok=32;
                    }
                    # 2549 "tccpp.c"
                    # 2548 "tccpp.c"
                    if(_if_conditional430=!check_space(tok,&spc_275),                    _if_conditional430) {
                        # 2549 "tccpp.c"
                        tok_str_add2(&str_276,tok,&tokc);
                    }
                    # 2550 "tccpp.c"
                    next_nomacro_spc();
                }
                # 2552 "tccpp.c"
                str_276.len-=spc_275;
                # 2553 "tccpp.c"
                tok_str_add(&str_276,0);
                # 2554 "tccpp.c"
                sym_push2(&args_266,sa_267->v&~536870912,sa_267->type.t,(long)str_276.str);
                # 2555 "tccpp.c"
                sa_267=sa_267->next;
                # 2564 "tccpp.c"
                # 2556 "tccpp.c"
                if(_if_conditional431=tok==41,                _if_conditional431) {
                    # 2562 "tccpp.c"
                    # 2559 "tccpp.c"
                    if(_if_conditional432=sa_267&&sa_267->type.t&&gnu_ext,                    _if_conditional432) {
                        # 2560 "tccpp.c"
                        continue;
                    }
                    else {
                        # 2562 "tccpp.c"
                        break;
                    }
                }
                # 2565 "tccpp.c"
                # 2564 "tccpp.c"
                if(_if_conditional433=tok!=44,                _if_conditional433) {
                    # 2565 "tccpp.c"
                    expect(",");
                }
                # 2566 "tccpp.c"
                next_nomacro();
            }
            # 2574 "tccpp.c"
            # 2568 "tccpp.c"
            if(sa_267) {
                # 2570 "tccpp.c"
                error("macro '%s' used with too few args",get_tok_str(s->v,(void*)0));
            }
            # 2574 "tccpp.c"
            mstr_271=macro_arg_subst(nested_list,mstr_271,args_266);
            # 2576 "tccpp.c"
            sa_267=args_266;
            # 2583 "tccpp.c"
            while(sa_267) {
                # 2578 "tccpp.c"
                sa1_268=sa_267->prev;
                # 2579 "tccpp.c"
                tok_str_free((int*)sa_267->c);
                # 2580 "tccpp.c"
                sym_free(sa_267);
                # 2581 "tccpp.c"
                sa_267=sa1_268;
            }
            # 2583 "tccpp.c"
            mstr_allocated_269=1;
        }
        # 2585 "tccpp.c"
        sym_push2(nested_list,s->v,0,0);
        # 2586 "tccpp.c"
        macro_subst(tok_str,nested_list,mstr_271,can_read_stream);
        # 2588 "tccpp.c"
        sa1_268=*nested_list;
        # 2589 "tccpp.c"
        *nested_list=sa1_268->prev;
        # 2590 "tccpp.c"
        sym_free(sa1_268);
        # 2593 "tccpp.c"
        # 2591 "tccpp.c"
        if(mstr_allocated_269) {
            # 2592 "tccpp.c"
            tok_str_free(mstr_271);
        }
    }
    # 2594 "tccpp.c"
    __result95__ = 0;
    come_call_finalizer3((&str_276),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_279),CString_finalize, 1, 0, 0, 0, (void*)0);
    return __result95__;
    come_call_finalizer3((&str_276),TokenString_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&cstr_279),CString_finalize, 1, 0, 0, 0, (void*)0);
}


static void macro_subst(struct TokenString* tok_str, struct Sym** nested_list, const int* macro_str, struct macro_level** can_read_stream){
void* __result_obj__;
struct Sym* s_297;
int* macro_str1_298;
const int* ptr_299;
int t_300;
int ret_301;
int spc_302;
union CValue cval_303;
struct macro_level ml_304;
ptr_299=macro_str;
_Bool _if_conditional449;
ptr_299=macro_str1_298;
_Bool _while_condtional42;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
ptr_299=(int*)macro_ptr;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_297, 0, sizeof(struct Sym*));
memset(&macro_str1_298, 0, sizeof(int*));
memset(&cval_303, 0, sizeof(union CValue));
memset(&ml_304, 0, sizeof(struct macro_level));
    # 2729 "tccpp.c"
    # 2730 "tccpp.c"
    # 2731 "tccpp.c"
    # 2732 "tccpp.c"
    # 2733 "tccpp.c"
    # 2734 "tccpp.c"
    # 2737 "tccpp.c"
    # 2738 "tccpp.c"
    macro_str1_298=macro_twosharps(ptr_299);
    # 2740 "tccpp.c"
    # 2739 "tccpp.c"
    if(macro_str1_298) {
        # 2740 "tccpp.c"
    }
    # 2741 "tccpp.c"
    spc_302=0;
    # 2773 "tccpp.c"
    while(_while_condtional42=1,    _while_condtional42) {
        # 2747 "tccpp.c"
        # 2745 "tccpp.c"
        if(_if_conditional450=ptr_299==((void*)0),        _if_conditional450) {
            # 2746 "tccpp.c"
            break;
        }
        # 2747 "tccpp.c"
        {
            # 2747 "tccpp.c"
            t_300=*ptr_299++;
            # 2747 "tccpp.c"
            switch (t_300) {
                # 2747 "tccpp.c"
                case 179:
                # 2747 "tccpp.c"
                case 200:
                # 2747 "tccpp.c"
                case 180:
                # 2747 "tccpp.c"
                case 183:
                # 2747 "tccpp.c"
                case 185:
                # 2747 "tccpp.c"
                case 186:
                # 2747 "tccpp.c"
                cval_303.tab[0]=*ptr_299++;
                # 2747 "tccpp.c"
                break;
                # 2747 "tccpp.c"
                case 181:
                # 2747 "tccpp.c"
                case 184:
                # 2747 "tccpp.c"
                case 206:
                # 2747 "tccpp.c"
                cval_303.cstr=(struct CString*)ptr_299;
                # 2747 "tccpp.c"
                cval_303.cstr->data=(char*)ptr_299+sizeof(struct CString);
                # 2747 "tccpp.c"
                ptr_299+=(sizeof(struct CString)+cval_303.cstr->size+3)>>2;
                # 2747 "tccpp.c"
                break;
                # 2747 "tccpp.c"
                case 192:
                # 2747 "tccpp.c"
                case 201:
                # 2747 "tccpp.c"
                case 202:
                # 2747 "tccpp.c"
                cval_303.tab[0]=ptr_299[0];
                # 2747 "tccpp.c"
                cval_303.tab[1]=ptr_299[1];
                # 2747 "tccpp.c"
                ptr_299+=2;
                # 2747 "tccpp.c"
                break;
                # 2747 "tccpp.c"
                case 193:
                # 2747 "tccpp.c"
                cval_303.tab[0]=ptr_299[0];
                # 2747 "tccpp.c"
                cval_303.tab[1]=ptr_299[1];
                # 2747 "tccpp.c"
                cval_303.tab[2]=ptr_299[2];
                # 2747 "tccpp.c"
                cval_303.tab[3]=ptr_299[3];
                # 2747 "tccpp.c"
                ptr_299+=16/4;
                # 2747 "tccpp.c"
                break;
                # 2747 "tccpp.c"
                default:
                # 2747 "tccpp.c"
                break;
            }
        }
        # 2749 "tccpp.c"
        # 2748 "tccpp.c"
        if(_if_conditional451=t_300==0,        _if_conditional451) {
            # 2749 "tccpp.c"
            break;
        }
        # 2750 "tccpp.c"
        s_297=define_find(t_300);
        # 2772 "tccpp.c"
        # 2751 "tccpp.c"
        if(_if_conditional452=s_297!=((void*)0),        _if_conditional452) {
            # 2754 "tccpp.c"
            # 2753 "tccpp.c"
            if(_if_conditional453=sym_find2(*nested_list,t_300),            _if_conditional453) {
                # 2754 "tccpp.c"
                goto no_subst;
            }
            # 2755 "tccpp.c"
            ml_304.p=macro_ptr;
            # 2757 "tccpp.c"
            # 2756 "tccpp.c"
            if(can_read_stream) {
                # 2757 "tccpp.c"
                ml_304.prev=*can_read_stream,*can_read_stream=&ml_304;
            }
            # 2758 "tccpp.c"
            macro_ptr=(int*)ptr_299;
            # 2759 "tccpp.c"
            tok=t_300;
            # 2760 "tccpp.c"
            ret_301=macro_subst_tok(tok_str,nested_list,s_297,can_read_stream);
            # 2761 "tccpp.c"
            # 2762 "tccpp.c"
            macro_ptr=ml_304.p;
            # 2764 "tccpp.c"
            # 2763 "tccpp.c"
            if(_if_conditional455=can_read_stream&&*can_read_stream==&ml_304,            _if_conditional455) {
                # 2764 "tccpp.c"
                *can_read_stream=ml_304.prev;
            }
            # 2767 "tccpp.c"
            # 2765 "tccpp.c"
            if(_if_conditional456=ret_301!=0,            _if_conditional456) {
                # 2766 "tccpp.c"
                goto no_subst;
            }
        }
        else {
            # 2769 "tccpp.c"
            no_subst:
            # 2771 "tccpp.c"
            # 2769 "tccpp.c"
            if(_if_conditional457=!check_space(t_300,&spc_302),            _if_conditional457) {
                # 2770 "tccpp.c"
                tok_str_add2(tok_str,t_300,&cval_303);
            }
        }
    }
    # 2775 "tccpp.c"
    # 2773 "tccpp.c"
    if(macro_str1_298) {
        # 2774 "tccpp.c"
        tok_str_free(macro_str1_298);
    }
    come_call_finalizer3((&ml_304),macro_level_finalize, 1, 0, 0, 0, (void*)0);
}

static void macro_level_finalize(struct macro_level* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void next(){
void* __result_obj__;
struct Sym* nested_list_305;
struct Sym* s_306;
struct TokenString str_307;
struct macro_level* ml_308;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
memset(&__result_obj__, 0, sizeof(void*));
memset(&str_307, 0, sizeof(struct TokenString));
memset(&ml_308, 0, sizeof(struct macro_level*));
    # 2780 "tccpp.c"
    # 2781 "tccpp.c"
    # 2782 "tccpp.c"
    # 2785 "tccpp.c"
    redo:
    # 2788 "tccpp.c"
    # 2785 "tccpp.c"
    if(_if_conditional459=parse_flags&16,    _if_conditional459) {
        # 2786 "tccpp.c"
        next_nomacro_spc();
    }
    else {
        # 2788 "tccpp.c"
        next_nomacro();
    }
    # 2825 "tccpp.c"
    # 2789 "tccpp.c"
    if(_if_conditional460=!macro_ptr,    _if_conditional460) {
        # 2809 "tccpp.c"
        # 2793 "tccpp.c"
        if(_if_conditional461=tok>=256&&(parse_flags&1),        _if_conditional461) {
            # 2794 "tccpp.c"
            s_306=define_find(tok);
            # 2808 "tccpp.c"
            # 2795 "tccpp.c"
            if(s_306) {
                # 2797 "tccpp.c"
                tok_str_new(&str_307);
                # 2798 "tccpp.c"
                nested_list_305=((void*)0);
                # 2799 "tccpp.c"
                ml_308=((void*)0);
                # 2807 "tccpp.c"
                # 2800 "tccpp.c"
                if(_if_conditional463=macro_subst_tok(&str_307,&nested_list_305,s_306,&ml_308)==0,                _if_conditional463) {
                    # 2802 "tccpp.c"
                    tok_str_add(&str_307,0);
                    # 2803 "tccpp.c"
                    macro_ptr=str_307.str;
                    # 2804 "tccpp.c"
                    macro_ptr_allocated=str_307.str;
                    # 2805 "tccpp.c"
                    goto redo;
                }
            }
        }
    }
    else {
        # 2822 "tccpp.c"
        # 2810 "tccpp.c"
        if(_if_conditional464=tok==0,        _if_conditional464) {
            # 2820 "tccpp.c"
            # 2812 "tccpp.c"
            if(unget_buffer_enabled) {
                # 2813 "tccpp.c"
                macro_ptr=unget_saved_macro_ptr;
                # 2814 "tccpp.c"
                unget_buffer_enabled=0;
            }
            else {
                # 2817 "tccpp.c"
                tok_str_free(macro_ptr_allocated);
                # 2818 "tccpp.c"
                macro_ptr=((void*)0);
            }
            # 2820 "tccpp.c"
            goto redo;
        }
    }
    # 2829 "tccpp.c"
    # 2826 "tccpp.c"
    if(_if_conditional466=tok==206&&(parse_flags&2),    _if_conditional466) {
        # 2827 "tccpp.c"
        parse_number((char*)tokc.cstr->data);
    }
    come_call_finalizer3((&str_307),TokenString_finalize, 1, 0, 0, 0, (void*)0);
}


static void preprocess_init(struct TCCState* s1){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2854 "tccpp.c"
    s1->include_stack_ptr=s1->include_stack;
    # 2857 "tccpp.c"
    s1->ifdef_stack_ptr=s1->ifdef_stack;
    # 2858 "tccpp.c"
    file->ifdef_stack_ptr=s1->ifdef_stack_ptr;
    # 2861 "tccpp.c"
    vtop=vstack-1;
    # 2862 "tccpp.c"
    s1->pack_stack[0]=0;
    # 2863 "tccpp.c"
    s1->pack_stack_ptr=s1->pack_stack;
}

void preprocess_new(){
void* __result_obj__;
int i_312;
int c_313;
const char* p_314;
const char* r_315;
struct TokenSym* ts_316;
p_314=tcc_keywords;
_Bool _while_condtional43;
r_315=p_314;
_Bool _if_conditional467;
p_314=r_315;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_316, 0, sizeof(struct TokenSym*));
    # 2868 "tccpp.c"
    # 2869 "tccpp.c"
    # 2870 "tccpp.c"
    # 2874 "tccpp.c"
    for(    i_312=(-1);    i_312<256;    i_312++    ){
        # 2874 "tccpp.c"
        isidnum_table[i_312-(-1)]=isid(i_312)||isnum(i_312);
    }
    # 2877 "tccpp.c"
    table_ident=((void*)0);
    # 2878 "tccpp.c"
    memset(hash_ident,0,8192*sizeof(struct TokenSym*));
    # 2880 "tccpp.c"
    tok_ident=256;
    # 2881 "tccpp.c"
    # 2892 "tccpp.c"
    while(_while_condtional43=*p_314,    _while_condtional43) {
        # 2883 "tccpp.c"
        # 2889 "tccpp.c"
        for(        ;        ;        ){
            # 2885 "tccpp.c"
            c_313=*r_315++;
            # 2888 "tccpp.c"
            # 2886 "tccpp.c"
            if(_if_conditional467=c_313==0,            _if_conditional467) {
                # 2887 "tccpp.c"
                break;
            }
        }
        # 2889 "tccpp.c"
        ts_316=tok_alloc(p_314,r_315-p_314-1);
        # 2890 "tccpp.c"
    }
}

static int tcc_preprocess(struct TCCState* s1){
void* __result_obj__;
struct Sym* define_start_317;
struct BufferedFile* file_ref_318;
int token_seen_319;
int line_ref_320;
_Bool _if_conditional468;
_Bool _elif_conditional102;
_Bool _if_conditional469;
_Bool _elif_conditional103;
int d_321;
_Bool _if_conditional470;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_start_317, 0, sizeof(struct Sym*));
memset(&file_ref_318, 0, sizeof(struct BufferedFile*));
memset(&d_321, 0, sizeof(int));
    # 2897 "tccpp.c"
    # 2898 "tccpp.c"
    # 2899 "tccpp.c"
    # 2901 "tccpp.c"
    preprocess_init(s1);
    # 2902 "tccpp.c"
    define_start_317=define_stack;
    # 2903 "tccpp.c"
    ch=file->buf_ptr[0];
    # 2904 "tccpp.c"
    tok_flags=1|2;
    # 2906 "tccpp.c"
    parse_flags=8|1|4|16;
    # 2907 "tccpp.c"
    token_seen_319=0;
    # 2908 "tccpp.c"
    line_ref_320=0;
    # 2909 "tccpp.c"
    file_ref_318=((void*)0);
    # 2932 "tccpp.c"
    for(    ;    ;    ){
        # 2912 "tccpp.c"
        next();
        # 2930 "tccpp.c"
        # 2913 "tccpp.c"
        if(_if_conditional468=tok==(-1),        _if_conditional468) {
            # 2914 "tccpp.c"
            break;
        }
        # 2915 "tccpp.c"
        else if(_elif_conditional102=tok==10,        _elif_conditional102) {
            # 2918 "tccpp.c"
            # 2916 "tccpp.c"
            if(_if_conditional469=!token_seen_319,            _if_conditional469) {
                # 2917 "tccpp.c"
                continue;
            }
            # 2918 "tccpp.c"
            ++line_ref_320;
            # 2919 "tccpp.c"
            token_seen_319=0;
        }
        # 2920 "tccpp.c"
        else if(_elif_conditional103=!token_seen_319,        _elif_conditional103) {
            # 2921 "tccpp.c"
            d_321=file->line_num-line_ref_320;
            # 2926 "tccpp.c"
            # 2922 "tccpp.c"
            if(_if_conditional470=file!=file_ref_318||d_321<0||d_321>=8,            _if_conditional470) {
                # 2923 "tccpp.c"
                fprintf(s1->outfile,"# %d \"%s\"\n",file->line_num,file->filename);
            }
            else {
                # 2926 "tccpp.c"
                while(d_321) {
                    # 2926 "tccpp.c"
                    fputs("\n",s1->outfile),--d_321;
                }
            }
            # 2927 "tccpp.c"
            line_ref_320=(file_ref_318=file)->line_num;
            # 2928 "tccpp.c"
            token_seen_319=1;
        }
        # 2930 "tccpp.c"
        fputs(get_tok_str(tok,&tokc),s1->outfile);
    }
    # 2932 "tccpp.c"
    free_defines(define_start_317);
    # 2933 "tccpp.c"
    __result98__ = 0;
    return __result98__;
}

void swap(int* p, int* q){
void* __result_obj__;
int t_322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_322, 0, sizeof(int));
    # 23 "tccgen.c"
    # 24 "tccgen.c"
    t_322=*p;
    # 25 "tccgen.c"
    *p=*q;
    # 26 "tccgen.c"
    *q=t_322;
}

void vsetc(struct CType* type, int r, union CValue* vc){
void* __result_obj__;
int v_323;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_323, 0, sizeof(int));
    # 31 "tccgen.c"
    # 34 "tccgen.c"
    # 33 "tccgen.c"
    if(_if_conditional471=vtop>=vstack+(256-1),    _if_conditional471) {
        # 34 "tccgen.c"
        error("memory full");
    }
    # 43 "tccgen.c"
    # 38 "tccgen.c"
    if(_if_conditional472=vtop>=vstack,    _if_conditional472) {
        # 39 "tccgen.c"
        v_323=vtop->r&255;
        # 42 "tccgen.c"
        # 40 "tccgen.c"
        if(_if_conditional473=v_323==243||(v_323&~1)==244,        _if_conditional473) {
            # 41 "tccgen.c"
            gv(1);
        }
    }
    # 43 "tccgen.c"
    vtop++;
    # 44 "tccgen.c"
    vtop->type=*type;
    # 45 "tccgen.c"
    vtop->r=r;
    # 46 "tccgen.c"
    vtop->r2=240;
    # 47 "tccgen.c"
    vtop->c=*vc;
}

void vpushi(int v){
void* __result_obj__;
union CValue cval_324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cval_324, 0, sizeof(union CValue));
    # 53 "tccgen.c"
    # 54 "tccgen.c"
    cval_324.i=v;
    # 55 "tccgen.c"
    vsetc(&int_type,240,&cval_324);
}

void vpushll(long long v){
void* __result_obj__;
union CValue cval_325;
struct CType ctype_326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cval_325, 0, sizeof(union CValue));
memset(&ctype_326, 0, sizeof(struct CType));
    # 61 "tccgen.c"
    # 62 "tccgen.c"
    # 63 "tccgen.c"
    ctype_326.t=12;
    # 64 "tccgen.c"
    cval_325.ull=v;
    # 65 "tccgen.c"
    vsetc(&ctype_326,240,&cval_325);
    come_call_finalizer3((&ctype_326),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void CType_finalize(struct CType* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct Sym* get_sym_ref(struct CType* type, struct Section* sec, unsigned long int offset, unsigned long int size){
void* __result_obj__;
int v_327;
struct Sym* sym_328;
struct Sym* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_327, 0, sizeof(int));
memset(&sym_328, 0, sizeof(struct Sym*));
    # 72 "tccgen.c"
    # 73 "tccgen.c"
    # 75 "tccgen.c"
    v_327=anon_sym++;
    # 76 "tccgen.c"
    sym_328=global_identifier_push(v_327,type->t|256,0);
    # 77 "tccgen.c"
    sym_328->type.ref=type->ref;
    # 78 "tccgen.c"
    sym_328->r=240|512;
    # 79 "tccgen.c"
    put_extern_sym(sym_328,sec,offset,size);
    # 80 "tccgen.c"
    __result99__ = __result_obj__ = sym_328;
    return __result99__;
}

static void vpush_ref(struct CType* type, struct Section* sec, unsigned long int offset, unsigned long int size){
void* __result_obj__;
union CValue cval_329;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cval_329, 0, sizeof(union CValue));
    # 86 "tccgen.c"
    # 88 "tccgen.c"
    cval_329.ul=0;
    # 89 "tccgen.c"
    vsetc(type,240|512,&cval_329);
    # 90 "tccgen.c"
    vtop->sym=get_sym_ref(type,sec,offset,size);
}

static struct Sym* external_global_sym(int v, struct CType* type, int r){
void* __result_obj__;
struct Sym* s_330;
_Bool _if_conditional474;
struct Sym* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_330, 0, sizeof(struct Sym*));
    # 96 "tccgen.c"
    # 98 "tccgen.c"
    s_330=sym_find(v);
    # 105 "tccgen.c"
    # 99 "tccgen.c"
    if(_if_conditional474=!s_330,    _if_conditional474) {
        # 101 "tccgen.c"
        s_330=global_identifier_push(v,type->t|128,0);
        # 102 "tccgen.c"
        s_330->type.ref=type->ref;
        # 103 "tccgen.c"
        s_330->r=r|240|512;
    }
    # 105 "tccgen.c"
    __result100__ = __result_obj__ = s_330;
    return __result100__;
}

static struct Sym* external_sym(int v, struct CType* type, int r){
void* __result_obj__;
struct Sym* s_331;
_Bool _if_conditional475;
_Bool _if_conditional476;
struct Sym* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_331, 0, sizeof(struct Sym*));
    # 111 "tccgen.c"
    # 113 "tccgen.c"
    s_331=sym_find(v);
    # 123 "tccgen.c"
    # 114 "tccgen.c"
    if(_if_conditional475=!s_331,    _if_conditional475) {
        # 116 "tccgen.c"
        s_331=sym_push(v,type,r|240|512,0);
        # 117 "tccgen.c"
        s_331->type.t|=128;
    }
    else {
        # 122 "tccgen.c"
        # 119 "tccgen.c"
        if(_if_conditional476=!is_compatible_types(&s_331->type,type),        _if_conditional476) {
            # 121 "tccgen.c"
            error("incompatible types for redefinition of '%s'",get_tok_str(v,((void*)0)));
        }
    }
    # 123 "tccgen.c"
    __result101__ = __result_obj__ = s_331;
    return __result101__;
}

static void vpush_global_sym(struct CType* type, int v){
void* __result_obj__;
struct Sym* sym_332;
union CValue cval_333;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_332, 0, sizeof(struct Sym*));
memset(&cval_333, 0, sizeof(union CValue));
    # 129 "tccgen.c"
    # 130 "tccgen.c"
    # 132 "tccgen.c"
    sym_332=external_global_sym(v,type,0);
    # 133 "tccgen.c"
    cval_333.ul=0;
    # 134 "tccgen.c"
    vsetc(type,240|512,&cval_333);
    # 135 "tccgen.c"
    vtop->sym=sym_332;
}

void vset(struct CType* type, int r, int v){
void* __result_obj__;
union CValue cval_334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cval_334, 0, sizeof(union CValue));
    # 140 "tccgen.c"
    # 142 "tccgen.c"
    cval_334.i=v;
    # 143 "tccgen.c"
    vsetc(type,r,&cval_334);
}

void vseti(int r, int v){
void* __result_obj__;
struct CType type_335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_335, 0, sizeof(struct CType));
    # 148 "tccgen.c"
    # 149 "tccgen.c"
    type_335.t=0;
    # 150 "tccgen.c"
    vset(&type_335,r,v);
    come_call_finalizer3((&type_335),CType_finalize, 1, 0, 0, 0, (void*)0);
}

void vswap(){
void* __result_obj__;
struct SValue tmp_336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_336, 0, sizeof(struct SValue));
    # 155 "tccgen.c"
    # 157 "tccgen.c"
    tmp_336=vtop[0];
    # 158 "tccgen.c"
    vtop[0]=vtop[-1];
    # 159 "tccgen.c"
    vtop[-1]=tmp_336;
    come_call_finalizer3((&tmp_336),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

static void SValue_finalize(struct SValue* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void vpushv(struct SValue* v){
void* __result_obj__;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
    # 165 "tccgen.c"
    # 164 "tccgen.c"
    if(_if_conditional477=vtop>=vstack+(256-1),    _if_conditional477) {
        # 165 "tccgen.c"
        error("memory full");
    }
    # 166 "tccgen.c"
    vtop++;
    # 167 "tccgen.c"
    *vtop=*v;
}

void vdup(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 172 "tccgen.c"
    vpushv(vtop);
}

void save_reg(int r){
void* __result_obj__;
int l_337;
int saved_338;
int size_339;
int align_340;
struct SValue* p_341;
struct SValue sv_342;
struct CType* type_343;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_343, 0, sizeof(struct CType*));
    # 178 "tccgen.c"
    # 179 "tccgen.c"
    # 180 "tccgen.c"
    # 183 "tccgen.c"
    saved_338=0;
    # 184 "tccgen.c"
    l_337=0;
    # 228 "tccgen.c"
    for(    p_341=vstack;    p_341<=vtop;    p_341++    ){
        # 227 "tccgen.c"
        # 187 "tccgen.c"
        if(_if_conditional478=(p_341->r&255)==r||((p_341->type.t&15)==12&&(p_341->r2&255)==r),        _if_conditional478) {
            # 216 "tccgen.c"
            # 189 "tccgen.c"
            if(_if_conditional479=!saved_338,            _if_conditional479) {
                # 191 "tccgen.c"
                r=p_341->r&255;
                # 193 "tccgen.c"
                type_343=&p_341->type;
                # 197 "tccgen.c"
                # 195 "tccgen.c"
                if(_if_conditional480=(p_341->r&256)||(!is_float(type_343->t)&&(type_343->t&15)!=12),                _if_conditional480) {
                    # 197 "tccgen.c"
                    type_343=&char_pointer_type;
                }
                # 201 "tccgen.c"
                size_339=type_size(type_343,&align_340);
                # 202 "tccgen.c"
                loc=(loc-size_339)&-align_340;
                # 203 "tccgen.c"
                sv_342.type.t=type_343->t;
                # 204 "tccgen.c"
                sv_342.r=242|256;
                # 205 "tccgen.c"
                sv_342.c.ul=loc;
                # 206 "tccgen.c"
                store(r,&sv_342);
                # 212 "tccgen.c"
                # 209 "tccgen.c"
                if(_if_conditional481=r==4,                _if_conditional481) {
                    # 210 "tccgen.c"
                    o(55773);
                }
                # 212 "tccgen.c"
                l_337=loc;
                # 213 "tccgen.c"
                saved_338=1;
            }
            # 224 "tccgen.c"
            # 216 "tccgen.c"
            if(_if_conditional482=p_341->r&256,            _if_conditional482) {
                # 220 "tccgen.c"
                p_341->r=(p_341->r&~(255|32768))|241;
            }
            else {
                # 222 "tccgen.c"
                p_341->r=lvalue_type(p_341->type.t)|242;
            }
            # 224 "tccgen.c"
            p_341->r2=240;
            # 225 "tccgen.c"
            p_341->c.ul=l_337;
        }
    }
}

int get_reg_ex(int rc, int rc2){
void* __result_obj__;
int r_344;
struct SValue* p_345;
_Bool _if_conditional483;
int n_346;
_Bool _if_conditional484;
_Bool _if_conditional485;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&r_344, 0, sizeof(int));
memset(&p_345, 0, sizeof(struct SValue*));
memset(&n_346, 0, sizeof(int));
    # 234 "tccgen.c"
    # 235 "tccgen.c"
    # 250 "tccgen.c"
    for(    r_344=0;    r_344<5;    r_344++    ){
        # 249 "tccgen.c"
        # 238 "tccgen.c"
        if(_if_conditional483=reg_classes[r_344]&rc2,        _if_conditional483) {
            # 239 "tccgen.c"
            # 240 "tccgen.c"
            n_346=0;
            # 246 "tccgen.c"
            for(            p_345=vstack;            p_345<=vtop;            p_345++            ){
                # 245 "tccgen.c"
                # 243 "tccgen.c"
                if(_if_conditional484=(p_345->r&255)==r_344||(p_345->r2&255)==r_344,                _if_conditional484) {
                    # 244 "tccgen.c"
                    n_346++;
                }
            }
            # 248 "tccgen.c"
            # 246 "tccgen.c"
            if(_if_conditional485=n_346<=1,            _if_conditional485) {
                # 247 "tccgen.c"
                __result102__ = r_344;
                return __result102__;
            }
        }
    }
    # 250 "tccgen.c"
    __result103__ = get_reg(rc);
    return __result103__;
}

int get_reg(int rc){
void* __result_obj__;
int r_347;
struct SValue* p_348;
_Bool _if_conditional486;
_Bool _if_conditional487;
int __result104__;
_Bool _if_conditional488;
_Bool _if_conditional489;
int __result105__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&r_347, 0, sizeof(int));
memset(&p_348, 0, sizeof(struct SValue*));
    # 256 "tccgen.c"
    # 257 "tccgen.c"
    # 275 "tccgen.c"
    for(    r_347=0;    r_347<5;    r_347++    ){
        # 269 "tccgen.c"
        # 261 "tccgen.c"
        if(_if_conditional486=reg_classes[r_347]&rc,        _if_conditional486) {
            # 267 "tccgen.c"
            for(            p_348=vstack;            p_348<=vtop;            p_348++            ){
                # 266 "tccgen.c"
                # 264 "tccgen.c"
                if(_if_conditional487=(p_348->r&255)==r_347||(p_348->r2&255)==r_347,                _if_conditional487) {
                    # 265 "tccgen.c"
                    goto notfound;
                }
            }
            # 267 "tccgen.c"
            __result104__ = r_347;
            return __result104__;
        }
        # 269 "tccgen.c"
        notfound:
    }
    # 288 "tccgen.c"
    for(    p_348=vstack;    p_348<=vtop;    p_348++    ){
        # 276 "tccgen.c"
        r_347=p_348->r&255;
        # 278 "tccgen.c"
        # 277 "tccgen.c"
        if(_if_conditional488=r_347<240&&(reg_classes[r_347]&rc),        _if_conditional488) {
            # 278 "tccgen.c"
            goto save_found;
        }
        # 280 "tccgen.c"
        r_347=p_348->r2&255;
        # 286 "tccgen.c"
        # 281 "tccgen.c"
        if(_if_conditional489=r_347<240&&(reg_classes[r_347]&rc),        _if_conditional489) {
            # 283 "tccgen.c"
            save_found:
            # 283 "tccgen.c"
            save_reg(r_347);
            # 284 "tccgen.c"
            __result105__ = r_347;
            return __result105__;
        }
    }
    # 288 "tccgen.c"
    __result106__ = -1;
    return __result106__;
}

void save_regs(int n){
void* __result_obj__;
int r_349;
struct SValue* p_350;
struct SValue* p1_351;
_Bool _if_conditional490;
memset(&__result_obj__, 0, sizeof(void*));
memset(&r_349, 0, sizeof(int));
    # 294 "tccgen.c"
    # 295 "tccgen.c"
    # 296 "tccgen.c"
    p1_351=vtop-n;
    # 303 "tccgen.c"
    for(    p_350=vstack;    p_350<=p1_351;    p_350++    ){
        # 298 "tccgen.c"
        r_349=p_350->r&255;
        # 302 "tccgen.c"
        # 299 "tccgen.c"
        if(_if_conditional490=r_349<240,        _if_conditional490) {
            # 300 "tccgen.c"
            save_reg(r_349);
        }
    }
}

void move_reg(int r, int s){
void* __result_obj__;
struct SValue sv_352;
_Bool _if_conditional491;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sv_352, 0, sizeof(struct SValue));
    # 309 "tccgen.c"
    # 318 "tccgen.c"
    # 311 "tccgen.c"
    if(_if_conditional491=r!=s,    _if_conditional491) {
        # 312 "tccgen.c"
        save_reg(r);
        # 313 "tccgen.c"
        sv_352.type.t=0;
        # 314 "tccgen.c"
        sv_352.r=s;
        # 315 "tccgen.c"
        sv_352.c.ul=0;
        # 316 "tccgen.c"
        load(r,&sv_352);
    }
    come_call_finalizer3((&sv_352),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

void gaddrof(){
void* __result_obj__;
_Bool _if_conditional492;
memset(&__result_obj__, 0, sizeof(void*));
    # 323 "tccgen.c"
    vtop->r&=~256;
    # 327 "tccgen.c"
    # 325 "tccgen.c"
    if(_if_conditional492=(vtop->r&255)==241,    _if_conditional492) {
        # 326 "tccgen.c"
        vtop->r=(vtop->r&~(255|(4096|8192|16384)))|242|256;
    }
}

int gv(int rc){
void* __result_obj__;
int r_353;
int rc2_354;
int bit_pos_355;
int bit_size_356;
int size_357;
int align_358;
int i_359;
_Bool _if_conditional493;
struct CType type_360;
int bits_361;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
struct Sym* sym_362;
int* ptr_363;
unsigned long int offset_364;
_Bool _if_conditional497;
_Bool _if_conditional498;
_Bool _if_conditional499;
int t1_365;
int t_366;
_Bool _if_conditional500;
_Bool _elif_conditional104;
_Bool _if_conditional501;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_360, 0, sizeof(struct CType));
memset(&bits_361, 0, sizeof(int));
memset(&sym_362, 0, sizeof(struct Sym*));
memset(&ptr_363, 0, sizeof(int*));
memset(&offset_364, 0, sizeof(unsigned long int));
    # 370 "tccgen.c"
    # 528 "tccgen.c"
    # 373 "tccgen.c"
    if(_if_conditional493=vtop->type.t&64,    _if_conditional493) {
        # 374 "tccgen.c"
        # 375 "tccgen.c"
        bits_361=32;
        # 376 "tccgen.c"
        bit_pos_355=(vtop->type.t>>16)&63;
        # 377 "tccgen.c"
        bit_size_356=(vtop->type.t>>(16+6))&63;
        # 379 "tccgen.c"
        vtop->type.t&=~(64|(-1<<16));
        # 385 "tccgen.c"
        # 381 "tccgen.c"
        if(_if_conditional494=(vtop->type.t&15)==12,        _if_conditional494) {
            # 382 "tccgen.c"
            type_360.t=12;
            # 383 "tccgen.c"
            bits_361=64;
        }
        else {
            # 385 "tccgen.c"
            type_360.t=0;
        }
        # 388 "tccgen.c"
        # 387 "tccgen.c"
        if(_if_conditional495=(vtop->type.t&16)||(vtop->type.t&15)==11,        _if_conditional495) {
            # 388 "tccgen.c"
            type_360.t|=16;
        }
        # 389 "tccgen.c"
        gen_cast(&type_360);
        # 391 "tccgen.c"
        vpushi(bits_361-(bit_pos_355+bit_size_356));
        # 392 "tccgen.c"
        gen_op(1);
        # 393 "tccgen.c"
        vpushi(bits_361-bit_size_356);
        # 395 "tccgen.c"
        gen_op(2);
        # 396 "tccgen.c"
        r_353=gv(rc);
        come_call_finalizer3((&type_360),CType_finalize, 1, 0, 0, 0, (void*)0);
    }
    else {
        # 440 "tccgen.c"
        # 399 "tccgen.c"
        if(_if_conditional496=is_float(vtop->type.t)&&(vtop->r&(255|256))==240,        _if_conditional496) {
            # 400 "tccgen.c"
            # 401 "tccgen.c"
            # 402 "tccgen.c"
            # 410 "tccgen.c"
            size_357=type_size(&vtop->type,&align_358);
            # 411 "tccgen.c"
            offset_364=(data_section->data_offset+align_358-1)&-align_358;
            # 412 "tccgen.c"
            data_section->data_offset=offset_364;
            # 419 "tccgen.c"
            ptr_363=section_ptr_add(data_section,size_357);
            # 420 "tccgen.c"
            size_357=size_357>>2;
            # 429 "tccgen.c"
            for(            i_359=0;            i_359<size_357;            i_359++            ){
                # 429 "tccgen.c"
                ptr_363[i_359]=vtop->c.tab[i_359];
            }
            # 430 "tccgen.c"
            sym_362=get_sym_ref(&vtop->type,data_section,offset_364,size_357<<2);
            # 431 "tccgen.c"
            vtop->r|=256|512;
            # 432 "tccgen.c"
            vtop->sym=sym_362;
            # 433 "tccgen.c"
            vtop->c.ul=0;
        }
        # 440 "tccgen.c"
        r_353=vtop->r&255;
        # 441 "tccgen.c"
        rc2_354=1;
        # 443 "tccgen.c"
        # 442 "tccgen.c"
        if(_if_conditional497=rc==4,        _if_conditional497) {
            # 443 "tccgen.c"
            rc2_354=16;
        }
        # 521 "tccgen.c"
        # 452 "tccgen.c"
        if(_if_conditional498=r_353>=240||(vtop->r&256)||!(reg_classes[r_353]&rc)||((vtop->type.t&15)==12&&!(reg_classes[vtop->r2]&rc2_354)),        _if_conditional498) {
            # 453 "tccgen.c"
            r_353=get_reg(rc);
            # 520 "tccgen.c"
            # 499 "tccgen.c"
            if(_if_conditional499=(vtop->r&256)&&!is_float(vtop->type.t),            _if_conditional499) {
                # 500 "tccgen.c"
                # 503 "tccgen.c"
                t_366=vtop->type.t;
                # 504 "tccgen.c"
                t1_365=t_366;
                # 509 "tccgen.c"
                # 506 "tccgen.c"
                if(_if_conditional500=vtop->r&4096,                _if_conditional500) {
                    # 507 "tccgen.c"
                    t_366=1;
                }
                # 508 "tccgen.c"
                else if(_elif_conditional104=vtop->r&8192,                _elif_conditional104) {
                    # 509 "tccgen.c"
                    t_366=2;
                }
                # 511 "tccgen.c"
                # 510 "tccgen.c"
                if(_if_conditional501=vtop->r&16384,                _if_conditional501) {
                    # 511 "tccgen.c"
                    t_366|=16;
                }
                # 512 "tccgen.c"
                vtop->type.t=t_366;
                # 513 "tccgen.c"
                load(r_353,vtop);
                # 515 "tccgen.c"
                vtop->type.t=t1_365;
            }
            else {
                # 518 "tccgen.c"
                load(r_353,vtop);
            }
        }
        # 521 "tccgen.c"
        vtop->r=r_353;
    }
    # 528 "tccgen.c"
    __result107__ = r_353;
    return __result107__;
}

void gv2(int rc1, int rc2){
void* __result_obj__;
int v_367;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_367, 0, sizeof(int));
    # 534 "tccgen.c"
    # 539 "tccgen.c"
    v_367=vtop[0].r&255;
    # 561 "tccgen.c"
    # 540 "tccgen.c"
    if(_if_conditional502=v_367!=243&&(v_367&~1)!=244&&rc1<=rc2,    _if_conditional502) {
        # 541 "tccgen.c"
        vswap();
        # 542 "tccgen.c"
        gv(rc1);
        # 543 "tccgen.c"
        vswap();
        # 544 "tccgen.c"
        gv(rc2);
        # 551 "tccgen.c"
        # 546 "tccgen.c"
        if(_if_conditional503=(vtop[-1].r&255)>=240,        _if_conditional503) {
            # 547 "tccgen.c"
            vswap();
            # 548 "tccgen.c"
            gv(rc1);
            # 549 "tccgen.c"
            vswap();
        }
    }
    else {
        # 552 "tccgen.c"
        gv(rc2);
        # 553 "tccgen.c"
        vswap();
        # 554 "tccgen.c"
        gv(rc1);
        # 555 "tccgen.c"
        vswap();
        # 560 "tccgen.c"
        # 557 "tccgen.c"
        if(_if_conditional504=(vtop[0].r&255)>=240,        _if_conditional504) {
            # 558 "tccgen.c"
            gv(rc2);
        }
    }
}

int rc_fret(int t){
void* __result_obj__;
_Bool _if_conditional505;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    # 571 "tccgen.c"
    # 567 "tccgen.c"
    if(_if_conditional505=t==10,    _if_conditional505) {
        # 568 "tccgen.c"
        __result108__ = 64;
        return __result108__;
    }
    # 571 "tccgen.c"
    __result109__ = 32;
    return __result109__;
}

int reg_fret(int t){
void* __result_obj__;
_Bool _if_conditional506;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 582 "tccgen.c"
    # 578 "tccgen.c"
    if(_if_conditional506=t==10,    _if_conditional506) {
        # 579 "tccgen.c"
        __result110__ = 4;
        return __result110__;
    }
    # 582 "tccgen.c"
    __result111__ = 3;
    return __result111__;
}

void lexpand(){
void* __result_obj__;
int u_368;
memset(&__result_obj__, 0, sizeof(void*));
memset(&u_368, 0, sizeof(int));
    # 588 "tccgen.c"
    # 590 "tccgen.c"
    u_368=vtop->type.t&16;
    # 591 "tccgen.c"
    gv(1);
    # 592 "tccgen.c"
    vdup();
    # 593 "tccgen.c"
    vtop[0].r=vtop[-1].r2;
    # 594 "tccgen.c"
    vtop[0].r2=240;
    # 595 "tccgen.c"
    vtop[-1].r2=240;
    # 596 "tccgen.c"
    vtop[0].type.t=0|u_368;
    # 597 "tccgen.c"
    vtop[-1].type.t=0|u_368;
}

void lbuild(int t){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 631 "tccgen.c"
    gv2(1,1);
    # 632 "tccgen.c"
    vtop[-1].r2=vtop[0].r;
    # 633 "tccgen.c"
    vtop[-1].type.t=t;
    # 634 "tccgen.c"
    vpop();
}

void vrotb(int n){
void* __result_obj__;
int i_369;
struct SValue tmp_370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_369, 0, sizeof(int));
memset(&tmp_370, 0, sizeof(struct SValue));
    # 642 "tccgen.c"
    # 643 "tccgen.c"
    # 645 "tccgen.c"
    tmp_370=vtop[-n+1];
    # 647 "tccgen.c"
    for(    i_369=-n+1;    i_369!=0;    i_369++    ){
        # 647 "tccgen.c"
        vtop[i_369]=vtop[i_369+1];
    }
    # 648 "tccgen.c"
    vtop[0]=tmp_370;
    come_call_finalizer3((&tmp_370),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

void vrott(int n){
void* __result_obj__;
int i_371;
struct SValue tmp_372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_371, 0, sizeof(int));
memset(&tmp_372, 0, sizeof(struct SValue));
    # 656 "tccgen.c"
    # 657 "tccgen.c"
    # 659 "tccgen.c"
    tmp_372=vtop[0];
    # 661 "tccgen.c"
    for(    i_371=0;    i_371<n-1;    i_371++    ){
        # 661 "tccgen.c"
        vtop[-i_371]=vtop[-i_371-1];
    }
    # 662 "tccgen.c"
    vtop[-n+1]=tmp_372;
    come_call_finalizer3((&tmp_372),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

void vpop(){
void* __result_obj__;
int v_373;
_Bool _if_conditional507;
_Bool _elif_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&v_373, 0, sizeof(int));
    # 684 "tccgen.c"
    # 685 "tccgen.c"
    v_373=vtop->r&255;
    # 696 "tccgen.c"
    # 688 "tccgen.c"
    if(_if_conditional507=v_373==4&&!nocode_wanted,    _if_conditional507) {
        # 689 "tccgen.c"
        o(55773);
    }
    # 692 "tccgen.c"
    else if(_elif_conditional105=v_373==244||v_373==245,    _elif_conditional105) {
        # 694 "tccgen.c"
        gsym(vtop->c.ul);
    }
    # 696 "tccgen.c"
    vtop--;
}

void gv_dup(){
void* __result_obj__;
int rc_374;
int t_375;
int r_376;
int r1_377;
struct SValue sv_378;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sv_378, 0, sizeof(struct SValue));
    # 703 "tccgen.c"
    # 704 "tccgen.c"
    # 706 "tccgen.c"
    t_375=vtop->type.t;
    # 743 "tccgen.c"
    # 707 "tccgen.c"
    if(_if_conditional508=(t_375&15)==12,    _if_conditional508) {
        # 708 "tccgen.c"
        lexpand();
        # 709 "tccgen.c"
        gv_dup();
        # 710 "tccgen.c"
        vswap();
        # 711 "tccgen.c"
        vrotb(3);
        # 712 "tccgen.c"
        gv_dup();
        # 713 "tccgen.c"
        vrotb(4);
        # 715 "tccgen.c"
        lbuild(t_375);
        # 716 "tccgen.c"
        vrotb(3);
        # 717 "tccgen.c"
        vrotb(3);
        # 718 "tccgen.c"
        vswap();
        # 719 "tccgen.c"
        lbuild(t_375);
        # 720 "tccgen.c"
        vswap();
    }
    else {
        # 723 "tccgen.c"
        rc_374=1;
        # 724 "tccgen.c"
        sv_378.type.t=0;
        # 734 "tccgen.c"
        # 725 "tccgen.c"
        if(_if_conditional509=is_float(t_375),        _if_conditional509) {
            # 726 "tccgen.c"
            rc_374=2;
            # 732 "tccgen.c"
            # 728 "tccgen.c"
            if(_if_conditional510=(t_375&15)==10,            _if_conditional510) {
                # 729 "tccgen.c"
                rc_374=64;
            }
            # 732 "tccgen.c"
            sv_378.type.t=t_375;
        }
        # 734 "tccgen.c"
        r_376=gv(rc_374);
        # 735 "tccgen.c"
        r1_377=get_reg(rc_374);
        # 736 "tccgen.c"
        sv_378.r=r_376;
        # 737 "tccgen.c"
        sv_378.c.ul=0;
        # 738 "tccgen.c"
        load(r1_377,&sv_378);
        # 739 "tccgen.c"
        vdup();
        # 741 "tccgen.c"
        vtop->r=r1_377;
    }
    come_call_finalizer3((&sv_378),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

void gen_opic(int op){
void* __result_obj__;
int c1_379;
int c2_380;
int t1_381;
int t2_382;
int n_383;
struct SValue* v1_384;
struct SValue* v2_385;
long long l1_386;
long long l2_387;
_Bool _if_conditional511;
_Bool _elif_conditional106;
_Bool _if_conditional512;
_Bool _elif_conditional107;
_Bool _if_conditional513;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _elif_conditional108;
_Bool _if_conditional518;
_Bool _if_conditional519;
_Bool _elif_conditional109;
_Bool _elif_conditional110;
_Bool _if_conditional520;
_Bool _if_conditional521;
_Bool _if_conditional522;
memset(&__result_obj__, 0, sizeof(void*));
    # 986 "tccgen.c"
    # 987 "tccgen.c"
    # 988 "tccgen.c"
    # 989 "tccgen.c"
    # 991 "tccgen.c"
    v1_384=vtop-1;
    # 992 "tccgen.c"
    v2_385=vtop;
    # 993 "tccgen.c"
    t1_381=v1_384->type.t&15;
    # 994 "tccgen.c"
    t2_382=v2_385->type.t&15;
    # 1001 "tccgen.c"
    # 996 "tccgen.c"
    if(_if_conditional511=t1_381==12,    _if_conditional511) {
        # 997 "tccgen.c"
        l1_386=v1_384->c.ll;
    }
    # 998 "tccgen.c"
    else if(_elif_conditional106=v1_384->type.t&16,    _elif_conditional106) {
        # 999 "tccgen.c"
        l1_386=v1_384->c.ui;
    }
    else {
        # 1001 "tccgen.c"
        l1_386=v1_384->c.i;
    }
    # 1008 "tccgen.c"
    # 1003 "tccgen.c"
    if(_if_conditional512=t2_382==12,    _if_conditional512) {
        # 1004 "tccgen.c"
        l2_387=v2_385->c.ll;
    }
    # 1005 "tccgen.c"
    else if(_elif_conditional107=v2_385->type.t&16,    _elif_conditional107) {
        # 1006 "tccgen.c"
        l2_387=v2_385->c.ui;
    }
    else {
        # 1008 "tccgen.c"
        l2_387=v2_385->c.i;
    }
    # 1011 "tccgen.c"
    c1_379=(v1_384->r&(255|256|512))==240;
    # 1012 "tccgen.c"
    c2_380=(v2_385->r&(255|256|512))==240;
    # 1120 "tccgen.c"
    # 1013 "tccgen.c"
    if(_if_conditional513=c1_379&&c2_380,    _if_conditional513) {
        # 1060 "tccgen.c"
        switch (op) {
            # 1015 "tccgen.c"
            case 43:
            # 1015 "tccgen.c"
            l1_386+=l2_387;
            # 1015 "tccgen.c"
            break;
            # 1016 "tccgen.c"
            case 45:
            # 1016 "tccgen.c"
            l1_386-=l2_387;
            # 1016 "tccgen.c"
            break;
            # 1017 "tccgen.c"
            case 38:
            # 1017 "tccgen.c"
            l1_386&=l2_387;
            # 1017 "tccgen.c"
            break;
            # 1018 "tccgen.c"
            case 94:
            # 1018 "tccgen.c"
            l1_386^=l2_387;
            # 1018 "tccgen.c"
            break;
            # 1019 "tccgen.c"
            case 124:
            # 1019 "tccgen.c"
            l1_386|=l2_387;
            # 1019 "tccgen.c"
            break;
            # 1020 "tccgen.c"
            case 42:
            # 1020 "tccgen.c"
            l1_386*=l2_387;
            # 1020 "tccgen.c"
            break;
            # 1023 "tccgen.c"
            case 178:
            # 1024 "tccgen.c"
            case 47:
            # 1025 "tccgen.c"
            case 37:
            # 1026 "tccgen.c"
            case 176:
            # 1028 "tccgen.c"
            case 177:
            # 1033 "tccgen.c"
            # 1028 "tccgen.c"
            if(_if_conditional514=l2_387==0,            _if_conditional514) {
                # 1030 "tccgen.c"
                # 1029 "tccgen.c"
                if(const_wanted) {
                    # 1030 "tccgen.c"
                    error("division by zero in constant");
                }
                # 1031 "tccgen.c"
                goto general_case;
            }
            # 1039 "tccgen.c"
            switch (op) {
                # 1034 "tccgen.c"
                default:
                # 1034 "tccgen.c"
                l1_386/=l2_387;
                # 1034 "tccgen.c"
                break;
                # 1035 "tccgen.c"
                case 37:
                # 1035 "tccgen.c"
                l1_386%=l2_387;
                # 1035 "tccgen.c"
                break;
                # 1036 "tccgen.c"
                case 176:
                # 1036 "tccgen.c"
                l1_386=(unsigned long long)l1_386/l2_387;
                # 1036 "tccgen.c"
                break;
                # 1037 "tccgen.c"
                case 177:
                # 1037 "tccgen.c"
                l1_386=(unsigned long long)l1_386%l2_387;
                # 1037 "tccgen.c"
                break;
            }
            # 1039 "tccgen.c"
            break;
            # 1040 "tccgen.c"
            case 1:
            # 1040 "tccgen.c"
            l1_386<<=l2_387;
            # 1040 "tccgen.c"
            break;
            # 1041 "tccgen.c"
            case 205:
            # 1041 "tccgen.c"
            l1_386=(unsigned long long)l1_386>>l2_387;
            # 1041 "tccgen.c"
            break;
            # 1042 "tccgen.c"
            case 2:
            # 1042 "tccgen.c"
            l1_386>>=l2_387;
            # 1042 "tccgen.c"
            break;
            # 1044 "tccgen.c"
            case 146:
            # 1044 "tccgen.c"
            l1_386=(unsigned long long)l1_386<(unsigned long long)l2_387;
            # 1044 "tccgen.c"
            break;
            # 1045 "tccgen.c"
            case 147:
            # 1045 "tccgen.c"
            l1_386=(unsigned long long)l1_386>=(unsigned long long)l2_387;
            # 1045 "tccgen.c"
            break;
            # 1046 "tccgen.c"
            case 148:
            # 1046 "tccgen.c"
            l1_386=l1_386==l2_387;
            # 1046 "tccgen.c"
            break;
            # 1047 "tccgen.c"
            case 149:
            # 1047 "tccgen.c"
            l1_386=l1_386!=l2_387;
            # 1047 "tccgen.c"
            break;
            # 1048 "tccgen.c"
            case 150:
            # 1048 "tccgen.c"
            l1_386=(unsigned long long)l1_386<=(unsigned long long)l2_387;
            # 1048 "tccgen.c"
            break;
            # 1049 "tccgen.c"
            case 151:
            # 1049 "tccgen.c"
            l1_386=(unsigned long long)l1_386>(unsigned long long)l2_387;
            # 1049 "tccgen.c"
            break;
            # 1050 "tccgen.c"
            case 156:
            # 1050 "tccgen.c"
            l1_386=l1_386<l2_387;
            # 1050 "tccgen.c"
            break;
            # 1051 "tccgen.c"
            case 157:
            # 1051 "tccgen.c"
            l1_386=l1_386>=l2_387;
            # 1051 "tccgen.c"
            break;
            # 1052 "tccgen.c"
            case 158:
            # 1052 "tccgen.c"
            l1_386=l1_386<=l2_387;
            # 1052 "tccgen.c"
            break;
            # 1053 "tccgen.c"
            case 159:
            # 1053 "tccgen.c"
            l1_386=l1_386>l2_387;
            # 1053 "tccgen.c"
            break;
            # 1055 "tccgen.c"
            case 160:
            # 1055 "tccgen.c"
            l1_386=l1_386&&l2_387;
            # 1055 "tccgen.c"
            break;
            # 1056 "tccgen.c"
            case 161:
            # 1056 "tccgen.c"
            l1_386=l1_386||l2_387;
            # 1056 "tccgen.c"
            break;
            # 1058 "tccgen.c"
            default:
            # 1058 "tccgen.c"
            goto general_case;
        }
        # 1060 "tccgen.c"
        v1_384->c.ll=l1_386;
        # 1061 "tccgen.c"
        vtop--;
    }
    else {
        # 1071 "tccgen.c"
        # 1065 "tccgen.c"
        if(_if_conditional516=c1_379&&(op==43||op==38||op==94||op==124||op==42),        _if_conditional516) {
            # 1066 "tccgen.c"
            vswap();
            # 1067 "tccgen.c"
            c2_380=c1_379;
            # 1068 "tccgen.c"
            l2_387=l1_386;
        }
        # 1119 "tccgen.c"
        # 1078 "tccgen.c"
        if(_if_conditional517=c2_380&&(((op==42||op==47||op==176||op==178)&&l2_387==1)||((op==43||op==45||op==124||op==94||op==1||op==205||op==2)&&l2_387==0)||(op==38&&l2_387==-1)),        _if_conditional517) {
            # 1080 "tccgen.c"
            vtop--;
        }
        # 1081 "tccgen.c"
        else if(_elif_conditional108=c2_380&&(op==42||op==178||op==176),        _elif_conditional108) {
            # 1097 "tccgen.c"
            # 1083 "tccgen.c"
            if(_if_conditional518=l2_387>0&&(l2_387&(l2_387-1))==0,            _if_conditional518) {
                # 1084 "tccgen.c"
                n_383=-1;
                # 1089 "tccgen.c"
                while(l2_387) {
                    # 1086 "tccgen.c"
                    l2_387>>=1;
                    # 1087 "tccgen.c"
                    n_383++;
                }
                # 1089 "tccgen.c"
                vtop->c.ll=n_383;
                # 1095 "tccgen.c"
                # 1090 "tccgen.c"
                if(_if_conditional519=op==42,                _if_conditional519) {
                    # 1091 "tccgen.c"
                    op=1;
                }
                # 1092 "tccgen.c"
                else if(_elif_conditional109=op==178,                _elif_conditional109) {
                    # 1093 "tccgen.c"
                    op=2;
                }
                else {
                    # 1095 "tccgen.c"
                    op=205;
                }
            }
            # 1097 "tccgen.c"
            goto general_case;
        }
        # 1101 "tccgen.c"
        else if(_elif_conditional110=c2_380&&(op==43||op==45)&&((vtop[-1].r&(255|256|512))==(240|512)||(vtop[-1].r&(255|256))==242),        _elif_conditional110) {
            # 1104 "tccgen.c"
            # 1103 "tccgen.c"
            if(_if_conditional520=op==45,            _if_conditional520) {
                # 1104 "tccgen.c"
                l2_387=-l2_387;
            }
            # 1105 "tccgen.c"
            vtop--;
            # 1106 "tccgen.c"
            vtop->c.ll+=l2_387;
        }
        else {
            # 1109 "tccgen.c"
            general_case:
            # 1118 "tccgen.c"
            # 1109 "tccgen.c"
            if(_if_conditional521=!nocode_wanted,            _if_conditional521) {
                # 1114 "tccgen.c"
                # 1111 "tccgen.c"
                if(_if_conditional522=t1_381==12||t2_382==12,                _if_conditional522) {
                    # 1112 "tccgen.c"
                    gen_opl(op);
                }
                else {
                    # 1114 "tccgen.c"
                    gen_opi(op);
                }
            }
            else {
                # 1116 "tccgen.c"
                vtop--;
            }
        }
    }
}

void gen_opif(int op){
void* __result_obj__;
int c1_388;
int c2_389;
struct SValue* v1_390;
struct SValue* v2_391;
long double f1_392;
long double f2_393;
_Bool _if_conditional523;
_Bool _if_conditional524;
_Bool _elif_conditional111;
_Bool _if_conditional525;
_Bool _if_conditional526;
_Bool _if_conditional527;
_Bool _if_conditional528;
_Bool _elif_conditional112;
_Bool _if_conditional529;
memset(&__result_obj__, 0, sizeof(void*));
    # 1125 "tccgen.c"
    # 1126 "tccgen.c"
    # 1127 "tccgen.c"
    # 1129 "tccgen.c"
    v1_390=vtop-1;
    # 1130 "tccgen.c"
    v2_391=vtop;
    # 1132 "tccgen.c"
    c1_388=(v1_390->r&(255|256|512))==240;
    # 1133 "tccgen.c"
    c2_389=(v2_391->r&(255|256|512))==240;
    # 1184 "tccgen.c"
    # 1134 "tccgen.c"
    if(_if_conditional523=c1_388&&c2_389,    _if_conditional523) {
        # 1148 "tccgen.c"
        # 1135 "tccgen.c"
        if(_if_conditional524=v1_390->type.t==8,        _if_conditional524) {
            # 1136 "tccgen.c"
            f1_392=v1_390->c.f;
            # 1137 "tccgen.c"
            f2_393=v2_391->c.f;
        }
        # 1138 "tccgen.c"
        else if(_elif_conditional111=v1_390->type.t==9,        _elif_conditional111) {
            # 1139 "tccgen.c"
            f1_392=v1_390->c.d;
            # 1140 "tccgen.c"
            f2_393=v2_391->c.d;
        }
        else {
            # 1142 "tccgen.c"
            f1_392=v1_390->c.ld;
            # 1143 "tccgen.c"
            f2_393=v2_391->c.ld;
        }
        # 1149 "tccgen.c"
        # 1148 "tccgen.c"
        if(_if_conditional525=!ieee_finite(f1_392)||!ieee_finite(f2_393),        _if_conditional525) {
            # 1149 "tccgen.c"
            goto general_case;
        }
        # 1168 "tccgen.c"
        switch (op) {
            # 1152 "tccgen.c"
            case 43:
            # 1152 "tccgen.c"
            f1_392+=f2_393;
            # 1152 "tccgen.c"
            break;
            # 1153 "tccgen.c"
            case 45:
            # 1153 "tccgen.c"
            f1_392-=f2_393;
            # 1153 "tccgen.c"
            break;
            # 1154 "tccgen.c"
            case 42:
            # 1154 "tccgen.c"
            f1_392*=f2_393;
            # 1154 "tccgen.c"
            break;
            # 1156 "tccgen.c"
            case 47:
            # 1161 "tccgen.c"
            # 1156 "tccgen.c"
            if(_if_conditional526=f2_393==0.000000,            _if_conditional526) {
                # 1158 "tccgen.c"
                # 1157 "tccgen.c"
                if(const_wanted) {
                    # 1158 "tccgen.c"
                    error("division by zero in constant");
                }
                # 1159 "tccgen.c"
                goto general_case;
            }
            # 1161 "tccgen.c"
            f1_392/=f2_393;
            # 1162 "tccgen.c"
            break;
            # 1165 "tccgen.c"
            default:
            # 1165 "tccgen.c"
            goto general_case;
        }
        # 1175 "tccgen.c"
        # 1168 "tccgen.c"
        if(_if_conditional528=v1_390->type.t==8,        _if_conditional528) {
            # 1169 "tccgen.c"
            v1_390->c.f=f1_392;
        }
        # 1170 "tccgen.c"
        else if(_elif_conditional112=v1_390->type.t==9,        _elif_conditional112) {
            # 1171 "tccgen.c"
            v1_390->c.d=f1_392;
        }
        else {
            # 1173 "tccgen.c"
            v1_390->c.ld=f1_392;
        }
        # 1175 "tccgen.c"
        vtop--;
    }
    else {
        # 1178 "tccgen.c"
        general_case:
        # 1183 "tccgen.c"
        # 1178 "tccgen.c"
        if(_if_conditional529=!nocode_wanted,        _if_conditional529) {
            # 1179 "tccgen.c"
            gen_opf(op);
        }
        else {
            # 1181 "tccgen.c"
            vtop--;
        }
    }
}

static int pointed_size(struct CType* type){
void* __result_obj__;
int align_394;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&align_394, 0, sizeof(int));
    # 1188 "tccgen.c"
    # 1189 "tccgen.c"
    __result112__ = type_size(pointed_type(type),&align_394);
    return __result112__;
}



static void check_comparison_pointer_types(struct SValue* p1, struct SValue* p2, int op){
void* __result_obj__;
struct CType* type1_395;
struct CType* type2_396;
struct CType tmp_type1_397;
struct CType tmp_type2_398;
int bt1_399;
int bt2_400;
_Bool _if_conditional531;
_Bool _if_conditional532;
_Bool _if_conditional533;
_Bool _if_conditional534;
_Bool _elif_conditional113;
_Bool _if_conditional535;
_Bool _elif_conditional114;
_Bool _if_conditional536;
_Bool _if_conditional537;
_Bool _if_conditional538;
memset(&__result_obj__, 0, sizeof(void*));
    # 1209 "tccgen.c"
    # 1210 "tccgen.c"
    # 1214 "tccgen.c"
    # 1213 "tccgen.c"
    if(_if_conditional531=is_null_pointer(p1)||is_null_pointer(p2),    _if_conditional531) {
        # 1214 "tccgen.c"
        return;
    }
    # 1215 "tccgen.c"
    type1_395=&p1->type;
    # 1216 "tccgen.c"
    type2_396=&p2->type;
    # 1217 "tccgen.c"
    bt1_399=type1_395->t&15;
    # 1218 "tccgen.c"
    bt2_400=type2_396->t&15;
    # 1227 "tccgen.c"
    # 1220 "tccgen.c"
    if(_if_conditional532=(is_integer_btype(bt1_399)||is_integer_btype(bt2_400))&&op!=45,    _if_conditional532) {
        # 1222 "tccgen.c"
        # 1221 "tccgen.c"
        if(_if_conditional533=op!=161&&op!=160,        _if_conditional533) {
            # 1222 "tccgen.c"
            warning("comparison between pointer and integer");
        }
        # 1223 "tccgen.c"
        return;
    }
    # 1230 "tccgen.c"
    # 1227 "tccgen.c"
    if(_if_conditional534=bt1_399==4,    _if_conditional534) {
        # 1228 "tccgen.c"
        type1_395=pointed_type(type1_395);
    }
    # 1229 "tccgen.c"
    else if(_elif_conditional113=bt1_399!=6,    _elif_conditional113) {
        # 1230 "tccgen.c"
        goto invalid_operands;
    }
    # 1238 "tccgen.c"
    # 1232 "tccgen.c"
    if(_if_conditional535=bt2_400==4,    _if_conditional535) {
        # 1233 "tccgen.c"
        type2_396=pointed_type(type2_396);
    }
    # 1234 "tccgen.c"
    else if(_elif_conditional114=bt2_400!=6,    _elif_conditional114) {
        # 1236 "tccgen.c"
        invalid_operands:
        # 1236 "tccgen.c"
        error("invalid operands to binary %s",get_tok_str(op,((void*)0)));
    }
    # 1240 "tccgen.c"
    # 1239 "tccgen.c"
    if(_if_conditional536=(type1_395->t&15)==3||(type2_396->t&15)==3,    _if_conditional536) {
        # 1240 "tccgen.c"
        return;
    }
    # 1241 "tccgen.c"
    tmp_type1_397=*type1_395;
    # 1242 "tccgen.c"
    tmp_type2_398=*type2_396;
    # 1243 "tccgen.c"
    tmp_type1_397.t&=~(16|2048|4096);
    # 1244 "tccgen.c"
    tmp_type2_398.t&=~(16|2048|4096);
    # 1252 "tccgen.c"
    # 1245 "tccgen.c"
    if(_if_conditional537=!is_compatible_types(&tmp_type1_397,&tmp_type2_398),    _if_conditional537) {
        # 1250 "tccgen.c"
        # 1247 "tccgen.c"
        if(_if_conditional538=op==45,        _if_conditional538) {
            # 1248 "tccgen.c"
            goto invalid_operands;
        }
        else {
            # 1250 "tccgen.c"
            warning("comparison of distinct pointer types lacks a cast");
        }
    }
}

void gen_op(int op){
void* __result_obj__;
int u_401;
int t1_402;
int t2_403;
int bt1_404;
int bt2_405;
int t_406;
struct CType type1_407;
_Bool _if_conditional539;
_Bool _if_conditional540;
_Bool _if_conditional541;
_Bool _if_conditional542;
_Bool _if_conditional543;
_Bool _if_conditional544;
_Bool _elif_conditional115;
_Bool _if_conditional545;
_Bool _elif_conditional116;
_Bool _if_conditional546;
_Bool _elif_conditional117;
_Bool _if_conditional547;
_Bool _if_conditional548;
_Bool _if_conditional549;
_Bool _if_conditional550;
_Bool _elif_conditional118;
_Bool _elif_conditional119;
_Bool _elif_conditional120;
_Bool _elif_conditional121;
_Bool _elif_conditional122;
_Bool _elif_conditional123;
_Bool _if_conditional551;
_Bool _if_conditional552;
_Bool _if_conditional553;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type1_407, 0, sizeof(struct CType));
    # 1257 "tccgen.c"
    # 1258 "tccgen.c"
    # 1260 "tccgen.c"
    t1_402=vtop[-1].type.t;
    # 1261 "tccgen.c"
    t2_403=vtop[0].type.t;
    # 1262 "tccgen.c"
    bt1_404=t1_402&15;
    # 1263 "tccgen.c"
    bt2_405=t2_403&15;
    # 1399 "tccgen.c"
    # 1265 "tccgen.c"
    if(_if_conditional539=bt1_404==4||bt2_405==4,    _if_conditional539) {
        # 1279 "tccgen.c"
        # 1268 "tccgen.c"
        if(_if_conditional540=op>=146&&op<=161,        _if_conditional540) {
            # 1269 "tccgen.c"
            check_comparison_pointer_types(vtop-1,vtop,op);
            # 1272 "tccgen.c"
            t_406=12|16;
            # 1276 "tccgen.c"
            goto std_op;
        }
        # 1331 "tccgen.c"
        # 1279 "tccgen.c"
        if(_if_conditional541=bt1_404==4&&bt2_405==4,        _if_conditional541) {
            # 1281 "tccgen.c"
            # 1280 "tccgen.c"
            if(_if_conditional542=op!=45,            _if_conditional542) {
                # 1281 "tccgen.c"
                error("cannot use pointers here");
            }
            # 1282 "tccgen.c"
            check_comparison_pointer_types(vtop-1,vtop,op);
            # 1284 "tccgen.c"
            u_401=pointed_size(&vtop[-1].type);
            # 1285 "tccgen.c"
            gen_opic(op);
            # 1288 "tccgen.c"
            vtop->type.t=12;
            # 1292 "tccgen.c"
            vpushi(u_401);
            # 1293 "tccgen.c"
            gen_op(178);
        }
        else {
            # 1297 "tccgen.c"
            # 1296 "tccgen.c"
            if(_if_conditional543=op!=45&&op!=43,            _if_conditional543) {
                # 1297 "tccgen.c"
                error("cannot use pointers here");
            }
            # 1303 "tccgen.c"
            # 1299 "tccgen.c"
            if(_if_conditional544=bt2_405==4,            _if_conditional544) {
                # 1300 "tccgen.c"
                vswap();
                # 1301 "tccgen.c"
                swap(&t1_402,&t2_403);
            }
            # 1303 "tccgen.c"
            type1_407=vtop[-1].type;
            # 1305 "tccgen.c"
            vpushll(pointed_size(&vtop[-1].type));
            # 1310 "tccgen.c"
            gen_op(42);
            # 1329 "tccgen.c"
            {
                # 1326 "tccgen.c"
                gen_opic(op);
            }
            # 1329 "tccgen.c"
            vtop->type=type1_407;
        }
    }
    # 1331 "tccgen.c"
    else if(_elif_conditional115=is_float(bt1_404)||is_float(bt2_405),    _elif_conditional115) {
        # 1341 "tccgen.c"
        # 1333 "tccgen.c"
        if(_if_conditional545=bt1_404==10||bt2_405==10,        _if_conditional545) {
            # 1334 "tccgen.c"
            t_406=10;
        }
        # 1335 "tccgen.c"
        else if(_elif_conditional116=bt1_404==9||bt2_405==9,        _elif_conditional116) {
            # 1336 "tccgen.c"
            t_406=9;
        }
        else {
            # 1338 "tccgen.c"
            t_406=8;
        }
        # 1343 "tccgen.c"
        # 1342 "tccgen.c"
        if(_if_conditional546=op!=43&&op!=45&&op!=42&&op!=47&&(op<146||op>159),        _if_conditional546) {
            # 1343 "tccgen.c"
            error("invalid operands for binary operation");
        }
        # 1344 "tccgen.c"
        goto std_op;
    }
    # 1345 "tccgen.c"
    else if(_elif_conditional117=bt1_404==12||bt2_405==12,    _elif_conditional117) {
        # 1347 "tccgen.c"
        t_406=12;
        # 1351 "tccgen.c"
        # 1350 "tccgen.c"
        if(_if_conditional547=(t1_402&(15|16))==(12|16)||(t2_403&(15|16))==(12|16),        _if_conditional547) {
            # 1351 "tccgen.c"
            t_406|=16;
        }
        # 1352 "tccgen.c"
        goto std_op;
    }
    else {
        # 1355 "tccgen.c"
        t_406=0;
        # 1359 "tccgen.c"
        # 1358 "tccgen.c"
        if(_if_conditional548=(t1_402&(15|16))==(0|16)||(t2_403&(15|16))==(0|16),        _if_conditional548) {
            # 1359 "tccgen.c"
            t_406|=16;
        }
        # 1363 "tccgen.c"
        std_op:
        # 1379 "tccgen.c"
        # 1363 "tccgen.c"
        if(_if_conditional549=t_406&16,        _if_conditional549) {
            # 1378 "tccgen.c"
            # 1364 "tccgen.c"
            if(_if_conditional550=op==2,            _if_conditional550) {
                # 1365 "tccgen.c"
                op=205;
            }
            # 1366 "tccgen.c"
            else if(_elif_conditional118=op==47,            _elif_conditional118) {
                # 1367 "tccgen.c"
                op=176;
            }
            # 1368 "tccgen.c"
            else if(_elif_conditional119=op==37,            _elif_conditional119) {
                # 1369 "tccgen.c"
                op=177;
            }
            # 1370 "tccgen.c"
            else if(_elif_conditional120=op==156,            _elif_conditional120) {
                # 1371 "tccgen.c"
                op=146;
            }
            # 1372 "tccgen.c"
            else if(_elif_conditional121=op==159,            _elif_conditional121) {
                # 1373 "tccgen.c"
                op=151;
            }
            # 1374 "tccgen.c"
            else if(_elif_conditional122=op==158,            _elif_conditional122) {
                # 1375 "tccgen.c"
                op=150;
            }
            # 1376 "tccgen.c"
            else if(_elif_conditional123=op==157,            _elif_conditional123) {
                # 1377 "tccgen.c"
                op=147;
            }
        }
        # 1379 "tccgen.c"
        vswap();
        # 1380 "tccgen.c"
        type1_407.t=t_406;
        # 1381 "tccgen.c"
        gen_cast(&type1_407);
        # 1382 "tccgen.c"
        vswap();
        # 1386 "tccgen.c"
        # 1385 "tccgen.c"
        if(_if_conditional551=op==205||op==2||op==1,        _if_conditional551) {
            # 1386 "tccgen.c"
            type1_407.t=0;
        }
        # 1387 "tccgen.c"
        gen_cast(&type1_407);
        # 1391 "tccgen.c"
        # 1388 "tccgen.c"
        if(_if_conditional552=is_float(t_406),        _if_conditional552) {
            # 1389 "tccgen.c"
            gen_opif(op);
        }
        else {
            # 1391 "tccgen.c"
            gen_opic(op);
        }
        # 1398 "tccgen.c"
        # 1392 "tccgen.c"
        if(_if_conditional553=op>=146&&op<=159,        _if_conditional553) {
            # 1394 "tccgen.c"
            vtop->type.t=0;
        }
        else {
            # 1396 "tccgen.c"
            vtop->type.t=t_406;
        }
    }
    come_call_finalizer3((&type1_407),CType_finalize, 1, 0, 0, 0, (void*)0);
}

void gen_cvt_itof1(int t){
void* __result_obj__;
_Bool _if_conditional554;
_Bool _if_conditional555;
_Bool _elif_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
    # 1423 "tccgen.c"
    # 1406 "tccgen.c"
    if(_if_conditional554=(vtop->type.t&(15|16))==(12|16),    _if_conditional554) {
        # 1415 "tccgen.c"
        # 1408 "tccgen.c"
        if(_if_conditional555=t==8,        _if_conditional555) {
            # 1409 "tccgen.c"
            vpush_global_sym(&func_old_type,375);
        }
        # 1411 "tccgen.c"
        else if(_elif_conditional124=t==10,        _elif_conditional124) {
            # 1412 "tccgen.c"
            vpush_global_sym(&func_old_type,377);
        }
        else {
            # 1415 "tccgen.c"
            vpush_global_sym(&func_old_type,376);
        }
        # 1416 "tccgen.c"
        vrott(2);
        # 1417 "tccgen.c"
        gfunc_call(1);
        # 1418 "tccgen.c"
        vpushi(0);
        # 1419 "tccgen.c"
        vtop->r=reg_fret(t);
    }
    else {
        # 1421 "tccgen.c"
        gen_cvt_itof(t);
    }
}

void gen_cvt_ftoi1(int t){
void* __result_obj__;
int st_408;
_Bool _if_conditional556;
_Bool _if_conditional557;
_Bool _elif_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&st_408, 0, sizeof(int));
    # 1429 "tccgen.c"
    # 1450 "tccgen.c"
    # 1431 "tccgen.c"
    if(_if_conditional556=t==(12|16),    _if_conditional556) {
        # 1433 "tccgen.c"
        st_408=vtop->type.t&15;
        # 1441 "tccgen.c"
        # 1434 "tccgen.c"
        if(_if_conditional557=st_408==8,        _if_conditional557) {
            # 1435 "tccgen.c"
            vpush_global_sym(&func_old_type,379);
        }
        # 1437 "tccgen.c"
        else if(_elif_conditional125=st_408==10,        _elif_conditional125) {
            # 1438 "tccgen.c"
            vpush_global_sym(&func_old_type,378);
        }
        else {
            # 1441 "tccgen.c"
            vpush_global_sym(&func_old_type,380);
        }
        # 1442 "tccgen.c"
        vrott(2);
        # 1443 "tccgen.c"
        gfunc_call(1);
        # 1444 "tccgen.c"
        vpushi(0);
        # 1445 "tccgen.c"
        vtop->r=0;
        # 1446 "tccgen.c"
        vtop->r2=2;
    }
    else {
        # 1448 "tccgen.c"
        gen_cvt_ftoi(t);
    }
}

void force_charshort_cast(int t){
void* __result_obj__;
int bits_409;
int dbt_410;
_Bool _if_conditional558;
_Bool _if_conditional559;
memset(&__result_obj__, 0, sizeof(void*));
    # 1455 "tccgen.c"
    # 1456 "tccgen.c"
    dbt_410=t&15;
    # 1461 "tccgen.c"
    # 1458 "tccgen.c"
    if(_if_conditional558=dbt_410==1,    _if_conditional558) {
        # 1459 "tccgen.c"
        bits_409=8;
    }
    else {
        # 1461 "tccgen.c"
        bits_409=16;
    }
    # 1476 "tccgen.c"
    # 1462 "tccgen.c"
    if(_if_conditional559=t&16,    _if_conditional559) {
        # 1463 "tccgen.c"
        vpushi((1<<bits_409)-1);
        # 1464 "tccgen.c"
        gen_op(38);
    }
    else {
        # 1466 "tccgen.c"
        bits_409=32-bits_409;
        # 1467 "tccgen.c"
        vpushi(bits_409);
        # 1468 "tccgen.c"
        gen_op(1);
        # 1472 "tccgen.c"
        vtop->type.t&=~16;
        # 1473 "tccgen.c"
        vpushi(bits_409);
        # 1474 "tccgen.c"
        gen_op(2);
    }
}

static void gen_cast(struct CType* type){
void* __result_obj__;
int sbt_411;
int dbt_412;
int sf_413;
int df_414;
int c_415;
int p_416;
_Bool _if_conditional560;
_Bool _if_conditional561;
_Bool _if_conditional562;
_Bool _if_conditional563;
_Bool _if_conditional564;
_Bool _elif_conditional126;
_Bool _if_conditional565;
_Bool _if_conditional566;
_Bool _if_conditional567;
_Bool _if_conditional568;
_Bool _if_conditional569;
_Bool _if_conditional570;
_Bool _elif_conditional127;
_Bool _elif_conditional128;
_Bool _elif_conditional129;
_Bool _if_conditional571;
_Bool _elif_conditional130;
_Bool _elif_conditional131;
_Bool _elif_conditional132;
_Bool _if_conditional572;
_Bool _elif_conditional133;
_Bool _elif_conditional134;
int s_417;
_Bool _if_conditional573;
_Bool _elif_conditional135;
_Bool _if_conditional574;
_Bool _elif_conditional136;
_Bool _elif_conditional137;
_Bool _if_conditional575;
_Bool _if_conditional576;
_Bool _if_conditional577;
_Bool _if_conditional578;
_Bool _elif_conditional138;
_Bool _if_conditional579;
int r_418;
_Bool _if_conditional580;
_Bool _elif_conditional139;
_Bool _elif_conditional140;
_Bool _if_conditional581;
_Bool _elif_conditional141;
_Bool _if_conditional582;
_Bool _elif_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_417, 0, sizeof(int));
memset(&r_418, 0, sizeof(int));
    # 1481 "tccgen.c"
    # 1492 "tccgen.c"
    # 1486 "tccgen.c"
    if(_if_conditional560=vtop->r&1024,    _if_conditional560) {
        # 1487 "tccgen.c"
        vtop->r&=~1024;
        # 1488 "tccgen.c"
        force_charshort_cast(vtop->type.t);
    }
    # 1496 "tccgen.c"
    # 1492 "tccgen.c"
    if(_if_conditional561=vtop->type.t&64,    _if_conditional561) {
        # 1493 "tccgen.c"
        gv(1);
    }
    # 1496 "tccgen.c"
    dbt_412=type->t&(15|16);
    # 1497 "tccgen.c"
    sbt_411=vtop->type.t&(15|16);
    # 1631 "tccgen.c"
    # 1499 "tccgen.c"
    if(_if_conditional562=sbt_411!=dbt_412,    _if_conditional562) {
        # 1500 "tccgen.c"
        sf_413=is_float(sbt_411);
        # 1501 "tccgen.c"
        df_414=is_float(dbt_412);
        # 1502 "tccgen.c"
        c_415=(vtop->r&(255|256|512))==240;
        # 1503 "tccgen.c"
        p_416=(vtop->r&(255|256|512))==(240|512);
        # 1625 "tccgen.c"
        # 1504 "tccgen.c"
        if(c_415) {
            # 1510 "tccgen.c"
            # 1507 "tccgen.c"
            if(_if_conditional564=sbt_411==8,            _if_conditional564) {
                # 1508 "tccgen.c"
                vtop->c.ld=vtop->c.f;
            }
            # 1509 "tccgen.c"
            else if(_elif_conditional126=sbt_411==9,            _elif_conditional126) {
                # 1510 "tccgen.c"
                vtop->c.ld=vtop->c.d;
            }
            # 1560 "tccgen.c"
            # 1512 "tccgen.c"
            if(df_414) {
                # 1525 "tccgen.c"
                # 1513 "tccgen.c"
                if(_if_conditional566=(sbt_411&15)==12,                _if_conditional566) {
                    # 1517 "tccgen.c"
                    # 1514 "tccgen.c"
                    if(_if_conditional567=sbt_411&16,                    _if_conditional567) {
                        # 1515 "tccgen.c"
                        vtop->c.ld=vtop->c.ull;
                    }
                    else {
                        # 1517 "tccgen.c"
                        vtop->c.ld=vtop->c.ll;
                    }
                }
                else {
                    # 1525 "tccgen.c"
                    # 1518 "tccgen.c"
                    if(_if_conditional568=!sf_413,                    _if_conditional568) {
                        # 1522 "tccgen.c"
                        # 1519 "tccgen.c"
                        if(_if_conditional569=sbt_411&16,                        _if_conditional569) {
                            # 1520 "tccgen.c"
                            vtop->c.ld=vtop->c.ui;
                        }
                        else {
                            # 1522 "tccgen.c"
                            vtop->c.ld=vtop->c.i;
                        }
                    }
                }
                # 1529 "tccgen.c"
                # 1525 "tccgen.c"
                if(_if_conditional570=dbt_412==8,                _if_conditional570) {
                    # 1526 "tccgen.c"
                    vtop->c.f=(float)vtop->c.ld;
                }
                # 1527 "tccgen.c"
                else if(_elif_conditional127=dbt_412==9,                _elif_conditional127) {
                    # 1528 "tccgen.c"
                    vtop->c.d=(double)vtop->c.ld;
                }
            }
            # 1529 "tccgen.c"
            else if(_elif_conditional128=sf_413&&dbt_412==(12|16),            _elif_conditional128) {
                # 1530 "tccgen.c"
                vtop->c.ull=(unsigned long long)vtop->c.ld;
            }
            # 1531 "tccgen.c"
            else if(_elif_conditional129=sf_413&&dbt_412==11,            _elif_conditional129) {
                # 1532 "tccgen.c"
                vtop->c.i=(vtop->c.ld!=0);
            }
            else {
                # 1541 "tccgen.c"
                # 1534 "tccgen.c"
                if(sf_413) {
                    # 1535 "tccgen.c"
                    vtop->c.ll=(long long)vtop->c.ld;
                }
                # 1536 "tccgen.c"
                else if(_elif_conditional130=sbt_411==(12|16),                _elif_conditional130) {
                    # 1537 "tccgen.c"
                    vtop->c.ll=vtop->c.ull;
                }
                # 1538 "tccgen.c"
                else if(_elif_conditional131=sbt_411&16,                _elif_conditional131) {
                    # 1539 "tccgen.c"
                    vtop->c.ll=vtop->c.ui;
                }
                # 1540 "tccgen.c"
                else if(_elif_conditional132=sbt_411!=12,                _elif_conditional132) {
                    # 1541 "tccgen.c"
                    vtop->c.ll=vtop->c.i;
                }
                # 1559 "tccgen.c"
                # 1543 "tccgen.c"
                if(_if_conditional572=dbt_412==(12|16),                _if_conditional572) {
                    # 1544 "tccgen.c"
                    vtop->c.ull=vtop->c.ll;
                }
                # 1545 "tccgen.c"
                else if(_elif_conditional133=dbt_412==11,                _elif_conditional133) {
                    # 1546 "tccgen.c"
                    vtop->c.i=(vtop->c.ll!=0);
                }
                # 1547 "tccgen.c"
                else if(_elif_conditional134=dbt_412!=12,                _elif_conditional134) {
                    # 1548 "tccgen.c"
                    s_417=0;
                    # 1552 "tccgen.c"
                    # 1549 "tccgen.c"
                    if(_if_conditional573=(dbt_412&15)==1,                    _if_conditional573) {
                        # 1550 "tccgen.c"
                        s_417=24;
                    }
                    # 1551 "tccgen.c"
                    else if(_elif_conditional135=(dbt_412&15)==2,                    _elif_conditional135) {
                        # 1552 "tccgen.c"
                        s_417=16;
                    }
                    # 1557 "tccgen.c"
                    # 1554 "tccgen.c"
                    if(_if_conditional574=dbt_412&16,                    _if_conditional574) {
                        # 1555 "tccgen.c"
                        vtop->c.ui=((unsigned int)vtop->c.ll<<s_417)>>s_417;
                    }
                    else {
                        # 1557 "tccgen.c"
                        vtop->c.i=((int)vtop->c.ll<<s_417)>>s_417;
                    }
                }
            }
        }
        # 1560 "tccgen.c"
        else if(_elif_conditional136=p_416&&dbt_412==11,        _elif_conditional136) {
            # 1561 "tccgen.c"
            vtop->r=240;
            # 1562 "tccgen.c"
            vtop->c.i=1;
        }
        # 1563 "tccgen.c"
        else if(_elif_conditional137=!nocode_wanted,        _elif_conditional137) {
            # 1624 "tccgen.c"
            # 1565 "tccgen.c"
            if(_if_conditional575=sf_413&&df_414,            _if_conditional575) {
                # 1567 "tccgen.c"
                gen_cvt_ftof(dbt_412);
            }
            # 1568 "tccgen.c"
            else if(df_414) {
                # 1570 "tccgen.c"
                gen_cvt_itof1(dbt_412);
            }
            # 1571 "tccgen.c"
            else if(sf_413) {
                # 1589 "tccgen.c"
                # 1573 "tccgen.c"
                if(_if_conditional576=dbt_412==11,                _if_conditional576) {
                    # 1574 "tccgen.c"
                    vpushi(0);
                    # 1575 "tccgen.c"
                    gen_op(149);
                }
                else {
                    # 1581 "tccgen.c"
                    # 1580 "tccgen.c"
                    if(_if_conditional577=dbt_412!=(0|16)&&dbt_412!=(12|16)&&dbt_412!=12,                    _if_conditional577) {
                        # 1581 "tccgen.c"
                        dbt_412=0;
                    }
                    # 1582 "tccgen.c"
                    gen_cvt_ftoi1(dbt_412);
                    # 1588 "tccgen.c"
                    # 1583 "tccgen.c"
                    if(_if_conditional578=dbt_412==0&&(type->t&(15|16))!=dbt_412,                    _if_conditional578) {
                        # 1585 "tccgen.c"
                        vtop->type.t=dbt_412;
                        # 1586 "tccgen.c"
                        gen_cast(type);
                    }
                }
            }
            # 1590 "tccgen.c"
            else if(_elif_conditional138=(dbt_412&15)==12||(dbt_412&15)==4,            _elif_conditional138) {
                # 1602 "tccgen.c"
                # 1592 "tccgen.c"
                if(_if_conditional579=(sbt_411&15)!=12,                _if_conditional579) {
                    # 1593 "tccgen.c"
                    r_418=gv(1);
                    # 1600 "tccgen.c"
                    # 1595 "tccgen.c"
                    if(_if_conditional580=sbt_411!=(0|16)&&sbt_411!=4&&sbt_411!=6,                    _if_conditional580) {
                        # 1597 "tccgen.c"
                        o(25416);
                        # 1598 "tccgen.c"
                        o(192+(((r_418)&7)<<3)+((r_418)&7));
                    }
                }
            }
            # 1602 "tccgen.c"
            else if(_elif_conditional139=dbt_412==11,            _elif_conditional139) {
                # 1604 "tccgen.c"
                vpushi(0);
                # 1605 "tccgen.c"
                gen_op(149);
            }
            # 1607 "tccgen.c"
            else if(_elif_conditional140=(dbt_412&15)==1||(dbt_412&15)==2,            _elif_conditional140) {
                # 1612 "tccgen.c"
                # 1608 "tccgen.c"
                if(_if_conditional581=sbt_411==4,                _if_conditional581) {
                    # 1609 "tccgen.c"
                    vtop->type.t=0;
                    # 1610 "tccgen.c"
                    warning("nonportable conversion from pointer to char/short");
                }
                # 1612 "tccgen.c"
                force_charshort_cast(dbt_412);
            }
            # 1613 "tccgen.c"
            else if(_elif_conditional141=(dbt_412&15)==0,            _elif_conditional141) {
                # 1623 "tccgen.c"
                # 1615 "tccgen.c"
                if(_if_conditional582=sbt_411==12,                _if_conditional582) {
                    # 1617 "tccgen.c"
                    lexpand();
                    # 1618 "tccgen.c"
                    vpop();
                }
            }
        }
    }
    # 1625 "tccgen.c"
    else if(_elif_conditional142=(dbt_412&15)==4&&!(vtop->r&256),    _elif_conditional142) {
        # 1629 "tccgen.c"
        vtop->r=(vtop->r&~(4096|8192|16384))|(lvalue_type(type->ref->type.t)&(4096|8192|16384));
    }
    # 1631 "tccgen.c"
    vtop->type=*type;
}

static int type_size(struct CType* type, int* a){
void* __result_obj__;
struct Sym* s_419;
int bt_420;
_Bool _if_conditional583;
int __result116__;
_Bool _elif_conditional143;
_Bool _if_conditional584;
int ts_421;
_Bool _if_conditional585;
int __result117__;
int __result118__;
_Bool _elif_conditional144;
int __result119__;
_Bool _elif_conditional145;
int __result120__;
_Bool _elif_conditional146;
int __result121__;
_Bool _elif_conditional147;
int __result122__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_419, 0, sizeof(struct Sym*));
memset(&bt_420, 0, sizeof(int));
memset(&ts_421, 0, sizeof(int));
    # 1637 "tccgen.c"
    # 1638 "tccgen.c"
    # 1640 "tccgen.c"
    bt_420=type->t&15;
    # 1717 "tccgen.c"
    # 1641 "tccgen.c"
    if(_if_conditional583=bt_420==7,    _if_conditional583) {
        # 1643 "tccgen.c"
        s_419=type->ref;
        # 1644 "tccgen.c"
        *a=s_419->r;
        # 1645 "tccgen.c"
        __result116__ = s_419->c;
        return __result116__;
    }
    # 1646 "tccgen.c"
    else if(_elif_conditional143=bt_420==4,    _elif_conditional143) {
        # 1661 "tccgen.c"
        # 1647 "tccgen.c"
        if(_if_conditional584=type->t&32,        _if_conditional584) {
            # 1648 "tccgen.c"
            # 1650 "tccgen.c"
            s_419=type->ref;
            # 1651 "tccgen.c"
            ts_421=type_size(&s_419->type,a);
            # 1654 "tccgen.c"
            # 1653 "tccgen.c"
            if(_if_conditional585=ts_421<0&&s_419->c<0,            _if_conditional585) {
                # 1654 "tccgen.c"
                ts_421=-ts_421;
            }
            # 1656 "tccgen.c"
            __result117__ = ts_421*s_419->c;
            return __result117__;
        }
        else {
            # 1658 "tccgen.c"
            *a=8;
            # 1659 "tccgen.c"
            __result118__ = 8;
            return __result118__;
        }
    }
    # 1661 "tccgen.c"
    else if(_elif_conditional144=bt_420==10,    _elif_conditional144) {
        # 1662 "tccgen.c"
        *a=8;
        # 1663 "tccgen.c"
        __result119__ = 16;
        return __result119__;
    }
    # 1664 "tccgen.c"
    else if(_elif_conditional145=bt_420==9||bt_420==12,    _elif_conditional145) {
        # 1703 "tccgen.c"
        *a=8;
        # 1705 "tccgen.c"
        __result120__ = 8;
        return __result120__;
    }
    # 1706 "tccgen.c"
    else if(_elif_conditional146=bt_420==0||bt_420==5||bt_420==8,    _elif_conditional146) {
        # 1707 "tccgen.c"
        *a=4;
        # 1708 "tccgen.c"
        __result121__ = 4;
        return __result121__;
    }
    # 1709 "tccgen.c"
    else if(_elif_conditional147=bt_420==2,    _elif_conditional147) {
        # 1710 "tccgen.c"
        *a=2;
        # 1711 "tccgen.c"
        __result122__ = 2;
        return __result122__;
    }
    else {
        # 1714 "tccgen.c"
        *a=1;
        # 1715 "tccgen.c"
        __result123__ = 1;
        return __result123__;
    }
}


static void mk_pointer(struct CType* type){
void* __result_obj__;
struct Sym* s_422;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_422, 0, sizeof(struct Sym*));
    # 1728 "tccgen.c"
    # 1729 "tccgen.c"
    s_422=sym_push(536870912,type,0,-1);
    # 1730 "tccgen.c"
    type->t=4|(type->t&~(~((128|256|512|1024))));
    # 1731 "tccgen.c"
    type->ref=s_422;
}

static int is_compatible_func(struct CType* type1, struct CType* type2){
void* __result_obj__;
struct Sym* s1_423;
struct Sym* s2_424;
_Bool _if_conditional586;
int __result125__;
_Bool _if_conditional587;
int __result126__;
_Bool _if_conditional588;
int __result127__;
_Bool _if_conditional589;
int __result128__;
_Bool _while_condtional44;
_Bool _if_conditional590;
int __result129__;
_Bool _if_conditional591;
int __result130__;
_Bool _if_conditional592;
int __result131__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1737 "tccgen.c"
    # 1739 "tccgen.c"
    s1_423=type1->ref;
    # 1740 "tccgen.c"
    s2_424=type2->ref;
    # 1742 "tccgen.c"
    # 1741 "tccgen.c"
    if(_if_conditional586=!is_compatible_types(&s1_423->type,&s2_424->type),    _if_conditional586) {
        # 1742 "tccgen.c"
        __result125__ = 0;
        return __result125__;
    }
    # 1745 "tccgen.c"
    # 1744 "tccgen.c"
    if(_if_conditional587=(((struct anonymous_typeX107*)&(s1_423->r))->func_call)!=(((struct anonymous_typeX107*)&(s2_424->r))->func_call),    _if_conditional587) {
        # 1745 "tccgen.c"
        __result126__ = 0;
        return __result126__;
    }
    # 1748 "tccgen.c"
    # 1747 "tccgen.c"
    if(_if_conditional588=s1_423->c==2||s2_424->c==2,    _if_conditional588) {
        # 1748 "tccgen.c"
        __result127__ = 1;
        return __result127__;
    }
    # 1750 "tccgen.c"
    # 1749 "tccgen.c"
    if(_if_conditional589=s1_423->c!=s2_424->c,    _if_conditional589) {
        # 1750 "tccgen.c"
        __result128__ = 0;
        return __result128__;
    }
    # 1759 "tccgen.c"
    while(_while_condtional44=s1_423!=((void*)0),    _while_condtional44) {
        # 1753 "tccgen.c"
        # 1752 "tccgen.c"
        if(_if_conditional590=s2_424==((void*)0),        _if_conditional590) {
            # 1753 "tccgen.c"
            __result129__ = 0;
            return __result129__;
        }
        # 1755 "tccgen.c"
        # 1754 "tccgen.c"
        if(_if_conditional591=!is_compatible_parameter_types(&s1_423->type,&s2_424->type),        _if_conditional591) {
            # 1755 "tccgen.c"
            __result130__ = 0;
            return __result130__;
        }
        # 1756 "tccgen.c"
        s1_423=s1_423->next;
        # 1757 "tccgen.c"
        s2_424=s2_424->next;
    }
    # 1760 "tccgen.c"
    # 1759 "tccgen.c"
    if(s2_424) {
        # 1760 "tccgen.c"
        __result131__ = 0;
        return __result131__;
    }
    # 1761 "tccgen.c"
    __result132__ = 1;
    return __result132__;
}

static int compare_types(struct CType* type1, struct CType* type2, int unqualified){
void* __result_obj__;
int bt1_425;
int t1_426;
int t2_427;
_Bool _if_conditional593;
_Bool _if_conditional594;
int __result133__;
_Bool _if_conditional595;
int __result134__;
_Bool _elif_conditional148;
int __result135__;
_Bool _elif_conditional149;
int __result136__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1771 "tccgen.c"
    # 1773 "tccgen.c"
    t1_426=type1->t&(~((128|256|512|1024)));
    # 1774 "tccgen.c"
    t2_427=type2->t&(~((128|256|512|1024)));
    # 1781 "tccgen.c"
    # 1775 "tccgen.c"
    if(unqualified) {
        # 1777 "tccgen.c"
        t1_426&=~(2048|4096);
        # 1778 "tccgen.c"
        t2_427&=~(2048|4096);
    }
    # 1782 "tccgen.c"
    # 1781 "tccgen.c"
    if(_if_conditional594=t1_426!=t2_427,    _if_conditional594) {
        # 1782 "tccgen.c"
        __result133__ = 0;
        return __result133__;
    }
    # 1784 "tccgen.c"
    bt1_425=t1_426&15;
    # 1796 "tccgen.c"
    # 1785 "tccgen.c"
    if(_if_conditional595=bt1_425==4,    _if_conditional595) {
        # 1786 "tccgen.c"
        type1=pointed_type(type1);
        # 1787 "tccgen.c"
        type2=pointed_type(type2);
        # 1788 "tccgen.c"
        __result134__ = is_compatible_types(type1,type2);
        return __result134__;
    }
    # 1789 "tccgen.c"
    else if(_elif_conditional148=bt1_425==7,    _elif_conditional148) {
        # 1790 "tccgen.c"
        __result135__ = (type1->ref==type2->ref);
        return __result135__;
    }
    # 1791 "tccgen.c"
    else if(_elif_conditional149=bt1_425==6,    _elif_conditional149) {
        # 1792 "tccgen.c"
        __result136__ = is_compatible_func(type1,type2);
        return __result136__;
    }
    else {
        # 1794 "tccgen.c"
        __result137__ = 1;
        return __result137__;
    }
}

static int is_compatible_types(struct CType* type1, struct CType* type2){
void* __result_obj__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1803 "tccgen.c"
    __result138__ = compare_types(type1,type2,0);
    return __result138__;
}

static int is_compatible_parameter_types(struct CType* type1, struct CType* type2){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1810 "tccgen.c"
    __result139__ = compare_types(type1,type2,1);
    return __result139__;
}

void type_to_str(char* buf, int buf_size, struct CType* type, const char* varstr){
void* __result_obj__;
int bt_428;
int v_429;
int t_430;
struct Sym* s_431;
struct Sym* sa_432;
const char* tstr_434;
_Bool _if_conditional596;
_Bool _if_conditional597;
_Bool _if_conditional598;
tstr_434="void";
tstr_434="_Bool";
tstr_434="char";
tstr_434="short";
tstr_434="int";
tstr_434="long";
tstr_434="long long";
tstr_434="float";
tstr_434="double";
tstr_434="long double";
_Bool _if_conditional599;
tstr_434="struct ";
tstr_434="enum ";
_Bool _if_conditional600;
_Bool _while_condtional45;
_Bool _if_conditional601;
_Bool _if_conditional602;
_Bool _if_conditional603;
memset(&__result_obj__, 0, sizeof(void*));
    # 1820 "tccgen.c"
    # 1821 "tccgen.c"
    # 1822 "tccgen.c"
    char buf1_433[256];
    memset(&buf1_433, 0, sizeof(char)    *(256)    );
    # 1823 "tccgen.c"
    # 1825 "tccgen.c"
    t_430=type->t&(~((128|256|512|1024)));
    # 1826 "tccgen.c"
    bt_428=t_430&15;
    # 1827 "tccgen.c"
    buf[0]=0;
    # 1829 "tccgen.c"
    # 1828 "tccgen.c"
    if(_if_conditional596=t_430&2048,    _if_conditional596) {
        # 1829 "tccgen.c"
        pstrcat(buf,buf_size,"const ");
    }
    # 1831 "tccgen.c"
    # 1830 "tccgen.c"
    if(_if_conditional597=t_430&4096,    _if_conditional597) {
        # 1831 "tccgen.c"
        pstrcat(buf,buf_size,"volatile ");
    }
    # 1833 "tccgen.c"
    # 1832 "tccgen.c"
    if(_if_conditional598=t_430&16,    _if_conditional598) {
        # 1833 "tccgen.c"
        pstrcat(buf,buf_size,"unsigned ");
    }
    # 1902 "tccgen.c"
    switch (bt_428) {
        # 1836 "tccgen.c"
        case 3:
        # 1836 "tccgen.c"
        # 1837 "tccgen.c"
        goto add_tstr;
        # 1839 "tccgen.c"
        case 11:
        # 1839 "tccgen.c"
        # 1840 "tccgen.c"
        goto add_tstr;
        # 1842 "tccgen.c"
        case 1:
        # 1842 "tccgen.c"
        # 1843 "tccgen.c"
        goto add_tstr;
        # 1845 "tccgen.c"
        case 2:
        # 1845 "tccgen.c"
        # 1846 "tccgen.c"
        goto add_tstr;
        # 1848 "tccgen.c"
        case 0:
        # 1848 "tccgen.c"
        # 1849 "tccgen.c"
        goto add_tstr;
        # 1851 "tccgen.c"
        case 13:
        # 1851 "tccgen.c"
        # 1852 "tccgen.c"
        goto add_tstr;
        # 1854 "tccgen.c"
        case 12:
        # 1854 "tccgen.c"
        # 1855 "tccgen.c"
        goto add_tstr;
        # 1857 "tccgen.c"
        case 8:
        # 1857 "tccgen.c"
        # 1858 "tccgen.c"
        goto add_tstr;
        # 1860 "tccgen.c"
        case 9:
        # 1860 "tccgen.c"
        # 1861 "tccgen.c"
        goto add_tstr;
        # 1863 "tccgen.c"
        case 10:
        # 1863 "tccgen.c"
        # 1865 "tccgen.c"
        add_tstr:
        # 1865 "tccgen.c"
        pstrcat(buf,buf_size,tstr_434);
        # 1866 "tccgen.c"
        break;
        # 1868 "tccgen.c"
        case 5:
        # 1869 "tccgen.c"
        case 7:
        # 1872 "tccgen.c"
        # 1869 "tccgen.c"
        if(_if_conditional599=bt_428==7,        _if_conditional599) {
            # 1870 "tccgen.c"
        }
        else {
            # 1872 "tccgen.c"
        }
        # 1873 "tccgen.c"
        pstrcat(buf,buf_size,tstr_434);
        # 1874 "tccgen.c"
        v_429=type->ref->v&~1073741824;
        # 1878 "tccgen.c"
        # 1875 "tccgen.c"
        if(_if_conditional600=v_429>=268435456,        _if_conditional600) {
            # 1876 "tccgen.c"
            pstrcat(buf,buf_size,"<anonymous>");
        }
        else {
            # 1878 "tccgen.c"
            pstrcat(buf,buf_size,get_tok_str(v_429,((void*)0)));
        }
        # 1879 "tccgen.c"
        break;
        # 1881 "tccgen.c"
        case 6:
        # 1881 "tccgen.c"
        s_431=type->ref;
        # 1882 "tccgen.c"
        type_to_str(buf,buf_size,&s_431->type,varstr);
        # 1883 "tccgen.c"
        pstrcat(buf,buf_size,"(");
        # 1884 "tccgen.c"
        sa_432=s_431->next;
        # 1892 "tccgen.c"
        while(_while_condtional45=sa_432!=((void*)0),        _while_condtional45) {
            # 1886 "tccgen.c"
            type_to_str(buf1_433,sizeof(buf1_433),&sa_432->type,((void*)0));
            # 1887 "tccgen.c"
            pstrcat(buf,buf_size,buf1_433);
            # 1888 "tccgen.c"
            sa_432=sa_432->next;
            # 1891 "tccgen.c"
            # 1889 "tccgen.c"
            if(sa_432) {
                # 1890 "tccgen.c"
                pstrcat(buf,buf_size,", ");
            }
        }
        # 1892 "tccgen.c"
        pstrcat(buf,buf_size,")");
        # 1893 "tccgen.c"
        goto no_var;
        # 1895 "tccgen.c"
        case 4:
        # 1895 "tccgen.c"
        s_431=type->ref;
        # 1896 "tccgen.c"
        pstrcpy(buf1_433,sizeof(buf1_433),"*");
        # 1898 "tccgen.c"
        # 1897 "tccgen.c"
        if(varstr) {
            # 1898 "tccgen.c"
            pstrcat(buf1_433,sizeof(buf1_433),varstr);
        }
        # 1899 "tccgen.c"
        type_to_str(buf,buf_size,&s_431->type,buf1_433);
        # 1900 "tccgen.c"
        goto no_var;
    }
    # 1906 "tccgen.c"
    # 1902 "tccgen.c"
    if(varstr) {
        # 1903 "tccgen.c"
        pstrcat(buf,buf_size," ");
        # 1904 "tccgen.c"
        pstrcat(buf,buf_size,varstr);
    }
    # 1906 "tccgen.c"
    no_var:
}

static void gen_assign_cast(struct CType* dt){
void* __result_obj__;
struct CType* st_435;
struct CType* type1_436;
struct CType* type2_437;
struct CType tmp_type1_438;
struct CType tmp_type2_439;
char buf1_440[256];
char buf2_441[256];
int dbt_442;
int sbt_443;
_Bool _if_conditional604;
_Bool _if_conditional605;
_Bool _if_conditional606;
_Bool _if_conditional607;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
_Bool _if_conditional611;
_Bool _if_conditional612;
_Bool _if_conditional613;
_Bool _if_conditional614;
memset(&__result_obj__, 0, sizeof(void*));
    # 1913 "tccgen.c"
    # 1914 "tccgen.c"
    # 1915 "tccgen.c"
    # 1917 "tccgen.c"
    st_435=&vtop->type;
    # 1918 "tccgen.c"
    dbt_442=dt->t&15;
    # 1919 "tccgen.c"
    sbt_443=st_435->t&15;
    # 1921 "tccgen.c"
    # 1920 "tccgen.c"
    if(_if_conditional604=dt->t&2048,    _if_conditional604) {
        # 1921 "tccgen.c"
        warning("assignment of read-only location");
    }
    # 1984 "tccgen.c"
    switch (dbt_442) {
        # 1926 "tccgen.c"
        case 4:
        # 1927 "tccgen.c"
        # 1926 "tccgen.c"
        if(_if_conditional605=is_null_pointer(vtop),        _if_conditional605) {
            # 1927 "tccgen.c"
            goto type_ok;
        }
        # 1933 "tccgen.c"
        # 1929 "tccgen.c"
        if(_if_conditional606=is_integer_btype(sbt_443),        _if_conditional606) {
            # 1930 "tccgen.c"
            warning("assignment makes pointer from integer without a cast");
            # 1931 "tccgen.c"
            goto type_ok;
        }
        # 1933 "tccgen.c"
        type1_436=pointed_type(dt);
        # 1942 "tccgen.c"
        # 1935 "tccgen.c"
        if(_if_conditional607=sbt_443==6,        _if_conditional607) {
            # 1940 "tccgen.c"
            # 1937 "tccgen.c"
            if(_if_conditional608=(type1_436->t&15)!=3&&!is_compatible_types(pointed_type(dt),st_435),            _if_conditional608) {
                # 1938 "tccgen.c"
                goto error;
            }
            else {
                # 1940 "tccgen.c"
                goto type_ok;
            }
        }
        # 1943 "tccgen.c"
        # 1942 "tccgen.c"
        if(_if_conditional609=sbt_443!=4,        _if_conditional609) {
            # 1943 "tccgen.c"
            goto error;
        }
        # 1944 "tccgen.c"
        type2_437=pointed_type(st_435);
        # 1958 "tccgen.c"
        # 1946 "tccgen.c"
        if(_if_conditional610=(type1_436->t&15)==3||(type2_437->t&15)==3,        _if_conditional610) {
        }
        else {
            # 1950 "tccgen.c"
            tmp_type1_438=*type1_436;
            # 1951 "tccgen.c"
            tmp_type2_439=*type2_437;
            # 1952 "tccgen.c"
            tmp_type1_438.t&=~(16|2048|4096);
            # 1953 "tccgen.c"
            tmp_type2_439.t&=~(16|2048|4096);
            # 1956 "tccgen.c"
            # 1954 "tccgen.c"
            if(_if_conditional611=!is_compatible_types(&tmp_type1_438,&tmp_type2_439),            _if_conditional611) {
                # 1955 "tccgen.c"
                warning("assignment from incompatible pointer type");
            }
        }
        # 1960 "tccgen.c"
        # 1959 "tccgen.c"
        if(_if_conditional612=(!(type1_436->t&2048)&&(type2_437->t&2048))||(!(type1_436->t&4096)&&(type2_437->t&4096)),        _if_conditional612) {
            # 1960 "tccgen.c"
            warning("assignment discards qualifiers from pointer target type");
        }
        # 1961 "tccgen.c"
        break;
        # 1963 "tccgen.c"
        case 1:
        # 1964 "tccgen.c"
        case 2:
        # 1965 "tccgen.c"
        case 0:
        # 1966 "tccgen.c"
        case 12:
        # 1970 "tccgen.c"
        # 1966 "tccgen.c"
        if(_if_conditional613=sbt_443==4||sbt_443==6,        _if_conditional613) {
            # 1967 "tccgen.c"
            warning("assignment makes integer from pointer without a cast");
        }
        # 1970 "tccgen.c"
        break;
        # 1972 "tccgen.c"
        case 7:
        # 1972 "tccgen.c"
        tmp_type1_438=*dt;
        # 1973 "tccgen.c"
        tmp_type2_439=*st_435;
        # 1974 "tccgen.c"
        tmp_type1_438.t&=~(2048|4096);
        # 1975 "tccgen.c"
        tmp_type2_439.t&=~(2048|4096);
        # 1982 "tccgen.c"
        # 1976 "tccgen.c"
        if(_if_conditional614=!is_compatible_types(&tmp_type1_438,&tmp_type2_439),        _if_conditional614) {
            # 1978 "tccgen.c"
            error:
            # 1978 "tccgen.c"
            type_to_str(buf1_440,sizeof(buf1_440),st_435,((void*)0));
            # 1979 "tccgen.c"
            type_to_str(buf2_441,sizeof(buf2_441),dt,((void*)0));
            # 1980 "tccgen.c"
            error("cannot cast '%s' to '%s'",buf1_440,buf2_441);
        }
        # 1982 "tccgen.c"
        break;
    }
    # 1985 "tccgen.c"
    type_ok:
    # 1985 "tccgen.c"
    gen_cast(dt);
}

void vstore(){
void* __result_obj__;
int sbt_444;
int dbt_445;
int ft_446;
int r_447;
int t_448;
int size_449;
int align_450;
int bit_size_451;
int bit_pos_452;
int rc_453;
int delayed_cast_454;
_Bool _if_conditional615;
_Bool _if_conditional616;
_Bool _if_conditional617;
_Bool _if_conditional618;
_Bool _if_conditional619;
_Bool _elif_conditional150;
_Bool _if_conditional620;
_Bool _if_conditional621;
_Bool _if_conditional622;
_Bool _if_conditional623;
_Bool _if_conditional624;
_Bool _if_conditional625;
_Bool _if_conditional626;
_Bool _if_conditional627;
struct SValue sv_455;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sv_455, 0, sizeof(struct SValue));
    # 1991 "tccgen.c"
    # 1993 "tccgen.c"
    ft_446=vtop[-1].type.t;
    # 1994 "tccgen.c"
    sbt_444=vtop->type.t&15;
    # 1995 "tccgen.c"
    dbt_445=ft_446&15;
    # 2010 "tccgen.c"
    # 1997 "tccgen.c"
    if(_if_conditional615=((sbt_444==0||sbt_444==2)&&dbt_445==1)||(sbt_444==0&&dbt_445==2),    _if_conditional615) {
        # 1999 "tccgen.c"
        delayed_cast_454=1024;
        # 2000 "tccgen.c"
        vtop->type.t=ft_446&((~((128|256|512|1024)))&~(64|(-1<<16)));
        # 2004 "tccgen.c"
        # 2002 "tccgen.c"
        if(_if_conditional616=ft_446&2048,        _if_conditional616) {
            # 2003 "tccgen.c"
            warning("assignment of read-only location");
        }
    }
    else {
        # 2005 "tccgen.c"
        delayed_cast_454=0;
        # 2008 "tccgen.c"
        # 2006 "tccgen.c"
        if(_if_conditional617=!(ft_446&64),        _if_conditional617) {
            # 2007 "tccgen.c"
            gen_assign_cast(&vtop[-1].type);
        }
    }
    # 2147 "tccgen.c"
    # 2010 "tccgen.c"
    if(_if_conditional618=sbt_444==7,    _if_conditional618) {
        # 2045 "tccgen.c"
        # 2014 "tccgen.c"
        if(_if_conditional619=!nocode_wanted,        _if_conditional619) {
            # 2015 "tccgen.c"
            size_449=type_size(&vtop->type,&align_450);
            # 2024 "tccgen.c"
            vpush_global_sym(&func_old_type,366);
            # 2027 "tccgen.c"
            vpushv(vtop-2);
            # 2028 "tccgen.c"
            vtop->type.t=4;
            # 2029 "tccgen.c"
            gaddrof();
            # 2031 "tccgen.c"
            vpushv(vtop-2);
            # 2032 "tccgen.c"
            vtop->type.t=4;
            # 2033 "tccgen.c"
            gaddrof();
            # 2035 "tccgen.c"
            vpushi(size_449);
            # 2036 "tccgen.c"
            gfunc_call(3);
            # 2038 "tccgen.c"
            vswap();
            # 2039 "tccgen.c"
            vpop();
        }
        else {
            # 2041 "tccgen.c"
            vswap();
            # 2042 "tccgen.c"
            vpop();
        }
    }
    # 2045 "tccgen.c"
    else if(_elif_conditional150=ft_446&64,    _elif_conditional150) {
        # 2047 "tccgen.c"
        bit_pos_452=(ft_446>>16)&63;
        # 2048 "tccgen.c"
        bit_size_451=(ft_446>>(16+6))&63;
        # 2050 "tccgen.c"
        vtop[-1].type.t=ft_446&~(64|(-1<<16));
        # 2053 "tccgen.c"
        gv_dup();
        # 2054 "tccgen.c"
        vswap();
        # 2055 "tccgen.c"
        vrott(3);
        # 2063 "tccgen.c"
        # 2057 "tccgen.c"
        if(_if_conditional620=(ft_446&15)==11,        _if_conditional620) {
            # 2058 "tccgen.c"
            gen_cast(&vtop[-1].type);
            # 2059 "tccgen.c"
            vtop[-1].type.t=(vtop[-1].type.t&~15)|(1|16);
        }
        # 2063 "tccgen.c"
        vdup();
        # 2064 "tccgen.c"
        vtop[-1]=vtop[-2];
        # 2075 "tccgen.c"
        # 2067 "tccgen.c"
        if(_if_conditional621=(ft_446&15)!=11,        _if_conditional621) {
            # 2073 "tccgen.c"
            # 2068 "tccgen.c"
            if(_if_conditional622=(ft_446&15)==12,            _if_conditional622) {
                # 2069 "tccgen.c"
                vpushll((1<<bit_size_451)-1);
            }
            else {
                # 2071 "tccgen.c"
                vpushi((1<<bit_size_451)-1);
            }
            # 2073 "tccgen.c"
            gen_op(38);
        }
        # 2075 "tccgen.c"
        vpushi(bit_pos_452);
        # 2076 "tccgen.c"
        gen_op(1);
        # 2078 "tccgen.c"
        vswap();
        # 2084 "tccgen.c"
        # 2079 "tccgen.c"
        if(_if_conditional623=(ft_446&15)==12,        _if_conditional623) {
            # 2080 "tccgen.c"
            vpushll(~(((1<<bit_size_451)-1)<<bit_pos_452));
        }
        else {
            # 2082 "tccgen.c"
            vpushi(~(((1<<bit_size_451)-1)<<bit_pos_452));
        }
        # 2084 "tccgen.c"
        gen_op(38);
        # 2085 "tccgen.c"
        gen_op(124);
        # 2087 "tccgen.c"
        vstore();
        # 2090 "tccgen.c"
        vpop();
    }
    else {
        # 2143 "tccgen.c"
        # 2101 "tccgen.c"
        if(_if_conditional624=!nocode_wanted,        _if_conditional624) {
            # 2102 "tccgen.c"
            rc_453=1;
            # 2111 "tccgen.c"
            # 2103 "tccgen.c"
            if(_if_conditional625=is_float(ft_446),            _if_conditional625) {
                # 2104 "tccgen.c"
                rc_453=2;
                # 2110 "tccgen.c"
                # 2106 "tccgen.c"
                if(_if_conditional626=(ft_446&15)==10,                _if_conditional626) {
                    # 2107 "tccgen.c"
                    rc_453=64;
                }
            }
            # 2111 "tccgen.c"
            r_447=gv(rc_453);
            # 2126 "tccgen.c"
            # 2113 "tccgen.c"
            if(_if_conditional627=(vtop[-1].r&255)==241,            _if_conditional627) {
                # 2114 "tccgen.c"
                # 2115 "tccgen.c"
                t_448=get_reg(1);
                # 2117 "tccgen.c"
                sv_455.type.t=4;
                # 2121 "tccgen.c"
                sv_455.r=242|256;
                # 2122 "tccgen.c"
                sv_455.c.ul=vtop[-1].c.ul;
                # 2123 "tccgen.c"
                load(t_448,&sv_455);
                # 2124 "tccgen.c"
                vtop[-1].r=t_448|256;
                come_call_finalizer3((&sv_455),SValue_finalize, 1, 0, 0, 0, (void*)0);
            }
            # 2126 "tccgen.c"
            store(r_447,vtop-1);
        }
        # 2143 "tccgen.c"
        vswap();
        # 2144 "tccgen.c"
        vtop--;
        # 2145 "tccgen.c"
        vtop->r|=delayed_cast_454;
    }
}

void inc(int post, int c){
void* __result_obj__;
_Bool _if_conditional628;
_Bool _if_conditional629;
memset(&__result_obj__, 0, sizeof(void*));
    # 2152 "tccgen.c"
    test_lvalue();
    # 2153 "tccgen.c"
    vdup();
    # 2160 "tccgen.c"
    # 2154 "tccgen.c"
    if(post) {
        # 2155 "tccgen.c"
        gv_dup();
        # 2156 "tccgen.c"
        vrotb(3);
        # 2157 "tccgen.c"
        vrotb(3);
    }
    # 2160 "tccgen.c"
    vpushi(c-163);
    # 2161 "tccgen.c"
    gen_op(43);
    # 2162 "tccgen.c"
    vstore();
    # 2165 "tccgen.c"
    # 2163 "tccgen.c"
    if(post) {
        # 2164 "tccgen.c"
        vpop();
    }
}

static void parse_attribute(struct AttributeDef* ad){
void* __result_obj__;
int t_456;
int n_457;
_Bool _while_condtional46;
_Bool _while_condtional47;
_Bool _if_conditional630;
_Bool _if_conditional631;
_Bool _if_conditional632;
_Bool _if_conditional633;
_Bool _if_conditional634;
_Bool _if_conditional635;
int parenthesis_458;
_Bool _if_conditional636;
_Bool _elif_conditional151;
_Bool _do_while_condtional2;
_Bool _if_conditional637;
memset(&__result_obj__, 0, sizeof(void*));
memset(&parenthesis_458, 0, sizeof(int));
    # 2177 "tccgen.c"
    # 2280 "tccgen.c"
    while(_while_condtional46=tok==303||tok==304,    _while_condtional46) {
        # 2180 "tccgen.c"
        next();
        # 2181 "tccgen.c"
        skip(40);
        # 2182 "tccgen.c"
        skip(40);
        # 2277 "tccgen.c"
        while(_while_condtional47=tok!=41,        _while_condtional47) {
            # 2185 "tccgen.c"
            # 2184 "tccgen.c"
            if(_if_conditional630=tok<256,            _if_conditional630) {
                # 2185 "tccgen.c"
                expect("attribute name");
            }
            # 2186 "tccgen.c"
            t_456=tok;
            # 2187 "tccgen.c"
            next();
            # 2273 "tccgen.c"
            switch (t_456) {
                # 2190 "tccgen.c"
                case 334:
                # 2191 "tccgen.c"
                case 335:
                # 2191 "tccgen.c"
                skip(40);
                # 2193 "tccgen.c"
                # 2192 "tccgen.c"
                if(_if_conditional631=tok!=181,                _if_conditional631) {
                    # 2193 "tccgen.c"
                    expect("section name");
                }
                # 2194 "tccgen.c"
                ad->section=find_section(tcc_state,(char*)tokc.cstr->data);
                # 2195 "tccgen.c"
                next();
                # 2196 "tccgen.c"
                skip(41);
                # 2197 "tccgen.c"
                break;
                # 2199 "tccgen.c"
                case 336:
                # 2200 "tccgen.c"
                case 337:
                # 2209 "tccgen.c"
                # 2200 "tccgen.c"
                if(_if_conditional632=tok==40,                _if_conditional632) {
                    # 2201 "tccgen.c"
                    next();
                    # 2202 "tccgen.c"
                    n_457=expr_const();
                    # 2204 "tccgen.c"
                    # 2203 "tccgen.c"
                    if(_if_conditional633=n_457<=0||(n_457&(n_457-1))!=0,                    _if_conditional633) {
                        # 2204 "tccgen.c"
                        error("alignment must be a positive power of two");
                    }
                    # 2205 "tccgen.c"
                    skip(41);
                }
                else {
                    # 2207 "tccgen.c"
                    n_457=8;
                }
                # 2209 "tccgen.c"
                ad->aligned=n_457;
                # 2210 "tccgen.c"
                break;
                # 2212 "tccgen.c"
                case 338:
                # 2213 "tccgen.c"
                case 339:
                # 2213 "tccgen.c"
                ad->packed=1;
                # 2214 "tccgen.c"
                break;
                # 2216 "tccgen.c"
                case 340:
                # 2219 "tccgen.c"
                case 341:
                # 2219 "tccgen.c"
                break;
                # 2221 "tccgen.c"
                case 352:
                # 2224 "tccgen.c"
                case 353:
                # 2224 "tccgen.c"
                break;
                # 2226 "tccgen.c"
                case 342:
                # 2227 "tccgen.c"
                case 343:
                # 2228 "tccgen.c"
                case 344:
                # 2228 "tccgen.c"
                (((struct anonymous_typeX107*)&(ad->func_attr))->func_call)=0;
                # 2229 "tccgen.c"
                break;
                # 2231 "tccgen.c"
                case 345:
                # 2232 "tccgen.c"
                case 346:
                # 2233 "tccgen.c"
                case 347:
                # 2233 "tccgen.c"
                (((struct anonymous_typeX107*)&(ad->func_attr))->func_call)=1;
                # 2234 "tccgen.c"
                break;
                # 2255 "tccgen.c"
                case 351:
                # 2255 "tccgen.c"
                (((struct anonymous_typeX107*)&(ad->func_attr))->func_export)=1;
                # 2256 "tccgen.c"
                break;
                # 2258 "tccgen.c"
                default:
                # 2259 "tccgen.c"
                # 2258 "tccgen.c"
                if(tcc_state->warn_unsupported) {
                    # 2259 "tccgen.c"
                    warning("'%s' attribute ignored",get_tok_str(t_456,((void*)0)));
                }
                # 2271 "tccgen.c"
                # 2261 "tccgen.c"
                if(_if_conditional635=tok==40,                _if_conditional635) {
                    # 2262 "tccgen.c"
                    parenthesis_458=0;
                    # 2269 "tccgen.c"
                    do {
                        # 2267 "tccgen.c"
                        # 2264 "tccgen.c"
                        if(_if_conditional636=tok==40,                        _if_conditional636) {
                            # 2265 "tccgen.c"
                            parenthesis_458++;
                        }
                        # 2266 "tccgen.c"
                        else if(_elif_conditional151=tok==41,                        _elif_conditional151) {
                            # 2267 "tccgen.c"
                            parenthesis_458--;
                        }
                        # 2268 "tccgen.c"
                        next();
                    # 2269 "tccgen.c"
                    } while(_do_while_condtional2=parenthesis_458&&tok!=-1,                    _do_while_condtional2);
                }
                # 2271 "tccgen.c"
                break;
            }
            # 2274 "tccgen.c"
            # 2273 "tccgen.c"
            if(_if_conditional637=tok!=44,            _if_conditional637) {
                # 2274 "tccgen.c"
                break;
            }
            # 2275 "tccgen.c"
            next();
        }
        # 2277 "tccgen.c"
        skip(41);
        # 2278 "tccgen.c"
        skip(41);
    }
}

static void struct_decl(struct CType* type, int u){
void* __result_obj__;
int a_459;
int v_460;
int size_461;
int align_462;
int maxalign_463;
int c_464;
int offset_465;
int bit_size_466;
int bit_pos_467;
int bsize_468;
int bt_469;
int lbit_pos_470;
int prevbt_471;
struct Sym* s_472;
struct Sym* ss_473;
struct Sym* ass_474;
struct Sym** ps_475;
struct AttributeDef ad_476;
struct CType type1_477;
struct CType btype_478;
_Bool _if_conditional638;
_Bool _if_conditional639;
_Bool _if_conditional640;
_Bool _if_conditional641;
_Bool _if_conditional642;
_Bool _if_conditional643;
_Bool _if_conditional644;
_Bool _if_conditional645;
_Bool _if_conditional646;
_Bool _if_conditional647;
_Bool _if_conditional648;
_Bool _while_condtional48;
_Bool _while_condtional49;
_Bool _if_conditional649;
_Bool _if_conditional650;
_Bool _if_conditional651;
_Bool _if_conditional652;
_Bool _if_conditional653;
_Bool _if_conditional654;
_Bool _if_conditional655;
_Bool _if_conditional656;
_Bool _elif_conditional152;
_Bool _if_conditional657;
_Bool _if_conditional658;
_Bool _if_conditional659;
_Bool _if_conditional660;
_Bool _elif_conditional153;
_Bool _elif_conditional154;
_Bool _if_conditional661;
_Bool _if_conditional662;
_Bool _if_conditional663;
_Bool _if_conditional664;
_Bool _if_conditional665;
_Bool _if_conditional666;
_Bool _if_conditional667;
_Bool _if_conditional668;
_Bool _while_condtional50;
_Bool _if_conditional669;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ad_476, 0, sizeof(struct AttributeDef));
    # 2285 "tccgen.c"
    # 2286 "tccgen.c"
    # 2287 "tccgen.c"
    # 2288 "tccgen.c"
    # 2289 "tccgen.c"
    # 2291 "tccgen.c"
    a_459=tok;
    # 2292 "tccgen.c"
    next();
    # 2308 "tccgen.c"
    # 2293 "tccgen.c"
    if(_if_conditional638=tok!=123,    _if_conditional638) {
        # 2294 "tccgen.c"
        v_460=tok;
        # 2295 "tccgen.c"
        next();
        # 2298 "tccgen.c"
        # 2297 "tccgen.c"
        if(_if_conditional639=v_460<256,        _if_conditional639) {
            # 2298 "tccgen.c"
            expect("struct/union/enum name");
        }
        # 2299 "tccgen.c"
        s_472=struct_find(v_460);
        # 2305 "tccgen.c"
        # 2300 "tccgen.c"
        if(s_472) {
            # 2302 "tccgen.c"
            # 2301 "tccgen.c"
            if(_if_conditional641=s_472->type.t!=a_459,            _if_conditional641) {
                # 2302 "tccgen.c"
                error("invalid type");
            }
            # 2303 "tccgen.c"
            goto do_decl;
        }
    }
    else {
        # 2306 "tccgen.c"
        v_460=anon_sym++;
    }
    # 2308 "tccgen.c"
    type1_477.t=a_459;
    # 2310 "tccgen.c"
    s_472=sym_push(v_460|1073741824,&type1_477,0,-1);
    # 2311 "tccgen.c"
    s_472->r=0;
    # 2314 "tccgen.c"
    do_decl:
    # 2314 "tccgen.c"
    type->t=u;
    # 2315 "tccgen.c"
    type->ref=s_472;
    # 2480 "tccgen.c"
    # 2317 "tccgen.c"
    if(_if_conditional642=tok==123,    _if_conditional642) {
        # 2318 "tccgen.c"
        next();
        # 2320 "tccgen.c"
        # 2319 "tccgen.c"
        if(_if_conditional643=s_472->c!=-1,        _if_conditional643) {
            # 2320 "tccgen.c"
            error("struct/union/enum already defined");
        }
        # 2322 "tccgen.c"
        c_464=0;
        # 2479 "tccgen.c"
        # 2324 "tccgen.c"
        if(_if_conditional644=a_459==301,        _if_conditional644) {
            # 2345 "tccgen.c"
            for(            ;            ;            ){
                # 2326 "tccgen.c"
                v_460=tok;
                # 2328 "tccgen.c"
                # 2327 "tccgen.c"
                if(_if_conditional645=v_460<314,                _if_conditional645) {
                    # 2328 "tccgen.c"
                    expect("identifier");
                }
                # 2329 "tccgen.c"
                next();
                # 2335 "tccgen.c"
                # 2330 "tccgen.c"
                if(_if_conditional646=tok==61,                _if_conditional646) {
                    # 2331 "tccgen.c"
                    next();
                    # 2332 "tccgen.c"
                    c_464=expr_const();
                }
                # 2335 "tccgen.c"
                ss_473=sym_push(v_460,&int_type,240,c_464);
                # 2336 "tccgen.c"
                ss_473->type.t|=256;
                # 2338 "tccgen.c"
                # 2337 "tccgen.c"
                if(_if_conditional647=tok!=44,                _if_conditional647) {
                    # 2338 "tccgen.c"
                    break;
                }
                # 2339 "tccgen.c"
                next();
                # 2340 "tccgen.c"
                c_464++;
                # 2344 "tccgen.c"
                # 2342 "tccgen.c"
                if(_if_conditional648=tok==125,                _if_conditional648) {
                    # 2343 "tccgen.c"
                    break;
                }
            }
            # 2345 "tccgen.c"
            skip(125);
        }
        else {
            # 2347 "tccgen.c"
            maxalign_463=1;
            # 2348 "tccgen.c"
            ps_475=&s_472->next;
            # 2349 "tccgen.c"
            prevbt_471=0;
            # 2350 "tccgen.c"
            bit_pos_467=0;
            # 2351 "tccgen.c"
            offset_465=0;
            # 2474 "tccgen.c"
            while(_while_condtional48=tok!=125,            _while_condtional48) {
                # 2353 "tccgen.c"
                parse_btype(&btype_478,&ad_476);
                # 2472 "tccgen.c"
                while(_while_condtional49=1,                _while_condtional49) {
                    # 2355 "tccgen.c"
                    bit_size_466=-1;
                    # 2356 "tccgen.c"
                    v_460=0;
                    # 2357 "tccgen.c"
                    type1_477=btype_478;
                    # 2367 "tccgen.c"
                    # 2358 "tccgen.c"
                    if(_if_conditional649=tok!=58,                    _if_conditional649) {
                        # 2359 "tccgen.c"
                        type_decl(&type1_477,&ad_476,&v_460,2|1);
                        # 2361 "tccgen.c"
                        # 2360 "tccgen.c"
                        if(_if_conditional650=v_460==0&&(type1_477.t&15)!=7,                        _if_conditional650) {
                            # 2361 "tccgen.c"
                            expect("identifier");
                        }
                        # 2366 "tccgen.c"
                        # 2363 "tccgen.c"
                        if(_if_conditional651=(type1_477.t&15)==6||(type1_477.t&(512|256|128|1024)),                        _if_conditional651) {
                            # 2365 "tccgen.c"
                            error("invalid type for '%s'",get_tok_str(v_460,((void*)0)));
                        }
                    }
                    # 2378 "tccgen.c"
                    # 2367 "tccgen.c"
                    if(_if_conditional652=tok==58,                    _if_conditional652) {
                        # 2368 "tccgen.c"
                        next();
                        # 2369 "tccgen.c"
                        bit_size_466=expr_const();
                        # 2373 "tccgen.c"
                        # 2371 "tccgen.c"
                        if(_if_conditional653=bit_size_466<0,                        _if_conditional653) {
                            # 2373 "tccgen.c"
                            error("negative width in bit-field '%s'",get_tok_str(v_460,((void*)0)));
                        }
                        # 2377 "tccgen.c"
                        # 2374 "tccgen.c"
                        if(_if_conditional654=v_460&&bit_size_466==0,                        _if_conditional654) {
                            # 2376 "tccgen.c"
                            error("zero width for bit-field '%s'",get_tok_str(v_460,((void*)0)));
                        }
                    }
                    # 2378 "tccgen.c"
                    size_461=type_size(&type1_477,&align_462);
                    # 2388 "tccgen.c"
                    # 2379 "tccgen.c"
                    if(ad_476.aligned) {
                        # 2382 "tccgen.c"
                        # 2380 "tccgen.c"
                        if(_if_conditional656=align_462<ad_476.aligned,                        _if_conditional656) {
                            # 2381 "tccgen.c"
                            align_462=ad_476.aligned;
                        }
                    }
                    # 2382 "tccgen.c"
                    else if(ad_476.packed) {
                        # 2383 "tccgen.c"
                        align_462=1;
                    }
                    # 2384 "tccgen.c"
                    else if(_elif_conditional152=*tcc_state->pack_stack_ptr,                    _elif_conditional152) {
                        # 2387 "tccgen.c"
                        # 2385 "tccgen.c"
                        if(_if_conditional657=align_462>*tcc_state->pack_stack_ptr,                        _if_conditional657) {
                            # 2386 "tccgen.c"
                            align_462=*tcc_state->pack_stack_ptr;
                        }
                    }
                    # 2388 "tccgen.c"
                    lbit_pos_470=0;
                    # 2428 "tccgen.c"
                    # 2389 "tccgen.c"
                    if(_if_conditional658=bit_size_466>=0,                    _if_conditional658) {
                        # 2390 "tccgen.c"
                        bt_469=type1_477.t&15;
                        # 2397 "tccgen.c"
                        # 2396 "tccgen.c"
                        if(_if_conditional659=bt_469!=0&&bt_469!=1&&bt_469!=2&&bt_469!=11&&bt_469!=5&&bt_469!=12,                        _if_conditional659) {
                            # 2397 "tccgen.c"
                            error("bitfields must have scalar type");
                        }
                        # 2398 "tccgen.c"
                        bsize_468=size_461*8;
                        # 2424 "tccgen.c"
                        # 2399 "tccgen.c"
                        if(_if_conditional660=bit_size_466>bsize_468,                        _if_conditional660) {
                            # 2401 "tccgen.c"
                            error("width of '%s' exceeds its type",get_tok_str(v_460,((void*)0)));
                        }
                        # 2402 "tccgen.c"
                        else if(_elif_conditional153=bit_size_466==bsize_468,                        _elif_conditional153) {
                            # 2404 "tccgen.c"
                            bit_pos_467=0;
                        }
                        # 2405 "tccgen.c"
                        else if(_elif_conditional154=bit_size_466==0,                        _elif_conditional154) {
                            # 2409 "tccgen.c"
                            bit_pos_467=0;
                        }
                        else {
                            # 2416 "tccgen.c"
                            # 2415 "tccgen.c"
                            if(_if_conditional661=(bit_pos_467+bit_size_466)>bsize_468||bt_469!=prevbt_471||a_459==298,                            _if_conditional661) {
                                # 2416 "tccgen.c"
                                bit_pos_467=0;
                            }
                            # 2417 "tccgen.c"
                            lbit_pos_470=bit_pos_467;
                            # 2421 "tccgen.c"
                            type1_477.t|=64|(bit_pos_467<<16)|(bit_size_466<<(16+6));
                            # 2422 "tccgen.c"
                            bit_pos_467+=bit_size_466;
                        }
                        # 2424 "tccgen.c"
                        prevbt_471=bt_469;
                    }
                    else {
                        # 2426 "tccgen.c"
                        bit_pos_467=0;
                    }
                    # 2456 "tccgen.c"
                    # 2428 "tccgen.c"
                    if(_if_conditional662=v_460!=0||(type1_477.t&15)==7,                    _if_conditional662) {
                        # 2455 "tccgen.c"
                        # 2431 "tccgen.c"
                        if(_if_conditional663=lbit_pos_470==0,                        _if_conditional663) {
                            # 2442 "tccgen.c"
                            # 2432 "tccgen.c"
                            if(_if_conditional664=a_459==297,                            _if_conditional664) {
                                # 2433 "tccgen.c"
                                c_464=(c_464+align_462-1)&-align_462;
                                # 2434 "tccgen.c"
                                offset_465=c_464;
                                # 2437 "tccgen.c"
                                # 2435 "tccgen.c"
                                if(_if_conditional665=size_461>0,                                _if_conditional665) {
                                    # 2436 "tccgen.c"
                                    c_464+=size_461;
                                }
                            }
                            else {
                                # 2438 "tccgen.c"
                                offset_465=0;
                                # 2441 "tccgen.c"
                                # 2439 "tccgen.c"
                                if(_if_conditional666=size_461>c_464,                                _if_conditional666) {
                                    # 2440 "tccgen.c"
                                    c_464=size_461;
                                }
                            }
                            # 2444 "tccgen.c"
                            # 2442 "tccgen.c"
                            if(_if_conditional667=align_462>maxalign_463,                            _if_conditional667) {
                                # 2443 "tccgen.c"
                                maxalign_463=align_462;
                            }
                        }
                    }
                    # 2468 "tccgen.c"
                    # 2456 "tccgen.c"
                    if(_if_conditional668=v_460==0&&(type1_477.t&15)==7,                    _if_conditional668) {
                        # 2457 "tccgen.c"
                        ass_474=type1_477.ref;
                        # 2463 "tccgen.c"
                        while(_while_condtional50=(ass_474=ass_474->next)!=((void*)0),                        _while_condtional50) {
                            # 2459 "tccgen.c"
                            ss_473=sym_push(ass_474->v,&ass_474->type,0,offset_465+ass_474->c);
                            # 2460 "tccgen.c"
                            *ps_475=ss_473;
                            # 2461 "tccgen.c"
                            ps_475=&ss_473->next;
                        }
                    }
                    # 2463 "tccgen.c"
                    else if(v_460) {
                        # 2464 "tccgen.c"
                        ss_473=sym_push(v_460|536870912,&type1_477,0,offset_465);
                        # 2465 "tccgen.c"
                        *ps_475=ss_473;
                        # 2466 "tccgen.c"
                        ps_475=&ss_473->next;
                    }
                    # 2469 "tccgen.c"
                    # 2468 "tccgen.c"
                    if(_if_conditional669=tok==59||tok==(-1),                    _if_conditional669) {
                        # 2469 "tccgen.c"
                        break;
                    }
                    # 2470 "tccgen.c"
                    skip(44);
                }
                # 2472 "tccgen.c"
                skip(59);
            }
            # 2474 "tccgen.c"
            skip(125);
            # 2476 "tccgen.c"
            s_472->c=(c_464+maxalign_463-1)&-maxalign_463;
            # 2477 "tccgen.c"
            s_472->r=maxalign_463;
        }
    }
    come_call_finalizer3((&ad_476),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static void AttributeDef_finalize(struct AttributeDef* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int parse_btype(struct CType* type, struct AttributeDef* ad){
void* __result_obj__;
int t_479;
int u_480;
int type_found_481;
int typespec_found_482;
int typedef_found_483;
struct Sym* s_484;
struct CType type1_485;
_Bool _while_condtional51;
_Bool _if_conditional670;
_Bool _if_conditional671;
_Bool _elif_conditional155;
_Bool _if_conditional672;
_Bool _if_conditional673;
_Bool _if_conditional674;
_Bool _if_conditional675;
_Bool _if_conditional676;
_Bool _if_conditional677;
_Bool _if_conditional678;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_484, 0, sizeof(struct Sym*));
memset(&type1_485, 0, sizeof(struct CType));
    # 2487 "tccgen.c"
    # 2488 "tccgen.c"
    # 2489 "tccgen.c"
    # 2491 "tccgen.c"
    memset(ad,0,sizeof(struct AttributeDef));
    # 2492 "tccgen.c"
    type_found_481=0;
    # 2493 "tccgen.c"
    typespec_found_482=0;
    # 2494 "tccgen.c"
    typedef_found_483=0;
    # 2495 "tccgen.c"
    t_479=0;
    # 2641 "tccgen.c"
    while(_while_condtional51=1,    _while_condtional51) {
        # 2639 "tccgen.c"
        switch (tok) {
            # 2500 "tccgen.c"
            case 292:
            # 2500 "tccgen.c"
            next();
            # 2501 "tccgen.c"
            continue;
            # 2505 "tccgen.c"
            case 259:
            # 2505 "tccgen.c"
            u_480=1;
            # 2507 "tccgen.c"
            basic_type:
            # 2507 "tccgen.c"
            next();
            # 2509 "tccgen.c"
            basic_type1:
            # 2510 "tccgen.c"
            # 2509 "tccgen.c"
            if(_if_conditional670=(t_479&15)!=0,            _if_conditional670) {
                # 2510 "tccgen.c"
                error("too many basic types");
            }
            # 2511 "tccgen.c"
            t_479|=u_480;
            # 2512 "tccgen.c"
            typespec_found_482=1;
            # 2513 "tccgen.c"
            break;
            # 2515 "tccgen.c"
            case 258:
            # 2515 "tccgen.c"
            u_480=3;
            # 2516 "tccgen.c"
            goto basic_type;
            # 2518 "tccgen.c"
            case 296:
            # 2518 "tccgen.c"
            u_480=2;
            # 2519 "tccgen.c"
            goto basic_type;
            # 2521 "tccgen.c"
            case 257:
            # 2521 "tccgen.c"
            next();
            # 2522 "tccgen.c"
            typespec_found_482=1;
            # 2523 "tccgen.c"
            break;
            # 2525 "tccgen.c"
            case 280:
            # 2525 "tccgen.c"
            next();
            # 2534 "tccgen.c"
            # 2526 "tccgen.c"
            if(_if_conditional671=(t_479&15)==9,            _if_conditional671) {
                # 2527 "tccgen.c"
                t_479=(t_479&~15)|10;
            }
            # 2528 "tccgen.c"
            else if(_elif_conditional155=(t_479&15)==13,            _elif_conditional155) {
                # 2529 "tccgen.c"
                t_479=(t_479&~15)|12;
            }
            else {
                # 2531 "tccgen.c"
                u_480=13;
                # 2532 "tccgen.c"
                goto basic_type1;
            }
            # 2534 "tccgen.c"
            break;
            # 2536 "tccgen.c"
            case 295:
            # 2536 "tccgen.c"
            u_480=11;
            # 2537 "tccgen.c"
            goto basic_type;
            # 2539 "tccgen.c"
            case 293:
            # 2539 "tccgen.c"
            u_480=8;
            # 2540 "tccgen.c"
            goto basic_type;
            # 2542 "tccgen.c"
            case 294:
            # 2542 "tccgen.c"
            next();
            # 2549 "tccgen.c"
            # 2543 "tccgen.c"
            if(_if_conditional672=(t_479&15)==13,            _if_conditional672) {
                # 2544 "tccgen.c"
                t_479=(t_479&~15)|10;
            }
            else {
                # 2546 "tccgen.c"
                u_480=9;
                # 2547 "tccgen.c"
                goto basic_type1;
            }
            # 2549 "tccgen.c"
            break;
            # 2551 "tccgen.c"
            case 301:
            # 2551 "tccgen.c"
            struct_decl(&type1_485,5);
            # 2553 "tccgen.c"
            basic_type2:
            # 2553 "tccgen.c"
            u_480=type1_485.t;
            # 2554 "tccgen.c"
            type->ref=type1_485.ref;
            # 2555 "tccgen.c"
            goto basic_type1;
            # 2557 "tccgen.c"
            case 297:
            # 2558 "tccgen.c"
            case 298:
            # 2558 "tccgen.c"
            struct_decl(&type1_485,7);
            # 2559 "tccgen.c"
            goto basic_type2;
            # 2563 "tccgen.c"
            case 274:
            # 2564 "tccgen.c"
            case 275:
            # 2565 "tccgen.c"
            case 276:
            # 2565 "tccgen.c"
            t_479|=2048;
            # 2566 "tccgen.c"
            next();
            # 2567 "tccgen.c"
            break;
            # 2569 "tccgen.c"
            case 277:
            # 2570 "tccgen.c"
            case 278:
            # 2571 "tccgen.c"
            case 279:
            # 2571 "tccgen.c"
            t_479|=4096;
            # 2572 "tccgen.c"
            next();
            # 2573 "tccgen.c"
            break;
            # 2575 "tccgen.c"
            case 282:
            # 2576 "tccgen.c"
            case 283:
            # 2577 "tccgen.c"
            case 284:
            # 2577 "tccgen.c"
            typespec_found_482=1;
            # 2578 "tccgen.c"
            t_479|=8192;
            # 2579 "tccgen.c"
            next();
            # 2580 "tccgen.c"
            break;
            # 2582 "tccgen.c"
            case 281:
            # 2583 "tccgen.c"
            case 285:
            # 2584 "tccgen.c"
            case 289:
            # 2585 "tccgen.c"
            case 290:
            # 2586 "tccgen.c"
            case 291:
            # 2586 "tccgen.c"
            next();
            # 2587 "tccgen.c"
            break;
            # 2589 "tccgen.c"
            case 268:
            # 2589 "tccgen.c"
            t_479|=16;
            # 2590 "tccgen.c"
            next();
            # 2591 "tccgen.c"
            typespec_found_482=1;
            # 2592 "tccgen.c"
            break;
            # 2596 "tccgen.c"
            case 266:
            # 2596 "tccgen.c"
            t_479|=128;
            # 2597 "tccgen.c"
            next();
            # 2598 "tccgen.c"
            break;
            # 2600 "tccgen.c"
            case 267:
            # 2600 "tccgen.c"
            t_479|=256;
            # 2601 "tccgen.c"
            next();
            # 2602 "tccgen.c"
            break;
            # 2604 "tccgen.c"
            case 299:
            # 2604 "tccgen.c"
            t_479|=512;
            # 2605 "tccgen.c"
            next();
            # 2606 "tccgen.c"
            break;
            # 2608 "tccgen.c"
            case 286:
            # 2609 "tccgen.c"
            case 287:
            # 2610 "tccgen.c"
            case 288:
            # 2610 "tccgen.c"
            t_479|=1024;
            # 2611 "tccgen.c"
            next();
            # 2612 "tccgen.c"
            break;
            # 2616 "tccgen.c"
            case 303:
            # 2617 "tccgen.c"
            case 304:
            # 2617 "tccgen.c"
            parse_attribute(ad);
            # 2618 "tccgen.c"
            break;
            # 2621 "tccgen.c"
            case 307:
            # 2622 "tccgen.c"
            case 308:
            # 2623 "tccgen.c"
            case 309:
            # 2623 "tccgen.c"
            next();
            # 2624 "tccgen.c"
            parse_expr_type(&type1_485);
            # 2625 "tccgen.c"
            goto basic_type2;
            # 2627 "tccgen.c"
            default:
            # 2628 "tccgen.c"
            # 2627 "tccgen.c"
            if(_if_conditional673=typespec_found_482||typedef_found_483,            _if_conditional673) {
                # 2628 "tccgen.c"
                goto the_end;
            }
            # 2629 "tccgen.c"
            s_484=sym_find(tok);
            # 2631 "tccgen.c"
            # 2630 "tccgen.c"
            if(_if_conditional674=!s_484||!(s_484->type.t&512),            _if_conditional674) {
                # 2631 "tccgen.c"
                goto the_end;
            }
            # 2632 "tccgen.c"
            typedef_found_483=1;
            # 2633 "tccgen.c"
            t_479|=(s_484->type.t&~512);
            # 2634 "tccgen.c"
            type->ref=s_484->type.ref;
            # 2635 "tccgen.c"
            next();
            # 2636 "tccgen.c"
            typespec_found_482=1;
            # 2637 "tccgen.c"
            break;
        }
        # 2639 "tccgen.c"
        type_found_481=1;
    }
    # 2642 "tccgen.c"
    the_end:
    # 2643 "tccgen.c"
    # 2642 "tccgen.c"
    if(_if_conditional675=(t_479&(8192|16))==(8192|16),    _if_conditional675) {
        # 2643 "tccgen.c"
        error("signed and unsigned modifier");
    }
    # 2648 "tccgen.c"
    # 2644 "tccgen.c"
    if(tcc_state->char_is_unsigned) {
        # 2647 "tccgen.c"
        # 2645 "tccgen.c"
        if(_if_conditional677=(t_479&(8192|16|15))==1,        _if_conditional677) {
            # 2646 "tccgen.c"
            t_479|=16;
        }
    }
    # 2648 "tccgen.c"
    t_479&=~8192;
    # 2655 "tccgen.c"
    # 2651 "tccgen.c"
    if(_if_conditional678=(t_479&15)==13,    _if_conditional678) {
        # 2655 "tccgen.c"
        t_479=(t_479&~15)|12;
    }
    # 2657 "tccgen.c"
    type->t=t_479;
    # 2658 "tccgen.c"
    __result140__ = type_found_481;
    come_call_finalizer3((&type1_485),CType_finalize, 1, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer3((&type1_485),CType_finalize, 1, 0, 0, 0, (void*)0);
}


static void post_type(struct CType* type, struct AttributeDef* ad){
void* __result_obj__;
int n_486;
int l_487;
int t1_488;
int arg_size_489;
int align_490;
struct Sym** plast_491;
struct Sym* s_492;
struct Sym* first_493;
struct AttributeDef ad1_494;
struct CType pt_495;
_Bool _if_conditional680;
_Bool _if_conditional681;
_Bool _if_conditional682;
_Bool _if_conditional683;
_Bool _if_conditional684;
_Bool _if_conditional685;
_Bool _if_conditional686;
_Bool _if_conditional687;
_Bool _if_conditional688;
_Bool _if_conditional689;
_Bool _if_conditional690;
_Bool _elif_conditional156;
_Bool _if_conditional691;
_Bool _if_conditional692;
_Bool _if_conditional693;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ad1_494, 0, sizeof(struct AttributeDef));
memset(&pt_495, 0, sizeof(struct CType));
    # 2677 "tccgen.c"
    # 2678 "tccgen.c"
    # 2679 "tccgen.c"
    # 2680 "tccgen.c"
    # 2768 "tccgen.c"
    # 2682 "tccgen.c"
    if(_if_conditional680=tok==40,    _if_conditional680) {
        # 2684 "tccgen.c"
        next();
        # 2685 "tccgen.c"
        l_487=0;
        # 2686 "tccgen.c"
        first_493=((void*)0);
        # 2687 "tccgen.c"
        plast_491=&first_493;
        # 2688 "tccgen.c"
        arg_size_489=0;
        # 2731 "tccgen.c"
        # 2689 "tccgen.c"
        if(_if_conditional681=tok!=41,        _if_conditional681) {
            # 2729 "tccgen.c"
            for(            ;            ;            ){
                # 2716 "tccgen.c"
                # 2692 "tccgen.c"
                if(_if_conditional682=l_487!=2,                _if_conditional682) {
                    # 2701 "tccgen.c"
                    # 2693 "tccgen.c"
                    if(_if_conditional683=!parse_btype(&pt_495,&ad1_494),                    _if_conditional683) {
                        # 2700 "tccgen.c"
                        # 2694 "tccgen.c"
                        if(l_487) {
                            # 2695 "tccgen.c"
                            error("invalid type");
                        }
                        else {
                            # 2697 "tccgen.c"
                            l_487=2;
                            # 2698 "tccgen.c"
                            goto old_proto;
                        }
                    }
                    # 2701 "tccgen.c"
                    l_487=1;
                    # 2703 "tccgen.c"
                    # 2702 "tccgen.c"
                    if(_if_conditional685=(pt_495.t&15)==3&&tok==41,                    _if_conditional685) {
                        # 2703 "tccgen.c"
                        break;
                    }
                    # 2704 "tccgen.c"
                    type_decl(&pt_495,&ad1_494,&n_486,2|1);
                    # 2706 "tccgen.c"
                    # 2705 "tccgen.c"
                    if(_if_conditional686=(pt_495.t&15)==3,                    _if_conditional686) {
                        # 2706 "tccgen.c"
                        error("parameter declared as void");
                    }
                    # 2707 "tccgen.c"
                    arg_size_489+=(type_size(&pt_495,&align_490)+3)&~3;
                }
                else {
                    # 2710 "tccgen.c"
                    old_proto:
                    # 2710 "tccgen.c"
                    n_486=tok;
                    # 2712 "tccgen.c"
                    # 2711 "tccgen.c"
                    if(_if_conditional687=n_486<314,                    _if_conditional687) {
                        # 2712 "tccgen.c"
                        expect("identifier");
                    }
                    # 2713 "tccgen.c"
                    pt_495.t=0;
                    # 2714 "tccgen.c"
                    next();
                }
                # 2716 "tccgen.c"
                convert_parameter_type(&pt_495);
                # 2717 "tccgen.c"
                s_492=sym_push(n_486|536870912,&pt_495,0,0);
                # 2718 "tccgen.c"
                *plast_491=s_492;
                # 2719 "tccgen.c"
                plast_491=&s_492->next;
                # 2721 "tccgen.c"
                # 2720 "tccgen.c"
                if(_if_conditional688=tok==41,                _if_conditional688) {
                    # 2721 "tccgen.c"
                    break;
                }
                # 2722 "tccgen.c"
                skip(44);
                # 2728 "tccgen.c"
                # 2723 "tccgen.c"
                if(_if_conditional689=l_487==1&&tok==204,                _if_conditional689) {
                    # 2724 "tccgen.c"
                    l_487=3;
                    # 2725 "tccgen.c"
                    next();
                    # 2726 "tccgen.c"
                    break;
                }
            }
        }
        # 2732 "tccgen.c"
        # 2731 "tccgen.c"
        if(_if_conditional690=l_487==0,        _if_conditional690) {
            # 2732 "tccgen.c"
            l_487=2;
        }
        # 2733 "tccgen.c"
        skip(41);
        # 2734 "tccgen.c"
        t1_488=type->t&(128|256|512|1024);
        # 2737 "tccgen.c"
        type->t&=~((128|256|512|1024)|2048);
        # 2738 "tccgen.c"
        post_type(type,ad);
        # 2740 "tccgen.c"
        (((struct anonymous_typeX107*)&(ad->func_attr))->func_args)=arg_size_489;
        # 2741 "tccgen.c"
        s_492=sym_push(536870912,type,ad->func_attr,l_487);
        # 2742 "tccgen.c"
        s_492->next=first_493;
        # 2743 "tccgen.c"
        type->t=t1_488|6;
        # 2744 "tccgen.c"
        type->ref=s_492;
    }
    # 2745 "tccgen.c"
    else if(_elif_conditional156=tok==91,    _elif_conditional156) {
        # 2747 "tccgen.c"
        next();
        # 2749 "tccgen.c"
        # 2748 "tccgen.c"
        if(_if_conditional691=tok==289,        _if_conditional691) {
            # 2749 "tccgen.c"
            next();
        }
        # 2750 "tccgen.c"
        n_486=-1;
        # 2756 "tccgen.c"
        # 2751 "tccgen.c"
        if(_if_conditional692=tok!=93,        _if_conditional692) {
            # 2752 "tccgen.c"
            n_486=expr_const();
            # 2755 "tccgen.c"
            # 2753 "tccgen.c"
            if(_if_conditional693=n_486<0,            _if_conditional693) {
                # 2754 "tccgen.c"
                error("invalid array size");
            }
        }
        # 2756 "tccgen.c"
        skip(93);
        # 2758 "tccgen.c"
        t1_488=type->t&(128|256|512|1024);
        # 2759 "tccgen.c"
        type->t&=~(128|256|512|1024);
        # 2760 "tccgen.c"
        post_type(type,ad);
        # 2764 "tccgen.c"
        s_492=sym_push(536870912,type,0,n_486);
        # 2765 "tccgen.c"
        type->t=t1_488|32|4;
        # 2766 "tccgen.c"
        type->ref=s_492;
    }
    come_call_finalizer3((&ad1_494),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&pt_495),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void type_decl(struct CType* type, struct AttributeDef* ad, int* v, int td){
void* __result_obj__;
struct Sym* s_496;
struct CType type1_497;
struct CType* type2_498;
int qualifiers_499;
_Bool _while_condtional52;
_Bool _if_conditional694;
_Bool _if_conditional695;
_Bool _if_conditional696;
_Bool _if_conditional697;
_Bool _if_conditional698;
_Bool _if_conditional699;
_Bool _if_conditional700;
_Bool _if_conditional701;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_496, 0, sizeof(struct Sym*));
memset(&qualifiers_499, 0, sizeof(int));
    # 2778 "tccgen.c"
    # 2779 "tccgen.c"
    # 2780 "tccgen.c"
    # 2807 "tccgen.c"
    while(_while_condtional52=tok==42,    _while_condtional52) {
        # 2783 "tccgen.c"
        qualifiers_499=0;
        # 2785 "tccgen.c"
        redo:
        # 2785 "tccgen.c"
        next();
        # 2802 "tccgen.c"
        switch (tok) {
            # 2788 "tccgen.c"
            case 274:
            # 2789 "tccgen.c"
            case 275:
            # 2790 "tccgen.c"
            case 276:
            # 2790 "tccgen.c"
            qualifiers_499|=2048;
            # 2791 "tccgen.c"
            goto redo;
            # 2793 "tccgen.c"
            case 277:
            # 2794 "tccgen.c"
            case 278:
            # 2795 "tccgen.c"
            case 279:
            # 2795 "tccgen.c"
            qualifiers_499|=4096;
            # 2796 "tccgen.c"
            goto redo;
            # 2798 "tccgen.c"
            case 289:
            # 2799 "tccgen.c"
            case 290:
            # 2800 "tccgen.c"
            case 291:
            # 2800 "tccgen.c"
            goto redo;
        }
        # 2802 "tccgen.c"
        mk_pointer(type);
        # 2803 "tccgen.c"
        type->t|=qualifiers_499;
    }
    # 2808 "tccgen.c"
    # 2807 "tccgen.c"
    if(_if_conditional694=tok==303||tok==304,    _if_conditional694) {
        # 2808 "tccgen.c"
        parse_attribute(ad);
    }
    # 2812 "tccgen.c"
    type1_497.t=0;
    # 2832 "tccgen.c"
    # 2813 "tccgen.c"
    if(_if_conditional695=tok==40,    _if_conditional695) {
        # 2814 "tccgen.c"
        next();
        # 2818 "tccgen.c"
        # 2817 "tccgen.c"
        if(_if_conditional696=tok==303||tok==304,        _if_conditional696) {
            # 2818 "tccgen.c"
            parse_attribute(ad);
        }
        # 2819 "tccgen.c"
        type_decl(&type1_497,ad,v,td);
        # 2820 "tccgen.c"
        skip(41);
    }
    else {
        # 2831 "tccgen.c"
        # 2823 "tccgen.c"
        if(_if_conditional697=tok>=256&&(td&2),        _if_conditional697) {
            # 2824 "tccgen.c"
            *v=tok;
            # 2825 "tccgen.c"
            next();
        }
        else {
            # 2829 "tccgen.c"
            # 2827 "tccgen.c"
            if(_if_conditional698=!(td&1),            _if_conditional698) {
                # 2828 "tccgen.c"
                expect("identifier");
            }
            # 2829 "tccgen.c"
            *v=0;
        }
    }
    # 2832 "tccgen.c"
    post_type(type,ad);
    # 2834 "tccgen.c"
    # 2833 "tccgen.c"
    if(_if_conditional699=tok==303||tok==304,    _if_conditional699) {
        # 2834 "tccgen.c"
        parse_attribute(ad);
    }
    # 2836 "tccgen.c"
    # 2835 "tccgen.c"
    if(_if_conditional700=!type1_497.t,    _if_conditional700) {
        # 2836 "tccgen.c"
        return;
    }
    # 2838 "tccgen.c"
    type2_498=&type1_497;
    # 2847 "tccgen.c"
    for(    ;    ;    ){
        # 2840 "tccgen.c"
        s_496=type2_498->ref;
        # 2841 "tccgen.c"
        type2_498=&s_496->type;
        # 2846 "tccgen.c"
        # 2842 "tccgen.c"
        if(_if_conditional701=!type2_498->t,        _if_conditional701) {
            # 2843 "tccgen.c"
            *type2_498=*type;
            # 2844 "tccgen.c"
            break;
        }
    }
    # 2847 "tccgen.c"
    *type=type1_497;
}

static int lvalue_type(int t){
void* __result_obj__;
int bt_500;
int r_501;
_Bool _if_conditional702;
_Bool _elif_conditional157;
int __result141__;
_Bool _if_conditional703;
int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2853 "tccgen.c"
    # 2854 "tccgen.c"
    r_501=256;
    # 2855 "tccgen.c"
    bt_500=t&15;
    # 2861 "tccgen.c"
    # 2856 "tccgen.c"
    if(_if_conditional702=bt_500==1||bt_500==11,    _if_conditional702) {
        # 2857 "tccgen.c"
        r_501|=4096;
    }
    # 2858 "tccgen.c"
    else if(_elif_conditional157=bt_500==2,    _elif_conditional157) {
        # 2859 "tccgen.c"
        r_501|=8192;
    }
    else {
        # 2861 "tccgen.c"
        __result141__ = r_501;
        return __result141__;
    }
    # 2863 "tccgen.c"
    # 2862 "tccgen.c"
    if(_if_conditional703=t&16,    _if_conditional703) {
        # 2863 "tccgen.c"
        r_501|=16384;
    }
    # 2864 "tccgen.c"
    __result142__ = r_501;
    return __result142__;
}

static void indir(){
void* __result_obj__;
_Bool _if_conditional704;
_Bool _if_conditional705;
_Bool _if_conditional706;
_Bool _if_conditional707;
_Bool _if_conditional708;
memset(&__result_obj__, 0, sizeof(void*));
    # 2875 "tccgen.c"
    # 2870 "tccgen.c"
    if(_if_conditional704=(vtop->type.t&15)!=4,    _if_conditional704) {
        # 2872 "tccgen.c"
        # 2871 "tccgen.c"
        if(_if_conditional705=(vtop->type.t&15)==6,        _if_conditional705) {
            # 2872 "tccgen.c"
            return;
        }
        # 2873 "tccgen.c"
        expect("pointer");
    }
    # 2876 "tccgen.c"
    # 2875 "tccgen.c"
    if(_if_conditional706=(vtop->r&256)&&!nocode_wanted,    _if_conditional706) {
        # 2876 "tccgen.c"
        gv(1);
    }
    # 2877 "tccgen.c"
    vtop->type=*pointed_type(&vtop->type);
    # 2886 "tccgen.c"
    # 2880 "tccgen.c"
    if(_if_conditional707=!(vtop->type.t&32)&&(vtop->type.t&15)!=6,    _if_conditional707) {
        # 2881 "tccgen.c"
        vtop->r|=lvalue_type(vtop->type.t);
        # 2885 "tccgen.c"
        # 2883 "tccgen.c"
        if(tcc_state->do_bounds_check) {
            # 2884 "tccgen.c"
            vtop->r|=2048;
        }
    }
}

static void gfunc_param_typed(struct Sym* func, struct Sym* arg){
void* __result_obj__;
int func_type_502;
struct CType type_503;
_Bool _if_conditional709;
_Bool _if_conditional710;
_Bool _elif_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
memset(&func_type_502, 0, sizeof(int));
memset(&type_503, 0, sizeof(struct CType));
    # 2891 "tccgen.c"
    # 2892 "tccgen.c"
    # 2894 "tccgen.c"
    func_type_502=func->c;
    # 2909 "tccgen.c"
    # 2896 "tccgen.c"
    if(_if_conditional709=func_type_502==2||(func_type_502==3&&arg==((void*)0)),    _if_conditional709) {
        # 2902 "tccgen.c"
        # 2898 "tccgen.c"
        if(_if_conditional710=(vtop->type.t&15)==8,        _if_conditional710) {
            # 2899 "tccgen.c"
            type_503.t=9;
            # 2900 "tccgen.c"
            gen_cast(&type_503);
        }
    }
    # 2902 "tccgen.c"
    else if(_elif_conditional158=arg==((void*)0),    _elif_conditional158) {
        # 2903 "tccgen.c"
        error("too many arguments to function");
    }
    else {
        # 2905 "tccgen.c"
        type_503=arg->type;
        # 2906 "tccgen.c"
        type_503.t&=~2048;
        # 2907 "tccgen.c"
        gen_assign_cast(&type_503);
    }
    come_call_finalizer3((&type_503),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void parse_expr_type(struct CType* type){
void* __result_obj__;
int n_504;
struct AttributeDef ad_505;
_Bool _if_conditional711;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_504, 0, sizeof(int));
memset(&ad_505, 0, sizeof(struct AttributeDef));
    # 2915 "tccgen.c"
    # 2916 "tccgen.c"
    # 2918 "tccgen.c"
    skip(40);
    # 2924 "tccgen.c"
    # 2919 "tccgen.c"
    if(_if_conditional711=parse_btype(type,&ad_505),    _if_conditional711) {
        # 2920 "tccgen.c"
        type_decl(type,&ad_505,&n_504,1);
    }
    else {
        # 2922 "tccgen.c"
        expr_type(type);
    }
    # 2924 "tccgen.c"
    skip(41);
    come_call_finalizer3((&ad_505),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static void parse_type(struct CType* type){
void* __result_obj__;
struct AttributeDef ad_506;
int n_507;
_Bool _if_conditional712;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ad_506, 0, sizeof(struct AttributeDef));
memset(&n_507, 0, sizeof(int));
    # 2929 "tccgen.c"
    # 2930 "tccgen.c"
    # 2935 "tccgen.c"
    # 2932 "tccgen.c"
    if(_if_conditional712=!parse_btype(type,&ad_506),    _if_conditional712) {
        # 2933 "tccgen.c"
        expect("type");
    }
    # 2935 "tccgen.c"
    type_decl(type,&ad_506,&n_507,1);
    come_call_finalizer3((&ad_506),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static void vpush_tokc(int t){
void* __result_obj__;
struct CType type_508;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_508, 0, sizeof(struct CType));
    # 2940 "tccgen.c"
    # 2941 "tccgen.c"
    type_508.t=t;
    # 2942 "tccgen.c"
    vsetc(&type_508,240,&tokc);
    come_call_finalizer3((&type_508),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void unary(){
void* __result_obj__;
int n_509;
int t_510;
int align_511;
int size_512;
int r_513;
struct CType type_514;
struct Sym* s_515;
struct AttributeDef ad_516;
_Bool _if_conditional713;
void* ptr_517;
int len_518;
_Bool _if_conditional714;
_Bool _if_conditional715;
_Bool _if_conditional716;
_Bool _if_conditional717;
_Bool _if_conditional718;
_Bool _elif_conditional159;
_Bool _if_conditional719;
_Bool _if_conditional720;
struct CType boolean_519;
_Bool _elif_conditional160;
_Bool _if_conditional721;
_Bool _if_conditional722;
_Bool _if_conditional723;
_Bool _if_conditional724;
struct CType type1_520;
struct CType type2_521;
int saved_nocode_wanted_522;
int res_523;
struct CType type_524;
_Bool _if_conditional725;
_Bool _if_conditional726;
_Bool _if_conditional727;
_Bool _if_conditional728;
_Bool _if_conditional729;
_Bool _if_conditional730;
_Bool _if_conditional731;
_Bool _if_conditional732;
_Bool _if_conditional733;
_Bool _if_conditional734;
_Bool _if_conditional735;
_Bool _if_conditional736;
_Bool _if_conditional737;
_Bool _if_conditional738;
_Bool _while_condtional53;
_Bool _if_conditional739;
_Bool _elif_conditional161;
_Bool _if_conditional740;
_Bool _if_conditional741;
_Bool _while_condtional54;
_Bool _if_conditional742;
_Bool _if_conditional743;
_Bool _if_conditional744;
_Bool _if_conditional745;
_Bool _elif_conditional162;
_Bool _elif_conditional163;
struct SValue ret_525;
struct Sym* sa_526;
int nb_args_527;
_Bool _if_conditional746;
_Bool _if_conditional747;
_Bool _if_conditional748;
_Bool _if_conditional749;
_Bool _if_conditional750;
_Bool _if_conditional751;
_Bool _if_conditional752;
_Bool _if_conditional753;
_Bool _if_conditional754;
_Bool _if_conditional755;
_Bool _if_conditional756;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_514, 0, sizeof(struct CType));
memset(&s_515, 0, sizeof(struct Sym*));
memset(&ad_516, 0, sizeof(struct AttributeDef));
memset(&ptr_517, 0, sizeof(void*));
memset(&len_518, 0, sizeof(int));
memset(&boolean_519, 0, sizeof(struct CType));
memset(&type_524, 0, sizeof(struct CType));
memset(&ret_525, 0, sizeof(struct SValue));
memset(&sa_526, 0, sizeof(struct Sym*));
memset(&nb_args_527, 0, sizeof(int));
    # 2947 "tccgen.c"
    # 2948 "tccgen.c"
    # 2949 "tccgen.c"
    # 2950 "tccgen.c"
    # 2955 "tccgen.c"
    tok_next:
    # 3264 "tccgen.c"
    switch (tok) {
        # 2957 "tccgen.c"
        case 292:
        # 2957 "tccgen.c"
        next();
        # 2958 "tccgen.c"
        goto tok_next;
        # 2960 "tccgen.c"
        case 179:
        # 2961 "tccgen.c"
        case 180:
        # 2962 "tccgen.c"
        case 183:
        # 2962 "tccgen.c"
        vpushi(tokc.i);
        # 2963 "tccgen.c"
        next();
        # 2964 "tccgen.c"
        break;
        # 2966 "tccgen.c"
        case 200:
        # 2966 "tccgen.c"
        vpush_tokc(0|16);
        # 2967 "tccgen.c"
        next();
        # 2968 "tccgen.c"
        break;
        # 2970 "tccgen.c"
        case 201:
        # 2970 "tccgen.c"
        vpush_tokc(12);
        # 2971 "tccgen.c"
        next();
        # 2972 "tccgen.c"
        break;
        # 2974 "tccgen.c"
        case 202:
        # 2974 "tccgen.c"
        vpush_tokc(12|16);
        # 2975 "tccgen.c"
        next();
        # 2976 "tccgen.c"
        break;
        # 2978 "tccgen.c"
        case 185:
        # 2978 "tccgen.c"
        vpush_tokc(8);
        # 2979 "tccgen.c"
        next();
        # 2980 "tccgen.c"
        break;
        # 2982 "tccgen.c"
        case 192:
        # 2982 "tccgen.c"
        vpush_tokc(9);
        # 2983 "tccgen.c"
        next();
        # 2984 "tccgen.c"
        break;
        # 2986 "tccgen.c"
        case 193:
        # 2986 "tccgen.c"
        vpush_tokc(10);
        # 2987 "tccgen.c"
        next();
        # 2988 "tccgen.c"
        break;
        # 2990 "tccgen.c"
        case 331:
        # 2991 "tccgen.c"
        # 2990 "tccgen.c"
        if(_if_conditional713=!gnu_ext,        _if_conditional713) {
            # 2991 "tccgen.c"
            goto tok_identifier;
        }
        # 2994 "tccgen.c"
        case 333:
        # 3009 "tccgen.c"
        {
            # 2995 "tccgen.c"
            # 2996 "tccgen.c"
            # 2998 "tccgen.c"
            len_518=strlen(funcname)+1;
            # 3000 "tccgen.c"
            type_514.t=1;
            # 3001 "tccgen.c"
            mk_pointer(&type_514);
            # 3002 "tccgen.c"
            type_514.t|=32;
            # 3003 "tccgen.c"
            type_514.ref->c=len_518;
            # 3004 "tccgen.c"
            vpush_ref(&type_514,data_section,data_section->data_offset,len_518);
            # 3005 "tccgen.c"
            ptr_517=section_ptr_add(data_section,len_518);
            # 3006 "tccgen.c"
            memcpy(ptr_517,funcname,len_518);
            # 3007 "tccgen.c"
            next();
        }
        # 3009 "tccgen.c"
        break;
        # 3014 "tccgen.c"
        case 184:
        # 3014 "tccgen.c"
        t_510=0;
        # 3016 "tccgen.c"
        goto str_init;
        # 3019 "tccgen.c"
        case 181:
        # 3019 "tccgen.c"
        t_510=1;
        # 3021 "tccgen.c"
        str_init:
        # 3022 "tccgen.c"
        # 3021 "tccgen.c"
        if(tcc_state->warn_write_strings) {
            # 3022 "tccgen.c"
            t_510|=2048;
        }
        # 3023 "tccgen.c"
        type_514.t=t_510;
        # 3024 "tccgen.c"
        mk_pointer(&type_514);
        # 3025 "tccgen.c"
        type_514.t|=32;
        # 3026 "tccgen.c"
        memset(&ad_516,0,sizeof(struct AttributeDef));
        # 3027 "tccgen.c"
        decl_initializer_alloc(&type_514,&ad_516,240,2,0,0);
        # 3028 "tccgen.c"
        break;
        # 3030 "tccgen.c"
        case 40:
        # 3030 "tccgen.c"
        next();
        # 3062 "tccgen.c"
        # 3032 "tccgen.c"
        if(_if_conditional715=parse_btype(&type_514,&ad_516),        _if_conditional715) {
            # 3033 "tccgen.c"
            type_decl(&type_514,&ad_516,&n_509,1);
            # 3034 "tccgen.c"
            skip(41);
            # 3051 "tccgen.c"
            # 3036 "tccgen.c"
            if(_if_conditional716=tok==123,            _if_conditional716) {
                # 3041 "tccgen.c"
                # 3038 "tccgen.c"
                if(global_expr) {
                    # 3039 "tccgen.c"
                    r_513=240;
                }
                else {
                    # 3041 "tccgen.c"
                    r_513=242;
                }
                # 3044 "tccgen.c"
                # 3043 "tccgen.c"
                if(_if_conditional718=!(type_514.t&32),                _if_conditional718) {
                    # 3044 "tccgen.c"
                    r_513|=lvalue_type(type_514.t);
                }
                # 3045 "tccgen.c"
                memset(&ad_516,0,sizeof(struct AttributeDef));
                # 3046 "tccgen.c"
                decl_initializer_alloc(&type_514,&ad_516,r_513,1,0,0);
            }
            else {
                # 3048 "tccgen.c"
                unary();
                # 3049 "tccgen.c"
                gen_cast(&type_514);
            }
        }
        # 3051 "tccgen.c"
        else if(_elif_conditional159=tok==123,        _elif_conditional159) {
            # 3053 "tccgen.c"
            save_regs(0);
            # 3056 "tccgen.c"
            block(((void*)0),((void*)0),((void*)0),((void*)0),0,1);
            # 3057 "tccgen.c"
            skip(41);
        }
        else {
            # 3059 "tccgen.c"
            gexpr();
            # 3060 "tccgen.c"
            skip(41);
        }
        # 3062 "tccgen.c"
        break;
        # 3064 "tccgen.c"
        case 42:
        # 3064 "tccgen.c"
        next();
        # 3065 "tccgen.c"
        unary();
        # 3066 "tccgen.c"
        indir();
        # 3067 "tccgen.c"
        break;
        # 3069 "tccgen.c"
        case 38:
        # 3069 "tccgen.c"
        next();
        # 3070 "tccgen.c"
        unary();
        # 3078 "tccgen.c"
        # 3077 "tccgen.c"
        if(_if_conditional719=(vtop->type.t&15)!=6&&!(vtop->type.t&32)&&!(vtop->type.t&241),        _if_conditional719) {
            # 3078 "tccgen.c"
            test_lvalue();
        }
        # 3079 "tccgen.c"
        mk_pointer(&vtop->type);
        # 3080 "tccgen.c"
        gaddrof();
        # 3081 "tccgen.c"
        break;
        # 3083 "tccgen.c"
        case 33:
        # 3083 "tccgen.c"
        next();
        # 3084 "tccgen.c"
        unary();
        # 3096 "tccgen.c"
        # 3085 "tccgen.c"
        if(_if_conditional720=(vtop->r&(255|256|512))==240,        _if_conditional720) {
            # 3086 "tccgen.c"
            # 3087 "tccgen.c"
            boolean_519.t=11;
            # 3088 "tccgen.c"
            gen_cast(&boolean_519);
            # 3089 "tccgen.c"
            vtop->c.i=!vtop->c.i;
            come_call_finalizer3((&boolean_519),CType_finalize, 1, 0, 0, 0, (void*)0);
        }
        # 3090 "tccgen.c"
        else if(_elif_conditional160=(vtop->r&255)==243,        _elif_conditional160) {
            # 3091 "tccgen.c"
            vtop->c.i=vtop->c.i^1;
        }
        else {
            # 3093 "tccgen.c"
            save_regs(1);
            # 3094 "tccgen.c"
            vseti(244,gtst(1,0));
        }
        # 3096 "tccgen.c"
        break;
        # 3098 "tccgen.c"
        case 126:
        # 3098 "tccgen.c"
        next();
        # 3099 "tccgen.c"
        unary();
        # 3100 "tccgen.c"
        vpushi(-1);
        # 3101 "tccgen.c"
        gen_op(94);
        # 3102 "tccgen.c"
        break;
        # 3104 "tccgen.c"
        case 43:
        # 3104 "tccgen.c"
        next();
        # 3106 "tccgen.c"
        unary();
        # 3108 "tccgen.c"
        # 3107 "tccgen.c"
        if(_if_conditional721=(vtop->type.t&15)==4,        _if_conditional721) {
            # 3108 "tccgen.c"
            error("pointer not accepted for unary plus");
        }
        # 3109 "tccgen.c"
        vpushi(0);
        # 3110 "tccgen.c"
        gen_op(43);
        # 3111 "tccgen.c"
        break;
        # 3113 "tccgen.c"
        case 302:
        # 3114 "tccgen.c"
        case 305:
        # 3115 "tccgen.c"
        case 306:
        # 3115 "tccgen.c"
        t_510=tok;
        # 3116 "tccgen.c"
        next();
        # 3122 "tccgen.c"
        # 3117 "tccgen.c"
        if(_if_conditional722=tok==40,        _if_conditional722) {
            # 3118 "tccgen.c"
            parse_expr_type(&type_514);
        }
        else {
            # 3120 "tccgen.c"
            unary_type(&type_514);
        }
        # 3122 "tccgen.c"
        size_512=type_size(&type_514,&align_511);
        # 3130 "tccgen.c"
        # 3123 "tccgen.c"
        if(_if_conditional723=t_510==302,        _if_conditional723) {
            # 3125 "tccgen.c"
            # 3124 "tccgen.c"
            if(_if_conditional724=size_512<0,            _if_conditional724) {
                # 3125 "tccgen.c"
                error("sizeof applied to an incomplete type");
            }
            # 3126 "tccgen.c"
            vpushi(size_512);
        }
        else {
            # 3128 "tccgen.c"
            vpushi(align_511);
        }
        # 3130 "tccgen.c"
        vtop->type.t|=16;
        # 3131 "tccgen.c"
        break;
        # 3134 "tccgen.c"
        case 354:
        # 3146 "tccgen.c"
        {
            # 3135 "tccgen.c"
            # 3136 "tccgen.c"
            next();
            # 3137 "tccgen.c"
            skip(40);
            # 3138 "tccgen.c"
            parse_type(&type1_520);
            # 3139 "tccgen.c"
            skip(44);
            # 3140 "tccgen.c"
            parse_type(&type2_521);
            # 3141 "tccgen.c"
            skip(41);
            # 3142 "tccgen.c"
            type1_520.t&=~(2048|4096);
            # 3143 "tccgen.c"
            type2_521.t&=~(2048|4096);
            # 3144 "tccgen.c"
            vpushi(is_compatible_types(&type1_520,&type2_521));
        }
        # 3146 "tccgen.c"
        break;
        # 3148 "tccgen.c"
        case 355:
        # 3161 "tccgen.c"
        {
            # 3149 "tccgen.c"
            # 3150 "tccgen.c"
            next();
            # 3151 "tccgen.c"
            skip(40);
            # 3152 "tccgen.c"
            saved_nocode_wanted_522=nocode_wanted;
            # 3153 "tccgen.c"
            nocode_wanted=1;
            # 3154 "tccgen.c"
            gexpr();
            # 3155 "tccgen.c"
            res_523=(vtop->r&(255|256|512))==240;
            # 3156 "tccgen.c"
            vpop();
            # 3157 "tccgen.c"
            nocode_wanted=saved_nocode_wanted_522;
            # 3158 "tccgen.c"
            skip(41);
            # 3159 "tccgen.c"
            vpushi(res_523);
        }
        # 3161 "tccgen.c"
        break;
        # 3163 "tccgen.c"
        case 356:
        # 3179 "tccgen.c"
        {
            # 3164 "tccgen.c"
            # 3165 "tccgen.c"
            next();
            # 3166 "tccgen.c"
            skip(40);
            # 3170 "tccgen.c"
            # 3167 "tccgen.c"
            if(_if_conditional725=tok!=179,            _if_conditional725) {
                # 3168 "tccgen.c"
                error("__builtin_frame_address only takes integers");
            }
            # 3173 "tccgen.c"
            # 3170 "tccgen.c"
            if(_if_conditional726=tokc.i!=0,            _if_conditional726) {
                # 3171 "tccgen.c"
                error("TCC only supports __builtin_frame_address(0)");
            }
            # 3173 "tccgen.c"
            next();
            # 3174 "tccgen.c"
            skip(41);
            # 3175 "tccgen.c"
            type_524.t=3;
            # 3176 "tccgen.c"
            mk_pointer(&type_524);
            # 3177 "tccgen.c"
            vset(&type_524,242,0);
            come_call_finalizer3((&type_524),CType_finalize, 1, 0, 0, 0, (void*)0);
        }
        # 3179 "tccgen.c"
        break;
        # 3182 "tccgen.c"
        case 357:
        # 3182 "tccgen.c"
        tok=359;
        # 3183 "tccgen.c"
        goto tok_identifier;
        # 3185 "tccgen.c"
        case 358:
        # 3185 "tccgen.c"
        tok=360;
        # 3186 "tccgen.c"
        goto tok_identifier;
        # 3189 "tccgen.c"
        case 164:
        # 3190 "tccgen.c"
        case 162:
        # 3190 "tccgen.c"
        t_510=tok;
        # 3191 "tccgen.c"
        next();
        # 3192 "tccgen.c"
        unary();
        # 3193 "tccgen.c"
        inc(0,t_510);
        # 3194 "tccgen.c"
        break;
        # 3196 "tccgen.c"
        case 45:
        # 3196 "tccgen.c"
        next();
        # 3197 "tccgen.c"
        vpushi(0);
        # 3198 "tccgen.c"
        unary();
        # 3199 "tccgen.c"
        gen_op(45);
        # 3200 "tccgen.c"
        break;
        # 3202 "tccgen.c"
        case 160:
        # 3203 "tccgen.c"
        # 3202 "tccgen.c"
        if(_if_conditional727=!gnu_ext,        _if_conditional727) {
            # 3203 "tccgen.c"
            goto tok_identifier;
        }
        # 3204 "tccgen.c"
        next();
        # 3207 "tccgen.c"
        # 3206 "tccgen.c"
        if(_if_conditional728=tok<314,        _if_conditional728) {
            # 3207 "tccgen.c"
            expect("label identifier");
        }
        # 3208 "tccgen.c"
        s_515=label_find(tok);
        # 3215 "tccgen.c"
        # 3209 "tccgen.c"
        if(_if_conditional729=!s_515,        _if_conditional729) {
            # 3210 "tccgen.c"
            s_515=label_push(&global_label_stack,tok,1);
        }
        else {
            # 3214 "tccgen.c"
            # 3212 "tccgen.c"
            if(_if_conditional730=s_515->r==2,            _if_conditional730) {
                # 3213 "tccgen.c"
                s_515->r=1;
            }
        }
        # 3220 "tccgen.c"
        # 3215 "tccgen.c"
        if(_if_conditional731=!s_515->type.t,        _if_conditional731) {
            # 3216 "tccgen.c"
            s_515->type.t=3;
            # 3217 "tccgen.c"
            mk_pointer(&s_515->type);
            # 3218 "tccgen.c"
            s_515->type.t|=256;
        }
        # 3220 "tccgen.c"
        vset(&s_515->type,240|512,0);
        # 3221 "tccgen.c"
        vtop->sym=s_515;
        # 3222 "tccgen.c"
        next();
        # 3223 "tccgen.c"
        break;
        # 3225 "tccgen.c"
        default:
        # 3226 "tccgen.c"
        tok_identifier:
        # 3226 "tccgen.c"
        t_510=tok;
        # 3227 "tccgen.c"
        next();
        # 3229 "tccgen.c"
        # 3228 "tccgen.c"
        if(_if_conditional732=t_510<314,        _if_conditional732) {
            # 3229 "tccgen.c"
            expect("identifier");
        }
        # 3230 "tccgen.c"
        s_515=sym_find(t_510);
        # 3241 "tccgen.c"
        # 3231 "tccgen.c"
        if(_if_conditional733=!s_515,        _if_conditional733) {
            # 3233 "tccgen.c"
            # 3232 "tccgen.c"
            if(_if_conditional734=tok!=40,            _if_conditional734) {
                # 3233 "tccgen.c"
                error("'%s' undeclared",get_tok_str(t_510,((void*)0)));
            }
            # 3238 "tccgen.c"
            # 3236 "tccgen.c"
            if(tcc_state->warn_implicit_function_declaration) {
                # 3238 "tccgen.c"
                warning("implicit declaration of function '%s'",get_tok_str(t_510,((void*)0)));
            }
            # 3239 "tccgen.c"
            s_515=external_global_sym(t_510,&func_old_type,0);
        }
        # 3254 "tccgen.c"
        # 3242 "tccgen.c"
        if(_if_conditional736=(s_515->type.t&(256|1024|15))==(256|1024|6),        _if_conditional736) {
            # 3249 "tccgen.c"
            # 3248 "tccgen.c"
            if(_if_conditional737=!s_515->c,            _if_conditional737) {
                # 3249 "tccgen.c"
                put_extern_sym(s_515,text_section,0,0);
            }
            # 3250 "tccgen.c"
            r_513=512|240;
        }
        else {
            # 3252 "tccgen.c"
            r_513=s_515->r;
        }
        # 3254 "tccgen.c"
        vset(&s_515->type,r_513,s_515->c);
        # 3260 "tccgen.c"
        # 3256 "tccgen.c"
        if(_if_conditional738=vtop->r&512,        _if_conditional738) {
            # 3257 "tccgen.c"
            vtop->sym=s_515;
            # 3258 "tccgen.c"
            vtop->c.ul=0;
        }
        # 3260 "tccgen.c"
        break;
    }
    # 3383 "tccgen.c"
    while(_while_condtional53=1,    _while_condtional53) {
        # 3382 "tccgen.c"
        # 3265 "tccgen.c"
        if(_if_conditional739=tok==164||tok==162,        _if_conditional739) {
            # 3266 "tccgen.c"
            inc(1,tok);
            # 3267 "tccgen.c"
            next();
        }
        # 3268 "tccgen.c"
        else if(_elif_conditional161=tok==46||tok==203,        _elif_conditional161) {
            # 3271 "tccgen.c"
            # 3270 "tccgen.c"
            if(_if_conditional740=tok==203,            _if_conditional740) {
                # 3271 "tccgen.c"
                indir();
            }
            # 3272 "tccgen.c"
            test_lvalue();
            # 3273 "tccgen.c"
            gaddrof();
            # 3274 "tccgen.c"
            next();
            # 3277 "tccgen.c"
            # 3276 "tccgen.c"
            if(_if_conditional741=(vtop->type.t&15)!=7,            _if_conditional741) {
                # 3277 "tccgen.c"
                expect("struct or union");
            }
            # 3278 "tccgen.c"
            s_515=vtop->type.ref;
            # 3280 "tccgen.c"
            tok|=536870912;
            # 3285 "tccgen.c"
            while(_while_condtional54=(s_515=s_515->next)!=((void*)0),            _while_condtional54) {
                # 3284 "tccgen.c"
                # 3282 "tccgen.c"
                if(_if_conditional742=s_515->v==tok,                _if_conditional742) {
                    # 3283 "tccgen.c"
                    break;
                }
            }
            # 3286 "tccgen.c"
            # 3285 "tccgen.c"
            if(_if_conditional743=!s_515,            _if_conditional743) {
                # 3286 "tccgen.c"
                error("field not found: %s",get_tok_str(tok&~536870912,((void*)0)));
            }
            # 3288 "tccgen.c"
            vtop->type=char_pointer_type;
            # 3289 "tccgen.c"
            vpushi(s_515->c);
            # 3290 "tccgen.c"
            gen_op(43);
            # 3292 "tccgen.c"
            vtop->type=s_515->type;
            # 3300 "tccgen.c"
            # 3294 "tccgen.c"
            if(_if_conditional744=!(vtop->type.t&32),            _if_conditional744) {
                # 3295 "tccgen.c"
                vtop->r|=lvalue_type(vtop->type.t);
                # 3299 "tccgen.c"
                # 3297 "tccgen.c"
                if(tcc_state->do_bounds_check) {
                    # 3298 "tccgen.c"
                    vtop->r|=2048;
                }
            }
            # 3300 "tccgen.c"
            next();
        }
        # 3301 "tccgen.c"
        else if(_elif_conditional162=tok==91,        _elif_conditional162) {
            # 3302 "tccgen.c"
            next();
            # 3303 "tccgen.c"
            gexpr();
            # 3304 "tccgen.c"
            gen_op(43);
            # 3305 "tccgen.c"
            indir();
            # 3306 "tccgen.c"
            skip(93);
        }
        # 3307 "tccgen.c"
        else if(_elif_conditional163=tok==40,        _elif_conditional163) {
            # 3308 "tccgen.c"
            # 3309 "tccgen.c"
            # 3310 "tccgen.c"
            # 3327 "tccgen.c"
            # 3313 "tccgen.c"
            if(_if_conditional746=(vtop->type.t&15)!=6,            _if_conditional746) {
                # 3323 "tccgen.c"
                # 3315 "tccgen.c"
                if(_if_conditional747=(vtop->type.t&(15|32))==4,                _if_conditional747) {
                    # 3316 "tccgen.c"
                    vtop->type=*pointed_type(&vtop->type);
                    # 3319 "tccgen.c"
                    # 3317 "tccgen.c"
                    if(_if_conditional748=(vtop->type.t&15)!=6,                    _if_conditional748) {
                        # 3318 "tccgen.c"
                        goto error_func;
                    }
                }
                else {
                    # 3321 "tccgen.c"
                    error_func:
                    # 3321 "tccgen.c"
                    expect("function pointer");
                }
            }
            else {
                # 3324 "tccgen.c"
                vtop->r&=~256;
            }
            # 3327 "tccgen.c"
            s_515=vtop->type.ref;
            # 3328 "tccgen.c"
            next();
            # 3329 "tccgen.c"
            sa_526=s_515->next;
            # 3330 "tccgen.c"
            nb_args_527=0;
            # 3331 "tccgen.c"
            ret_525.r2=240;
            # 3356 "tccgen.c"
            # 3333 "tccgen.c"
            if(_if_conditional749=(s_515->type.t&15)==7,            _if_conditional749) {
                # 3335 "tccgen.c"
                size_512=type_size(&s_515->type,&align_511);
                # 3336 "tccgen.c"
                loc=(loc-size_512)&-align_511;
                # 3337 "tccgen.c"
                ret_525.type=s_515->type;
                # 3338 "tccgen.c"
                ret_525.r=242|256;
                # 3341 "tccgen.c"
                vseti(242,loc);
                # 3342 "tccgen.c"
                ret_525.c=vtop->c;
                # 3343 "tccgen.c"
                nb_args_527++;
            }
            else {
                # 3345 "tccgen.c"
                ret_525.type=s_515->type;
                # 3354 "tccgen.c"
                # 3347 "tccgen.c"
                if(_if_conditional750=is_float(ret_525.type.t),                _if_conditional750) {
                    # 3348 "tccgen.c"
                    ret_525.r=reg_fret(ret_525.type.t);
                }
                else {
                    # 3351 "tccgen.c"
                    # 3350 "tccgen.c"
                    if(_if_conditional751=(ret_525.type.t&15)==12,                    _if_conditional751) {
                        # 3351 "tccgen.c"
                        ret_525.r2=2;
                    }
                    # 3352 "tccgen.c"
                    ret_525.r=0;
                }
                # 3354 "tccgen.c"
                ret_525.c.i=0;
            }
            # 3368 "tccgen.c"
            # 3356 "tccgen.c"
            if(_if_conditional752=tok!=41,            _if_conditional752) {
                # 3367 "tccgen.c"
                for(                ;                ;                ){
                    # 3358 "tccgen.c"
                    expr_eq();
                    # 3359 "tccgen.c"
                    gfunc_param_typed(s_515,sa_526);
                    # 3360 "tccgen.c"
                    nb_args_527++;
                    # 3362 "tccgen.c"
                    # 3361 "tccgen.c"
                    if(sa_526) {
                        # 3362 "tccgen.c"
                        sa_526=sa_526->next;
                    }
                    # 3364 "tccgen.c"
                    # 3363 "tccgen.c"
                    if(_if_conditional754=tok==41,                    _if_conditional754) {
                        # 3364 "tccgen.c"
                        break;
                    }
                    # 3365 "tccgen.c"
                    skip(44);
                }
            }
            # 3369 "tccgen.c"
            # 3368 "tccgen.c"
            if(sa_526) {
                # 3369 "tccgen.c"
                error("too few arguments to function");
            }
            # 3370 "tccgen.c"
            skip(41);
            # 3377 "tccgen.c"
            # 3371 "tccgen.c"
            if(_if_conditional756=!nocode_wanted,            _if_conditional756) {
                # 3372 "tccgen.c"
                gfunc_call(nb_args_527);
            }
            else {
                # 3374 "tccgen.c"
                vtop-=(nb_args_527+1);
            }
            # 3377 "tccgen.c"
            vsetc(&ret_525.type,ret_525.r,&ret_525.c);
            # 3378 "tccgen.c"
            vtop->r2=ret_525.r2;
            come_call_finalizer3((&ret_525),SValue_finalize, 1, 0, 0, 0, (void*)0);
        }
        else {
            # 3380 "tccgen.c"
            break;
        }
    }
    come_call_finalizer3((&type_514),CType_finalize, 1, 0, 0, 0, (void*)0);
    come_call_finalizer3((&ad_516),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static void uneq(){
void* __result_obj__;
int t_528;
_Bool _if_conditional757;
_Bool _if_conditional758;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_528, 0, sizeof(int));
    # 3387 "tccgen.c"
    # 3389 "tccgen.c"
    unary();
    # 3406 "tccgen.c"
    # 3393 "tccgen.c"
    if(_if_conditional757=tok==61||(tok>=165&&tok<=175)||tok==222||tok==252||tok==129||tok==130,    _if_conditional757) {
        # 3394 "tccgen.c"
        test_lvalue();
        # 3395 "tccgen.c"
        t_528=tok;
        # 3396 "tccgen.c"
        next();
        # 3404 "tccgen.c"
        # 3397 "tccgen.c"
        if(_if_conditional758=t_528==61,        _if_conditional758) {
            # 3398 "tccgen.c"
            expr_eq();
        }
        else {
            # 3400 "tccgen.c"
            vdup();
            # 3401 "tccgen.c"
            expr_eq();
            # 3402 "tccgen.c"
            gen_op(t_528&127);
        }
        # 3404 "tccgen.c"
        vstore();
    }
}

static void expr_prod(){
void* __result_obj__;
int t_529;
_Bool _while_condtional55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_529, 0, sizeof(int));
    # 3410 "tccgen.c"
    # 3412 "tccgen.c"
    uneq();
    # 3419 "tccgen.c"
    while(_while_condtional55=tok==42||tok==47||tok==37,    _while_condtional55) {
        # 3414 "tccgen.c"
        t_529=tok;
        # 3415 "tccgen.c"
        next();
        # 3416 "tccgen.c"
        uneq();
        # 3417 "tccgen.c"
        gen_op(t_529);
    }
}

static void expr_sum(){
void* __result_obj__;
int t_530;
_Bool _while_condtional56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_530, 0, sizeof(int));
    # 3423 "tccgen.c"
    # 3425 "tccgen.c"
    expr_prod();
    # 3432 "tccgen.c"
    while(_while_condtional56=tok==43||tok==45,    _while_condtional56) {
        # 3427 "tccgen.c"
        t_530=tok;
        # 3428 "tccgen.c"
        next();
        # 3429 "tccgen.c"
        expr_prod();
        # 3430 "tccgen.c"
        gen_op(t_530);
    }
}

static void expr_shift(){
void* __result_obj__;
int t_531;
_Bool _while_condtional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_531, 0, sizeof(int));
    # 3436 "tccgen.c"
    # 3438 "tccgen.c"
    expr_sum();
    # 3445 "tccgen.c"
    while(_while_condtional57=tok==1||tok==2,    _while_condtional57) {
        # 3440 "tccgen.c"
        t_531=tok;
        # 3441 "tccgen.c"
        next();
        # 3442 "tccgen.c"
        expr_sum();
        # 3443 "tccgen.c"
        gen_op(t_531);
    }
}

static void expr_cmp(){
void* __result_obj__;
int t_532;
_Bool _while_condtional58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_532, 0, sizeof(int));
    # 3449 "tccgen.c"
    # 3451 "tccgen.c"
    expr_shift();
    # 3459 "tccgen.c"
    while(_while_condtional58=(tok>=150&&tok<=159)||tok==146||tok==147,    _while_condtional58) {
        # 3454 "tccgen.c"
        t_532=tok;
        # 3455 "tccgen.c"
        next();
        # 3456 "tccgen.c"
        expr_shift();
        # 3457 "tccgen.c"
        gen_op(t_532);
    }
}

static void expr_cmpeq(){
void* __result_obj__;
int t_533;
_Bool _while_condtional59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_533, 0, sizeof(int));
    # 3463 "tccgen.c"
    # 3465 "tccgen.c"
    expr_cmp();
    # 3472 "tccgen.c"
    while(_while_condtional59=tok==148||tok==149,    _while_condtional59) {
        # 3467 "tccgen.c"
        t_533=tok;
        # 3468 "tccgen.c"
        next();
        # 3469 "tccgen.c"
        expr_cmp();
        # 3470 "tccgen.c"
        gen_op(t_533);
    }
}

static void expr_and(){
void* __result_obj__;
_Bool _while_condtional60;
memset(&__result_obj__, 0, sizeof(void*));
    # 3476 "tccgen.c"
    expr_cmpeq();
    # 3482 "tccgen.c"
    while(_while_condtional60=tok==38,    _while_condtional60) {
        # 3478 "tccgen.c"
        next();
        # 3479 "tccgen.c"
        expr_cmpeq();
        # 3480 "tccgen.c"
        gen_op(38);
    }
}

static void expr_xor(){
void* __result_obj__;
_Bool _while_condtional61;
memset(&__result_obj__, 0, sizeof(void*));
    # 3486 "tccgen.c"
    expr_and();
    # 3492 "tccgen.c"
    while(_while_condtional61=tok==94,    _while_condtional61) {
        # 3488 "tccgen.c"
        next();
        # 3489 "tccgen.c"
        expr_and();
        # 3490 "tccgen.c"
        gen_op(94);
    }
}

static void expr_or(){
void* __result_obj__;
_Bool _while_condtional62;
memset(&__result_obj__, 0, sizeof(void*));
    # 3496 "tccgen.c"
    expr_xor();
    # 3502 "tccgen.c"
    while(_while_condtional62=tok==124,    _while_condtional62) {
        # 3498 "tccgen.c"
        next();
        # 3499 "tccgen.c"
        expr_xor();
        # 3500 "tccgen.c"
        gen_op(124);
    }
}

static void expr_land_const(){
void* __result_obj__;
_Bool _while_condtional63;
memset(&__result_obj__, 0, sizeof(void*));
    # 3507 "tccgen.c"
    expr_or();
    # 3513 "tccgen.c"
    while(_while_condtional63=tok==160,    _while_condtional63) {
        # 3509 "tccgen.c"
        next();
        # 3510 "tccgen.c"
        expr_or();
        # 3511 "tccgen.c"
        gen_op(160);
    }
}

static void expr_lor_const(){
void* __result_obj__;
_Bool _while_condtional64;
memset(&__result_obj__, 0, sizeof(void*));
    # 3518 "tccgen.c"
    expr_land_const();
    # 3524 "tccgen.c"
    while(_while_condtional64=tok==161,    _while_condtional64) {
        # 3520 "tccgen.c"
        next();
        # 3521 "tccgen.c"
        expr_land_const();
        # 3522 "tccgen.c"
        gen_op(161);
    }
}

static void expr_land(){
void* __result_obj__;
int t_534;
_Bool _if_conditional759;
_Bool _if_conditional760;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_534, 0, sizeof(int));
    # 3529 "tccgen.c"
    # 3531 "tccgen.c"
    expr_or();
    # 3545 "tccgen.c"
    # 3532 "tccgen.c"
    if(_if_conditional759=tok==160,    _if_conditional759) {
        # 3533 "tccgen.c"
        t_534=0;
        # 3534 "tccgen.c"
        save_regs(1);
        # 3544 "tccgen.c"
        for(        ;        ;        ){
            # 3536 "tccgen.c"
            t_534=gtst(1,t_534);
            # 3541 "tccgen.c"
            # 3537 "tccgen.c"
            if(_if_conditional760=tok!=160,            _if_conditional760) {
                # 3538 "tccgen.c"
                vseti(245,t_534);
                # 3539 "tccgen.c"
                break;
            }
            # 3541 "tccgen.c"
            next();
            # 3542 "tccgen.c"
            expr_or();
        }
    }
}

static void expr_lor(){
void* __result_obj__;
int t_535;
_Bool _if_conditional761;
_Bool _if_conditional762;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t_535, 0, sizeof(int));
    # 3549 "tccgen.c"
    # 3551 "tccgen.c"
    expr_land();
    # 3565 "tccgen.c"
    # 3552 "tccgen.c"
    if(_if_conditional761=tok==161,    _if_conditional761) {
        # 3553 "tccgen.c"
        t_535=0;
        # 3554 "tccgen.c"
        save_regs(1);
        # 3564 "tccgen.c"
        for(        ;        ;        ){
            # 3556 "tccgen.c"
            t_535=gtst(0,t_535);
            # 3561 "tccgen.c"
            # 3557 "tccgen.c"
            if(_if_conditional762=tok!=161,            _if_conditional762) {
                # 3558 "tccgen.c"
                vseti(244,t_535);
                # 3559 "tccgen.c"
                break;
            }
            # 3561 "tccgen.c"
            next();
            # 3562 "tccgen.c"
            expr_land();
        }
    }
}

static void expr_eq(){
void* __result_obj__;
int tt_536;
int u_537;
int r1_538;
int r2_539;
int rc_540;
int t1_541;
int t2_542;
int bt1_543;
int bt2_544;
struct SValue sv_545;
struct CType type_546;
struct CType type1_547;
struct CType type2_548;
_Bool _if_conditional763;
_Bool _if_conditional764;
struct CType boolean_549;
int c_550;
_Bool _if_conditional765;
_Bool _if_conditional766;
_Bool _if_conditional767;
_Bool _if_conditional768;
_Bool _if_conditional769;
_Bool _if_conditional770;
_Bool _if_conditional771;
_Bool _if_conditional772;
_Bool _if_conditional773;
_Bool _if_conditional774;
_Bool _elif_conditional164;
_Bool _elif_conditional165;
_Bool _if_conditional775;
_Bool _elif_conditional166;
_Bool _elif_conditional167;
_Bool _elif_conditional168;
_Bool _elif_conditional169;
_Bool _if_conditional776;
_Bool _if_conditional777;
_Bool _if_conditional778;
_Bool _if_conditional779;
_Bool _elif_conditional170;
_Bool _if_conditional780;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sv_545, 0, sizeof(struct SValue));
memset(&boolean_549, 0, sizeof(struct CType));
memset(&c_550, 0, sizeof(int));
    # 3570 "tccgen.c"
    # 3571 "tccgen.c"
    # 3572 "tccgen.c"
    # 3707 "tccgen.c"
    # 3574 "tccgen.c"
    if(const_wanted) {
        # 3575 "tccgen.c"
        expr_lor_const();
        # 3596 "tccgen.c"
        # 3576 "tccgen.c"
        if(_if_conditional764=tok==63,        _if_conditional764) {
            # 3577 "tccgen.c"
            # 3578 "tccgen.c"
            # 3579 "tccgen.c"
            boolean_549.t=11;
            # 3580 "tccgen.c"
            vdup();
            # 3581 "tccgen.c"
            gen_cast(&boolean_549);
            # 3582 "tccgen.c"
            c_550=vtop->c.i;
            # 3583 "tccgen.c"
            vpop();
            # 3584 "tccgen.c"
            next();
            # 3589 "tccgen.c"
            # 3585 "tccgen.c"
            if(_if_conditional765=tok!=58||!gnu_ext,            _if_conditional765) {
                # 3586 "tccgen.c"
                vpop();
                # 3587 "tccgen.c"
                gexpr();
            }
            # 3590 "tccgen.c"
            # 3589 "tccgen.c"
            if(_if_conditional766=!c_550,            _if_conditional766) {
                # 3590 "tccgen.c"
                vpop();
            }
            # 3591 "tccgen.c"
            skip(58);
            # 3592 "tccgen.c"
            expr_eq();
            # 3595 "tccgen.c"
            # 3593 "tccgen.c"
            if(c_550) {
                # 3594 "tccgen.c"
                vpop();
            }
            come_call_finalizer3((&boolean_549),CType_finalize, 1, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 3597 "tccgen.c"
        expr_lor();
        # 3706 "tccgen.c"
        # 3598 "tccgen.c"
        if(_if_conditional768=tok==63,        _if_conditional768) {
            # 3599 "tccgen.c"
            next();
            # 3616 "tccgen.c"
            # 3600 "tccgen.c"
            if(_if_conditional769=vtop!=vstack,            _if_conditional769) {
                # 3612 "tccgen.c"
                # 3603 "tccgen.c"
                if(_if_conditional770=is_float(vtop->type.t),                _if_conditional770) {
                    # 3604 "tccgen.c"
                    rc_540=2;
                    # 3610 "tccgen.c"
                    # 3606 "tccgen.c"
                    if(_if_conditional771=(vtop->type.t&15)==10,                    _if_conditional771) {
                        # 3607 "tccgen.c"
                        rc_540=64;
                    }
                }
                else {
                    # 3612 "tccgen.c"
                    rc_540=1;
                }
                # 3613 "tccgen.c"
                gv(rc_540);
                # 3614 "tccgen.c"
                save_regs(1);
            }
            # 3623 "tccgen.c"
            # 3616 "tccgen.c"
            if(_if_conditional772=tok==58&&gnu_ext,            _if_conditional772) {
                # 3617 "tccgen.c"
                gv_dup();
                # 3618 "tccgen.c"
                tt_536=gtst(1,0);
            }
            else {
                # 3620 "tccgen.c"
                tt_536=gtst(1,0);
                # 3621 "tccgen.c"
                gexpr();
            }
            # 3623 "tccgen.c"
            type1_547=vtop->type;
            # 3624 "tccgen.c"
            sv_545=*vtop;
            # 3625 "tccgen.c"
            vtop--;
            # 3626 "tccgen.c"
            skip(58);
            # 3627 "tccgen.c"
            u_537=gjmp(0);
            # 3628 "tccgen.c"
            gsym(tt_536);
            # 3629 "tccgen.c"
            expr_eq();
            # 3630 "tccgen.c"
            type2_548=vtop->type;
            # 3632 "tccgen.c"
            t1_541=type1_547.t;
            # 3633 "tccgen.c"
            bt1_543=t1_541&15;
            # 3634 "tccgen.c"
            t2_542=type2_548.t;
            # 3635 "tccgen.c"
            bt2_544=t2_542&15;
            # 3674 "tccgen.c"
            # 3637 "tccgen.c"
            if(_if_conditional773=is_float(bt1_543)||is_float(bt2_544),            _if_conditional773) {
                # 3645 "tccgen.c"
                # 3638 "tccgen.c"
                if(_if_conditional774=bt1_543==10||bt2_544==10,                _if_conditional774) {
                    # 3639 "tccgen.c"
                    type_546.t=10;
                }
                # 3640 "tccgen.c"
                else if(_elif_conditional164=bt1_543==9||bt2_544==9,                _elif_conditional164) {
                    # 3641 "tccgen.c"
                    type_546.t=9;
                }
                else {
                    # 3643 "tccgen.c"
                    type_546.t=8;
                }
            }
            # 3645 "tccgen.c"
            else if(_elif_conditional165=bt1_543==12||bt2_544==12,            _elif_conditional165) {
                # 3647 "tccgen.c"
                type_546.t=12;
                # 3652 "tccgen.c"
                # 3650 "tccgen.c"
                if(_if_conditional775=(t1_541&(15|16))==(12|16)||(t2_542&(15|16))==(12|16),                _if_conditional775) {
                    # 3651 "tccgen.c"
                    type_546.t|=16;
                }
            }
            # 3652 "tccgen.c"
            else if(_elif_conditional166=bt1_543==4||bt2_544==4,            _elif_conditional166) {
                # 3654 "tccgen.c"
                type_546=type1_547;
            }
            # 3655 "tccgen.c"
            else if(_elif_conditional167=bt1_543==6||bt2_544==6,            _elif_conditional167) {
                # 3657 "tccgen.c"
                type_546=type1_547;
            }
            # 3658 "tccgen.c"
            else if(_elif_conditional168=bt1_543==7||bt2_544==7,            _elif_conditional168) {
                # 3660 "tccgen.c"
                type_546=type1_547;
            }
            # 3661 "tccgen.c"
            else if(_elif_conditional169=bt1_543==3||bt2_544==3,            _elif_conditional169) {
                # 3663 "tccgen.c"
                type_546.t=3;
            }
            else {
                # 3666 "tccgen.c"
                type_546.t=0;
                # 3671 "tccgen.c"
                # 3669 "tccgen.c"
                if(_if_conditional776=(t1_541&(15|16))==(0|16)||(t2_542&(15|16))==(0|16),                _if_conditional776) {
                    # 3670 "tccgen.c"
                    type_546.t|=16;
                }
            }
            # 3674 "tccgen.c"
            gen_cast(&type_546);
            # 3676 "tccgen.c"
            # 3675 "tccgen.c"
            if(_if_conditional777=7==(vtop->type.t&15),            _if_conditional777) {
                # 3676 "tccgen.c"
                gaddrof();
            }
            # 3677 "tccgen.c"
            rc_540=1;
            # 3691 "tccgen.c"
            # 3678 "tccgen.c"
            if(_if_conditional778=is_float(type_546.t),            _if_conditional778) {
                # 3679 "tccgen.c"
                rc_540=2;
                # 3685 "tccgen.c"
                # 3681 "tccgen.c"
                if(_if_conditional779=(type_546.t&15)==10,                _if_conditional779) {
                    # 3682 "tccgen.c"
                    rc_540=64;
                }
            }
            # 3685 "tccgen.c"
            else if(_elif_conditional170=(type_546.t&15)==12,            _elif_conditional170) {
                # 3688 "tccgen.c"
                rc_540=4;
            }
            # 3691 "tccgen.c"
            r2_539=gv(rc_540);
            # 3694 "tccgen.c"
            tt_536=gjmp(0);
            # 3695 "tccgen.c"
            gsym(u_537);
            # 3697 "tccgen.c"
            *vtop=sv_545;
            # 3698 "tccgen.c"
            gen_cast(&type_546);
            # 3700 "tccgen.c"
            # 3699 "tccgen.c"
            if(_if_conditional780=7==(vtop->type.t&15),            _if_conditional780) {
                # 3700 "tccgen.c"
                gaddrof();
            }
            # 3701 "tccgen.c"
            r1_538=gv(rc_540);
            # 3702 "tccgen.c"
            move_reg(r2_539,r1_538);
            # 3703 "tccgen.c"
            vtop->r=r2_539;
            # 3704 "tccgen.c"
            gsym(tt_536);
        }
    }
    come_call_finalizer3((&sv_545),SValue_finalize, 1, 0, 0, 0, (void*)0);
}

static void gexpr(){
void* __result_obj__;
_Bool _while_condtional65;
_Bool _if_conditional781;
memset(&__result_obj__, 0, sizeof(void*));
    # 3718 "tccgen.c"
    while(_while_condtional65=1,    _while_condtional65) {
        # 3712 "tccgen.c"
        expr_eq();
        # 3714 "tccgen.c"
        # 3713 "tccgen.c"
        if(_if_conditional781=tok!=44,        _if_conditional781) {
            # 3714 "tccgen.c"
            break;
        }
        # 3715 "tccgen.c"
        vpop();
        # 3716 "tccgen.c"
        next();
    }
}

static void expr_type(struct CType* type){
void* __result_obj__;
int saved_nocode_wanted_551;
memset(&__result_obj__, 0, sizeof(void*));
memset(&saved_nocode_wanted_551, 0, sizeof(int));
    # 3723 "tccgen.c"
    # 3725 "tccgen.c"
    saved_nocode_wanted_551=nocode_wanted;
    # 3726 "tccgen.c"
    nocode_wanted=1;
    # 3727 "tccgen.c"
    gexpr();
    # 3728 "tccgen.c"
    *type=vtop->type;
    # 3729 "tccgen.c"
    vpop();
    # 3730 "tccgen.c"
    nocode_wanted=saved_nocode_wanted_551;
}

static void unary_type(struct CType* type){
void* __result_obj__;
int a_552;
memset(&__result_obj__, 0, sizeof(void*));
memset(&a_552, 0, sizeof(int));
    # 3737 "tccgen.c"
    # 3739 "tccgen.c"
    a_552=nocode_wanted;
    # 3740 "tccgen.c"
    nocode_wanted=1;
    # 3741 "tccgen.c"
    unary();
    # 3742 "tccgen.c"
    *type=vtop->type;
    # 3743 "tccgen.c"
    vpop();
    # 3744 "tccgen.c"
    nocode_wanted=a_552;
}

static void expr_const1(){
void* __result_obj__;
int a_553;
memset(&__result_obj__, 0, sizeof(void*));
memset(&a_553, 0, sizeof(int));
    # 3750 "tccgen.c"
    # 3751 "tccgen.c"
    a_553=const_wanted;
    # 3752 "tccgen.c"
    const_wanted=1;
    # 3753 "tccgen.c"
    expr_eq();
    # 3754 "tccgen.c"
    const_wanted=a_553;
}

static int expr_const(){
void* __result_obj__;
int c_554;
_Bool _if_conditional782;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_554, 0, sizeof(int));
    # 3760 "tccgen.c"
    # 3761 "tccgen.c"
    expr_const1();
    # 3763 "tccgen.c"
    # 3762 "tccgen.c"
    if(_if_conditional782=(vtop->r&(255|256|512))!=240,    _if_conditional782) {
        # 3763 "tccgen.c"
        expect("constant expression");
    }
    # 3764 "tccgen.c"
    c_554=vtop->c.i;
    # 3765 "tccgen.c"
    vpop();
    # 3766 "tccgen.c"
    __result143__ = c_554;
    return __result143__;
}

static int is_label(){
void* __result_obj__;
int last_tok_555;
_Bool _if_conditional783;
int __result144__;
_Bool _if_conditional784;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_tok_555, 0, sizeof(int));
    # 3773 "tccgen.c"
    # 3777 "tccgen.c"
    # 3776 "tccgen.c"
    if(_if_conditional783=tok<314,    _if_conditional783) {
        # 3777 "tccgen.c"
        __result144__ = 0;
        return __result144__;
    }
    # 3779 "tccgen.c"
    last_tok_555=tok;
    # 3780 "tccgen.c"
    next();
    # 3788 "tccgen.c"
    # 3781 "tccgen.c"
    if(_if_conditional784=tok==58,    _if_conditional784) {
        # 3782 "tccgen.c"
        next();
        # 3783 "tccgen.c"
        __result145__ = last_tok_555;
        return __result145__;
    }
    else {
        # 3785 "tccgen.c"
        unget_tok(last_tok_555);
        # 3786 "tccgen.c"
        __result146__ = 0;
        return __result146__;
    }
}

static void block(int* bsym, int* csym, int* case_sym, int* def_sym, int case_reg, int is_expr){
void* __result_obj__;
int a_556;
int b_557;
int c_558;
int d_559;
struct Sym* s_560;
_Bool _if_conditional785;
_Bool _if_conditional786;
_Bool _if_conditional787;
_Bool _if_conditional788;
_Bool _elif_conditional171;
_Bool _elif_conditional172;
struct Sym* llabel_561;
_Bool _if_conditional789;
_Bool _if_conditional790;
_Bool _if_conditional791;
_Bool _while_condtional66;
_Bool _if_conditional792;
_Bool _if_conditional793;
_Bool _if_conditional794;
struct Sym* p_562;
_Bool _if_conditional795;
_Bool _elif_conditional173;
_Bool _if_conditional796;
_Bool _if_conditional797;
struct CType type_563;
_Bool _elif_conditional174;
_Bool _elif_conditional175;
_Bool _if_conditional798;
_Bool _elif_conditional176;
_Bool _if_conditional799;
_Bool _elif_conditional177;
int e_564;
_Bool _if_conditional800;
_Bool _if_conditional801;
_Bool _if_conditional802;
_Bool _elif_conditional178;
_Bool _elif_conditional179;
_Bool _if_conditional803;
_Bool _elif_conditional180;
int v1_565;
int v2_566;
_Bool _if_conditional804;
_Bool _if_conditional805;
_Bool _if_conditional806;
_Bool _if_conditional807;
_Bool _elif_conditional181;
_Bool _if_conditional808;
_Bool _if_conditional809;
_Bool _elif_conditional182;
_Bool _if_conditional810;
_Bool _if_conditional811;
_Bool _elif_conditional183;
_Bool _if_conditional812;
_Bool _if_conditional813;
_Bool _if_conditional814;
_Bool _elif_conditional184;
_Bool _if_conditional815;
_Bool _if_conditional816;
_Bool _if_conditional817;
_Bool _if_conditional818;
_Bool _if_conditional819;
_Bool _if_conditional820;
_Bool _if_conditional821;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_560, 0, sizeof(struct Sym*));
memset(&llabel_561, 0, sizeof(struct Sym*));
memset(&p_562, 0, sizeof(struct Sym*));
memset(&type_563, 0, sizeof(struct CType));
memset(&e_564, 0, sizeof(int));
    # 3793 "tccgen.c"
    # 3794 "tccgen.c"
    # 3804 "tccgen.c"
    # 3798 "tccgen.c"
    if(_if_conditional785=tcc_state->do_debug&&(last_line_num!=file->line_num||last_ind!=ind),    _if_conditional785) {
        # 3799 "tccgen.c"
        put_stabn(68,0,file->line_num,ind-func_ind);
        # 3800 "tccgen.c"
        last_ind=ind;
        # 3801 "tccgen.c"
        last_line_num=file->line_num;
    }
    # 3810 "tccgen.c"
    # 3804 "tccgen.c"
    if(is_expr) {
        # 3806 "tccgen.c"
        vpushi(0);
        # 3807 "tccgen.c"
        vtop->type.t=3;
    }
    # 4132 "tccgen.c"
    # 3810 "tccgen.c"
    if(_if_conditional787=tok==260,    _if_conditional787) {
        # 3812 "tccgen.c"
        next();
        # 3813 "tccgen.c"
        skip(40);
        # 3814 "tccgen.c"
        gexpr();
        # 3815 "tccgen.c"
        skip(41);
        # 3816 "tccgen.c"
        a_556=gtst(1,0);
        # 3817 "tccgen.c"
        block(bsym,csym,case_sym,def_sym,case_reg,0);
        # 3818 "tccgen.c"
        c_558=tok;
        # 3826 "tccgen.c"
        # 3819 "tccgen.c"
        if(_if_conditional788=c_558==261,        _if_conditional788) {
            # 3820 "tccgen.c"
            next();
            # 3821 "tccgen.c"
            d_559=gjmp(0);
            # 3822 "tccgen.c"
            gsym(a_556);
            # 3823 "tccgen.c"
            block(bsym,csym,case_sym,def_sym,case_reg,0);
            # 3824 "tccgen.c"
            gsym(d_559);
        }
        else {
            # 3826 "tccgen.c"
            gsym(a_556);
        }
    }
    # 3827 "tccgen.c"
    else if(_elif_conditional171=tok==262,    _elif_conditional171) {
        # 3828 "tccgen.c"
        next();
        # 3829 "tccgen.c"
        d_559=ind;
        # 3830 "tccgen.c"
        skip(40);
        # 3831 "tccgen.c"
        gexpr();
        # 3832 "tccgen.c"
        skip(41);
        # 3833 "tccgen.c"
        a_556=gtst(1,0);
        # 3834 "tccgen.c"
        b_557=0;
        # 3835 "tccgen.c"
        block(&a_556,&b_557,case_sym,def_sym,case_reg,0);
        # 3836 "tccgen.c"
        gjmp_addr(d_559);
        # 3837 "tccgen.c"
        gsym(a_556);
        # 3838 "tccgen.c"
        gsym_addr(b_557,d_559);
    }
    # 3839 "tccgen.c"
    else if(_elif_conditional172=tok==123,    _elif_conditional172) {
        # 3840 "tccgen.c"
        # 3842 "tccgen.c"
        next();
        # 3844 "tccgen.c"
        s_560=local_stack;
        # 3845 "tccgen.c"
        llabel_561=local_label_stack;
        # 3862 "tccgen.c"
        # 3847 "tccgen.c"
        if(_if_conditional789=tok==310,        _if_conditional789) {
            # 3848 "tccgen.c"
            next();
            # 3861 "tccgen.c"
            for(            ;            ;            ){
                # 3851 "tccgen.c"
                # 3850 "tccgen.c"
                if(_if_conditional790=tok<314,                _if_conditional790) {
                    # 3851 "tccgen.c"
                    expect("label identifier");
                }
                # 3852 "tccgen.c"
                label_push(&local_label_stack,tok,2);
                # 3853 "tccgen.c"
                next();
                # 3860 "tccgen.c"
                # 3854 "tccgen.c"
                if(_if_conditional791=tok==44,                _if_conditional791) {
                    # 3855 "tccgen.c"
                    next();
                }
                else {
                    # 3857 "tccgen.c"
                    skip(59);
                    # 3858 "tccgen.c"
                    break;
                }
            }
        }
        # 3871 "tccgen.c"
        while(_while_condtional66=tok!=125,        _while_condtional66) {
            # 3863 "tccgen.c"
            decl(242);
            # 3869 "tccgen.c"
            # 3864 "tccgen.c"
            if(_if_conditional792=tok!=125,            _if_conditional792) {
                # 3866 "tccgen.c"
                # 3865 "tccgen.c"
                if(is_expr) {
                    # 3866 "tccgen.c"
                    vpop();
                }
                # 3867 "tccgen.c"
                block(bsym,csym,case_sym,def_sym,case_reg,is_expr);
            }
        }
        # 3871 "tccgen.c"
        label_pop(&local_label_stack,llabel_561);
        # 3887 "tccgen.c"
        # 3873 "tccgen.c"
        if(is_expr) {
            # 3876 "tccgen.c"
            # 3886 "tccgen.c"
            switch (vtop->type.t&15) {
                # 3879 "tccgen.c"
                case 4:
                # 3880 "tccgen.c"
                case 7:
                # 3881 "tccgen.c"
                case 5:
                # 3882 "tccgen.c"
                case 6:
                # 3885 "tccgen.c"
                for(                p_562=vtop->type.ref;                p_562;                p_562=p_562->prev                ){
                    # 3885 "tccgen.c"
                    # 3883 "tccgen.c"
                    if(_if_conditional795=p_562->prev==s_560,                    _if_conditional795) {
                        # 3884 "tccgen.c"
                        error("unsupported expression type");
                    }
                }
            }
        }
        # 3887 "tccgen.c"
        sym_pop(&local_stack,s_560);
        # 3888 "tccgen.c"
        next();
    }
    # 3889 "tccgen.c"
    else if(_elif_conditional173=tok==264,    _elif_conditional173) {
        # 3890 "tccgen.c"
        next();
        # 3936 "tccgen.c"
        # 3891 "tccgen.c"
        if(_if_conditional796=tok!=59,        _if_conditional796) {
            # 3892 "tccgen.c"
            gexpr();
            # 3893 "tccgen.c"
            gen_assign_cast(&func_vt);
            # 3934 "tccgen.c"
            # 3894 "tccgen.c"
            if(_if_conditional797=(func_vt.t&15)==7,            _if_conditional797) {
                # 3895 "tccgen.c"
                # 3919 "tccgen.c"
                type_563=func_vt;
                # 3920 "tccgen.c"
                mk_pointer(&type_563);
                # 3921 "tccgen.c"
                vset(&type_563,242|256,func_vc);
                # 3922 "tccgen.c"
                indir();
                # 3923 "tccgen.c"
                vswap();
                # 3925 "tccgen.c"
                vstore();
                come_call_finalizer3((&type_563),CType_finalize, 1, 0, 0, 0, (void*)0);
            }
            # 3929 "tccgen.c"
            else if(_elif_conditional174=is_float(func_vt.t),            _elif_conditional174) {
                # 3930 "tccgen.c"
                gv(rc_fret(func_vt.t));
            }
            else {
                # 3932 "tccgen.c"
                gv(4);
            }
            # 3934 "tccgen.c"
            vtop--;
        }
        # 3936 "tccgen.c"
        skip(59);
        # 3937 "tccgen.c"
        rsym=gjmp(rsym);
    }
    # 3938 "tccgen.c"
    else if(_elif_conditional175=tok==263,    _elif_conditional175) {
        # 3942 "tccgen.c"
        # 3940 "tccgen.c"
        if(_if_conditional798=!bsym,        _if_conditional798) {
            # 3941 "tccgen.c"
            error("cannot break");
        }
        # 3942 "tccgen.c"
        *bsym=gjmp(*bsym);
        # 3943 "tccgen.c"
        next();
        # 3944 "tccgen.c"
        skip(59);
    }
    # 3945 "tccgen.c"
    else if(_elif_conditional176=tok==271,    _elif_conditional176) {
        # 3949 "tccgen.c"
        # 3947 "tccgen.c"
        if(_if_conditional799=!csym,        _if_conditional799) {
            # 3948 "tccgen.c"
            error("cannot continue");
        }
        # 3949 "tccgen.c"
        *csym=gjmp(*csym);
        # 3950 "tccgen.c"
        next();
        # 3951 "tccgen.c"
        skip(59);
    }
    # 3952 "tccgen.c"
    else if(_elif_conditional177=tok==265,    _elif_conditional177) {
        # 3953 "tccgen.c"
        # 3954 "tccgen.c"
        next();
        # 3955 "tccgen.c"
        skip(40);
        # 3960 "tccgen.c"
        # 3956 "tccgen.c"
        if(_if_conditional800=tok!=59,        _if_conditional800) {
            # 3957 "tccgen.c"
            gexpr();
            # 3958 "tccgen.c"
            vpop();
        }
        # 3960 "tccgen.c"
        skip(59);
        # 3961 "tccgen.c"
        d_559=ind;
        # 3962 "tccgen.c"
        c_558=ind;
        # 3963 "tccgen.c"
        a_556=0;
        # 3964 "tccgen.c"
        b_557=0;
        # 3969 "tccgen.c"
        # 3965 "tccgen.c"
        if(_if_conditional801=tok!=59,        _if_conditional801) {
            # 3966 "tccgen.c"
            gexpr();
            # 3967 "tccgen.c"
            a_556=gtst(1,0);
        }
        # 3969 "tccgen.c"
        skip(59);
        # 3978 "tccgen.c"
        # 3970 "tccgen.c"
        if(_if_conditional802=tok!=41,        _if_conditional802) {
            # 3971 "tccgen.c"
            e_564=gjmp(0);
            # 3972 "tccgen.c"
            c_558=ind;
            # 3973 "tccgen.c"
            gexpr();
            # 3974 "tccgen.c"
            vpop();
            # 3975 "tccgen.c"
            gjmp_addr(d_559);
            # 3976 "tccgen.c"
            gsym(e_564);
        }
        # 3978 "tccgen.c"
        skip(41);
        # 3979 "tccgen.c"
        block(&a_556,&b_557,case_sym,def_sym,case_reg,0);
        # 3980 "tccgen.c"
        gjmp_addr(c_558);
        # 3981 "tccgen.c"
        gsym(a_556);
        # 3982 "tccgen.c"
        gsym_addr(b_557,c_558);
    }
    # 3984 "tccgen.c"
    else if(_elif_conditional178=tok==270,    _elif_conditional178) {
        # 3985 "tccgen.c"
        next();
        # 3986 "tccgen.c"
        a_556=0;
        # 3987 "tccgen.c"
        b_557=0;
        # 3988 "tccgen.c"
        d_559=ind;
        # 3989 "tccgen.c"
        block(&a_556,&b_557,case_sym,def_sym,case_reg,0);
        # 3990 "tccgen.c"
        skip(262);
        # 3991 "tccgen.c"
        skip(40);
        # 3992 "tccgen.c"
        gsym(b_557);
        # 3993 "tccgen.c"
        gexpr();
        # 3994 "tccgen.c"
        c_558=gtst(0,0);
        # 3995 "tccgen.c"
        gsym_addr(c_558,d_559);
        # 3996 "tccgen.c"
        skip(41);
        # 3997 "tccgen.c"
        gsym(a_556);
        # 3998 "tccgen.c"
        skip(59);
    }
    # 4000 "tccgen.c"
    else if(_elif_conditional179=tok==272,    _elif_conditional179) {
        # 4001 "tccgen.c"
        next();
        # 4002 "tccgen.c"
        skip(40);
        # 4003 "tccgen.c"
        gexpr();
        # 4005 "tccgen.c"
        case_reg=gv(1);
        # 4006 "tccgen.c"
        vpop();
        # 4007 "tccgen.c"
        skip(41);
        # 4008 "tccgen.c"
        a_556=0;
        # 4009 "tccgen.c"
        b_557=gjmp(0);
        # 4010 "tccgen.c"
        c_558=0;
        # 4011 "tccgen.c"
        block(&a_556,csym,&b_557,&c_558,case_reg,0);
        # 4014 "tccgen.c"
        # 4013 "tccgen.c"
        if(_if_conditional803=c_558==0,        _if_conditional803) {
            # 4014 "tccgen.c"
            c_558=ind;
        }
        # 4016 "tccgen.c"
        gsym_addr(b_557,c_558);
        # 4018 "tccgen.c"
        gsym(a_556);
    }
    # 4020 "tccgen.c"
    else if(_elif_conditional180=tok==273,    _elif_conditional180) {
        # 4021 "tccgen.c"
        # 4023 "tccgen.c"
        # 4022 "tccgen.c"
        if(_if_conditional804=!case_sym,        _if_conditional804) {
            # 4023 "tccgen.c"
            expect("switch");
        }
        # 4024 "tccgen.c"
        next();
        # 4025 "tccgen.c"
        v1_565=expr_const();
        # 4026 "tccgen.c"
        v2_566=v1_565;
        # 4034 "tccgen.c"
        # 4027 "tccgen.c"
        if(_if_conditional805=gnu_ext&&tok==204,        _if_conditional805) {
            # 4028 "tccgen.c"
            next();
            # 4029 "tccgen.c"
            v2_566=expr_const();
            # 4032 "tccgen.c"
            # 4030 "tccgen.c"
            if(_if_conditional806=v2_566<v1_565,            _if_conditional806) {
                # 4031 "tccgen.c"
                warning("empty case range");
            }
        }
        # 4034 "tccgen.c"
        b_557=gjmp(0);
        # 4035 "tccgen.c"
        gsym(*case_sym);
        # 4036 "tccgen.c"
        vseti(case_reg,0);
        # 4037 "tccgen.c"
        vpushi(v1_565);
        # 4049 "tccgen.c"
        # 4038 "tccgen.c"
        if(_if_conditional807=v1_565==v2_566,        _if_conditional807) {
            # 4039 "tccgen.c"
            gen_op(148);
            # 4040 "tccgen.c"
            *case_sym=gtst(1,0);
        }
        else {
            # 4042 "tccgen.c"
            gen_op(157);
            # 4043 "tccgen.c"
            *case_sym=gtst(1,0);
            # 4044 "tccgen.c"
            vseti(case_reg,0);
            # 4045 "tccgen.c"
            vpushi(v2_566);
            # 4046 "tccgen.c"
            gen_op(158);
            # 4047 "tccgen.c"
            *case_sym=gtst(1,*case_sym);
        }
        # 4049 "tccgen.c"
        gsym(b_557);
        # 4050 "tccgen.c"
        skip(58);
        # 4051 "tccgen.c"
        is_expr=0;
        # 4052 "tccgen.c"
        goto block_after_label;
    }
    # 4054 "tccgen.c"
    else if(_elif_conditional181=tok==300,    _elif_conditional181) {
        # 4055 "tccgen.c"
        next();
        # 4056 "tccgen.c"
        skip(58);
        # 4058 "tccgen.c"
        # 4057 "tccgen.c"
        if(_if_conditional808=!def_sym,        _if_conditional808) {
            # 4058 "tccgen.c"
            expect("switch");
        }
        # 4061 "tccgen.c"
        # 4059 "tccgen.c"
        if(_if_conditional809=*def_sym,        _if_conditional809) {
            # 4060 "tccgen.c"
            error("too many 'default'");
        }
        # 4061 "tccgen.c"
        *def_sym=ind;
        # 4062 "tccgen.c"
        is_expr=0;
        # 4063 "tccgen.c"
        goto block_after_label;
    }
    # 4065 "tccgen.c"
    else if(_elif_conditional182=tok==269,    _elif_conditional182) {
        # 4066 "tccgen.c"
        next();
        # 4092 "tccgen.c"
        # 4067 "tccgen.c"
        if(_if_conditional810=tok==42&&gnu_ext,        _if_conditional810) {
            # 4069 "tccgen.c"
            next();
            # 4070 "tccgen.c"
            gexpr();
            # 4072 "tccgen.c"
            # 4071 "tccgen.c"
            if(_if_conditional811=(vtop->type.t&15)!=4,            _if_conditional811) {
                # 4072 "tccgen.c"
                expect("pointer");
            }
            # 4073 "tccgen.c"
            ggoto();
        }
        # 4074 "tccgen.c"
        else if(_elif_conditional183=tok>=314,        _elif_conditional183) {
            # 4075 "tccgen.c"
            s_560=label_find(tok);
            # 4084 "tccgen.c"
            # 4077 "tccgen.c"
            if(_if_conditional812=!s_560,            _if_conditional812) {
                # 4078 "tccgen.c"
                s_560=label_push(&global_label_stack,tok,1);
            }
            else {
                # 4082 "tccgen.c"
                # 4080 "tccgen.c"
                if(_if_conditional813=s_560->r==2,                _if_conditional813) {
                    # 4081 "tccgen.c"
                    s_560->r=1;
                }
            }
            # 4087 "tccgen.c"
            # 4084 "tccgen.c"
            if(_if_conditional814=s_560->r&1,            _if_conditional814) {
                # 4085 "tccgen.c"
                s_560->next=(void*)gjmp((long)s_560->next);
            }
            else {
                # 4087 "tccgen.c"
                gjmp_addr((long)s_560->next);
            }
            # 4088 "tccgen.c"
            next();
        }
        else {
            # 4090 "tccgen.c"
            expect("label identifier");
        }
        # 4092 "tccgen.c"
        skip(59);
    }
    # 4093 "tccgen.c"
    else if(_elif_conditional184=tok==311||tok==312||tok==313,    _elif_conditional184) {
        # 4094 "tccgen.c"
        asm_instr();
    }
    else {
        # 4096 "tccgen.c"
        b_557=is_label();
        # 4131 "tccgen.c"
        # 4097 "tccgen.c"
        if(b_557) {
            # 4099 "tccgen.c"
            s_560=label_find(b_557);
            # 4108 "tccgen.c"
            # 4100 "tccgen.c"
            if(s_560) {
                # 4102 "tccgen.c"
                # 4101 "tccgen.c"
                if(_if_conditional817=s_560->r==0,                _if_conditional817) {
                    # 4102 "tccgen.c"
                    error("duplicate label '%s'",get_tok_str(s_560->v,((void*)0)));
                }
                # 4103 "tccgen.c"
                gsym((long)s_560->next);
                # 4104 "tccgen.c"
                s_560->r=0;
            }
            else {
                # 4106 "tccgen.c"
                s_560=label_push(&global_label_stack,b_557,0);
            }
            # 4108 "tccgen.c"
            s_560->next=(void*)ind;
            # 4111 "tccgen.c"
            block_after_label:
            # 4118 "tccgen.c"
            # 4111 "tccgen.c"
            if(_if_conditional818=tok==125,            _if_conditional818) {
                # 4112 "tccgen.c"
                warning("deprecated use of label at end of compound statement");
            }
            else {
                # 4115 "tccgen.c"
                # 4114 "tccgen.c"
                if(is_expr) {
                    # 4115 "tccgen.c"
                    vpop();
                }
                # 4116 "tccgen.c"
                block(bsym,csym,case_sym,def_sym,case_reg,is_expr);
            }
        }
        else {
            # 4129 "tccgen.c"
            # 4120 "tccgen.c"
            if(_if_conditional820=tok!=59,            _if_conditional820) {
                # 4128 "tccgen.c"
                # 4121 "tccgen.c"
                if(is_expr) {
                    # 4122 "tccgen.c"
                    vpop();
                    # 4123 "tccgen.c"
                    gexpr();
                }
                else {
                    # 4125 "tccgen.c"
                    gexpr();
                    # 4126 "tccgen.c"
                    vpop();
                }
            }
            # 4129 "tccgen.c"
            skip(59);
        }
    }
}

static void decl_designator(struct CType* type, struct Section* sec, unsigned long int c, int* cur_index, struct Sym** cur_field, int size_only){
void* __result_obj__;
struct Sym* s_567;
struct Sym* f_568;
int notfirst_569;
int index_570;
int index_last_571;
int align_572;
int l_573;
int nb_elems_574;
int elem_size_575;
struct CType type1_576;
_Bool _if_conditional822;
_Bool _while_condtional67;
_Bool _if_conditional823;
_Bool _if_conditional824;
_Bool _if_conditional825;
_Bool _if_conditional826;
_Bool _if_conditional827;
_Bool _if_conditional828;
_Bool _if_conditional829;
_Bool _if_conditional830;
_Bool _if_conditional831;
_Bool _if_conditional832;
_Bool _if_conditional833;
_Bool _if_conditional834;
_Bool _if_conditional835;
_Bool _if_conditional836;
_Bool _if_conditional837;
_Bool _if_conditional838;
_Bool _if_conditional839;
unsigned long int c_end_577;
unsigned char* src_578;
unsigned char* dst_579;
int i_580;
_Bool _if_conditional840;
_Bool _if_conditional841;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type1_576, 0, sizeof(struct CType));
memset(&c_end_577, 0, sizeof(unsigned long int));
memset(&i_580, 0, sizeof(int));
    # 4142 "tccgen.c"
    # 4143 "tccgen.c"
    # 4144 "tccgen.c"
    # 4146 "tccgen.c"
    notfirst_569=0;
    # 4147 "tccgen.c"
    elem_size_575=0;
    # 4148 "tccgen.c"
    nb_elems_574=1;
    # 4150 "tccgen.c"
    # 4149 "tccgen.c"
    if(_if_conditional822=gnu_ext&&(l_573=is_label())!=0,    _if_conditional822) {
        # 4150 "tccgen.c"
        goto struct_field;
    }
    # 4209 "tccgen.c"
    while(_while_condtional67=tok==91||tok==46,    _while_condtional67) {
        # 4207 "tccgen.c"
        # 4152 "tccgen.c"
        if(_if_conditional823=tok==91,        _if_conditional823) {
            # 4154 "tccgen.c"
            # 4153 "tccgen.c"
            if(_if_conditional824=!(type->t&32),            _if_conditional824) {
                # 4154 "tccgen.c"
                expect("array type");
            }
            # 4155 "tccgen.c"
            s_567=type->ref;
            # 4156 "tccgen.c"
            next();
            # 4157 "tccgen.c"
            index_570=expr_const();
            # 4159 "tccgen.c"
            # 4158 "tccgen.c"
            if(_if_conditional825=index_570<0||(s_567->c>=0&&index_570>=s_567->c),            _if_conditional825) {
                # 4159 "tccgen.c"
                expect("invalid index");
            }
            # 4170 "tccgen.c"
            # 4160 "tccgen.c"
            if(_if_conditional826=tok==204&&gnu_ext,            _if_conditional826) {
                # 4161 "tccgen.c"
                next();
                # 4162 "tccgen.c"
                index_last_571=expr_const();
                # 4167 "tccgen.c"
                # 4165 "tccgen.c"
                if(_if_conditional827=index_last_571<0||(s_567->c>=0&&index_last_571>=s_567->c)||index_last_571<index_570,                _if_conditional827) {
                    # 4166 "tccgen.c"
                    expect("invalid index");
                }
            }
            else {
                # 4168 "tccgen.c"
                index_last_571=index_570;
            }
            # 4170 "tccgen.c"
            skip(93);
            # 4172 "tccgen.c"
            # 4171 "tccgen.c"
            if(_if_conditional828=!notfirst_569,            _if_conditional828) {
                # 4172 "tccgen.c"
                *cur_index=index_last_571;
            }
            # 4173 "tccgen.c"
            type=pointed_type(type);
            # 4174 "tccgen.c"
            elem_size_575=type_size(type,&align_572);
            # 4175 "tccgen.c"
            c+=index_570*elem_size_575;
            # 4177 "tccgen.c"
            nb_elems_574=index_last_571-index_570+1;
            # 4182 "tccgen.c"
            # 4178 "tccgen.c"
            if(_if_conditional829=nb_elems_574!=1,            _if_conditional829) {
                # 4179 "tccgen.c"
                notfirst_569=1;
                # 4180 "tccgen.c"
                break;
            }
        }
        else {
            # 4183 "tccgen.c"
            next();
            # 4184 "tccgen.c"
            l_573=tok;
            # 4185 "tccgen.c"
            next();
            # 4187 "tccgen.c"
            struct_field:
            # 4188 "tccgen.c"
            # 4187 "tccgen.c"
            if(_if_conditional830=(type->t&15)!=7,            _if_conditional830) {
                # 4188 "tccgen.c"
                expect("struct/union type");
            }
            # 4189 "tccgen.c"
            s_567=type->ref;
            # 4190 "tccgen.c"
            l_573|=536870912;
            # 4191 "tccgen.c"
            f_568=s_567->next;
            # 4197 "tccgen.c"
            while(f_568) {
                # 4194 "tccgen.c"
                # 4193 "tccgen.c"
                if(_if_conditional831=f_568->v==l_573,                _if_conditional831) {
                    # 4194 "tccgen.c"
                    break;
                }
                # 4195 "tccgen.c"
                f_568=f_568->next;
            }
            # 4198 "tccgen.c"
            # 4197 "tccgen.c"
            if(_if_conditional832=!f_568,            _if_conditional832) {
                # 4198 "tccgen.c"
                expect("field");
            }
            # 4200 "tccgen.c"
            # 4199 "tccgen.c"
            if(_if_conditional833=!notfirst_569,            _if_conditional833) {
                # 4200 "tccgen.c"
                *cur_field=f_568;
            }
            # 4202 "tccgen.c"
            type1_576=f_568->type;
            # 4203 "tccgen.c"
            type1_576.t|=(type->t&~(~((128|256|512|1024))));
            # 4204 "tccgen.c"
            type=&type1_576;
            # 4205 "tccgen.c"
            c+=f_568->c;
        }
        # 4207 "tccgen.c"
        notfirst_569=1;
    }
    # 4232 "tccgen.c"
    # 4209 "tccgen.c"
    if(notfirst_569) {
        # 4216 "tccgen.c"
        # 4210 "tccgen.c"
        if(_if_conditional835=tok==61,        _if_conditional835) {
            # 4211 "tccgen.c"
            next();
        }
        else {
            # 4215 "tccgen.c"
            # 4213 "tccgen.c"
            if(_if_conditional836=!gnu_ext,            _if_conditional836) {
                # 4214 "tccgen.c"
                expect("=");
            }
        }
    }
    else {
        # 4231 "tccgen.c"
        # 4217 "tccgen.c"
        if(_if_conditional837=type->t&32,        _if_conditional837) {
            # 4218 "tccgen.c"
            index_570=*cur_index;
            # 4219 "tccgen.c"
            type=pointed_type(type);
            # 4220 "tccgen.c"
            c+=index_570*type_size(type,&align_572);
        }
        else {
            # 4222 "tccgen.c"
            f_568=*cur_field;
            # 4224 "tccgen.c"
            # 4223 "tccgen.c"
            if(_if_conditional838=!f_568,            _if_conditional838) {
                # 4224 "tccgen.c"
                error("too many field init");
            }
            # 4226 "tccgen.c"
            type1_576=f_568->type;
            # 4227 "tccgen.c"
            type1_576.t|=(type->t&~(~((128|256|512|1024))));
            # 4228 "tccgen.c"
            type=&type1_576;
            # 4229 "tccgen.c"
            c+=f_568->c;
        }
    }
    # 4232 "tccgen.c"
    decl_initializer(type,sec,c,0,size_only);
    # 4252 "tccgen.c"
    # 4235 "tccgen.c"
    if(_if_conditional839=!size_only&&nb_elems_574>1,    _if_conditional839) {
        # 4236 "tccgen.c"
        # 4237 "tccgen.c"
        # 4238 "tccgen.c"
        # 4241 "tccgen.c"
        # 4240 "tccgen.c"
        if(_if_conditional840=!sec,        _if_conditional840) {
            # 4241 "tccgen.c"
            error("range init not supported yet for dynamic storage");
        }
        # 4242 "tccgen.c"
        c_end_577=c+nb_elems_574*elem_size_575;
        # 4244 "tccgen.c"
        # 4243 "tccgen.c"
        if(_if_conditional841=c_end_577>sec->data_allocated,        _if_conditional841) {
            # 4244 "tccgen.c"
            section_realloc(sec,c_end_577);
        }
        # 4245 "tccgen.c"
        src_578=sec->data+c;
        # 4246 "tccgen.c"
        dst_579=src_578;
        # 4251 "tccgen.c"
        for(        i_580=1;        i_580<nb_elems_574;        i_580++        ){
            # 4248 "tccgen.c"
            dst_579+=elem_size_575;
            # 4249 "tccgen.c"
            memcpy(dst_579,src_578,elem_size_575);
        }
    }
    come_call_finalizer3((&type1_576),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void init_putv(struct CType* type, struct Section* sec, unsigned long int c, int v, int expr_type){
void* __result_obj__;
int saved_global_expr_581;
int bt_582;
int bit_pos_583;
int bit_size_584;
void* ptr_585;
unsigned long long bit_mask_586;
struct CType dtype_587;
_Bool _if_conditional842;
_Bool _if_conditional843;
_Bool _if_conditional844;
_Bool _if_conditional845;
_Bool _if_conditional846;
_Bool _if_conditional847;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_585, 0, sizeof(void*));
memset(&bit_mask_586, 0, sizeof(unsigned long long));
memset(&dtype_587, 0, sizeof(struct CType));
    # 4262 "tccgen.c"
    # 4263 "tccgen.c"
    # 4264 "tccgen.c"
    # 4265 "tccgen.c"
    # 4286 "tccgen.c"
    switch (expr_type) {
        # 4269 "tccgen.c"
        case 0:
        # 4269 "tccgen.c"
        vpushi(v);
        # 4270 "tccgen.c"
        break;
        # 4273 "tccgen.c"
        case 1:
        # 4273 "tccgen.c"
        saved_global_expr_581=global_expr;
        # 4274 "tccgen.c"
        global_expr=1;
        # 4275 "tccgen.c"
        expr_const1();
        # 4276 "tccgen.c"
        global_expr=saved_global_expr_581;
        # 4279 "tccgen.c"
        # 4278 "tccgen.c"
        if(_if_conditional842=(vtop->r&(255|256))!=240,        _if_conditional842) {
            # 4279 "tccgen.c"
            error("initializer element is not constant");
        }
        # 4280 "tccgen.c"
        break;
        # 4282 "tccgen.c"
        case 2:
        # 4282 "tccgen.c"
        expr_eq();
        # 4283 "tccgen.c"
        break;
    }
    # 4286 "tccgen.c"
    dtype_587=*type;
    # 4287 "tccgen.c"
    dtype_587.t&=~2048;
    # 4349 "tccgen.c"
    # 4289 "tccgen.c"
    if(sec) {
        # 4292 "tccgen.c"
        gen_assign_cast(&dtype_587);
        # 4293 "tccgen.c"
        bt_582=type->t&15;
        # 4298 "tccgen.c"
        # 4295 "tccgen.c"
        if(_if_conditional844=c+12>sec->data_allocated,        _if_conditional844) {
            # 4296 "tccgen.c"
            section_realloc(sec,c+12);
        }
        # 4298 "tccgen.c"
        ptr_585=sec->data+c;
        # 4309 "tccgen.c"
        # 4300 "tccgen.c"
        if(_if_conditional845=!(type->t&64),        _if_conditional845) {
            # 4301 "tccgen.c"
            bit_pos_583=0;
            # 4302 "tccgen.c"
            bit_size_584=32;
            # 4303 "tccgen.c"
            bit_mask_586=-1;
        }
        else {
            # 4305 "tccgen.c"
            bit_pos_583=(vtop->type.t>>16)&63;
            # 4306 "tccgen.c"
            bit_size_584=(vtop->type.t>>(16+6))&63;
            # 4307 "tccgen.c"
            bit_mask_586=(1<<bit_size_584)-1;
        }
        # 4316 "tccgen.c"
        # 4315 "tccgen.c"
        if(_if_conditional846=(vtop->r&512)&&(bt_582==1||bt_582==2||bt_582==9||bt_582==10||bt_582==12||(bt_582==0&&bit_size_584!=32)),        _if_conditional846) {
            # 4316 "tccgen.c"
            error("initializer element is not computable at load time");
        }
        # 4342 "tccgen.c"
        switch (bt_582) {
            # 4319 "tccgen.c"
            case 11:
            # 4319 "tccgen.c"
            vtop->c.i=(vtop->c.i!=0);
            # 4321 "tccgen.c"
            case 1:
            # 4321 "tccgen.c"
            *(char*)ptr_585|=(vtop->c.i&bit_mask_586)<<bit_pos_583;
            # 4322 "tccgen.c"
            break;
            # 4324 "tccgen.c"
            case 2:
            # 4324 "tccgen.c"
            *(short short*)ptr_585|=(vtop->c.i&bit_mask_586)<<bit_pos_583;
            # 4325 "tccgen.c"
            break;
            # 4327 "tccgen.c"
            case 9:
            # 4327 "tccgen.c"
            *(double*)ptr_585=vtop->c.d;
            # 4328 "tccgen.c"
            break;
            # 4330 "tccgen.c"
            case 10:
            # 4330 "tccgen.c"
            *(long double*)ptr_585=vtop->c.ld;
            # 4331 "tccgen.c"
            break;
            # 4333 "tccgen.c"
            case 12:
            # 4333 "tccgen.c"
            *(long long*)ptr_585|=(vtop->c.ll&bit_mask_586)<<bit_pos_583;
            # 4334 "tccgen.c"
            break;
            # 4336 "tccgen.c"
            default:
            # 4339 "tccgen.c"
            # 4336 "tccgen.c"
            if(_if_conditional847=vtop->r&512,            _if_conditional847) {
                # 4337 "tccgen.c"
                greloc(sec,vtop->sym,c,1);
            }
            # 4339 "tccgen.c"
            *(int*)ptr_585|=(vtop->c.i&bit_mask_586)<<bit_pos_583;
            # 4340 "tccgen.c"
            break;
        }
        # 4342 "tccgen.c"
        vtop--;
    }
    else {
        # 4344 "tccgen.c"
        vset(&dtype_587,242|256,c);
        # 4345 "tccgen.c"
        vswap();
        # 4346 "tccgen.c"
        vstore();
        # 4347 "tccgen.c"
        vpop();
    }
    come_call_finalizer3((&dtype_587),CType_finalize, 1, 0, 0, 0, (void*)0);
}

static void init_putz(struct CType* t, struct Section* sec, unsigned long int c, int size){
void* __result_obj__;
_Bool _if_conditional848;
memset(&__result_obj__, 0, sizeof(void*));
    # 4363 "tccgen.c"
    # 4354 "tccgen.c"
    if(sec) {
    }
    else {
        # 4357 "tccgen.c"
        vpush_global_sym(&func_old_type,367);
        # 4358 "tccgen.c"
        vseti(242,c);
        # 4359 "tccgen.c"
        vpushi(0);
        # 4360 "tccgen.c"
        vpushi(size);
        # 4361 "tccgen.c"
        gfunc_call(3);
    }
}

static void decl_initializer(struct CType* type, struct Section* sec, unsigned long int c, int first, int size_only){
void* __result_obj__;
int index_588;
int array_length_589;
int n_590;
int no_oblock_591;
int nb_592;
int parlevel_593;
int i_594;
int size1_595;
int align1_596;
int expr_type_597;
struct Sym* s_598;
struct Sym* f_599;
struct CType* t1_600;
_Bool _if_conditional849;
_Bool _if_conditional850;
_Bool _if_conditional851;
_Bool _while_condtional68;
int cstr_len_601;
int ch_602;
struct CString* cstr_603;
_Bool _if_conditional852;
_Bool _if_conditional853;
_Bool _if_conditional854;
_Bool _if_conditional855;
_Bool _if_conditional856;
_Bool _if_conditional857;
_Bool _if_conditional858;
_Bool _if_conditional859;
_Bool _while_condtional69;
_Bool _if_conditional860;
_Bool _if_conditional861;
_Bool _if_conditional862;
_Bool _if_conditional863;
_Bool _if_conditional864;
_Bool _if_conditional865;
_Bool _if_conditional866;
_Bool _if_conditional867;
_Bool _elif_conditional185;
int par_count_604;
_Bool _if_conditional868;
struct AttributeDef ad1_605;
struct CType type1_606;
_Bool _while_condtional70;
_Bool _if_conditional869;
_Bool _if_conditional870;
_Bool _while_condtional71;
_Bool _if_conditional871;
_Bool _if_conditional872;
_Bool _if_conditional873;
_Bool _if_conditional874;
_Bool _if_conditional875;
_Bool _if_conditional876;
_Bool _elif_conditional186;
_Bool _while_condtional72;
_Bool _if_conditional877;
_Bool _elif_conditional187;
_Bool _if_conditional878;
memset(&__result_obj__, 0, sizeof(void*));
memset(&t1_600, 0, sizeof(struct CType*));
memset(&cstr_603, 0, sizeof(struct CString*));
memset(&par_count_604, 0, sizeof(int));
memset(&ad1_605, 0, sizeof(struct AttributeDef));
memset(&type1_606, 0, sizeof(struct CType));
    # 4373 "tccgen.c"
    # 4374 "tccgen.c"
    # 4375 "tccgen.c"
    # 4376 "tccgen.c"
    # 4571 "tccgen.c"
    # 4378 "tccgen.c"
    if(_if_conditional849=type->t&32,    _if_conditional849) {
        # 4379 "tccgen.c"
        s_598=type->ref;
        # 4380 "tccgen.c"
        n_590=s_598->c;
        # 4381 "tccgen.c"
        array_length_589=0;
        # 4382 "tccgen.c"
        t1_600=pointed_type(type);
        # 4383 "tccgen.c"
        size1_595=type_size(t1_600,&align1_596);
        # 4385 "tccgen.c"
        no_oblock_591=1;
        # 4394 "tccgen.c"
        # 4387 "tccgen.c"
        if(_if_conditional850=(first&&tok!=184&&tok!=181)||tok==123,        _if_conditional850) {
            # 4388 "tccgen.c"
            skip(123);
            # 4389 "tccgen.c"
            no_oblock_591=0;
        }
        # 4470 "tccgen.c"
        # 4400 "tccgen.c"
        if(_if_conditional851=(tok==184&&(t1_600->t&15)==0)||(tok==181&&(t1_600->t&15)==1),        _if_conditional851) {
            # 4439 "tccgen.c"
            while(_while_condtional68=tok==181||tok==184,            _while_condtional68) {
                # 4402 "tccgen.c"
                # 4403 "tccgen.c"
                # 4405 "tccgen.c"
                cstr_603=tokc.cstr;
                # 4410 "tccgen.c"
                # 4407 "tccgen.c"
                if(_if_conditional852=tok==181,                _if_conditional852) {
                    # 4408 "tccgen.c"
                    cstr_len_601=cstr_603->size;
                }
                else {
                    # 4410 "tccgen.c"
                    cstr_len_601=cstr_603->size/sizeof(int);
                }
                # 4411 "tccgen.c"
                cstr_len_601--;
                # 4412 "tccgen.c"
                nb_592=cstr_len_601;
                # 4414 "tccgen.c"
                # 4413 "tccgen.c"
                if(_if_conditional853=n_590>=0&&nb_592>(n_590-array_length_589),                _if_conditional853) {
                    # 4414 "tccgen.c"
                    nb_592=n_590-array_length_589;
                }
                # 4434 "tccgen.c"
                # 4415 "tccgen.c"
                if(_if_conditional854=!size_only,                _if_conditional854) {
                    # 4417 "tccgen.c"
                    # 4416 "tccgen.c"
                    if(_if_conditional855=cstr_len_601>nb_592,                    _if_conditional855) {
                        # 4417 "tccgen.c"
                        warning("initializer-string for array is too long");
                    }
                    # 4433 "tccgen.c"
                    # 4421 "tccgen.c"
                    if(_if_conditional856=sec&&tok==181&&size1_595==1,                    _if_conditional856) {
                        # 4422 "tccgen.c"
                        memcpy(sec->data+c+array_length_589,cstr_603->data,nb_592);
                    }
                    else {
                        # 4432 "tccgen.c"
                        for(                        i_594=0;                        i_594<nb_592;                        i_594++                        ){
                            # 4428 "tccgen.c"
                            # 4425 "tccgen.c"
                            if(_if_conditional857=tok==181,                            _if_conditional857) {
                                # 4426 "tccgen.c"
                                ch_602=((unsigned char*)cstr_603->data)[i_594];
                            }
                            else {
                                # 4428 "tccgen.c"
                                ch_602=((int*)cstr_603->data)[i_594];
                            }
                            # 4430 "tccgen.c"
                            init_putv(t1_600,sec,c+(array_length_589+i_594)*size1_595,ch_602,0);
                        }
                    }
                }
                # 4434 "tccgen.c"
                array_length_589+=nb_592;
                # 4435 "tccgen.c"
                next();
            }
            # 4445 "tccgen.c"
            # 4439 "tccgen.c"
            if(_if_conditional858=n_590<0||array_length_589<n_590,            _if_conditional858) {
                # 4443 "tccgen.c"
                # 4440 "tccgen.c"
                if(_if_conditional859=!size_only,                _if_conditional859) {
                    # 4441 "tccgen.c"
                    init_putv(t1_600,sec,c+(array_length_589*size1_595),0,0);
                }
                # 4443 "tccgen.c"
                array_length_589++;
            }
        }
        else {
            # 4446 "tccgen.c"
            index_588=0;
            # 4469 "tccgen.c"
            while(_while_condtional69=tok!=125,            _while_condtional69) {
                # 4448 "tccgen.c"
                decl_designator(type,sec,c,&index_588,((void*)0),size_only);
                # 4450 "tccgen.c"
                # 4449 "tccgen.c"
                if(_if_conditional860=n_590>=0&&index_588>=n_590,                _if_conditional860) {
                    # 4450 "tccgen.c"
                    error("index too large");
                }
                # 4457 "tccgen.c"
                # 4453 "tccgen.c"
                if(_if_conditional861=!size_only&&array_length_589<index_588,                _if_conditional861) {
                    # 4455 "tccgen.c"
                    init_putz(t1_600,sec,c+array_length_589*size1_595,(index_588-array_length_589)*size1_595);
                }
                # 4457 "tccgen.c"
                index_588++;
                # 4459 "tccgen.c"
                # 4458 "tccgen.c"
                if(_if_conditional862=index_588>array_length_589,                _if_conditional862) {
                    # 4459 "tccgen.c"
                    array_length_589=index_588;
                }
                # 4464 "tccgen.c"
                # 4463 "tccgen.c"
                if(_if_conditional863=index_588>=n_590&&no_oblock_591,                _if_conditional863) {
                    # 4464 "tccgen.c"
                    break;
                }
                # 4466 "tccgen.c"
                # 4465 "tccgen.c"
                if(_if_conditional864=tok==125,                _if_conditional864) {
                    # 4466 "tccgen.c"
                    break;
                }
                # 4467 "tccgen.c"
                skip(44);
            }
        }
        # 4471 "tccgen.c"
        # 4470 "tccgen.c"
        if(_if_conditional865=!no_oblock_591,        _if_conditional865) {
            # 4471 "tccgen.c"
            skip(125);
        }
        # 4478 "tccgen.c"
        # 4473 "tccgen.c"
        if(_if_conditional866=!size_only&&n_590>=0&&array_length_589<n_590,        _if_conditional866) {
            # 4475 "tccgen.c"
            init_putz(t1_600,sec,c+array_length_589*size1_595,(n_590-array_length_589)*size1_595);
        }
        # 4480 "tccgen.c"
        # 4478 "tccgen.c"
        if(_if_conditional867=n_590<0,        _if_conditional867) {
            # 4479 "tccgen.c"
            s_598->c=array_length_589;
        }
    }
    # 4481 "tccgen.c"
    else if(_elif_conditional185=(type->t&15)==7&&(sec||!first||tok==123),    _elif_conditional185) {
        # 4482 "tccgen.c"
        # 4492 "tccgen.c"
        par_count_604=0;
        # 4510 "tccgen.c"
        # 4493 "tccgen.c"
        if(_if_conditional868=tok==40,        _if_conditional868) {
            # 4494 "tccgen.c"
            # 4495 "tccgen.c"
            # 4496 "tccgen.c"
            next();
            # 4501 "tccgen.c"
            while(_while_condtional70=tok==40,            _while_condtional70) {
                # 4498 "tccgen.c"
                par_count_604++;
                # 4499 "tccgen.c"
                next();
            }
            # 4502 "tccgen.c"
            # 4501 "tccgen.c"
            if(_if_conditional869=!parse_btype(&type1_606,&ad1_605),            _if_conditional869) {
                # 4502 "tccgen.c"
                expect("cast");
            }
            # 4503 "tccgen.c"
            type_decl(&type1_606,&ad1_605,&n_590,1);
            # 4508 "tccgen.c"
            skip(41);
            come_call_finalizer3((&ad1_605),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3((&type1_606),CType_finalize, 1, 0, 0, 0, (void*)0);
        }
        # 4510 "tccgen.c"
        no_oblock_591=1;
        # 4515 "tccgen.c"
        # 4511 "tccgen.c"
        if(_if_conditional870=first||tok==123,        _if_conditional870) {
            # 4512 "tccgen.c"
            skip(123);
            # 4513 "tccgen.c"
            no_oblock_591=0;
        }
        # 4515 "tccgen.c"
        s_598=type->ref;
        # 4516 "tccgen.c"
        f_599=s_598->next;
        # 4517 "tccgen.c"
        array_length_589=0;
        # 4518 "tccgen.c"
        index_588=0;
        # 4519 "tccgen.c"
        n_590=s_598->c;
        # 4538 "tccgen.c"
        while(_while_condtional71=tok!=125,        _while_condtional71) {
            # 4521 "tccgen.c"
            decl_designator(type,sec,c,((void*)0),&f_599,size_only);
            # 4522 "tccgen.c"
            index_588=f_599->c;
            # 4527 "tccgen.c"
            # 4523 "tccgen.c"
            if(_if_conditional871=!size_only&&array_length_589<index_588,            _if_conditional871) {
                # 4525 "tccgen.c"
                init_putz(type,sec,c+array_length_589,index_588-array_length_589);
            }
            # 4527 "tccgen.c"
            index_588=index_588+type_size(&f_599->type,&align1_596);
            # 4529 "tccgen.c"
            # 4528 "tccgen.c"
            if(_if_conditional872=index_588>array_length_589,            _if_conditional872) {
                # 4529 "tccgen.c"
                array_length_589=index_588;
            }
            # 4530 "tccgen.c"
            f_599=f_599->next;
            # 4532 "tccgen.c"
            # 4531 "tccgen.c"
            if(_if_conditional873=no_oblock_591&&f_599==((void*)0),            _if_conditional873) {
                # 4532 "tccgen.c"
                break;
            }
            # 4534 "tccgen.c"
            # 4533 "tccgen.c"
            if(_if_conditional874=tok==125,            _if_conditional874) {
                # 4534 "tccgen.c"
                break;
            }
            # 4535 "tccgen.c"
            skip(44);
        }
        # 4542 "tccgen.c"
        # 4538 "tccgen.c"
        if(_if_conditional875=!size_only&&array_length_589<n_590,        _if_conditional875) {
            # 4540 "tccgen.c"
            init_putz(type,sec,c+array_length_589,n_590-array_length_589);
        }
        # 4543 "tccgen.c"
        # 4542 "tccgen.c"
        if(_if_conditional876=!no_oblock_591,        _if_conditional876) {
            # 4543 "tccgen.c"
            skip(125);
        }
        # 4548 "tccgen.c"
        while(par_count_604) {
            # 4545 "tccgen.c"
            skip(41);
            # 4546 "tccgen.c"
            par_count_604--;
        }
    }
    # 4548 "tccgen.c"
    else if(_elif_conditional186=tok==123,    _elif_conditional186) {
        # 4549 "tccgen.c"
        next();
        # 4550 "tccgen.c"
        decl_initializer(type,sec,c,first,size_only);
        # 4551 "tccgen.c"
        skip(125);
    }
    # 4552 "tccgen.c"
    else if(size_only) {
        # 4554 "tccgen.c"
        parlevel_593=0;
        # 4563 "tccgen.c"
        while(_while_condtional72=(parlevel_593>0||(tok!=125&&tok!=44))&&tok!=-1,        _while_condtional72) {
            # 4560 "tccgen.c"
            # 4557 "tccgen.c"
            if(_if_conditional877=tok==40,            _if_conditional877) {
                # 4558 "tccgen.c"
                parlevel_593++;
            }
            # 4559 "tccgen.c"
            else if(_elif_conditional187=tok==41,            _elif_conditional187) {
                # 4560 "tccgen.c"
                parlevel_593--;
            }
            # 4561 "tccgen.c"
            next();
        }
    }
    else {
        # 4566 "tccgen.c"
        expr_type_597=1;
        # 4568 "tccgen.c"
        # 4567 "tccgen.c"
        if(_if_conditional878=!sec,        _if_conditional878) {
            # 4568 "tccgen.c"
            expr_type_597=2;
        }
        # 4569 "tccgen.c"
        init_putv(type,sec,c,0,expr_type_597);
    }
}

static void decl_initializer_alloc(struct CType* type, struct AttributeDef* ad, int r, int has_init, int v, int scope){
void* __result_obj__;
int size_607;
int align_608;
int addr_609;
int data_offset_610;
int level_611;
struct TokenString init_str_613;
struct Section* sec_614;
_Bool _if_conditional879;
_Bool _if_conditional880;
_Bool _if_conditional881;
_Bool _while_condtional73;
_Bool _while_condtional74;
_Bool _if_conditional882;
_Bool _if_conditional883;
_Bool _elif_conditional188;
_Bool _if_conditional884;
_Bool _if_conditional885;
_Bool _if_conditional886;
_Bool _if_conditional887;
_Bool _if_conditional888;
_Bool _if_conditional889;
_Bool _if_conditional890;
unsigned long int* bounds_ptr_615;
_Bool _if_conditional891;
struct Sym* sym_616;
_Bool _if_conditional892;
_Bool _if_conditional893;
_Bool _if_conditional894;
_Bool _if_conditional895;
_Bool _if_conditional896;
_Bool _if_conditional897;
_Bool _if_conditional898;
_Bool _if_conditional899;
_Bool _if_conditional900;
_Bool _if_conditional901;
_Bool _if_conditional902;
_Bool _if_conditional903;
_Bool _if_conditional904;
_Bool _if_conditional905;
_Bool _if_conditional906;
struct anonymous_typeX68* esym_617;
union CValue cval_618;
_Bool _if_conditional907;
unsigned long int* bounds_ptr_619;
_Bool _if_conditional908;
_Bool _if_conditional909;
memset(&__result_obj__, 0, sizeof(void*));
memset(&level_611, 0, sizeof(int));
memset(&init_str_613, 0, sizeof(struct TokenString));
memset(&sec_614, 0, sizeof(struct Section*));
memset(&bounds_ptr_615, 0, sizeof(unsigned long int*));
memset(&sym_616, 0, sizeof(struct Sym*));
memset(&esym_617, 0, sizeof(struct anonymous_typeX68*));
memset(&cval_618, 0, sizeof(union CValue));
memset(&bounds_ptr_619, 0, sizeof(unsigned long int*));
    # 4583 "tccgen.c"
    # 4584 "tccgen.c"
    # 4585 "tccgen.c"
    struct ParseState saved_parse_state_612={0};
    # 4586 "tccgen.c"
    # 4587 "tccgen.c"
    # 4589 "tccgen.c"
    size_607=type_size(type,&align_608);
    # 4596 "tccgen.c"
    tok_str_new(&init_str_613);
    # 4644 "tccgen.c"
    # 4597 "tccgen.c"
    if(_if_conditional879=size_607<0,    _if_conditional879) {
        # 4599 "tccgen.c"
        # 4598 "tccgen.c"
        if(_if_conditional880=!has_init,        _if_conditional880) {
            # 4599 "tccgen.c"
            error("unknown type size");
        }
        # 4625 "tccgen.c"
        # 4601 "tccgen.c"
        if(_if_conditional881=has_init==2,        _if_conditional881) {
            # 4607 "tccgen.c"
            while(_while_condtional73=tok==181||tok==184,            _while_condtional73) {
                # 4604 "tccgen.c"
                tok_str_add_tok(&init_str_613);
                # 4605 "tccgen.c"
                next();
            }
        }
        else {
            # 4608 "tccgen.c"
            level_611=0;
            # 4624 "tccgen.c"
            while(_while_condtional74=level_611>0||(tok!=44&&tok!=59),            _while_condtional74) {
                # 4611 "tccgen.c"
                # 4610 "tccgen.c"
                if(_if_conditional882=tok<0,                _if_conditional882) {
                    # 4611 "tccgen.c"
                    error("unexpected end of file in initializer");
                }
                # 4612 "tccgen.c"
                tok_str_add_tok(&init_str_613);
                # 4622 "tccgen.c"
                # 4613 "tccgen.c"
                if(_if_conditional883=tok==123,                _if_conditional883) {
                    # 4614 "tccgen.c"
                    level_611++;
                }
                # 4615 "tccgen.c"
                else if(_elif_conditional188=tok==125,                _elif_conditional188) {
                    # 4616 "tccgen.c"
                    level_611--;
                    # 4621 "tccgen.c"
                    # 4617 "tccgen.c"
                    if(_if_conditional884=level_611<=0,                    _if_conditional884) {
                        # 4618 "tccgen.c"
                        next();
                        # 4619 "tccgen.c"
                        break;
                    }
                }
                # 4622 "tccgen.c"
                next();
            }
        }
        # 4625 "tccgen.c"
        tok_str_add(&init_str_613,-1);
        # 4626 "tccgen.c"
        tok_str_add(&init_str_613,0);
        # 4629 "tccgen.c"
        save_parse_state(&saved_parse_state_612);
        # 4631 "tccgen.c"
        macro_ptr=init_str_613.str;
        # 4632 "tccgen.c"
        next();
        # 4633 "tccgen.c"
        decl_initializer(type,((void*)0),0,1,1);
        # 4635 "tccgen.c"
        macro_ptr=init_str_613.str;
        # 4636 "tccgen.c"
        next();
        # 4639 "tccgen.c"
        size_607=type_size(type,&align_608);
        # 4642 "tccgen.c"
        # 4640 "tccgen.c"
        if(_if_conditional885=size_607<0,        _if_conditional885) {
            # 4641 "tccgen.c"
            error("unknown type size");
        }
    }
    # 4650 "tccgen.c"
    # 4644 "tccgen.c"
    if(ad->aligned) {
        # 4647 "tccgen.c"
        # 4645 "tccgen.c"
        if(_if_conditional887=ad->aligned>align_608,        _if_conditional887) {
            # 4646 "tccgen.c"
            align_608=ad->aligned;
        }
    }
    # 4647 "tccgen.c"
    else if(ad->packed) {
        # 4648 "tccgen.c"
        align_608=1;
    }
    # 4776 "tccgen.c"
    # 4650 "tccgen.c"
    if(_if_conditional888=(r&255)==242,    _if_conditional888) {
        # 4651 "tccgen.c"
        sec_614=((void*)0);
        # 4653 "tccgen.c"
        # 4652 "tccgen.c"
        if(_if_conditional889=tcc_state->do_bounds_check&&(type->t&32),        _if_conditional889) {
            # 4653 "tccgen.c"
            loc--;
        }
        # 4654 "tccgen.c"
        loc=(loc-size_607)&-align_608;
        # 4655 "tccgen.c"
        addr_609=loc;
        # 4668 "tccgen.c"
        # 4659 "tccgen.c"
        if(_if_conditional890=tcc_state->do_bounds_check&&(type->t&32),        _if_conditional890) {
            # 4660 "tccgen.c"
            # 4662 "tccgen.c"
            loc--;
            # 4664 "tccgen.c"
            bounds_ptr_615=section_ptr_add(lbounds_section,2*sizeof(unsigned long int));
            # 4665 "tccgen.c"
            bounds_ptr_615[0]=addr_609;
            # 4666 "tccgen.c"
            bounds_ptr_615[1]=size_607;
        }
        # 4675 "tccgen.c"
        # 4668 "tccgen.c"
        if(v) {
            # 4670 "tccgen.c"
            sym_push(v,type,r,addr_609);
        }
        else {
            # 4673 "tccgen.c"
            vset(type,r,addr_609);
        }
    }
    else {
        # 4676 "tccgen.c"
        # 4678 "tccgen.c"
        sym_616=((void*)0);
        # 4710 "tccgen.c"
        # 4679 "tccgen.c"
        if(_if_conditional892=v&&scope==240,        _if_conditional892) {
            # 4681 "tccgen.c"
            sym_616=sym_find(v);
            # 4707 "tccgen.c"
            # 4682 "tccgen.c"
            if(sym_616) {
                # 4685 "tccgen.c"
                # 4683 "tccgen.c"
                if(_if_conditional894=!is_compatible_types(&sym_616->type,type),                _if_conditional894) {
                    # 4685 "tccgen.c"
                    error("incompatible types for redefinition of '%s'",get_tok_str(v,((void*)0)));
                }
                # 4706 "tccgen.c"
                # 4686 "tccgen.c"
                if(_if_conditional895=sym_616->type.t&128,                _if_conditional895) {
                    # 4688 "tccgen.c"
                    sym_616->type.t&=~128;
                    # 4695 "tccgen.c"
                    # 4693 "tccgen.c"
                    if(_if_conditional896=(sym_616->type.t&32)&&sym_616->type.ref->c<0&&type->ref->c>=0,                    _if_conditional896) {
                        # 4694 "tccgen.c"
                        sym_616->type.ref->c=type->ref->c;
                    }
                }
                else {
                    # 4705 "tccgen.c"
                    # 4703 "tccgen.c"
                    if(_if_conditional897=!has_init,                    _if_conditional897) {
                        # 4704 "tccgen.c"
                        goto no_alloc;
                    }
                }
            }
        }
        # 4710 "tccgen.c"
        sec_614=ad->section;
        # 4717 "tccgen.c"
        # 4711 "tccgen.c"
        if(_if_conditional898=!sec_614,        _if_conditional898) {
            # 4716 "tccgen.c"
            # 4712 "tccgen.c"
            if(has_init) {
                # 4713 "tccgen.c"
                sec_614=data_section;
            }
            # 4714 "tccgen.c"
            else if(tcc_state->nocommon) {
                # 4715 "tccgen.c"
                sec_614=bss_section;
            }
        }
        # 4739 "tccgen.c"
        # 4717 "tccgen.c"
        if(sec_614) {
            # 4718 "tccgen.c"
            data_offset_610=sec_614->data_offset;
            # 4719 "tccgen.c"
            data_offset_610=(data_offset_610+align_608-1)&-align_608;
            # 4720 "tccgen.c"
            addr_609=data_offset_610;
            # 4723 "tccgen.c"
            data_offset_610+=size_607;
            # 4726 "tccgen.c"
            # 4725 "tccgen.c"
            if(tcc_state->do_bounds_check) {
                # 4726 "tccgen.c"
                data_offset_610++;
            }
            # 4727 "tccgen.c"
            sec_614->data_offset=data_offset_610;
            # 4731 "tccgen.c"
            # 4730 "tccgen.c"
            if(_if_conditional902=sec_614->sh_type!=8&&data_offset_610>sec_614->data_allocated,            _if_conditional902) {
                # 4731 "tccgen.c"
                section_realloc(sec_614,data_offset_610);
            }
            # 4735 "tccgen.c"
            # 4733 "tccgen.c"
            if(_if_conditional903=align_608>sec_614->sh_addralign,            _if_conditional903) {
                # 4734 "tccgen.c"
                sec_614->sh_addralign=align_608;
            }
        }
        else {
            # 4736 "tccgen.c"
            addr_609=0;
        }
        # 4766 "tccgen.c"
        # 4739 "tccgen.c"
        if(v) {
            # 4744 "tccgen.c"
            # 4740 "tccgen.c"
            if(_if_conditional905=scope!=240||!sym_616,            _if_conditional905) {
                # 4741 "tccgen.c"
                sym_616=sym_push(v,type,r|512,0);
            }
            # 4754 "tccgen.c"
            # 4744 "tccgen.c"
            if(sec_614) {
                # 4745 "tccgen.c"
                put_extern_sym(sym_616,sec_614,addr_609,size_607);
            }
            else {
                # 4747 "tccgen.c"
                # 4749 "tccgen.c"
                put_extern_sym(sym_616,((void*)0),align_608,size_607);
                # 4751 "tccgen.c"
                esym_617=&((struct anonymous_typeX68*)symtab_section->data)[sym_616->c];
                # 4752 "tccgen.c"
                esym_617->st_shndx=65522;
            }
        }
        else {
            # 4755 "tccgen.c"
            # 4758 "tccgen.c"
            sym_616=get_sym_ref(type,sec_614,addr_609,size_607);
            # 4759 "tccgen.c"
            cval_618.ul=0;
            # 4760 "tccgen.c"
            vsetc(type,240|512,&cval_618);
            # 4761 "tccgen.c"
            vtop->sym=sym_616;
        }
        # 4775 "tccgen.c"
        # 4766 "tccgen.c"
        if(tcc_state->do_bounds_check) {
            # 4767 "tccgen.c"
            # 4769 "tccgen.c"
            greloc(bounds_section,sym_616,bounds_section->data_offset,1);
            # 4771 "tccgen.c"
            bounds_ptr_619=section_ptr_add(bounds_section,2*sizeof(long));
            # 4772 "tccgen.c"
            bounds_ptr_619[0]=0;
            # 4773 "tccgen.c"
            bounds_ptr_619[1]=size_607;
        }
    }
    # 4784 "tccgen.c"
    # 4776 "tccgen.c"
    if(has_init) {
        # 4777 "tccgen.c"
        decl_initializer(type,sec_614,addr_609,1,0);
        # 4783 "tccgen.c"
        # 4779 "tccgen.c"
        if(init_str_613.str) {
            # 4780 "tccgen.c"
            tok_str_free(init_str_613.str);
            # 4781 "tccgen.c"
            restore_parse_state(&saved_parse_state_612);
        }
    }
    # 4784 "tccgen.c"
    no_alloc:
    come_call_finalizer3((&init_str_613),TokenString_finalize, 1, 0, 0, 0, (void*)0);
}

void put_func_debug(struct Sym* sym){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 4789 "tccgen.c"
    char buf_620[512];
    memset(&buf_620, 0, sizeof(char)    *(512)    );
    # 4794 "tccgen.c"
    snprintf(buf_620,sizeof(buf_620),"%s:%c1",funcname,sym->type.t&256?102:70);
    # 4796 "tccgen.c"
    put_stabs_r(buf_620,36,0,file->line_num,0,cur_text_section,sym->c);
    # 4798 "tccgen.c"
    put_stabn(68,0,file->line_num,0);
    # 4799 "tccgen.c"
    last_ind=0;
    # 4800 "tccgen.c"
    last_line_num=0;
}

static void func_decl_list(struct Sym* func_sym){
void* __result_obj__;
struct AttributeDef ad_621;
int v_622;
struct Sym* s_623;
struct CType btype_624;
struct CType type_625;
_Bool _while_condtional75;
_Bool _if_conditional910;
_Bool _if_conditional911;
_Bool _while_condtional76;
_Bool _if_conditional912;
_Bool _if_conditional913;
_Bool _if_conditional914;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ad_621, 0, sizeof(struct AttributeDef));
memset(&v_622, 0, sizeof(int));
memset(&s_623, 0, sizeof(struct Sym*));
    # 4807 "tccgen.c"
    # 4808 "tccgen.c"
    # 4809 "tccgen.c"
    # 4810 "tccgen.c"
    # 4849 "tccgen.c"
    while(_while_condtional75=tok!=123&&tok!=59&&tok!=44&&tok!=(-1),    _while_condtional75) {
        # 4815 "tccgen.c"
        # 4814 "tccgen.c"
        if(_if_conditional910=!parse_btype(&btype_624,&ad_621),        _if_conditional910) {
            # 4815 "tccgen.c"
            expect("declaration list");
        }
        # 4847 "tccgen.c"
        # 4818 "tccgen.c"
        if(_if_conditional911=((btype_624.t&15)==5||(btype_624.t&15)==7)&&tok==59,        _if_conditional911) {
        }
        else {
            # 4846 "tccgen.c"
            for(            ;            ;            ){
                # 4822 "tccgen.c"
                type_625=btype_624;
                # 4823 "tccgen.c"
                type_decl(&type_625,&ad_621,&v_622,2);
                # 4825 "tccgen.c"
                s_623=func_sym->next;
                # 4831 "tccgen.c"
                while(_while_condtional76=s_623!=((void*)0),                _while_condtional76) {
                    # 4828 "tccgen.c"
                    # 4827 "tccgen.c"
                    if(_if_conditional912=(s_623->v&~536870912)==v_622,                    _if_conditional912) {
                        # 4828 "tccgen.c"
                        goto found;
                    }
                    # 4829 "tccgen.c"
                    s_623=s_623->next;
                }
                # 4832 "tccgen.c"
                error("declaration for parameter '%s' but no such parameter",get_tok_str(v_622,((void*)0)));
                # 4835 "tccgen.c"
                found:
                # 4836 "tccgen.c"
                # 4835 "tccgen.c"
                if(_if_conditional913=type_625.t&(128|256|512|1024),                _if_conditional913) {
                    # 4836 "tccgen.c"
                    error("storage class specified for '%s'",get_tok_str(v_622,((void*)0)));
                }
                # 4837 "tccgen.c"
                convert_parameter_type(&type_625);
                # 4839 "tccgen.c"
                s_623->type=type_625;
                # 4844 "tccgen.c"
                # 4841 "tccgen.c"
                if(_if_conditional914=tok==44,                _if_conditional914) {
                    # 4842 "tccgen.c"
                    next();
                }
                else {
                    # 4844 "tccgen.c"
                    break;
                }
            }
        }
        # 4847 "tccgen.c"
        skip(59);
    }
    come_call_finalizer3((&ad_621),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static void gen_function(struct Sym* sym){
void* __result_obj__;
int saved_nocode_wanted_626;
_Bool _if_conditional915;
_Bool _if_conditional916;
memset(&__result_obj__, 0, sizeof(void*));
memset(&saved_nocode_wanted_626, 0, sizeof(int));
    # 4855 "tccgen.c"
    saved_nocode_wanted_626=nocode_wanted;
    # 4856 "tccgen.c"
    nocode_wanted=0;
    # 4857 "tccgen.c"
    ind=cur_text_section->data_offset;
    # 4859 "tccgen.c"
    put_extern_sym(sym,cur_text_section,ind,0);
    # 4860 "tccgen.c"
    funcname=get_tok_str(sym->v,((void*)0));
    # 4861 "tccgen.c"
    func_ind=ind;
    # 4864 "tccgen.c"
    # 4863 "tccgen.c"
    if(tcc_state->do_debug) {
        # 4864 "tccgen.c"
        put_func_debug(sym);
    }
    # 4866 "tccgen.c"
    sym_push2(&local_stack,536870912,0,0);
    # 4867 "tccgen.c"
    gfunc_prolog(&sym->type);
    # 4868 "tccgen.c"
    rsym=0;
    # 4869 "tccgen.c"
    block(((void*)0),((void*)0),((void*)0),((void*)0),0,0);
    # 4870 "tccgen.c"
    gsym(rsym);
    # 4871 "tccgen.c"
    gfunc_epilog();
    # 4872 "tccgen.c"
    cur_text_section->data_offset=ind;
    # 4873 "tccgen.c"
    label_pop(&global_label_stack,((void*)0));
    # 4874 "tccgen.c"
    sym_pop(&local_stack,((void*)0));
    # 4878 "tccgen.c"
    ((struct anonymous_typeX68*)symtab_section->data)[sym->c].st_size=ind-func_ind;
    # 4883 "tccgen.c"
    # 4879 "tccgen.c"
    if(tcc_state->do_debug) {
        # 4880 "tccgen.c"
        put_stabn(36,0,0,ind-func_ind);
    }
    # 4883 "tccgen.c"
    cur_text_section=((void*)0);
    # 4884 "tccgen.c"
    funcname="";
    # 4885 "tccgen.c"
    func_vt.t=3;
    # 4886 "tccgen.c"
    ind=0;
    # 4887 "tccgen.c"
    nocode_wanted=saved_nocode_wanted_626;
}

static void gen_inline_functions(){
void* __result_obj__;
struct Sym* sym_627;
struct CType* type_628;
int* str_629;
int inline_generated_630;
_Bool _if_conditional917;
_Bool _if_conditional918;
_Bool _if_conditional919;
_Bool _if_conditional920;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_627, 0, sizeof(struct Sym*));
memset(&type_628, 0, sizeof(struct CType*));
    # 4892 "tccgen.c"
    # 4893 "tccgen.c"
    # 4894 "tccgen.c"
    # 4926 "tccgen.c"
    for(    ;    ;    ){
        # 4898 "tccgen.c"
        inline_generated_630=0;
        # 4921 "tccgen.c"
        for(        sym_627=global_stack;        sym_627!=((void*)0);        sym_627=sym_627->prev        ){
            # 4900 "tccgen.c"
            type_628=&sym_627->type;
            # 4920 "tccgen.c"
            # 4904 "tccgen.c"
            if(_if_conditional917=((type_628->t&15)==6)&&(type_628->t&(256|1024))==(256|1024)&&sym_627->c!=0,            _if_conditional917) {
                # 4907 "tccgen.c"
                str_629=(*(int**)&(sym_627->r));
                # 4908 "tccgen.c"
                sym_627->r=512|240;
                # 4909 "tccgen.c"
                sym_627->type.t&=~1024;
                # 4911 "tccgen.c"
                macro_ptr=str_629;
                # 4912 "tccgen.c"
                next();
                # 4913 "tccgen.c"
                cur_text_section=text_section;
                # 4914 "tccgen.c"
                gen_function(sym_627);
                # 4915 "tccgen.c"
                macro_ptr=((void*)0);
                # 4917 "tccgen.c"
                tok_str_free(str_629);
                # 4918 "tccgen.c"
                inline_generated_630=1;
            }
        }
        # 4923 "tccgen.c"
        # 4921 "tccgen.c"
        if(_if_conditional918=!inline_generated_630,        _if_conditional918) {
            # 4922 "tccgen.c"
            break;
        }
    }
    # 4939 "tccgen.c"
    for(    sym_627=global_stack;    sym_627!=((void*)0);    sym_627=sym_627->prev    ){
        # 4927 "tccgen.c"
        type_628=&sym_627->type;
        # 4938 "tccgen.c"
        # 4930 "tccgen.c"
        if(_if_conditional919=((type_628->t&15)==6)&&(type_628->t&(256|1024))==(256|1024),        _if_conditional919) {
            # 4933 "tccgen.c"
            # 4932 "tccgen.c"
            if(_if_conditional920=sym_627->r==(512|240),            _if_conditional920) {
                # 4933 "tccgen.c"
                continue;
            }
            # 4934 "tccgen.c"
            str_629=(*(int**)&(sym_627->r));
            # 4935 "tccgen.c"
            tok_str_free(str_629);
            # 4936 "tccgen.c"
            sym_627->r=0;
        }
    }
}

static void decl(int l){
void* __result_obj__;
int v_631;
int has_init_632;
int r_633;
struct CType type_634;
struct CType btype_635;
struct Sym* sym_636;
struct AttributeDef ad_637;
_Bool _while_condtional77;
_Bool _if_conditional921;
_Bool _if_conditional922;
_Bool _if_conditional923;
_Bool _if_conditional924;
_Bool _if_conditional925;
_Bool _while_condtional78;
_Bool _if_conditional926;
_Bool _if_conditional927;
_Bool _if_conditional928;
_Bool _if_conditional929;
_Bool _if_conditional930;
_Bool _while_condtional79;
_Bool _if_conditional931;
_Bool _if_conditional932;
_Bool _if_conditional933;
_Bool _if_conditional934;
_Bool _if_conditional935;
_Bool _if_conditional936;
_Bool _if_conditional937;
_Bool _if_conditional938;
struct TokenString func_str_638;
int block_level_639;
int t_640;
_Bool _if_conditional939;
_Bool _if_conditional940;
_Bool _elif_conditional189;
_Bool _if_conditional941;
_Bool _if_conditional942;
_Bool _if_conditional943;
_Bool _elif_conditional190;
_Bool _if_conditional944;
_Bool _if_conditional945;
_Bool _if_conditional946;
_Bool _if_conditional947;
_Bool _if_conditional948;
_Bool _if_conditional949;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_636, 0, sizeof(struct Sym*));
memset(&ad_637, 0, sizeof(struct AttributeDef));
memset(&func_str_638, 0, sizeof(struct TokenString));
memset(&block_level_639, 0, sizeof(int));
memset(&t_640, 0, sizeof(int));
    # 4944 "tccgen.c"
    # 4945 "tccgen.c"
    # 4946 "tccgen.c"
    # 4947 "tccgen.c"
    # 5121 "tccgen.c"
    while(_while_condtional77=1,    _while_condtional77) {
        # 4969 "tccgen.c"
        # 4950 "tccgen.c"
        if(_if_conditional921=!parse_btype(&btype_635,&ad_637),        _if_conditional921) {
            # 4957 "tccgen.c"
            # 4953 "tccgen.c"
            if(_if_conditional922=tok==59,            _if_conditional922) {
                # 4954 "tccgen.c"
                next();
                # 4955 "tccgen.c"
                continue;
            }
            # 4965 "tccgen.c"
            # 4958 "tccgen.c"
            if(_if_conditional923=l==240&&(tok==311||tok==312||tok==313),            _if_conditional923) {
                # 4960 "tccgen.c"
                asm_global_instr();
                # 4961 "tccgen.c"
                continue;
            }
            # 4966 "tccgen.c"
            # 4965 "tccgen.c"
            if(_if_conditional924=l==242||tok<314,            _if_conditional924) {
                # 4966 "tccgen.c"
                break;
            }
            # 4967 "tccgen.c"
            btype_635.t=0;
        }
        # 4976 "tccgen.c"
        # 4971 "tccgen.c"
        if(_if_conditional925=((btype_635.t&15)==5||(btype_635.t&15)==7)&&tok==59,        _if_conditional925) {
            # 4973 "tccgen.c"
            next();
            # 4974 "tccgen.c"
            continue;
        }
        # 5120 "tccgen.c"
        while(_while_condtional78=1,        _while_condtional78) {
            # 4977 "tccgen.c"
            type_634=btype_635;
            # 4978 "tccgen.c"
            type_decl(&type_634,&ad_637,&v_631,2);
            # 4994 "tccgen.c"
            # 4986 "tccgen.c"
            if(_if_conditional926=(type_634.t&15)==6,            _if_conditional926) {
                # 4989 "tccgen.c"
                sym_636=type_634.ref;
                # 4992 "tccgen.c"
                # 4990 "tccgen.c"
                if(_if_conditional927=sym_636->c==2,                _if_conditional927) {
                    # 4991 "tccgen.c"
                    func_decl_list(sym_636);
                }
            }
            # 5119 "tccgen.c"
            # 4994 "tccgen.c"
            if(_if_conditional928=tok==123,            _if_conditional928) {
                # 4996 "tccgen.c"
                # 4995 "tccgen.c"
                if(_if_conditional929=l==242,                _if_conditional929) {
                    # 4996 "tccgen.c"
                    error("cannot use local functions");
                }
                # 4998 "tccgen.c"
                # 4997 "tccgen.c"
                if(_if_conditional930=(type_634.t&15)!=6,                _if_conditional930) {
                    # 4998 "tccgen.c"
                    expect("function definition");
                }
                # 5001 "tccgen.c"
                sym_636=type_634.ref;
                # 5004 "tccgen.c"
                while(_while_condtional79=(sym_636=sym_636->next)!=((void*)0),                _while_condtional79) {
                    # 5004 "tccgen.c"
                    # 5003 "tccgen.c"
                    if(_if_conditional931=!(sym_636->v&~536870912),                    _if_conditional931) {
                        # 5004 "tccgen.c"
                        expect("identifier");
                    }
                }
                # 5008 "tccgen.c"
                # 5007 "tccgen.c"
                if(_if_conditional932=(type_634.t&(128|1024))==(128|1024),                _if_conditional932) {
                    # 5008 "tccgen.c"
                    type_634.t=(type_634.t&~128)|256;
                }
                # 5010 "tccgen.c"
                sym_636=sym_find(v_631);
                # 5040 "tccgen.c"
                # 5011 "tccgen.c"
                if(sym_636) {
                    # 5013 "tccgen.c"
                    # 5012 "tccgen.c"
                    if(_if_conditional934=(sym_636->type.t&15)!=6,                    _if_conditional934) {
                        # 5013 "tccgen.c"
                        goto func_error1;
                    }
                    # 5017 "tccgen.c"
                    r_633=sym_636->type.ref->r;
                    # 5020 "tccgen.c"
                    # 5019 "tccgen.c"
                    if(_if_conditional935=(((struct anonymous_typeX107*)&(r_633))->func_call)!=0&&(((struct anonymous_typeX107*)&(type_634.ref->r))->func_call)==0,                    _if_conditional935) {
                        # 5020 "tccgen.c"
                        (((struct anonymous_typeX107*)&(type_634.ref->r))->func_call)=(((struct anonymous_typeX107*)&(r_633))->func_call);
                    }
                    # 5022 "tccgen.c"
                    # 5021 "tccgen.c"
                    if(_if_conditional936=(((struct anonymous_typeX107*)&(r_633))->func_export),                    _if_conditional936) {
                        # 5022 "tccgen.c"
                        (((struct anonymous_typeX107*)&(type_634.ref->r))->func_export)=1;
                    }
                    # 5030 "tccgen.c"
                    # 5024 "tccgen.c"
                    if(_if_conditional937=!is_compatible_types(&sym_636->type,&type_634),                    _if_conditional937) {
                        # 5026 "tccgen.c"
                        func_error1:
                        # 5027 "tccgen.c"
                        error("incompatible types for redefinition of '%s'",get_tok_str(v_631,((void*)0)));
                    }
                    # 5030 "tccgen.c"
                    sym_636->type=type_634;
                }
                else {
                    # 5033 "tccgen.c"
                    sym_636=global_identifier_push(v_631,type_634.t,0);
                    # 5034 "tccgen.c"
                    sym_636->type.ref=type_634.ref;
                }
                # 5074 "tccgen.c"
                # 5041 "tccgen.c"
                if(_if_conditional938=(type_634.t&(1024|256))==(1024|256),                _if_conditional938) {
                    # 5042 "tccgen.c"
                    # 5043 "tccgen.c"
                    # 5045 "tccgen.c"
                    tok_str_new(&func_str_638);
                    # 5047 "tccgen.c"
                    block_level_639=0;
                    # 5063 "tccgen.c"
                    for(                    ;                    ;                    ){
                        # 5049 "tccgen.c"
                        # 5051 "tccgen.c"
                        # 5050 "tccgen.c"
                        if(_if_conditional939=tok==(-1),                        _if_conditional939) {
                            # 5051 "tccgen.c"
                            error("unexpected end of file");
                        }
                        # 5052 "tccgen.c"
                        tok_str_add_tok(&func_str_638);
                        # 5053 "tccgen.c"
                        t_640=tok;
                        # 5054 "tccgen.c"
                        next();
                        # 5062 "tccgen.c"
                        # 5055 "tccgen.c"
                        if(_if_conditional940=t_640==123,                        _if_conditional940) {
                            # 5056 "tccgen.c"
                            block_level_639++;
                        }
                        # 5057 "tccgen.c"
                        else if(_elif_conditional189=t_640==125,                        _elif_conditional189) {
                            # 5058 "tccgen.c"
                            block_level_639--;
                            # 5061 "tccgen.c"
                            # 5059 "tccgen.c"
                            if(_if_conditional941=block_level_639==0,                            _if_conditional941) {
                                # 5060 "tccgen.c"
                                break;
                            }
                        }
                    }
                    # 5063 "tccgen.c"
                    tok_str_add(&func_str_638,-1);
                    # 5064 "tccgen.c"
                    tok_str_add(&func_str_638,0);
                    # 5065 "tccgen.c"
                    (*(int**)&(sym_636->r))=func_str_638.str;
                    come_call_finalizer3((&func_str_638),TokenString_finalize, 1, 0, 0, 0, (void*)0);
                }
                else {
                    # 5068 "tccgen.c"
                    cur_text_section=ad_637.section;
                    # 5070 "tccgen.c"
                    # 5069 "tccgen.c"
                    if(_if_conditional942=!cur_text_section,                    _if_conditional942) {
                        # 5070 "tccgen.c"
                        cur_text_section=text_section;
                    }
                    # 5071 "tccgen.c"
                    sym_636->r=512|240;
                    # 5072 "tccgen.c"
                    gen_function(sym_636);
                }
                # 5074 "tccgen.c"
                break;
            }
            else {
                # 5113 "tccgen.c"
                # 5076 "tccgen.c"
                if(_if_conditional943=btype_635.t&512,                _if_conditional943) {
                    # 5079 "tccgen.c"
                    sym_636=sym_push(v_631,&type_634,0,0);
                    # 5080 "tccgen.c"
                    sym_636->type.t|=512;
                }
                # 5081 "tccgen.c"
                else if(_elif_conditional190=(type_634.t&15)==6,                _elif_conditional190) {
                    # 5085 "tccgen.c"
                    # 5084 "tccgen.c"
                    if(ad_637.func_attr) {
                        # 5085 "tccgen.c"
                        type_634.ref->r=ad_637.func_attr;
                    }
                    # 5086 "tccgen.c"
                    external_sym(v_631,&type_634,0);
                }
                else {
                    # 5089 "tccgen.c"
                    r_633=0;
                    # 5091 "tccgen.c"
                    # 5090 "tccgen.c"
                    if(_if_conditional945=!(type_634.t&32),                    _if_conditional945) {
                        # 5091 "tccgen.c"
                        r_633|=lvalue_type(type_634.t);
                    }
                    # 5092 "tccgen.c"
                    has_init_632=(tok==61);
                    # 5112 "tccgen.c"
                    # 5095 "tccgen.c"
                    if(_if_conditional946=(btype_635.t&128)||((type_634.t&32)&&(type_634.t&256)&&!has_init_632&&l==240&&type_634.ref->c<0),                    _if_conditional946) {
                        # 5100 "tccgen.c"
                        external_sym(v_631,&type_634,r_633);
                    }
                    else {
                        # 5102 "tccgen.c"
                        type_634.t|=(btype_635.t&256);
                        # 5106 "tccgen.c"
                        # 5103 "tccgen.c"
                        if(_if_conditional947=type_634.t&256,                        _if_conditional947) {
                            # 5104 "tccgen.c"
                            r_633|=240;
                        }
                        else {
                            # 5106 "tccgen.c"
                            r_633|=l;
                        }
                        # 5108 "tccgen.c"
                        # 5107 "tccgen.c"
                        if(has_init_632) {
                            # 5108 "tccgen.c"
                            next();
                        }
                        # 5110 "tccgen.c"
                        decl_initializer_alloc(&type_634,&ad_637,r_633,has_init_632,v_631,l);
                    }
                }
                # 5117 "tccgen.c"
                # 5113 "tccgen.c"
                if(_if_conditional949=tok!=44,                _if_conditional949) {
                    # 5114 "tccgen.c"
                    skip(59);
                    # 5115 "tccgen.c"
                    break;
                }
                # 5117 "tccgen.c"
                next();
            }
        }
    }
    come_call_finalizer3((&ad_637),AttributeDef_finalize, 1, 0, 0, 0, (void*)0);
}

static int tcc_compile(struct TCCState* s1){
void* __result_obj__;
struct Sym* define_start_641;
int section_sym_643;
_Bool _if_conditional950;
_Bool _if_conditional951;
_Bool _if_conditional952;
_Bool _if_conditional953;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_start_641, 0, sizeof(struct Sym*));
memset(&section_sym_643, 0, sizeof(int));
    # 1137 "libtcc.c"
    # 1138 "libtcc.c"
    char buf_642[512];
    memset(&buf_642, 0, sizeof(char)    *(512)    );
    # 1139 "libtcc.c"
    # 1144 "libtcc.c"
    preprocess_init(s1);
    # 1146 "libtcc.c"
    cur_text_section=((void*)0);
    # 1147 "libtcc.c"
    funcname="";
    # 1148 "libtcc.c"
    anon_sym=268435456;
    # 1151 "libtcc.c"
    section_sym_643=0;
    # 1168 "libtcc.c"
    # 1152 "libtcc.c"
    if(s1->do_debug) {
        # 1155 "libtcc.c"
        section_sym_643=put_elf_sym(symtab_section,0,0,((((0))<<4)+(((3))&15)),0,text_section->sh_num,((void*)0));
        # 1156 "libtcc.c"
        getcwd(buf_642,sizeof(buf_642));
        # 1160 "libtcc.c"
        pstrcat(buf_642,sizeof(buf_642),"/");
        # 1162 "libtcc.c"
        put_stabs_r(buf_642,100,0,0,text_section->data_offset,text_section,section_sym_643);
        # 1164 "libtcc.c"
        put_stabs_r(file->filename,100,0,0,text_section->data_offset,text_section,section_sym_643);
    }
    # 1170 "libtcc.c"
    put_elf_sym(symtab_section,0,0,((((0))<<4)+(((4))&15)),0,65521,file->filename);
    # 1173 "libtcc.c"
    int_type.t=0;
    # 1175 "libtcc.c"
    char_pointer_type.t=1;
    # 1176 "libtcc.c"
    mk_pointer(&char_pointer_type);
    # 1178 "libtcc.c"
    func_old_type.t=6;
    # 1179 "libtcc.c"
    func_old_type.ref=sym_push(536870912,&int_type,0,2);
    # 1205 "libtcc.c"
    define_start_641=define_stack;
    # 1206 "libtcc.c"
    nocode_wanted=1;
    # 1226 "libtcc.c"
    # 1208 "libtcc.c"
    if(_if_conditional951=setjmp(s1->error_jmp_buf)==0,    _if_conditional951) {
        # 1209 "libtcc.c"
        s1->nb_errors=0;
        # 1210 "libtcc.c"
        s1->error_set_jmp_enabled=1;
        # 1212 "libtcc.c"
        ch=file->buf_ptr[0];
        # 1213 "libtcc.c"
        tok_flags=1|2;
        # 1214 "libtcc.c"
        parse_flags=1|2;
        # 1215 "libtcc.c"
        next();
        # 1216 "libtcc.c"
        decl(240);
        # 1218 "libtcc.c"
        # 1217 "libtcc.c"
        if(_if_conditional952=tok!=(-1),        _if_conditional952) {
            # 1218 "libtcc.c"
            expect("declaration");
        }
        # 1225 "libtcc.c"
        # 1221 "libtcc.c"
        if(s1->do_debug) {
            # 1223 "libtcc.c"
            put_stabs_r(((void*)0),100,0,0,text_section->data_offset,text_section,section_sym_643);
        }
    }
    # 1226 "libtcc.c"
    s1->error_set_jmp_enabled=0;
    # 1230 "libtcc.c"
    free_defines(define_start_641);
    # 1232 "libtcc.c"
    gen_inline_functions();
    # 1234 "libtcc.c"
    sym_pop(&global_stack,((void*)0));
    # 1235 "libtcc.c"
    sym_pop(&local_stack,((void*)0));
    # 1237 "libtcc.c"
    __result147__ = s1->nb_errors!=0?-1:0;
    return __result147__;
}

int tcc_compile_string(struct TCCState* s, const char* str){
void* __result_obj__;
struct BufferedFile bf1_644;
int ret_646;
int len_647;
char* buf_648;
_Bool _if_conditional954;
int __result148__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_648, 0, sizeof(char*));
    # 1242 "libtcc.c"
    struct BufferedFile* bf_645=&bf1_644;
    # 1243 "libtcc.c"
    # 1244 "libtcc.c"
    # 1247 "libtcc.c"
    bf_645->fd=-1;
    # 1249 "libtcc.c"
    len_647=strlen(str);
    # 1250 "libtcc.c"
    buf_648=tcc_malloc(len_647+1);
    # 1252 "libtcc.c"
    # 1251 "libtcc.c"
    if(_if_conditional954=!buf_648,    _if_conditional954) {
        # 1252 "libtcc.c"
        __result148__ = -1;
        return __result148__;
    }
    # 1253 "libtcc.c"
    memcpy(buf_648,str,len_647);
    # 1254 "libtcc.c"
    buf_648[len_647]=92;
    # 1255 "libtcc.c"
    bf_645->buf_ptr=buf_648;
    # 1256 "libtcc.c"
    bf_645->buf_end=buf_648+len_647;
    # 1257 "libtcc.c"
    pstrcpy(bf_645->filename,sizeof(bf_645->filename),"<string>");
    # 1258 "libtcc.c"
    bf_645->line_num=1;
    # 1259 "libtcc.c"
    file=bf_645;
    # 1260 "libtcc.c"
    ret_646=tcc_compile(s);
    # 1261 "libtcc.c"
    file=((void*)0);
    # 1262 "libtcc.c"
    tcc_free(buf_648);
    # 1265 "libtcc.c"
    __result149__ = ret_646;
    return __result149__;
}

void tcc_define_symbol(struct TCCState* s1, const char* sym, const char* value){
void* __result_obj__;
struct BufferedFile bf1_649;
_Bool _if_conditional955;
value="1";
memset(&__result_obj__, 0, sizeof(void*));
    # 1271 "libtcc.c"
    struct BufferedFile* bf_650=&bf1_649;
    # 1273 "libtcc.c"
    pstrcpy(bf_650->buffer,8192,sym);
    # 1274 "libtcc.c"
    pstrcat(bf_650->buffer,8192," ");
    # 1277 "libtcc.c"
    # 1276 "libtcc.c"
    if(_if_conditional955=!value,    _if_conditional955) {
        # 1277 "libtcc.c"
    }
    # 1278 "libtcc.c"
    pstrcat(bf_650->buffer,8192,value);
    # 1281 "libtcc.c"
    bf_650->fd=-1;
    # 1282 "libtcc.c"
    bf_650->buf_ptr=bf_650->buffer;
    # 1283 "libtcc.c"
    bf_650->buf_end=bf_650->buffer+strlen(bf_650->buffer);
    # 1284 "libtcc.c"
    *bf_650->buf_end=92;
    # 1285 "libtcc.c"
    bf_650->filename[0]=0;
    # 1286 "libtcc.c"
    bf_650->line_num=1;
    # 1287 "libtcc.c"
    file=bf_650;
    # 1289 "libtcc.c"
    s1->include_stack_ptr=s1->include_stack;
    # 1292 "libtcc.c"
    ch=file->buf_ptr[0];
    # 1293 "libtcc.c"
    next_nomacro();
    # 1294 "libtcc.c"
    parse_define();
    # 1295 "libtcc.c"
    file=((void*)0);
}

void tcc_undefine_symbol(struct TCCState* s1, const char* sym){
void* __result_obj__;
struct TokenSym* ts_651;
struct Sym* s_652;
_Bool _if_conditional956;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ts_651, 0, sizeof(struct TokenSym*));
memset(&s_652, 0, sizeof(struct Sym*));
    # 1301 "libtcc.c"
    # 1302 "libtcc.c"
    # 1303 "libtcc.c"
    ts_651=tok_alloc(sym,strlen(sym));
    # 1304 "libtcc.c"
    s_652=define_find(ts_651->tok);
    # 1308 "libtcc.c"
    # 1306 "libtcc.c"
    if(s_652) {
        # 1307 "libtcc.c"
        define_undef(s_652);
    }
}

static void asm_instr(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1320 "libtcc.c"
    error("inline asm() not supported");
}

static void asm_global_instr(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1324 "libtcc.c"
    error("inline asm() not supported");
}

static int put_elf_str(struct Section* s, const char* sym){
void* __result_obj__;
int offset_653;
int len_654;
char* ptr_655;
int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_655, 0, sizeof(char*));
    # 38 "tccelf.c"
    # 39 "tccelf.c"
    # 41 "tccelf.c"
    len_654=strlen(sym)+1;
    # 42 "tccelf.c"
    offset_653=s->data_offset;
    # 43 "tccelf.c"
    ptr_655=section_ptr_add(s,len_654);
    # 44 "tccelf.c"
    memcpy(ptr_655,sym,len_654);
    # 45 "tccelf.c"
    __result150__ = offset_653;
    return __result150__;
}

static unsigned long int elf_hash(const unsigned char* name){
void* __result_obj__;
unsigned long int g_657;
_Bool _while_condtional80;
_Bool _if_conditional957;
unsigned long int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 51 "tccelf.c"
    unsigned long int h_656=0;
    # 60 "tccelf.c"
    while(_while_condtional80=*name,    _while_condtional80) {
        # 54 "tccelf.c"
        h_656=(h_656<<4)+*name++;
        # 55 "tccelf.c"
        g_657=h_656&-268435456;
        # 57 "tccelf.c"
        # 56 "tccelf.c"
        if(g_657) {
            # 57 "tccelf.c"
            h_656^=g_657>>24;
        }
        # 58 "tccelf.c"
        h_656&=~g_657;
    }
    # 60 "tccelf.c"
    __result151__ = h_656;
    return __result151__;
}

static void rebuild_hash(struct Section* s, unsigned int nb_buckets){
void* __result_obj__;
struct anonymous_typeX68* sym_658;
int* ptr_659;
int* hash_660;
int nb_syms_661;
int sym_index_662;
int h_663;
char* strtab_664;
_Bool _if_conditional958;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_658, 0, sizeof(struct anonymous_typeX68*));
memset(&strtab_664, 0, sizeof(char*));
    # 67 "tccelf.c"
    # 68 "tccelf.c"
    # 69 "tccelf.c"
    # 71 "tccelf.c"
    strtab_664=s->link->data;
    # 72 "tccelf.c"
    nb_syms_661=s->data_offset/sizeof(struct anonymous_typeX68);
    # 74 "tccelf.c"
    s->hash->data_offset=0;
    # 75 "tccelf.c"
    ptr_659=section_ptr_add(s->hash,(2+nb_buckets+nb_syms_661)*sizeof(int));
    # 76 "tccelf.c"
    ptr_659[0]=nb_buckets;
    # 77 "tccelf.c"
    ptr_659[1]=nb_syms_661;
    # 78 "tccelf.c"
    ptr_659+=2;
    # 79 "tccelf.c"
    hash_660=ptr_659;
    # 80 "tccelf.c"
    memset(hash_660,0,(nb_buckets+1)*sizeof(int));
    # 81 "tccelf.c"
    ptr_659+=nb_buckets+1;
    # 83 "tccelf.c"
    sym_658=(struct anonymous_typeX68*)s->data+1;
    # 95 "tccelf.c"
    for(    sym_index_662=1;    sym_index_662<nb_syms_661;    sym_index_662++    ){
        # 92 "tccelf.c"
        # 85 "tccelf.c"
        if(_if_conditional958=(((unsigned char)(sym_658->st_info))>>4)!=0,        _if_conditional958) {
            # 86 "tccelf.c"
            h_663=elf_hash(strtab_664+sym_658->st_name)%nb_buckets;
            # 87 "tccelf.c"
            *ptr_659=hash_660[h_663];
            # 88 "tccelf.c"
            hash_660[h_663]=sym_index_662;
        }
        else {
            # 90 "tccelf.c"
            *ptr_659=0;
        }
        # 92 "tccelf.c"
        ptr_659++;
        # 93 "tccelf.c"
        sym_658++;
    }
}

static int put_elf_sym(struct Section* s, unsigned long int value, unsigned long int size, int info, int other, int shndx, const char* name){
void* __result_obj__;
int name_offset_665;
int sym_index_666;
int nbuckets_667;
int h_668;
struct anonymous_typeX68* sym_669;
struct Section* hs_670;
_Bool _if_conditional959;
_Bool _if_conditional960;
int* ptr_671;
int* base_672;
_Bool _if_conditional961;
_Bool _if_conditional962;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_669, 0, sizeof(struct anonymous_typeX68*));
memset(&hs_670, 0, sizeof(struct Section*));
    # 102 "tccelf.c"
    # 103 "tccelf.c"
    # 104 "tccelf.c"
    # 105 "tccelf.c"
    # 107 "tccelf.c"
    sym_669=section_ptr_add(s,sizeof(struct anonymous_typeX68));
    # 111 "tccelf.c"
    # 108 "tccelf.c"
    if(name) {
        # 109 "tccelf.c"
        name_offset_665=put_elf_str(s->link,name);
    }
    else {
        # 111 "tccelf.c"
        name_offset_665=0;
    }
    # 113 "tccelf.c"
    sym_669->st_name=name_offset_665;
    # 114 "tccelf.c"
    sym_669->st_value=value;
    # 115 "tccelf.c"
    sym_669->st_size=size;
    # 116 "tccelf.c"
    sym_669->st_info=info;
    # 117 "tccelf.c"
    sym_669->st_other=other;
    # 118 "tccelf.c"
    sym_669->st_shndx=shndx;
    # 119 "tccelf.c"
    sym_index_666=sym_669-(struct anonymous_typeX68*)s->data;
    # 120 "tccelf.c"
    hs_670=s->hash;
    # 143 "tccelf.c"
    # 121 "tccelf.c"
    if(hs_670) {
        # 122 "tccelf.c"
        # 123 "tccelf.c"
        ptr_671=section_ptr_add(hs_670,sizeof(int));
        # 124 "tccelf.c"
        base_672=(int*)hs_670->data;
        # 142 "tccelf.c"
        # 126 "tccelf.c"
        if(_if_conditional961=(((unsigned char)(info))>>4)!=0,        _if_conditional961) {
            # 128 "tccelf.c"
            nbuckets_667=base_672[0];
            # 129 "tccelf.c"
            h_668=elf_hash(name)%nbuckets_667;
            # 130 "tccelf.c"
            *ptr_671=base_672[2+h_668];
            # 131 "tccelf.c"
            base_672[2+h_668]=sym_index_666;
            # 132 "tccelf.c"
            base_672[1]++;
            # 134 "tccelf.c"
            hs_670->nb_hashed_syms++;
            # 138 "tccelf.c"
            # 135 "tccelf.c"
            if(_if_conditional962=hs_670->nb_hashed_syms>2*nbuckets_667,            _if_conditional962) {
                # 136 "tccelf.c"
                rebuild_hash(s,2*nbuckets_667);
            }
        }
        else {
            # 139 "tccelf.c"
            *ptr_671=0;
            # 140 "tccelf.c"
            base_672[1]++;
        }
    }
    # 143 "tccelf.c"
    __result152__ = sym_index_666;
    return __result152__;
}

static int find_elf_sym(struct Section* s, const char* name){
void* __result_obj__;
struct anonymous_typeX68* sym_673;
struct Section* hs_674;
int nbuckets_675;
int sym_index_676;
int h_677;
const char* name1_678;
_Bool _if_conditional963;
int __result153__;
_Bool _while_condtional81;
name1_678=s->link->data+sym_673->st_name;
_Bool _if_conditional964;
int __result154__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_673, 0, sizeof(struct anonymous_typeX68*));
memset(&hs_674, 0, sizeof(struct Section*));
    # 150 "tccelf.c"
    # 151 "tccelf.c"
    # 152 "tccelf.c"
    # 153 "tccelf.c"
    # 155 "tccelf.c"
    hs_674=s->hash;
    # 157 "tccelf.c"
    # 156 "tccelf.c"
    if(_if_conditional963=!hs_674,    _if_conditional963) {
        # 157 "tccelf.c"
        __result153__ = 0;
        return __result153__;
    }
    # 158 "tccelf.c"
    nbuckets_675=((int*)hs_674->data)[0];
    # 159 "tccelf.c"
    h_677=elf_hash(name)%nbuckets_675;
    # 160 "tccelf.c"
    sym_index_676=((int*)hs_674->data)[2+h_677];
    # 168 "tccelf.c"
    while(_while_condtional81=sym_index_676!=0,    _while_condtional81) {
        # 162 "tccelf.c"
        sym_673=&((struct anonymous_typeX68*)s->data)[sym_index_676];
        # 163 "tccelf.c"
        # 165 "tccelf.c"
        # 164 "tccelf.c"
        if(_if_conditional964=!strcmp(name,name1_678),        _if_conditional964) {
            # 165 "tccelf.c"
            __result154__ = sym_index_676;
            return __result154__;
        }
        # 166 "tccelf.c"
        sym_index_676=((int*)hs_674->data)[2+nbuckets_675+sym_index_676];
    }
    # 168 "tccelf.c"
    __result155__ = 0;
    return __result155__;
}

void* tcc_get_symbol(struct TCCState* s, const char* name){
void* __result_obj__;
int sym_index_679;
struct anonymous_typeX68* sym_680;
_Bool _if_conditional965;
void* __result156__;
void* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_index_679, 0, sizeof(int));
memset(&sym_680, 0, sizeof(struct anonymous_typeX68*));
    # 174 "tccelf.c"
    # 175 "tccelf.c"
    # 176 "tccelf.c"
    sym_index_679=find_elf_sym(symtab_section,name);
    # 178 "tccelf.c"
    # 177 "tccelf.c"
    if(_if_conditional965=!sym_index_679,    _if_conditional965) {
        # 178 "tccelf.c"
        __result156__ = __result_obj__ = ((void*)0);
        return __result156__;
    }
    # 179 "tccelf.c"
    sym_680=&((struct anonymous_typeX68*)symtab_section->data)[sym_index_679];
    # 180 "tccelf.c"
    __result157__ = __result_obj__ = (void*)(long)sym_680->st_value;
    return __result157__;
}

void* tcc_get_symbol_err(struct TCCState* s, const char* name){
void* __result_obj__;
void* sym_681;
_Bool _if_conditional966;
void* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_681, 0, sizeof(void*));
    # 185 "tccelf.c"
    # 186 "tccelf.c"
    sym_681=tcc_get_symbol(s,name);
    # 188 "tccelf.c"
    # 187 "tccelf.c"
    if(_if_conditional966=!sym_681,    _if_conditional966) {
        # 188 "tccelf.c"
        error("%s not defined",name);
    }
    # 189 "tccelf.c"
    __result158__ = __result_obj__ = sym_681;
    return __result158__;
}

static int add_elf_sym(struct Section* s, unsigned long int value, unsigned long int size, int info, int other, int sh_num, const char* name){
void* __result_obj__;
struct anonymous_typeX68* esym_682;
int sym_bind_683;
int sym_index_684;
int sym_type_685;
int esym_bind_686;
unsigned char sym_vis_687;
unsigned char esym_vis_688;
unsigned char new_vis_689;
_Bool _if_conditional967;
_Bool _if_conditional968;
_Bool _if_conditional969;
_Bool _if_conditional970;
_Bool _elif_conditional191;
_Bool _if_conditional971;
_Bool _elif_conditional192;
_Bool _elif_conditional193;
_Bool _elif_conditional194;
_Bool _elif_conditional195;
_Bool _elif_conditional196;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&esym_682, 0, sizeof(struct anonymous_typeX68*));
    # 197 "tccelf.c"
    # 198 "tccelf.c"
    # 199 "tccelf.c"
    # 201 "tccelf.c"
    sym_bind_683=(((unsigned char)(info))>>4);
    # 202 "tccelf.c"
    sym_type_685=((info)&15);
    # 203 "tccelf.c"
    sym_vis_687=((other)&3);
    # 263 "tccelf.c"
    # 205 "tccelf.c"
    if(_if_conditional967=sym_bind_683!=0,    _if_conditional967) {
        # 207 "tccelf.c"
        sym_index_684=find_elf_sym(s,name);
        # 209 "tccelf.c"
        # 208 "tccelf.c"
        if(_if_conditional968=!sym_index_684,        _if_conditional968) {
            # 209 "tccelf.c"
            goto do_def;
        }
        # 210 "tccelf.c"
        esym_682=&((struct anonymous_typeX68*)s->data)[sym_index_684];
        # 257 "tccelf.c"
        # 211 "tccelf.c"
        if(_if_conditional969=esym_682->st_shndx!=0,        _if_conditional969) {
            # 212 "tccelf.c"
            esym_bind_686=(((unsigned char)(esym_682->st_info))>>4);
            # 215 "tccelf.c"
            esym_vis_688=((esym_682->st_other)&3);
            # 223 "tccelf.c"
            # 216 "tccelf.c"
            if(_if_conditional970=esym_vis_688==0,            _if_conditional970) {
                # 217 "tccelf.c"
                new_vis_689=sym_vis_687;
            }
            # 218 "tccelf.c"
            else if(_elif_conditional191=sym_vis_687==0,            _elif_conditional191) {
                # 219 "tccelf.c"
                new_vis_689=esym_vis_688;
            }
            else {
                # 221 "tccelf.c"
                new_vis_689=(esym_vis_688<sym_vis_687)?esym_vis_688:sym_vis_687;
            }
            # 224 "tccelf.c"
            esym_682->st_other=(esym_682->st_other&~((-1)&3))|new_vis_689;
            # 225 "tccelf.c"
            other=esym_682->st_other;
            # 249 "tccelf.c"
            # 226 "tccelf.c"
            if(_if_conditional971=sh_num==0,            _if_conditional971) {
            }
            # 229 "tccelf.c"
            else if(_elif_conditional192=sym_bind_683==1&&esym_bind_686==2,            _elif_conditional192) {
                # 231 "tccelf.c"
                goto do_patch;
            }
            # 232 "tccelf.c"
            else if(_elif_conditional193=sym_bind_683==2&&esym_bind_686==1,            _elif_conditional193) {
            }
            # 234 "tccelf.c"
            else if(_elif_conditional194=sym_vis_687==2||sym_vis_687==1,            _elif_conditional194) {
            }
            # 236 "tccelf.c"
            else if(_elif_conditional195=esym_682->st_shndx==65522&&sh_num<65280,            _elif_conditional195) {
                # 239 "tccelf.c"
                goto do_patch;
            }
            # 240 "tccelf.c"
            else if(_elif_conditional196=s==tcc_state->dynsymtab_section,            _elif_conditional196) {
            }
            else {
                # 245 "tccelf.c"
                printf("new_bind=%x new_shndx=%x new_vis=%x old_bind=%x old_shndx=%x old_vis=%x\n",sym_bind_683,sh_num,new_vis_689,esym_bind_686,esym_682->st_shndx,esym_vis_688);
                # 247 "tccelf.c"
                error_noabort("'%s' defined twice",name);
            }
        }
        else {
            # 251 "tccelf.c"
            do_patch:
            # 251 "tccelf.c"
            esym_682->st_info=((((sym_bind_683))<<4)+(((sym_type_685))&15));
            # 252 "tccelf.c"
            esym_682->st_shndx=sh_num;
            # 253 "tccelf.c"
            esym_682->st_value=value;
            # 254 "tccelf.c"
            esym_682->st_size=size;
            # 255 "tccelf.c"
            esym_682->st_other=other;
        }
    }
    else {
        # 259 "tccelf.c"
        do_def:
        # 261 "tccelf.c"
        sym_index_684=put_elf_sym(s,value,size,((((sym_bind_683))<<4)+(((sym_type_685))&15)),other,sh_num,name);
    }
    # 263 "tccelf.c"
    __result159__ = sym_index_684;
    return __result159__;
}

static void put_elf_reloc(struct Section* symtab, struct Section* s, unsigned long int offset, int type, int symbol){
void* __result_obj__;
struct Section* sr_691;
struct anonymous_typeX74* rel_692;
_Bool _if_conditional972;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sr_691, 0, sizeof(struct Section*));
memset(&rel_692, 0, sizeof(struct anonymous_typeX74*));
    # 270 "tccelf.c"
    char buf_690[256];
    memset(&buf_690, 0, sizeof(char)    *(256)    );
    # 271 "tccelf.c"
    # 272 "tccelf.c"
    # 274 "tccelf.c"
    sr_691=s->reloc;
    # 286 "tccelf.c"
    # 275 "tccelf.c"
    if(_if_conditional972=!sr_691,    _if_conditional972) {
        # 277 "tccelf.c"
        snprintf(buf_690,sizeof(buf_690),".rela%s",s->name);
        # 280 "tccelf.c"
        sr_691=new_section(tcc_state,buf_690,4,symtab->sh_flags);
        # 281 "tccelf.c"
        sr_691->sh_entsize=sizeof(struct anonymous_typeX74);
        # 282 "tccelf.c"
        sr_691->link=symtab;
        # 283 "tccelf.c"
        sr_691->sh_info=s->sh_num;
        # 284 "tccelf.c"
        s->reloc=sr_691;
    }
    # 286 "tccelf.c"
    rel_692=section_ptr_add(sr_691,sizeof(struct anonymous_typeX74));
    # 287 "tccelf.c"
    rel_692->r_offset=offset;
    # 288 "tccelf.c"
    rel_692->r_info=((((unsigned long int)(symbol))<<32)+(type));
    # 290 "tccelf.c"
    rel_692->r_addend=0;
}

static void put_stabs(const char* str, int type, int other, int desc, unsigned long int value){
void* __result_obj__;
struct anonymous_typeX109* sym_693;
_Bool _if_conditional973;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_693, 0, sizeof(struct anonymous_typeX109*));
    # 307 "tccelf.c"
    # 309 "tccelf.c"
    sym_693=section_ptr_add(stab_section,sizeof(struct anonymous_typeX109));
    # 315 "tccelf.c"
    # 310 "tccelf.c"
    if(str) {
        # 311 "tccelf.c"
        sym_693->n_strx=put_elf_str(stabstr_section,str);
    }
    else {
        # 313 "tccelf.c"
        sym_693->n_strx=0;
    }
    # 315 "tccelf.c"
    sym_693->n_type=type;
    # 316 "tccelf.c"
    sym_693->n_other=other;
    # 317 "tccelf.c"
    sym_693->n_desc=desc;
    # 318 "tccelf.c"
    sym_693->n_value=value;
}

static void put_stabs_r(const char* str, int type, int other, int desc, unsigned long int value, struct Section* sec, int sym_index){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 324 "tccelf.c"
    put_stabs(str,type,other,desc,value);
    # 327 "tccelf.c"
    put_elf_reloc(symtab_section,stab_section,stab_section->data_offset-sizeof(unsigned int),1,sym_index);
}

static void put_stabn(int type, int other, int desc, int value){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 332 "tccelf.c"
    put_stabs(((void*)0),type,other,desc,value);
}

static void put_stabd(int type, int other, int desc){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 337 "tccelf.c"
    put_stabs(((void*)0),type,other,desc,0);
}

static void sort_syms(struct TCCState* s1, struct Section* s){
void* __result_obj__;
int* old_to_new_syms_694;
struct anonymous_typeX68* new_syms_695;
int nb_syms_696;
int i_697;
struct anonymous_typeX68* p_698;
struct anonymous_typeX68* q_699;
struct anonymous_typeX74* rel_700;
struct anonymous_typeX74* rel_end_701;
struct Section* sr_702;
int type_703;
int sym_index_704;
_Bool _if_conditional974;
_Bool _if_conditional975;
_Bool _if_conditional976;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_to_new_syms_694, 0, sizeof(int*));
memset(&new_syms_695, 0, sizeof(struct anonymous_typeX68*));
memset(&sr_702, 0, sizeof(struct Section*));
    # 346 "tccelf.c"
    # 347 "tccelf.c"
    # 348 "tccelf.c"
    # 349 "tccelf.c"
    # 350 "tccelf.c"
    # 351 "tccelf.c"
    # 352 "tccelf.c"
    # 354 "tccelf.c"
    nb_syms_696=s->data_offset/sizeof(struct anonymous_typeX68);
    # 355 "tccelf.c"
    new_syms_695=tcc_malloc(nb_syms_696*sizeof(struct anonymous_typeX68));
    # 356 "tccelf.c"
    old_to_new_syms_694=tcc_malloc(nb_syms_696*sizeof(int));
    # 359 "tccelf.c"
    p_698=(struct anonymous_typeX68*)s->data;
    # 360 "tccelf.c"
    q_699=new_syms_695;
    # 369 "tccelf.c"
    for(    i_697=0;    i_697<nb_syms_696;    i_697++    ){
        # 366 "tccelf.c"
        # 362 "tccelf.c"
        if(_if_conditional974=(((unsigned char)(p_698->st_info))>>4)==0,        _if_conditional974) {
            # 363 "tccelf.c"
            old_to_new_syms_694[i_697]=q_699-new_syms_695;
            # 364 "tccelf.c"
            *q_699++=*p_698;
        }
        # 366 "tccelf.c"
        p_698++;
    }
    # 369 "tccelf.c"
    s->sh_info=q_699-new_syms_695;
    # 372 "tccelf.c"
    p_698=(struct anonymous_typeX68*)s->data;
    # 382 "tccelf.c"
    for(    i_697=0;    i_697<nb_syms_696;    i_697++    ){
        # 378 "tccelf.c"
        # 374 "tccelf.c"
        if(_if_conditional975=(((unsigned char)(p_698->st_info))>>4)!=0,        _if_conditional975) {
            # 375 "tccelf.c"
            old_to_new_syms_694[i_697]=q_699-new_syms_695;
            # 376 "tccelf.c"
            *q_699++=*p_698;
        }
        # 378 "tccelf.c"
        p_698++;
    }
    # 382 "tccelf.c"
    memcpy(s->data,new_syms_695,nb_syms_696*sizeof(struct anonymous_typeX68));
    # 383 "tccelf.c"
    tcc_free(new_syms_695);
    # 401 "tccelf.c"
    for(    i_697=1;    i_697<s1->nb_sections;    i_697++    ){
        # 387 "tccelf.c"
        sr_702=s1->sections[i_697];
        # 399 "tccelf.c"
        # 388 "tccelf.c"
        if(_if_conditional976=sr_702->sh_type==4&&sr_702->link==s,        _if_conditional976) {
            # 389 "tccelf.c"
            rel_end_701=(struct anonymous_typeX74*)(sr_702->data+sr_702->data_offset);
            # 398 "tccelf.c"
            for(            rel_700=(struct anonymous_typeX74*)sr_702->data;            rel_700<rel_end_701;            rel_700++            ){
                # 393 "tccelf.c"
                sym_index_704=((rel_700->r_info)>>32);
                # 394 "tccelf.c"
                type_703=((rel_700->r_info)&-1);
                # 395 "tccelf.c"
                sym_index_704=old_to_new_syms_694[sym_index_704];
                # 396 "tccelf.c"
                rel_700->r_info=((((unsigned long int)(sym_index_704))<<32)+(type_703));
            }
        }
    }
    # 401 "tccelf.c"
    tcc_free(old_to_new_syms_694);
}

static void relocate_common_syms(){
void* __result_obj__;
struct anonymous_typeX68* sym_705;
struct anonymous_typeX68* sym_end_706;
unsigned long int offset_707;
unsigned long int align_708;
_Bool _if_conditional977;
memset(&__result_obj__, 0, sizeof(void*));
    # 407 "tccelf.c"
    # 408 "tccelf.c"
    # 410 "tccelf.c"
    sym_end_706=(struct anonymous_typeX68*)(symtab_section->data+symtab_section->data_offset);
    # 425 "tccelf.c"
    for(    sym_705=(struct anonymous_typeX68*)symtab_section->data+1;    sym_705<sym_end_706;    sym_705++    ){
        # 424 "tccelf.c"
        # 414 "tccelf.c"
        if(_if_conditional977=sym_705->st_shndx==65522,        _if_conditional977) {
            # 416 "tccelf.c"
            align_708=sym_705->st_value;
            # 417 "tccelf.c"
            offset_707=bss_section->data_offset;
            # 418 "tccelf.c"
            offset_707=(offset_707+align_708-1)&-align_708;
            # 419 "tccelf.c"
            sym_705->st_value=offset_707;
            # 420 "tccelf.c"
            sym_705->st_shndx=bss_section->sh_num;
            # 421 "tccelf.c"
            offset_707+=sym_705->st_size;
            # 422 "tccelf.c"
            bss_section->data_offset=offset_707;
        }
    }
}

static void relocate_syms(struct TCCState* s1, int do_resolve){
void* __result_obj__;
struct anonymous_typeX68* sym_709;
struct anonymous_typeX68* esym_710;
struct anonymous_typeX68* sym_end_711;
int sym_bind_712;
int sh_num_713;
int sym_index_714;
const char* name_715;
unsigned long int addr_716;
_Bool _if_conditional978;
name_715=strtab_section->data+sym_709->st_name;
_Bool _if_conditional979;
name_715=symtab_section->link->data+sym_709->st_name;
_Bool _if_conditional980;
_Bool _if_conditional981;
_Bool _if_conditional982;
_Bool _if_conditional983;
_Bool _elif_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&addr_716, 0, sizeof(unsigned long int));
    # 431 "tccelf.c"
    # 432 "tccelf.c"
    # 433 "tccelf.c"
    # 434 "tccelf.c"
    # 436 "tccelf.c"
    sym_end_711=(struct anonymous_typeX68*)(symtab_section->data+symtab_section->data_offset);
    # 477 "tccelf.c"
    for(    sym_709=(struct anonymous_typeX68*)symtab_section->data+1;    sym_709<sym_end_711;    sym_709++    ){
        # 440 "tccelf.c"
        sh_num_713=sym_709->st_shndx;
        # 475 "tccelf.c"
        # 441 "tccelf.c"
        if(_if_conditional978=sh_num_713==0,        _if_conditional978) {
            # 442 "tccelf.c"
            # 461 "tccelf.c"
            # 443 "tccelf.c"
            if(do_resolve) {
                # 444 "tccelf.c"
                # 445 "tccelf.c"
                addr_716=(unsigned long int)resolve_sym(s1,name_715,((sym_709->st_info)&15));
                # 450 "tccelf.c"
                # 446 "tccelf.c"
                if(addr_716) {
                    # 447 "tccelf.c"
                    sym_709->st_value=addr_716;
                    # 448 "tccelf.c"
                    goto found;
                }
            }
            # 450 "tccelf.c"
            else if(s1->dynsym) {
                # 452 "tccelf.c"
                sym_index_714=find_elf_sym(s1->dynsym,name_715);
                # 458 "tccelf.c"
                # 453 "tccelf.c"
                if(sym_index_714) {
                    # 454 "tccelf.c"
                    esym_710=&((struct anonymous_typeX68*)s1->dynsym->data)[sym_index_714];
                    # 455 "tccelf.c"
                    sym_709->st_value=esym_710->st_value;
                    # 456 "tccelf.c"
                    goto found;
                }
            }
            # 462 "tccelf.c"
            # 461 "tccelf.c"
            if(_if_conditional982=!strcmp(name_715,"_fp_hw"),            _if_conditional982) {
                # 462 "tccelf.c"
                goto found;
            }
            # 465 "tccelf.c"
            sym_bind_712=(((unsigned char)(sym_709->st_info))>>4);
            # 471 "tccelf.c"
            # 466 "tccelf.c"
            if(_if_conditional983=sym_bind_712==2,            _if_conditional983) {
                # 467 "tccelf.c"
                sym_709->st_value=0;
            }
            else {
                # 469 "tccelf.c"
                error_noabort("undefined symbol '%s'",name_715);
            }
        }
        # 471 "tccelf.c"
        else if(_elif_conditional197=sh_num_713<65280,        _elif_conditional197) {
            # 473 "tccelf.c"
            sym_709->st_value+=s1->sections[sym_709->st_shndx]->sh_addr;
        }
        # 475 "tccelf.c"
        found:
    }
}

static unsigned long int add_jmp_table(struct TCCState* s1, unsigned long int val){
void* __result_obj__;
char* p_717;
unsigned long int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_717, 0, sizeof(char*));
    # 483 "tccelf.c"
    p_717=s1->runtime_plt_and_got+s1->runtime_plt_and_got_offset;
    # 484 "tccelf.c"
    s1->runtime_plt_and_got_offset+=14;
    # 486 "tccelf.c"
    p_717[0]=255;
    # 487 "tccelf.c"
    p_717[1]=37;
    # 488 "tccelf.c"
    *(int*)(p_717+2)=0;
    # 489 "tccelf.c"
    *(unsigned long int*)(p_717+6)=val;
    # 490 "tccelf.c"
    __result160__ = (unsigned long int)p_717;
    return __result160__;
}

static unsigned long int add_got_table(struct TCCState* s1, unsigned long int val){
void* __result_obj__;
unsigned long int* p_718;
unsigned long int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_718, 0, sizeof(unsigned long int*));
    # 496 "tccelf.c"
    p_718=(unsigned long int*)(s1->runtime_plt_and_got+s1->runtime_plt_and_got_offset);
    # 497 "tccelf.c"
    s1->runtime_plt_and_got_offset+=sizeof(void*);
    # 498 "tccelf.c"
    *p_718=val;
    # 499 "tccelf.c"
    __result161__ = (unsigned long int)p_718;
    return __result161__;
}

static void relocate_section(struct TCCState* s1, struct Section* s){
void* __result_obj__;
struct Section* sr_719;
struct anonymous_typeX74* rel_720;
struct anonymous_typeX74* rel_end_721;
struct anonymous_typeX74* qrel_722;
struct anonymous_typeX68* sym_723;
int type_724;
int sym_index_725;
unsigned char* ptr_726;
unsigned long int val_727;
unsigned long int addr_728;
int esym_index_729;
_Bool _if_conditional984;
_Bool _if_conditional985;
_Bool _if_conditional986;
_Bool _if_conditional987;
long diff_730;
_Bool _if_conditional988;
_Bool _if_conditional989;
_Bool _if_conditional990;
_Bool _if_conditional991;
_Bool _if_conditional992;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sr_719, 0, sizeof(struct Section*));
memset(&sym_723, 0, sizeof(struct anonymous_typeX68*));
memset(&ptr_726, 0, sizeof(unsigned char*));
memset(&esym_index_729, 0, sizeof(int));
memset(&diff_730, 0, sizeof(long));
    # 506 "tccelf.c"
    # 507 "tccelf.c"
    # 508 "tccelf.c"
    # 509 "tccelf.c"
    # 510 "tccelf.c"
    # 511 "tccelf.c"
    # 513 "tccelf.c"
    # 516 "tccelf.c"
    sr_719=s->reloc;
    # 517 "tccelf.c"
    rel_end_721=(struct anonymous_typeX74*)(sr_719->data+sr_719->data_offset);
    # 518 "tccelf.c"
    qrel_722=(struct anonymous_typeX74*)sr_719->data;
    # 733 "tccelf.c"
    for(    rel_720=qrel_722;    rel_720<rel_end_721;    rel_720++    ){
        # 522 "tccelf.c"
        ptr_726=s->data+rel_720->r_offset;
        # 524 "tccelf.c"
        sym_index_725=((rel_720->r_info)>>32);
        # 525 "tccelf.c"
        sym_723=&((struct anonymous_typeX68*)symtab_section->data)[sym_index_725];
        # 526 "tccelf.c"
        val_727=sym_723->st_value;
        # 529 "tccelf.c"
        val_727+=rel_720->r_addend;
        # 531 "tccelf.c"
        type_724=((rel_720->r_info)&-1);
        # 532 "tccelf.c"
        addr_728=s->sh_addr+rel_720->r_offset;
        # 731 "tccelf.c"
        switch (type_724) {
            # 660 "tccelf.c"
            case 1:
            # 665 "tccelf.c"
            # 660 "tccelf.c"
            if(_if_conditional984=s1->output_type==2,            _if_conditional984) {
                # 661 "tccelf.c"
                qrel_722->r_info=((((unsigned long int)(0))<<32)+(8));
                # 662 "tccelf.c"
                qrel_722->r_addend=*(long long*)ptr_726+val_727;
                # 663 "tccelf.c"
                qrel_722++;
            }
            # 665 "tccelf.c"
            *(long long*)ptr_726+=val_727;
            # 666 "tccelf.c"
            break;
            # 668 "tccelf.c"
            case 10:
            # 669 "tccelf.c"
            case 11:
            # 676 "tccelf.c"
            # 669 "tccelf.c"
            if(_if_conditional985=s1->output_type==2,            _if_conditional985) {
                # 672 "tccelf.c"
                qrel_722->r_info=((((unsigned long int)(0))<<32)+(8));
                # 673 "tccelf.c"
                qrel_722->r_addend=*(int*)ptr_726+val_727;
                # 674 "tccelf.c"
                qrel_722++;
            }
            # 676 "tccelf.c"
            *(int*)ptr_726+=val_727;
            # 677 "tccelf.c"
            break;
            # 678 "tccelf.c"
            case 2:
            # 703 "tccelf.c"
            {
                # 690 "tccelf.c"
                # 679 "tccelf.c"
                if(_if_conditional986=s1->output_type==2,                _if_conditional986) {
                    # 681 "tccelf.c"
                    esym_index_729=s1->symtab_to_dynsym[sym_index_725];
                    # 689 "tccelf.c"
                    # 682 "tccelf.c"
                    if(esym_index_729) {
                        # 683 "tccelf.c"
                        qrel_722->r_offset=rel_720->r_offset;
                        # 684 "tccelf.c"
                        qrel_722->r_info=((((unsigned long int)(esym_index_729))<<32)+(2));
                        # 685 "tccelf.c"
                        qrel_722->r_addend=*(int*)ptr_726;
                        # 686 "tccelf.c"
                        qrel_722++;
                        # 687 "tccelf.c"
                        break;
                    }
                }
                # 690 "tccelf.c"
                diff_730=val_727-addr_728;
                # 701 "tccelf.c"
                # 691 "tccelf.c"
                if(_if_conditional988=diff_730<=-2147483647||diff_730>2147483647,                _if_conditional988) {
                    # 697 "tccelf.c"
                    # 693 "tccelf.c"
                    if(_if_conditional989=s1->output_type==0,                    _if_conditional989) {
                        # 694 "tccelf.c"
                        val_727=add_jmp_table(s1,val_727);
                        # 695 "tccelf.c"
                        diff_730=val_727-addr_728;
                    }
                    # 700 "tccelf.c"
                    # 697 "tccelf.c"
                    if(_if_conditional990=diff_730<=-2147483647||diff_730>2147483647,                    _if_conditional990) {
                        # 698 "tccelf.c"
                        error("internal error: relocation failed");
                    }
                }
                # 701 "tccelf.c"
                *(int*)ptr_726+=diff_730;
            }
            # 703 "tccelf.c"
            break;
            # 705 "tccelf.c"
            case 4:
            # 705 "tccelf.c"
            *(int*)ptr_726+=val_727-addr_728;
            # 706 "tccelf.c"
            break;
            # 708 "tccelf.c"
            case 6:
            # 709 "tccelf.c"
            case 7:
            # 709 "tccelf.c"
            *(int*)ptr_726=val_727;
            # 710 "tccelf.c"
            break;
            # 712 "tccelf.c"
            case 9:
            # 717 "tccelf.c"
            # 712 "tccelf.c"
            if(_if_conditional991=s1->output_type==0,            _if_conditional991) {
                # 713 "tccelf.c"
                val_727=add_got_table(s1,val_727-rel_720->r_addend)+rel_720->r_addend;
                # 714 "tccelf.c"
                *(int*)ptr_726+=val_727-addr_728;
                # 715 "tccelf.c"
                break;
            }
            # 718 "tccelf.c"
            *(int*)ptr_726+=(s1->got->sh_addr-addr_728+s1->got_offsets[sym_index_725]-4);
            # 719 "tccelf.c"
            break;
            # 721 "tccelf.c"
            case 22:
            # 721 "tccelf.c"
            *(int*)ptr_726+=val_727-s1->got->sh_addr;
            # 722 "tccelf.c"
            break;
            # 725 "tccelf.c"
            case 3:
            # 725 "tccelf.c"
            *(int*)ptr_726+=s1->got_offsets[sym_index_725];
            # 726 "tccelf.c"
            break;
        }
    }
    # 735 "tccelf.c"
    # 733 "tccelf.c"
    if(_if_conditional992=sr_719->sh_flags&(1<<1),    _if_conditional992) {
        # 734 "tccelf.c"
        sr_719->link=s1->dynsym;
    }
}

static void relocate_rel(struct TCCState* s1, struct Section* sr){
void* __result_obj__;
struct Section* s_731;
struct anonymous_typeX74* rel_732;
struct anonymous_typeX74* rel_end_733;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_731, 0, sizeof(struct Section*));
    # 740 "tccelf.c"
    # 741 "tccelf.c"
    # 743 "tccelf.c"
    s_731=s1->sections[sr->sh_info];
    # 744 "tccelf.c"
    rel_end_733=(struct anonymous_typeX74*)(sr->data+sr->data_offset);
    # 750 "tccelf.c"
    for(    rel_732=(struct anonymous_typeX74*)sr->data;    rel_732<rel_end_733;    rel_732++    ){
        # 748 "tccelf.c"
        rel_732->r_offset+=s_731->sh_addr;
    }
}

static int prepare_dynamic_rel(struct TCCState* s1, struct Section* sr){
void* __result_obj__;
struct anonymous_typeX74* rel_734;
struct anonymous_typeX74* rel_end_735;
int sym_index_736;
int esym_index_737;
int type_738;
int count_739;
_Bool _if_conditional993;
_Bool _if_conditional994;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 756 "tccelf.c"
    # 757 "tccelf.c"
    # 759 "tccelf.c"
    count_739=0;
    # 760 "tccelf.c"
    rel_end_735=(struct anonymous_typeX74*)(sr->data+sr->data_offset);
    # 787 "tccelf.c"
    for(    rel_734=(struct anonymous_typeX74*)sr->data;    rel_734<rel_end_735;    rel_734++    ){
        # 762 "tccelf.c"
        sym_index_736=((rel_734->r_info)>>32);
        # 763 "tccelf.c"
        type_738=((rel_734->r_info)&-1);
        # 786 "tccelf.c"
        switch (type_738) {
            # 769 "tccelf.c"
            case 10:
            # 770 "tccelf.c"
            case 11:
            # 772 "tccelf.c"
            case 1:
            # 772 "tccelf.c"
            count_739++;
            # 773 "tccelf.c"
            break;
            # 779 "tccelf.c"
            case 2:
            # 779 "tccelf.c"
            esym_index_737=s1->symtab_to_dynsym[sym_index_736];
            # 781 "tccelf.c"
            # 780 "tccelf.c"
            if(esym_index_737) {
                # 781 "tccelf.c"
                count_739++;
            }
            # 782 "tccelf.c"
            break;
            # 784 "tccelf.c"
            default:
            # 784 "tccelf.c"
            break;
        }
    }
    # 792 "tccelf.c"
    # 787 "tccelf.c"
    if(count_739) {
        # 789 "tccelf.c"
        sr->sh_flags|=(1<<1);
        # 790 "tccelf.c"
        sr->sh_size=count_739*sizeof(struct anonymous_typeX74);
    }
    # 792 "tccelf.c"
    __result162__ = count_739;
    return __result162__;
}

static void put_got_offset(struct TCCState* s1, int index, unsigned long int val){
void* __result_obj__;
int n_740;
unsigned long int* tab_741;
_Bool _if_conditional995;
_Bool _while_condtional82;
_Bool _if_conditional996;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_740, 0, sizeof(int));
memset(&tab_741, 0, sizeof(unsigned long int*));
    # 797 "tccelf.c"
    # 798 "tccelf.c"
    # 813 "tccelf.c"
    # 800 "tccelf.c"
    if(_if_conditional995=index>=s1->nb_got_offsets,    _if_conditional995) {
        # 802 "tccelf.c"
        n_740=1;
        # 804 "tccelf.c"
        while(_while_condtional82=index>=n_740,        _while_condtional82) {
            # 804 "tccelf.c"
            n_740*=2;
        }
        # 805 "tccelf.c"
        tab_741=tcc_realloc(s1->got_offsets,n_740*sizeof(unsigned long int));
        # 807 "tccelf.c"
        # 806 "tccelf.c"
        if(_if_conditional996=!tab_741,        _if_conditional996) {
            # 807 "tccelf.c"
            error("memory full");
        }
        # 808 "tccelf.c"
        s1->got_offsets=tab_741;
        # 810 "tccelf.c"
        memset(s1->got_offsets+s1->nb_got_offsets,0,(n_740-s1->nb_got_offsets)*sizeof(unsigned long int));
        # 811 "tccelf.c"
        s1->nb_got_offsets=n_740;
    }
    # 813 "tccelf.c"
    s1->got_offsets[index]=val;
}

static void put32(unsigned char* p, unsigned int val){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 819 "tccelf.c"
    p[0]=val;
    # 820 "tccelf.c"
    p[1]=val>>8;
    # 821 "tccelf.c"
    p[2]=val>>16;
    # 822 "tccelf.c"
    p[3]=val>>24;
}

static unsigned int get32(unsigned char* p){
void* __result_obj__;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 829 "tccelf.c"
    __result163__ = p[0]|(p[1]<<8)|(p[2]<<16)|(p[3]<<24);
    return __result163__;
}

static void build_got(struct TCCState* s1){
void* __result_obj__;
unsigned char* ptr_742;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ptr_742, 0, sizeof(unsigned char*));
    # 835 "tccelf.c"
    # 838 "tccelf.c"
    s1->got=new_section(s1,".got",1,(1<<1)|(1<<0));
    # 839 "tccelf.c"
    s1->got->sh_entsize=4;
    # 841 "tccelf.c"
    add_elf_sym(symtab_section,0,4,((((1))<<4)+(((1))&15)),0,s1->got->sh_num,"_GLOBAL_OFFSET_TABLE_");
    # 842 "tccelf.c"
    ptr_742=section_ptr_add(s1->got,3*8);
    # 851 "tccelf.c"
    put32(ptr_742,0);
    # 852 "tccelf.c"
    put32(ptr_742+4,0);
    # 854 "tccelf.c"
    put32(ptr_742+8,0);
    # 855 "tccelf.c"
    put32(ptr_742+12,0);
    # 856 "tccelf.c"
    put32(ptr_742+16,0);
    # 857 "tccelf.c"
    put32(ptr_742+20,0);
}

static void put_got_entry(struct TCCState* s1, int reloc_type, unsigned long int size, int info, int sym_index){
void* __result_obj__;
int index_743;
const char* name_744;
struct anonymous_typeX68* sym_745;
unsigned long int offset_746;
int* ptr_747;
_Bool _if_conditional997;
_Bool _if_conditional998;
_Bool _if_conditional999;
name_744=symtab_section->link->data+sym_745->st_name;
_Bool _if_conditional1000;
struct Section* plt_748;
unsigned char* p_749;
int modrm_750;
_Bool _if_conditional1001;
memset(&__result_obj__, 0, sizeof(void*));
memset(&index_743, 0, sizeof(int));
memset(&sym_745, 0, sizeof(struct anonymous_typeX68*));
memset(&offset_746, 0, sizeof(unsigned long int));
memset(&ptr_747, 0, sizeof(int*));
memset(&plt_748, 0, sizeof(struct Section*));
memset(&p_749, 0, sizeof(unsigned char*));
memset(&modrm_750, 0, sizeof(int));
    # 867 "tccelf.c"
    # 868 "tccelf.c"
    # 869 "tccelf.c"
    # 870 "tccelf.c"
    # 871 "tccelf.c"
    # 874 "tccelf.c"
    # 873 "tccelf.c"
    if(_if_conditional997=!s1->got,    _if_conditional997) {
        # 874 "tccelf.c"
        build_got(s1);
    }
    # 879 "tccelf.c"
    # 878 "tccelf.c"
    if(_if_conditional998=sym_index<s1->nb_got_offsets&&s1->got_offsets[sym_index]!=0,    _if_conditional998) {
        # 879 "tccelf.c"
        return;
    }
    # 881 "tccelf.c"
    put_got_offset(s1,sym_index,s1->got->data_offset);
    # 945 "tccelf.c"
    # 883 "tccelf.c"
    if(s1->dynsym) {
        # 884 "tccelf.c"
        sym_745=&((struct anonymous_typeX68*)symtab_section->data)[sym_index];
        # 885 "tccelf.c"
        # 886 "tccelf.c"
        offset_746=sym_745->st_value;
        # 938 "tccelf.c"
        # 894 "tccelf.c"
        if(_if_conditional1000=reloc_type==7,        _if_conditional1000) {
            # 895 "tccelf.c"
            # 896 "tccelf.c"
            # 897 "tccelf.c"
            # 900 "tccelf.c"
            modrm_750=37;
            # 910 "tccelf.c"
            plt_748=s1->plt;
            # 922 "tccelf.c"
            # 911 "tccelf.c"
            if(_if_conditional1001=plt_748->data_offset==0,            _if_conditional1001) {
                # 913 "tccelf.c"
                p_749=section_ptr_add(plt_748,16);
                # 914 "tccelf.c"
                p_749[0]=255;
                # 915 "tccelf.c"
                p_749[1]=modrm_750+16;
                # 916 "tccelf.c"
                put32(p_749+2,8);
                # 917 "tccelf.c"
                p_749[6]=255;
                # 918 "tccelf.c"
                p_749[7]=modrm_750;
                # 919 "tccelf.c"
                put32(p_749+8,8*2);
            }
            # 922 "tccelf.c"
            p_749=section_ptr_add(plt_748,16);
            # 923 "tccelf.c"
            p_749[0]=255;
            # 924 "tccelf.c"
            p_749[1]=modrm_750;
            # 925 "tccelf.c"
            put32(p_749+2,s1->got->data_offset);
            # 926 "tccelf.c"
            p_749[6]=104;
            # 927 "tccelf.c"
            put32(p_749+7,(plt_748->data_offset-32)>>1);
            # 928 "tccelf.c"
            p_749[11]=233;
            # 929 "tccelf.c"
            put32(p_749+12,-(plt_748->data_offset));
            # 936 "tccelf.c"
            offset_746=plt_748->data_offset-16;
        }
        # 939 "tccelf.c"
        index_743=put_elf_sym(s1->dynsym,offset_746,size,info,0,sym_745->st_shndx,name_744);
        # 943 "tccelf.c"
        put_elf_reloc(s1->dynsym,s1->got,s1->got->data_offset,reloc_type,index_743);
    }
    # 945 "tccelf.c"
    ptr_747=section_ptr_add(s1->got,8);
    # 946 "tccelf.c"
    *ptr_747=0;
}

static void build_got_entries(struct TCCState* s1){
void* __result_obj__;
struct Section* s_751;
struct Section* symtab_752;
struct anonymous_typeX74* rel_753;
struct anonymous_typeX74* rel_end_754;
struct anonymous_typeX68* sym_755;
int i_756;
int type_757;
int reloc_type_758;
int sym_index_759;
_Bool _if_conditional1002;
_Bool _if_conditional1003;
_Bool _if_conditional1004;
_Bool _if_conditional1005;
_Bool _if_conditional1006;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sym_755, 0, sizeof(struct anonymous_typeX68*));
    # 952 "tccelf.c"
    # 953 "tccelf.c"
    # 954 "tccelf.c"
    # 955 "tccelf.c"
    # 1092 "tccelf.c"
    for(    i_756=1;    i_756<s1->nb_sections;    i_756++    ){
        # 958 "tccelf.c"
        s_751=s1->sections[i_756];
        # 960 "tccelf.c"
        # 959 "tccelf.c"
        if(_if_conditional1002=s_751->sh_type!=4,        _if_conditional1002) {
            # 960 "tccelf.c"
            continue;
        }
        # 963 "tccelf.c"
        # 962 "tccelf.c"
        if(_if_conditional1003=s_751->link!=symtab_section,        _if_conditional1003) {
            # 963 "tccelf.c"
            continue;
        }
        # 964 "tccelf.c"
        symtab_752=s_751->link;
        # 965 "tccelf.c"
        rel_end_754=(struct anonymous_typeX74*)(s_751->data+s_751->data_offset);
        # 1091 "tccelf.c"
        for(        rel_753=(struct anonymous_typeX74*)s_751->data;        rel_753<rel_end_754;        rel_753++        ){
            # 969 "tccelf.c"
            type_757=((rel_753->r_info)&-1);
            # 1090 "tccelf.c"
            switch (type_757) {
                # 1066 "tccelf.c"
                case 3:
                # 1067 "tccelf.c"
                case 22:
                # 1068 "tccelf.c"
                case 9:
                # 1069 "tccelf.c"
                case 4:
                # 1070 "tccelf.c"
                # 1069 "tccelf.c"
                if(_if_conditional1004=!s1->got,                _if_conditional1004) {
                    # 1070 "tccelf.c"
                    build_got(s1);
                }
                # 1083 "tccelf.c"
                # 1072 "tccelf.c"
                if(_if_conditional1005=type_757==3||type_757==9||type_757==4,                _if_conditional1005) {
                    # 1073 "tccelf.c"
                    sym_index_759=((rel_753->r_info)>>32);
                    # 1074 "tccelf.c"
                    sym_755=&((struct anonymous_typeX68*)symtab_section->data)[sym_index_759];
                    # 1079 "tccelf.c"
                    # 1076 "tccelf.c"
                    if(_if_conditional1006=type_757==3||type_757==9,                    _if_conditional1006) {
                        # 1077 "tccelf.c"
                        reloc_type_758=6;
                    }
                    else {
                        # 1079 "tccelf.c"
                        reloc_type_758=7;
                    }
                    # 1081 "tccelf.c"
                    put_got_entry(s1,reloc_type_758,sym_755->st_size,sym_755->st_info,sym_index_759);
                }
                # 1083 "tccelf.c"
                break;
                # 1088 "tccelf.c"
                default:
                # 1088 "tccelf.c"
                break;
            }
        }
    }
}

static struct Section* new_symtab(struct TCCState* s1, const char* symtab_name, int sh_type, int sh_flags, const char* strtab_name, const char* hash_name, int hash_sh_flags){
void* __result_obj__;
struct Section* symtab_760;
struct Section* strtab_761;
struct Section* hash_762;
int* ptr_763;
int nb_buckets_764;
struct Section* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1099 "tccelf.c"
    # 1100 "tccelf.c"
    # 1102 "tccelf.c"
    symtab_760=new_section(s1,symtab_name,sh_type,sh_flags);
    # 1103 "tccelf.c"
    symtab_760->sh_entsize=sizeof(struct anonymous_typeX68);
    # 1104 "tccelf.c"
    strtab_761=new_section(s1,strtab_name,3,sh_flags);
    # 1105 "tccelf.c"
    put_elf_str(strtab_761,"");
    # 1106 "tccelf.c"
    symtab_760->link=strtab_761;
    # 1107 "tccelf.c"
    put_elf_sym(symtab_760,0,0,0,0,0,((void*)0));
    # 1109 "tccelf.c"
    nb_buckets_764=1;
    # 1111 "tccelf.c"
    hash_762=new_section(s1,hash_name,5,hash_sh_flags);
    # 1112 "tccelf.c"
    hash_762->sh_entsize=sizeof(int);
    # 1113 "tccelf.c"
    symtab_760->hash=hash_762;
    # 1114 "tccelf.c"
    hash_762->link=symtab_760;
    # 1116 "tccelf.c"
    ptr_763=section_ptr_add(hash_762,(2+nb_buckets_764+1)*sizeof(int));
    # 1117 "tccelf.c"
    ptr_763[0]=nb_buckets_764;
    # 1118 "tccelf.c"
    ptr_763[1]=1;
    # 1119 "tccelf.c"
    memset(ptr_763+2,0,(nb_buckets_764+1)*sizeof(int));
    # 1120 "tccelf.c"
    __result164__ = __result_obj__ = symtab_760;
    return __result164__;
}

static void put_dt(struct Section* dynamic, int dt, unsigned long int val){
void* __result_obj__;
struct anonymous_typeX80* dyn_765;
memset(&__result_obj__, 0, sizeof(void*));
memset(&dyn_765, 0, sizeof(struct anonymous_typeX80*));
    # 1126 "tccelf.c"
    # 1127 "tccelf.c"
    dyn_765=section_ptr_add(dynamic,sizeof(struct anonymous_typeX80));
    # 1128 "tccelf.c"
    dyn_765->d_tag=dt;
    # 1129 "tccelf.c"
    dyn_765->d_un.d_val=val;
}

static void add_init_array_defines(struct TCCState* s1, const char* section_name){
void* __result_obj__;
struct Section* s_766;
long end_offset_767;
_Bool _if_conditional1007;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_766, 0, sizeof(struct Section*));
memset(&end_offset_767, 0, sizeof(long));
    # 1134 "tccelf.c"
    # 1135 "tccelf.c"
    # 1136 "tccelf.c"
    char sym_start_768[1024];
    memset(&sym_start_768, 0, sizeof(char)    *(1024)    );
    # 1137 "tccelf.c"
    char sym_end_769[1024];
    memset(&sym_end_769, 0, sizeof(char)    *(1024)    );
    # 1139 "tccelf.c"
    snprintf(sym_start_768,sizeof(sym_start_768),"__%s_start",section_name+1);
    # 1140 "tccelf.c"
    snprintf(sym_end_769,sizeof(sym_end_769),"__%s_end",section_name+1);
    # 1142 "tccelf.c"
    s_766=find_section(s1,section_name);
    # 1150 "tccelf.c"
    # 1143 "tccelf.c"
    if(_if_conditional1007=!s_766,    _if_conditional1007) {
        # 1144 "tccelf.c"
        end_offset_767=0;
        # 1145 "tccelf.c"
        s_766=data_section;
    }
    else {
        # 1147 "tccelf.c"
        end_offset_767=s_766->data_offset;
    }
    # 1153 "tccelf.c"
    add_elf_sym(symtab_section,0,0,((((1))<<4)+(((0))&15)),0,s_766->sh_num,sym_start_768);
    # 1157 "tccelf.c"
    add_elf_sym(symtab_section,end_offset_767,0,((((1))<<4)+(((0))&15)),0,s_766->sh_num,sym_end_769);
}

static void tcc_add_runtime(struct TCCState* s1){
void* __result_obj__;
_Bool _if_conditional1008;
_Bool _if_conditional1009;
memset(&__result_obj__, 0, sizeof(void*));
    # 1164 "tccelf.c"
    char buf_770[1024];
    memset(&buf_770, 0, sizeof(char)    *(1024)    );
    # 1209 "tccelf.c"
    # 1198 "tccelf.c"
    if(_if_conditional1008=!s1->nostdlib,    _if_conditional1008) {
        # 1199 "tccelf.c"
        tcc_add_library(s1,"c");
        # 1204 "tccelf.c"
        snprintf(buf_770,sizeof(buf_770),"%s/%s",s1->tcc_lib_path,"libtcc1.a");
        # 1205 "tccelf.c"
        tcc_add_file(s1,buf_770);
    }
    # 1212 "tccelf.c"
    # 1209 "tccelf.c"
    if(_if_conditional1009=s1->output_type!=0&&!s1->nostdlib,    _if_conditional1009) {
        # 1210 "tccelf.c"
        tcc_add_file(s1,"/usr/lib/crtn.o");
    }
}

static void tcc_add_linker_symbols(struct TCCState* s1){
void* __result_obj__;
int i_772;
struct Section* s_773;
_Bool _if_conditional1010;
const char* p_774;
int ch_775;
p_774=s_773->name;
_Bool _if_conditional1011;
_Bool _if_conditional1012;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_772, 0, sizeof(int));
memset(&s_773, 0, sizeof(struct Section*));
memset(&ch_775, 0, sizeof(int));
    # 1219 "tccelf.c"
    char buf_771[1024];
    memset(&buf_771, 0, sizeof(char)    *(1024)    );
    # 1220 "tccelf.c"
    # 1221 "tccelf.c"
    # 1226 "tccelf.c"
    add_elf_sym(symtab_section,text_section->data_offset,0,((((1))<<4)+(((0))&15)),0,text_section->sh_num,"_etext");
    # 1230 "tccelf.c"
    add_elf_sym(symtab_section,data_section->data_offset,0,((((1))<<4)+(((0))&15)),0,data_section->sh_num,"_edata");
    # 1234 "tccelf.c"
    add_elf_sym(symtab_section,bss_section->data_offset,0,((((1))<<4)+(((0))&15)),0,bss_section->sh_num,"_end");
    # 1236 "tccelf.c"
    add_init_array_defines(s1,".preinit_array");
    # 1237 "tccelf.c"
    add_init_array_defines(s1,".init_array");
    # 1238 "tccelf.c"
    add_init_array_defines(s1,".fini_array");
    # 1272 "tccelf.c"
    for(    i_772=1;    i_772<s1->nb_sections;    i_772++    ){
        # 1243 "tccelf.c"
        s_773=s1->sections[i_772];
        # 1270 "tccelf.c"
        # 1245 "tccelf.c"
        if(_if_conditional1010=s_773->sh_type==1&&(s_773->sh_flags&(1<<1)),        _if_conditional1010) {
            # 1246 "tccelf.c"
            # 1247 "tccelf.c"
            # 1250 "tccelf.c"
            # 1259 "tccelf.c"
            for(            ;            ;            ){
                # 1252 "tccelf.c"
                ch_775=*p_774;
                # 1254 "tccelf.c"
                # 1253 "tccelf.c"
                if(_if_conditional1011=!ch_775,                _if_conditional1011) {
                    # 1254 "tccelf.c"
                    break;
                }
                # 1256 "tccelf.c"
                # 1255 "tccelf.c"
                if(_if_conditional1012=!isid(ch_775)&&!isnum(ch_775),                _if_conditional1012) {
                    # 1256 "tccelf.c"
                    goto next_sec;
                }
                # 1257 "tccelf.c"
                p_774++;
            }
            # 1259 "tccelf.c"
            snprintf(buf_771,sizeof(buf_771),"__start_%s",s_773->name);
            # 1263 "tccelf.c"
            add_elf_sym(symtab_section,0,0,((((1))<<4)+(((0))&15)),0,s_773->sh_num,buf_771);
            # 1264 "tccelf.c"
            snprintf(buf_771,sizeof(buf_771),"__stop_%s",s_773->name);
            # 1268 "tccelf.c"
            add_elf_sym(symtab_section,s_773->data_offset,0,((((1))<<4)+(((0))&15)),0,s_773->sh_num,buf_771);
        }
        # 1270 "tccelf.c"
        next_sec:
    }
}

static void tcc_output_binary(struct TCCState* s1, struct _IO_FILE* f, const int* section_order){
void* __result_obj__;
struct Section* s_776;
int i_777;
int offset_778;
int size_779;
_Bool _if_conditional1013;
_Bool _while_condtional83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_776, 0, sizeof(struct Section*));
    # 1290 "tccelf.c"
    # 1291 "tccelf.c"
    # 1293 "tccelf.c"
    offset_778=0;
    # 1307 "tccelf.c"
    for(    i_777=1;    i_777<s1->nb_sections;    i_777++    ){
        # 1295 "tccelf.c"
        s_776=s1->sections[section_order[i_777]];
        # 1306 "tccelf.c"
        # 1297 "tccelf.c"
        if(_if_conditional1013=s_776->sh_type!=8&&(s_776->sh_flags&(1<<1)),        _if_conditional1013) {
            # 1302 "tccelf.c"
            while(_while_condtional83=offset_778<s_776->sh_offset,            _while_condtional83) {
                # 1299 "tccelf.c"
                fputc(0,f);
                # 1300 "tccelf.c"
                offset_778++;
            }
            # 1302 "tccelf.c"
            size_779=s_776->sh_size;
            # 1303 "tccelf.c"
            fwrite(s_776->data,1,size_779,f);
            # 1304 "tccelf.c"
            offset_778+=size_779;
        }
    }
}

int elf_output_file(struct TCCState* s1, const char* filename){
void* __result_obj__;
struct anonymous_typeX64 ehdr_780;
struct _IO_FILE* f_781;
int fd_782;
int mode_783;
int ret_784;
int* section_order_785;
int shnum_786;
int i_787;
int phnum_788;
int file_offset_789;
int offset_790;
int size_791;
int j_792;
int tmp_793;
int sh_order_index_794;
int k_795;
unsigned long int addr_796;
struct Section* strsec_797;
struct Section* s_798;
struct anonymous_typeX66 shdr_799;
struct anonymous_typeX66* sh_800;
struct anonymous_typeX76* phdr_801;
struct anonymous_typeX76* ph_802;
struct Section* interp_803;
struct Section* dynamic_804;
struct Section* dynstr_805;
unsigned long int saved_dynamic_data_offset_806;
struct anonymous_typeX68* sym_807;
int type_808;
int file_type_809;
unsigned long int rel_addr_810;
unsigned long int rel_size_811;
_Bool _if_conditional1014;
_Bool _if_conditional1015;
_Bool _if_conditional1016;
const char* name_812;
int sym_index_813;
int index_814;
struct anonymous_typeX68* esym_815;
struct anonymous_typeX68* sym_end_816;
_Bool _if_conditional1017;
char* ptr_817;
_Bool _if_conditional1018;
_Bool _if_conditional1019;
name_812=symtab_section->link->data+sym_807->st_name;
_Bool _if_conditional1020;
_Bool _if_conditional1021;
_Bool _elif_conditional198;
unsigned long int offset_818;
_Bool _if_conditional1022;
_Bool _elif_conditional199;
name_812=symtab_section->link->data+sym_807->st_name;
_Bool _if_conditional1023;
_Bool _if_conditional1024;
name_812=s1->dynsymtab_section->link->data+esym_815->st_name;
_Bool _if_conditional1025;
_Bool _if_conditional1026;
int nb_syms_819;
_Bool _if_conditional1027;
_Bool _if_conditional1028;
_Bool _elif_conditional200;
name_812=symtab_section->link->data+sym_807->st_name;
struct DLLReference* dllref_820;
_Bool _if_conditional1029;
_Bool _if_conditional1030;
_Bool _if_conditional1031;
_Bool _if_conditional1032;
_Bool _if_conditional1033;
_Bool _if_conditional1034;
_Bool _elif_conditional201;
_Bool _if_conditional1035;
_Bool _if_conditional1036;
_Bool _if_conditional1037;
int a_offset_821;
int p_offset_822;
_Bool _if_conditional1038;
_Bool _if_conditional1039;
_Bool _if_conditional1040;
_Bool _if_conditional1041;
_Bool _if_conditional1042;
_Bool _if_conditional1043;
_Bool _if_conditional1044;
_Bool _if_conditional1045;
_Bool _if_conditional1046;
_Bool _elif_conditional202;
_Bool _if_conditional1047;
_Bool _elif_conditional203;
_Bool _if_conditional1048;
_Bool _elif_conditional204;
_Bool _if_conditional1049;
_Bool _if_conditional1050;
_Bool _if_conditional1051;
_Bool _if_conditional1052;
_Bool _if_conditional1053;
_Bool _if_conditional1054;
_Bool _if_conditional1055;
_Bool _if_conditional1056;
_Bool _if_conditional1057;
_Bool _if_conditional1058;
_Bool _if_conditional1059;
struct anonymous_typeX68* sym_end_823;
_Bool _if_conditional1060;
unsigned char* p_824;
unsigned char* p_end_825;
_Bool _if_conditional1061;
int x_826;
_Bool _while_condtional84;
_Bool _if_conditional1062;
_Bool _if_conditional1063;
_Bool _elif_conditional205;
_Bool _if_conditional1064;
_Bool _if_conditional1065;
_Bool _if_conditional1066;
_Bool _if_conditional1067;
_Bool _if_conditional1068;
_Bool _if_conditional1069;
_Bool _if_conditional1070;
_Bool _if_conditional1071;
_Bool _if_conditional1072;
_Bool _if_conditional1073;
_Bool _if_conditional1074;
_Bool _if_conditional1075;
_Bool _if_conditional1076;
_Bool _while_condtional85;
_Bool _while_condtional86;
_Bool _if_conditional1077;
_Bool _if_conditional1078;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ehdr_780, 0, sizeof(struct anonymous_typeX64));
memset(&f_781, 0, sizeof(struct _IO_FILE*));
memset(&section_order_785, 0, sizeof(int*));
memset(&addr_796, 0, sizeof(unsigned long int));
memset(&saved_dynamic_data_offset_806, 0, sizeof(unsigned long int));
memset(&sym_807, 0, sizeof(struct anonymous_typeX68*));
memset(&ptr_817, 0, sizeof(char*));
memset(&offset_818, 0, sizeof(unsigned long int));
memset(&nb_syms_819, 0, sizeof(int));
memset(&dllref_820, 0, sizeof(struct DLLReference*));
memset(&sym_end_823, 0, sizeof(struct anonymous_typeX68*));
memset(&x_826, 0, sizeof(int));
    # 1313 "tccelf.c"
    # 1314 "tccelf.c"
    # 1315 "tccelf.c"
    # 1316 "tccelf.c"
    # 1317 "tccelf.c"
    # 1318 "tccelf.c"
    # 1319 "tccelf.c"
    # 1320 "tccelf.c"
    # 1321 "tccelf.c"
    # 1322 "tccelf.c"
    # 1323 "tccelf.c"
    # 1324 "tccelf.c"
    # 1325 "tccelf.c"
    # 1326 "tccelf.c"
    # 1328 "tccelf.c"
    file_type_809=s1->output_type;
    # 1329 "tccelf.c"
    s1->nb_errors=0;
    # 1335 "tccelf.c"
    # 1331 "tccelf.c"
    if(_if_conditional1014=file_type_809!=3,    _if_conditional1014) {
        # 1332 "tccelf.c"
        tcc_add_runtime(s1);
    }
    # 1335 "tccelf.c"
    phdr_801=((void*)0);
    # 1336 "tccelf.c"
    section_order_785=((void*)0);
    # 1337 "tccelf.c"
    interp_803=((void*)0);
    # 1338 "tccelf.c"
    dynamic_804=((void*)0);
    # 1339 "tccelf.c"
    dynstr_805=((void*)0);
    # 1340 "tccelf.c"
    saved_dynamic_data_offset_806=0;
    # 1524 "tccelf.c"
    # 1342 "tccelf.c"
    if(_if_conditional1015=file_type_809!=3,    _if_conditional1015) {
        # 1343 "tccelf.c"
        relocate_common_syms();
        # 1345 "tccelf.c"
        tcc_add_linker_symbols(s1);
        # 1522 "tccelf.c"
        # 1347 "tccelf.c"
        if(_if_conditional1016=!s1->static_link,        _if_conditional1016) {
            # 1348 "tccelf.c"
            # 1349 "tccelf.c"
            # 1350 "tccelf.c"
            # 1362 "tccelf.c"
            # 1352 "tccelf.c"
            if(_if_conditional1017=file_type_809==1,            _if_conditional1017) {
                # 1353 "tccelf.c"
                # 1355 "tccelf.c"
                interp_803=new_section(s1,".interp",1,(1<<1));
                # 1356 "tccelf.c"
                interp_803->sh_addralign=1;
                # 1357 "tccelf.c"
                ptr_817=section_ptr_add(interp_803,sizeof(elf_interp));
                # 1358 "tccelf.c"
                strcpy(ptr_817,elf_interp);
            }
            # 1364 "tccelf.c"
            s1->dynsym=new_symtab(s1,".dynsym",11,(1<<1),".dynstr",".hash",(1<<1));
            # 1365 "tccelf.c"
            dynstr_805=s1->dynsym->link;
            # 1369 "tccelf.c"
            dynamic_804=new_section(s1,".dynamic",6,(1<<1)|(1<<0));
            # 1370 "tccelf.c"
            dynamic_804->link=dynstr_805;
            # 1371 "tccelf.c"
            dynamic_804->sh_entsize=sizeof(struct anonymous_typeX80);
            # 1375 "tccelf.c"
            s1->plt=new_section(s1,".plt",1,(1<<1)|(1<<2));
            # 1376 "tccelf.c"
            s1->plt->sh_entsize=4;
            # 1378 "tccelf.c"
            build_got(s1);
            # 1385 "tccelf.c"
            sym_end_816=(struct anonymous_typeX68*)(symtab_section->data+symtab_section->data_offset);
            # 1499 "tccelf.c"
            # 1386 "tccelf.c"
            if(_if_conditional1018=file_type_809==1,            _if_conditional1018) {
                # 1434 "tccelf.c"
                for(                sym_807=(struct anonymous_typeX68*)symtab_section->data+1;                sym_807<sym_end_816;                sym_807++                ){
                    # 1432 "tccelf.c"
                    # 1390 "tccelf.c"
                    if(_if_conditional1019=sym_807->st_shndx==0,                    _if_conditional1019) {
                        # 1391 "tccelf.c"
                        # 1392 "tccelf.c"
                        sym_index_813=find_elf_sym(s1->dynsymtab_section,name_812);
                        # 1423 "tccelf.c"
                        # 1393 "tccelf.c"
                        if(sym_index_813) {
                            # 1394 "tccelf.c"
                            esym_815=&((struct anonymous_typeX68*)s1->dynsymtab_section->data)[sym_index_813];
                            # 1395 "tccelf.c"
                            type_808=((esym_815->st_info)&15);
                            # 1413 "tccelf.c"
                            # 1396 "tccelf.c"
                            if(_if_conditional1021=type_808==2,                            _if_conditional1021) {
                                # 1399 "tccelf.c"
                                put_got_entry(s1,7,esym_815->st_size,esym_815->st_info,sym_807-(struct anonymous_typeX68*)symtab_section->data);
                            }
                            # 1400 "tccelf.c"
                            else if(_elif_conditional198=type_808==1,                            _elif_conditional198) {
                                # 1401 "tccelf.c"
                                # 1402 "tccelf.c"
                                offset_818=bss_section->data_offset;
                                # 1404 "tccelf.c"
                                offset_818=(offset_818+16-1)&-16;
                                # 1407 "tccelf.c"
                                index_814=put_elf_sym(s1->dynsym,offset_818,esym_815->st_size,esym_815->st_info,0,bss_section->sh_num,name_812);
                                # 1409 "tccelf.c"
                                put_elf_reloc(s1->dynsym,bss_section,offset_818,5,index_814);
                                # 1410 "tccelf.c"
                                offset_818+=esym_815->st_size;
                                # 1411 "tccelf.c"
                                bss_section->data_offset=offset_818;
                            }
                        }
                        else {
                            # 1422 "tccelf.c"
                            # 1418 "tccelf.c"
                            if(_if_conditional1022=(((unsigned char)(sym_807->st_info))>>4)==2||!strcmp(name_812,"_fp_hw"),                            _if_conditional1022) {
                            }
                            else {
                                # 1420 "tccelf.c"
                                error_noabort("undefined symbol '%s'",name_812);
                            }
                        }
                    }
                    # 1424 "tccelf.c"
                    else if(_elif_conditional199=s1->rdynamic&&(((unsigned char)(sym_807->st_info))>>4)!=0,                    _elif_conditional199) {
                        # 1427 "tccelf.c"
                        # 1430 "tccelf.c"
                        put_elf_sym(s1->dynsym,sym_807->st_value,sym_807->st_size,sym_807->st_info,0,sym_807->st_shndx,name_812);
                    }
                }
                # 1435 "tccelf.c"
                # 1434 "tccelf.c"
                if(s1->nb_errors) {
                    # 1435 "tccelf.c"
                    goto fail;
                }
                # 1440 "tccelf.c"
                sym_end_816=(struct anonymous_typeX68*)(s1->dynsymtab_section->data+s1->dynsymtab_section->data_offset);
                # 1463 "tccelf.c"
                for(                esym_815=(struct anonymous_typeX68*)s1->dynsymtab_section->data+1;                esym_815<sym_end_816;                esym_815++                ){
                    # 1462 "tccelf.c"
                    # 1444 "tccelf.c"
                    if(_if_conditional1024=esym_815->st_shndx==0,                    _if_conditional1024) {
                        # 1445 "tccelf.c"
                        # 1446 "tccelf.c"
                        sym_index_813=find_elf_sym(symtab_section,name_812);
                        # 1461 "tccelf.c"
                        # 1447 "tccelf.c"
                        if(sym_index_813) {
                            # 1450 "tccelf.c"
                            sym_807=&((struct anonymous_typeX68*)symtab_section->data)[sym_index_813];
                            # 1453 "tccelf.c"
                            put_elf_sym(s1->dynsym,sym_807->st_value,sym_807->st_size,sym_807->st_info,0,sym_807->st_shndx,name_812);
                        }
                        else {
                            # 1460 "tccelf.c"
                            # 1455 "tccelf.c"
                            if(_if_conditional1026=(((unsigned char)(esym_815->st_info))>>4)==2,                            _if_conditional1026) {
                            }
                            else {
                                # 1458 "tccelf.c"
                                warning("undefined dynamic symbol '%s'",name_812);
                            }
                        }
                    }
                }
            }
            else {
                # 1464 "tccelf.c"
                # 1466 "tccelf.c"
                nb_syms_819=symtab_section->data_offset/sizeof(struct anonymous_typeX68);
                # 1467 "tccelf.c"
                s1->symtab_to_dynsym=tcc_mallocz(sizeof(int)*nb_syms_819);
                # 1497 "tccelf.c"
                for(                sym_807=(struct anonymous_typeX68*)symtab_section->data+1;                sym_807<sym_end_816;                sym_807++                ){
                    # 1496 "tccelf.c"
                    # 1471 "tccelf.c"
                    if(_if_conditional1027=(((unsigned char)(sym_807->st_info))>>4)!=0,                    _if_conditional1027) {
                        # 1495 "tccelf.c"
                        # 1474 "tccelf.c"
                        if(_if_conditional1028=((sym_807->st_info)&15)==2&&sym_807->st_shndx==0,                        _if_conditional1028) {
                            # 1477 "tccelf.c"
                            put_got_entry(s1,7,sym_807->st_size,sym_807->st_info,sym_807-(struct anonymous_typeX68*)symtab_section->data);
                        }
                        # 1479 "tccelf.c"
                        else if(_elif_conditional200=((sym_807->st_info)&15)==1,                        _elif_conditional200) {
                            # 1482 "tccelf.c"
                            put_got_entry(s1,6,sym_807->st_size,sym_807->st_info,sym_807-(struct anonymous_typeX68*)symtab_section->data);
                        }
                        else {
                            # 1487 "tccelf.c"
                            # 1490 "tccelf.c"
                            index_814=put_elf_sym(s1->dynsym,sym_807->st_value,sym_807->st_size,sym_807->st_info,0,sym_807->st_shndx,name_812);
                            # 1493 "tccelf.c"
                            s1->symtab_to_dynsym[sym_807-(struct anonymous_typeX68*)symtab_section->data]=index_814;
                        }
                    }
                }
            }
            # 1499 "tccelf.c"
            build_got_entries(s1);
            # 1509 "tccelf.c"
            for(            i_787=0;            i_787<s1->nb_loaded_dlls;            i_787++            ){
                # 1503 "tccelf.c"
                dllref_820=s1->loaded_dlls[i_787];
                # 1506 "tccelf.c"
                # 1504 "tccelf.c"
                if(_if_conditional1029=dllref_820->level==0,                _if_conditional1029) {
                    # 1505 "tccelf.c"
                    put_dt(dynamic_804,1,put_elf_str(dynstr_805,dllref_820->name));
                }
            }
            # 1516 "tccelf.c"
            # 1509 "tccelf.c"
            if(_if_conditional1030=file_type_809==2,            _if_conditional1030) {
                # 1511 "tccelf.c"
                # 1510 "tccelf.c"
                if(s1->soname) {
                    # 1511 "tccelf.c"
                    put_dt(dynamic_804,14,put_elf_str(dynstr_805,s1->soname));
                }
                # 1512 "tccelf.c"
                put_dt(dynamic_804,22,0);
            }
            # 1516 "tccelf.c"
            saved_dynamic_data_offset_806=dynamic_804->data_offset;
            # 1517 "tccelf.c"
            dynamic_804->data_offset+=sizeof(struct anonymous_typeX80)*9;
        }
        else {
            # 1520 "tccelf.c"
            build_got_entries(s1);
        }
    }
    # 1524 "tccelf.c"
    memset(&ehdr_780,0,sizeof(ehdr_780));
    # 1527 "tccelf.c"
    strsec_797=new_section(s1,".shstrtab",3,0);
    # 1528 "tccelf.c"
    put_elf_str(strsec_797,"");
    # 1531 "tccelf.c"
    shnum_786=s1->nb_sections;
    # 1534 "tccelf.c"
    section_order_785=tcc_malloc(sizeof(int)*shnum_786);
    # 1535 "tccelf.c"
    section_order_785[0]=0;
    # 1536 "tccelf.c"
    sh_order_index_794=1;
    # 1559 "tccelf.c"
    switch (file_type_809) {
        # 1541 "tccelf.c"
        default:
        # 1542 "tccelf.c"
        case 3:
        # 1542 "tccelf.c"
        phnum_788=0;
        # 1543 "tccelf.c"
        break;
        # 1545 "tccelf.c"
        case 1:
        # 1548 "tccelf.c"
        # 1545 "tccelf.c"
        if(_if_conditional1032=!s1->static_link,        _if_conditional1032) {
            # 1546 "tccelf.c"
            phnum_788=4;
        }
        else {
            # 1548 "tccelf.c"
            phnum_788=2;
        }
        # 1549 "tccelf.c"
        break;
        # 1551 "tccelf.c"
        case 2:
        # 1551 "tccelf.c"
        phnum_788=3;
        # 1552 "tccelf.c"
        break;
    }
    # 1591 "tccelf.c"
    for(    i_787=1;    i_787<s1->nb_sections;    i_787++    ){
        # 1560 "tccelf.c"
        s_798=s1->sections[i_787];
        # 1561 "tccelf.c"
        s_798->sh_name=put_elf_str(strsec_797,s_798->name);
        # 1588 "tccelf.c"
        # 1575 "tccelf.c"
        if(_if_conditional1033=file_type_809==2&&s_798->sh_type==4&&!(s_798->sh_flags&(1<<1)),        _if_conditional1033) {
            # 1581 "tccelf.c"
            # 1577 "tccelf.c"
            if(_if_conditional1034=s1->sections[s_798->sh_info]->sh_flags&(1<<1),            _if_conditional1034) {
                # 1578 "tccelf.c"
                prepare_dynamic_rel(s1,s_798);
            }
            # 1579 "tccelf.c"
            else if(s1->do_debug) {
                # 1580 "tccelf.c"
                s_798->sh_size=s_798->data_offset;
            }
        }
        # 1584 "tccelf.c"
        else if(_elif_conditional201=s1->do_debug||file_type_809==3||(s_798->sh_flags&(1<<1))||i_787==(s1->nb_sections-1),        _elif_conditional201) {
            # 1586 "tccelf.c"
            s_798->sh_size=s_798->data_offset;
        }
    }
    # 1591 "tccelf.c"
    phdr_801=tcc_mallocz(phnum_788*sizeof(struct anonymous_typeX76));
    # 1598 "tccelf.c"
    # 1593 "tccelf.c"
    if(_if_conditional1035=s1->output_format==0,    _if_conditional1035) {
        # 1594 "tccelf.c"
        file_offset_789=sizeof(struct anonymous_typeX64)+phnum_788*sizeof(struct anonymous_typeX76);
    }
    else {
        # 1596 "tccelf.c"
        file_offset_789=0;
    }
    # 1820 "tccelf.c"
    # 1598 "tccelf.c"
    if(_if_conditional1036=phnum_788>0,    _if_conditional1036) {
        # 1620 "tccelf.c"
        # 1600 "tccelf.c"
        if(s1->has_text_addr) {
            # 1601 "tccelf.c"
            # 1602 "tccelf.c"
            addr_796=s1->text_addr;
            # 1605 "tccelf.c"
            a_offset_821=addr_796&(4096-1);
            # 1606 "tccelf.c"
            p_offset_822=file_offset_789&(4096-1);
            # 1608 "tccelf.c"
            # 1607 "tccelf.c"
            if(_if_conditional1038=a_offset_821<p_offset_822,            _if_conditional1038) {
                # 1608 "tccelf.c"
                a_offset_821+=4096;
            }
            # 1609 "tccelf.c"
            file_offset_789+=(a_offset_821-p_offset_822);
        }
        else {
            # 1614 "tccelf.c"
            # 1611 "tccelf.c"
            if(_if_conditional1039=file_type_809==2,            _if_conditional1039) {
                # 1612 "tccelf.c"
                addr_796=0;
            }
            else {
                # 1614 "tccelf.c"
                addr_796=134512640;
            }
            # 1616 "tccelf.c"
            addr_796+=(file_offset_789&(4096-1));
        }
        # 1620 "tccelf.c"
        rel_size_811=0;
        # 1621 "tccelf.c"
        rel_addr_810=0;
        # 1624 "tccelf.c"
        ph_802=&phdr_801[0];
        # 1626 "tccelf.c"
        # 1625 "tccelf.c"
        if(interp_803) {
            # 1626 "tccelf.c"
            ph_802++;
        }
        # 1715 "tccelf.c"
        for(        j_792=0;        j_792<2;        j_792++        ){
            # 1629 "tccelf.c"
            ph_802->p_type=1;
            # 1633 "tccelf.c"
            # 1630 "tccelf.c"
            if(_if_conditional1041=j_792==0,            _if_conditional1041) {
                # 1631 "tccelf.c"
                ph_802->p_flags=(1<<2)|(1<<0);
            }
            else {
                # 1633 "tccelf.c"
                ph_802->p_flags=(1<<2)|(1<<1);
            }
            # 1634 "tccelf.c"
            ph_802->p_align=4096;
            # 1697 "tccelf.c"
            for(            k_795=0;            k_795<5;            k_795++            ){
                # 1696 "tccelf.c"
                for(                i_787=1;                i_787<s1->nb_sections;                i_787++                ){
                    # 1641 "tccelf.c"
                    s_798=s1->sections[i_787];
                    # 1652 "tccelf.c"
                    # 1643 "tccelf.c"
                    if(_if_conditional1042=j_792==0,                    _if_conditional1042) {
                        # 1647 "tccelf.c"
                        # 1645 "tccelf.c"
                        if(_if_conditional1043=(s_798->sh_flags&((1<<1)|(1<<0)))!=(1<<1),                        _if_conditional1043) {
                            # 1646 "tccelf.c"
                            continue;
                        }
                    }
                    else {
                        # 1651 "tccelf.c"
                        # 1649 "tccelf.c"
                        if(_if_conditional1044=(s_798->sh_flags&((1<<1)|(1<<0)))!=((1<<1)|(1<<0)),                        _if_conditional1044) {
                            # 1650 "tccelf.c"
                            continue;
                        }
                    }
                    # 1670 "tccelf.c"
                    # 1652 "tccelf.c"
                    if(_if_conditional1045=s_798==interp_803,                    _if_conditional1045) {
                        # 1655 "tccelf.c"
                        # 1653 "tccelf.c"
                        if(_if_conditional1046=k_795!=0,                        _if_conditional1046) {
                            # 1654 "tccelf.c"
                            continue;
                        }
                    }
                    # 1657 "tccelf.c"
                    else if(_elif_conditional202=s_798->sh_type==11||s_798->sh_type==3||s_798->sh_type==5,                    _elif_conditional202) {
                        # 1660 "tccelf.c"
                        # 1658 "tccelf.c"
                        if(_if_conditional1047=k_795!=1,                        _if_conditional1047) {
                            # 1659 "tccelf.c"
                            continue;
                        }
                    }
                    # 1660 "tccelf.c"
                    else if(_elif_conditional203=s_798->sh_type==4,                    _elif_conditional203) {
                        # 1663 "tccelf.c"
                        # 1661 "tccelf.c"
                        if(_if_conditional1048=k_795!=2,                        _if_conditional1048) {
                            # 1662 "tccelf.c"
                            continue;
                        }
                    }
                    # 1663 "tccelf.c"
                    else if(_elif_conditional204=s_798->sh_type==8,                    _elif_conditional204) {
                        # 1666 "tccelf.c"
                        # 1664 "tccelf.c"
                        if(_if_conditional1049=k_795!=4,                        _if_conditional1049) {
                            # 1665 "tccelf.c"
                            continue;
                        }
                    }
                    else {
                        # 1669 "tccelf.c"
                        # 1667 "tccelf.c"
                        if(_if_conditional1050=k_795!=3,                        _if_conditional1050) {
                            # 1668 "tccelf.c"
                            continue;
                        }
                    }
                    # 1670 "tccelf.c"
                    section_order_785[sh_order_index_794++]=i_787;
                    # 1673 "tccelf.c"
                    tmp_793=addr_796;
                    # 1675 "tccelf.c"
                    addr_796=(addr_796+s_798->sh_addralign-1)&~(s_798->sh_addralign-1);
                    # 1676 "tccelf.c"
                    file_offset_789+=addr_796-tmp_793;
                    # 1677 "tccelf.c"
                    s_798->sh_offset=file_offset_789;
                    # 1678 "tccelf.c"
                    s_798->sh_addr=addr_796;
                    # 1687 "tccelf.c"
                    # 1681 "tccelf.c"
                    if(_if_conditional1051=ph_802->p_offset==0,                    _if_conditional1051) {
                        # 1682 "tccelf.c"
                        ph_802->p_offset=file_offset_789;
                        # 1683 "tccelf.c"
                        ph_802->p_vaddr=addr_796;
                        # 1684 "tccelf.c"
                        ph_802->p_paddr=ph_802->p_vaddr;
                    }
                    # 1692 "tccelf.c"
                    # 1687 "tccelf.c"
                    if(_if_conditional1052=s_798->sh_type==4,                    _if_conditional1052) {
                        # 1689 "tccelf.c"
                        # 1688 "tccelf.c"
                        if(_if_conditional1053=rel_size_811==0,                        _if_conditional1053) {
                            # 1689 "tccelf.c"
                            rel_addr_810=addr_796;
                        }
                        # 1690 "tccelf.c"
                        rel_size_811+=s_798->sh_size;
                    }
                    # 1692 "tccelf.c"
                    addr_796+=s_798->sh_size;
                    # 1695 "tccelf.c"
                    # 1693 "tccelf.c"
                    if(_if_conditional1054=s_798->sh_type!=8,                    _if_conditional1054) {
                        # 1694 "tccelf.c"
                        file_offset_789+=s_798->sh_size;
                    }
                }
            }
            # 1697 "tccelf.c"
            ph_802->p_filesz=file_offset_789-ph_802->p_offset;
            # 1698 "tccelf.c"
            ph_802->p_memsz=addr_796-ph_802->p_vaddr;
            # 1699 "tccelf.c"
            ph_802++;
            # 1712 "tccelf.c"
            # 1700 "tccelf.c"
            if(_if_conditional1055=j_792==0,            _if_conditional1055) {
                # 1711 "tccelf.c"
                # 1701 "tccelf.c"
                if(_if_conditional1056=s1->output_format==0,                _if_conditional1056) {
                    # 1706 "tccelf.c"
                    # 1704 "tccelf.c"
                    if(_if_conditional1057=(addr_796&(4096-1))!=0,                    _if_conditional1057) {
                        # 1705 "tccelf.c"
                        addr_796+=4096;
                    }
                }
                else {
                    # 1707 "tccelf.c"
                    addr_796=(addr_796+4096-1)&~(4096-1);
                    # 1709 "tccelf.c"
                    file_offset_789=(file_offset_789+4096-1)&~(4096-1);
                }
            }
        }
        # 1729 "tccelf.c"
        # 1715 "tccelf.c"
        if(interp_803) {
            # 1716 "tccelf.c"
            ph_802=&phdr_801[0];
            # 1718 "tccelf.c"
            ph_802->p_type=3;
            # 1719 "tccelf.c"
            ph_802->p_offset=interp_803->sh_offset;
            # 1720 "tccelf.c"
            ph_802->p_vaddr=interp_803->sh_addr;
            # 1721 "tccelf.c"
            ph_802->p_paddr=ph_802->p_vaddr;
            # 1722 "tccelf.c"
            ph_802->p_filesz=interp_803->sh_size;
            # 1723 "tccelf.c"
            ph_802->p_memsz=interp_803->sh_size;
            # 1724 "tccelf.c"
            ph_802->p_flags=(1<<2);
            # 1725 "tccelf.c"
            ph_802->p_align=interp_803->sh_addralign;
        }
        # 1814 "tccelf.c"
        # 1729 "tccelf.c"
        if(dynamic_804) {
            # 1730 "tccelf.c"
            # 1732 "tccelf.c"
            ph_802=&phdr_801[phnum_788-1];
            # 1734 "tccelf.c"
            ph_802->p_type=2;
            # 1735 "tccelf.c"
            ph_802->p_offset=dynamic_804->sh_offset;
            # 1736 "tccelf.c"
            ph_802->p_vaddr=dynamic_804->sh_addr;
            # 1737 "tccelf.c"
            ph_802->p_paddr=ph_802->p_vaddr;
            # 1738 "tccelf.c"
            ph_802->p_filesz=dynamic_804->sh_size;
            # 1739 "tccelf.c"
            ph_802->p_memsz=dynamic_804->sh_size;
            # 1740 "tccelf.c"
            ph_802->p_flags=(1<<2)|(1<<1);
            # 1741 "tccelf.c"
            ph_802->p_align=dynamic_804->sh_addralign;
            # 1744 "tccelf.c"
            put32(s1->got->data,dynamic_804->sh_addr);
            # 1778 "tccelf.c"
            # 1751 "tccelf.c"
            if(_if_conditional1060=file_type_809==1||file_type_809==2,            _if_conditional1060) {
                # 1752 "tccelf.c"
                # 1754 "tccelf.c"
                p_824=s1->plt->data;
                # 1755 "tccelf.c"
                p_end_825=p_824+s1->plt->data_offset;
                # 1775 "tccelf.c"
                # 1756 "tccelf.c"
                if(_if_conditional1061=p_824<p_end_825,                _if_conditional1061) {
                    # 1766 "tccelf.c"
                    x_826=s1->got->sh_addr-s1->plt->sh_addr-6;
                    # 1767 "tccelf.c"
                    put32(p_824+2,get32(p_824+2)+x_826);
                    # 1768 "tccelf.c"
                    put32(p_824+8,get32(p_824+8)+x_826-6);
                    # 1769 "tccelf.c"
                    p_824+=16;
                    # 1774 "tccelf.c"
                    while(_while_condtional84=p_824<p_end_825,                    _while_condtional84) {
                        # 1771 "tccelf.c"
                        put32(p_824+2,get32(p_824+2)+x_826+s1->plt->data-p_824);
                        # 1772 "tccelf.c"
                        p_824+=16;
                    }
                }
            }
            # 1778 "tccelf.c"
            sym_end_823=(struct anonymous_typeX68*)(s1->dynsym->data+s1->dynsym->data_offset);
            # 1794 "tccelf.c"
            for(            sym_807=(struct anonymous_typeX68*)s1->dynsym->data+1;            sym_807<sym_end_823;            sym_807++            ){
                # 1791 "tccelf.c"
                # 1782 "tccelf.c"
                if(_if_conditional1062=sym_807->st_shndx==0,                _if_conditional1062) {
                    # 1787 "tccelf.c"
                    # 1785 "tccelf.c"
                    if(sym_807->st_value) {
                        # 1786 "tccelf.c"
                        sym_807->st_value+=s1->plt->sh_addr;
                    }
                }
                # 1787 "tccelf.c"
                else if(_elif_conditional205=sym_807->st_shndx<65280,                _elif_conditional205) {
                    # 1789 "tccelf.c"
                    sym_807->st_value+=s1->sections[sym_807->st_shndx]->sh_addr;
                }
            }
            # 1794 "tccelf.c"
            dynamic_804->data_offset=saved_dynamic_data_offset_806;
            # 1795 "tccelf.c"
            put_dt(dynamic_804,4,s1->dynsym->hash->sh_addr);
            # 1796 "tccelf.c"
            put_dt(dynamic_804,5,dynstr_805->sh_addr);
            # 1797 "tccelf.c"
            put_dt(dynamic_804,6,s1->dynsym->sh_addr);
            # 1798 "tccelf.c"
            put_dt(dynamic_804,10,dynstr_805->data_offset);
            # 1799 "tccelf.c"
            put_dt(dynamic_804,11,sizeof(struct anonymous_typeX68));
            # 1801 "tccelf.c"
            put_dt(dynamic_804,7,rel_addr_810);
            # 1802 "tccelf.c"
            put_dt(dynamic_804,8,rel_size_811);
            # 1803 "tccelf.c"
            put_dt(dynamic_804,9,sizeof(struct anonymous_typeX74));
            # 1810 "tccelf.c"
            # 1809 "tccelf.c"
            if(s1->do_debug) {
                # 1810 "tccelf.c"
                put_dt(dynamic_804,21,0);
            }
            # 1811 "tccelf.c"
            put_dt(dynamic_804,0,0);
        }
        # 1814 "tccelf.c"
        ehdr_780.e_phentsize=sizeof(struct anonymous_typeX76);
        # 1815 "tccelf.c"
        ehdr_780.e_phnum=phnum_788;
        # 1816 "tccelf.c"
        ehdr_780.e_phoff=sizeof(struct anonymous_typeX64);
    }
    # 1835 "tccelf.c"
    for(    i_787=1;    i_787<s1->nb_sections;    i_787++    ){
        # 1821 "tccelf.c"
        s_798=s1->sections[i_787];
        # 1823 "tccelf.c"
        # 1822 "tccelf.c"
        if(_if_conditional1065=phnum_788>0&&(s_798->sh_flags&(1<<1)),        _if_conditional1065) {
            # 1823 "tccelf.c"
            continue;
        }
        # 1824 "tccelf.c"
        section_order_785[sh_order_index_794++]=i_787;
        # 1827 "tccelf.c"
        file_offset_789=(file_offset_789+s_798->sh_addralign-1)&~(s_798->sh_addralign-1);
        # 1828 "tccelf.c"
        s_798->sh_offset=file_offset_789;
        # 1831 "tccelf.c"
        # 1829 "tccelf.c"
        if(_if_conditional1066=s_798->sh_type!=8,        _if_conditional1066) {
            # 1830 "tccelf.c"
            file_offset_789+=s_798->sh_size;
        }
    }
    # 1870 "tccelf.c"
    # 1835 "tccelf.c"
    if(_if_conditional1067=file_type_809!=3,    _if_conditional1067) {
        # 1836 "tccelf.c"
        relocate_syms(s1,0);
        # 1846 "tccelf.c"
        # 1838 "tccelf.c"
        if(_if_conditional1068=s1->nb_errors!=0,        _if_conditional1068) {
            # 1840 "tccelf.c"
            fail:
            # 1840 "tccelf.c"
            ret_784=-1;
            # 1841 "tccelf.c"
            goto the_end;
        }
        # 1854 "tccelf.c"
        for(        i_787=1;        i_787<s1->nb_sections;        i_787++        ){
            # 1847 "tccelf.c"
            s_798=s1->sections[i_787];
            # 1850 "tccelf.c"
            # 1848 "tccelf.c"
            if(_if_conditional1069=s_798->reloc&&s_798!=s1->got&&(s_798->sh_flags&(1<<1)),            _if_conditional1069) {
                # 1849 "tccelf.c"
                relocate_section(s1,s_798);
            }
        }
        # 1863 "tccelf.c"
        for(        i_787=1;        i_787<s1->nb_sections;        i_787++        ){
            # 1855 "tccelf.c"
            s_798=s1->sections[i_787];
            # 1860 "tccelf.c"
            # 1857 "tccelf.c"
            if(_if_conditional1070=(s_798->sh_flags&(1<<1))&&s_798->sh_type==4,            _if_conditional1070) {
                # 1858 "tccelf.c"
                relocate_rel(s1,s_798);
            }
        }
        # 1866 "tccelf.c"
        # 1863 "tccelf.c"
        if(_if_conditional1071=file_type_809==1,        _if_conditional1071) {
            # 1864 "tccelf.c"
            ehdr_780.e_entry=(unsigned long int)tcc_get_symbol_err(s1,"_start");
        }
        else {
            # 1866 "tccelf.c"
            ehdr_780.e_entry=text_section->sh_addr;
        }
    }
    # 1873 "tccelf.c"
    # 1870 "tccelf.c"
    if(_if_conditional1072=file_type_809==3,    _if_conditional1072) {
        # 1871 "tccelf.c"
        mode_783=438;
    }
    else {
        # 1873 "tccelf.c"
        mode_783=511;
    }
    # 1887 "tccelf.c"
    fd_782=open(filename,1|64|512|0,mode_783);
    # 1892 "tccelf.c"
    # 1888 "tccelf.c"
    if(_if_conditional1073=fd_782<0,    _if_conditional1073) {
        # 1889 "tccelf.c"
        error_noabort("could not write '%s'",filename);
        # 1890 "tccelf.c"
        goto fail;
    }
    # 1892 "tccelf.c"
    f_781=fdopen(fd_782,"wb");
    # 1894 "tccelf.c"
    # 1893 "tccelf.c"
    if(s1->verbose) {
        # 1894 "tccelf.c"
        printf("<- %s\n",filename);
    }
    # 1991 "tccelf.c"
    # 1901 "tccelf.c"
    if(_if_conditional1075=s1->output_format==0,    _if_conditional1075) {
        # 1902 "tccelf.c"
        sort_syms(s1,symtab_section);
        # 1905 "tccelf.c"
        file_offset_789=(file_offset_789+3)&-4;
        # 1908 "tccelf.c"
        ehdr_780.e_ident[0]=127;
        # 1909 "tccelf.c"
        ehdr_780.e_ident[1]=69;
        # 1910 "tccelf.c"
        ehdr_780.e_ident[2]=76;
        # 1911 "tccelf.c"
        ehdr_780.e_ident[3]=70;
        # 1912 "tccelf.c"
        ehdr_780.e_ident[4]=2;
        # 1913 "tccelf.c"
        ehdr_780.e_ident[5]=1;
        # 1914 "tccelf.c"
        ehdr_780.e_ident[6]=1;
        # 1938 "tccelf.c"
        switch (file_type_809) {
            # 1928 "tccelf.c"
            default:
            # 1929 "tccelf.c"
            case 1:
            # 1929 "tccelf.c"
            ehdr_780.e_type=2;
            # 1930 "tccelf.c"
            break;
            # 1932 "tccelf.c"
            case 2:
            # 1932 "tccelf.c"
            ehdr_780.e_type=3;
            # 1933 "tccelf.c"
            break;
            # 1935 "tccelf.c"
            case 3:
            # 1935 "tccelf.c"
            ehdr_780.e_type=1;
            # 1936 "tccelf.c"
            break;
        }
        # 1938 "tccelf.c"
        ehdr_780.e_machine=62;
        # 1939 "tccelf.c"
        ehdr_780.e_version=1;
        # 1940 "tccelf.c"
        ehdr_780.e_shoff=file_offset_789;
        # 1941 "tccelf.c"
        ehdr_780.e_ehsize=sizeof(struct anonymous_typeX64);
        # 1942 "tccelf.c"
        ehdr_780.e_shentsize=sizeof(struct anonymous_typeX66);
        # 1943 "tccelf.c"
        ehdr_780.e_shnum=shnum_786;
        # 1944 "tccelf.c"
        ehdr_780.e_shstrndx=shnum_786-1;
        # 1946 "tccelf.c"
        fwrite(&ehdr_780,1,sizeof(struct anonymous_typeX64),f_781);
        # 1947 "tccelf.c"
        fwrite(phdr_801,1,phnum_788*sizeof(struct anonymous_typeX76),f_781);
        # 1948 "tccelf.c"
        offset_790=sizeof(struct anonymous_typeX64)+phnum_788*sizeof(struct anonymous_typeX76);
        # 1964 "tccelf.c"
        for(        i_787=1;        i_787<s1->nb_sections;        i_787++        ){
            # 1951 "tccelf.c"
            s_798=s1->sections[section_order_785[i_787]];
            # 1961 "tccelf.c"
            # 1952 "tccelf.c"
            if(_if_conditional1076=s_798->sh_type!=8,            _if_conditional1076) {
                # 1957 "tccelf.c"
                while(_while_condtional85=offset_790<s_798->sh_offset,                _while_condtional85) {
                    # 1954 "tccelf.c"
                    fputc(0,f_781);
                    # 1955 "tccelf.c"
                    offset_790++;
                }
                # 1957 "tccelf.c"
                size_791=s_798->sh_size;
                # 1958 "tccelf.c"
                fwrite(s_798->data,1,size_791,f_781);
                # 1959 "tccelf.c"
                offset_790+=size_791;
            }
        }
        # 1969 "tccelf.c"
        while(_while_condtional86=offset_790<ehdr_780.e_shoff,        _while_condtional86) {
            # 1965 "tccelf.c"
            fputc(0,f_781);
            # 1966 "tccelf.c"
            offset_790++;
        }
        # 1988 "tccelf.c"
        for(        i_787=0;        i_787<s1->nb_sections;        i_787++        ){
            # 1970 "tccelf.c"
            sh_800=&shdr_799;
            # 1971 "tccelf.c"
            memset(sh_800,0,sizeof(struct anonymous_typeX66));
            # 1972 "tccelf.c"
            s_798=s1->sections[i_787];
            # 1986 "tccelf.c"
            # 1973 "tccelf.c"
            if(s_798) {
                # 1974 "tccelf.c"
                sh_800->sh_name=s_798->sh_name;
                # 1975 "tccelf.c"
                sh_800->sh_type=s_798->sh_type;
                # 1976 "tccelf.c"
                sh_800->sh_flags=s_798->sh_flags;
                # 1977 "tccelf.c"
                sh_800->sh_entsize=s_798->sh_entsize;
                # 1978 "tccelf.c"
                sh_800->sh_info=s_798->sh_info;
                # 1980 "tccelf.c"
                # 1979 "tccelf.c"
                if(s_798->link) {
                    # 1980 "tccelf.c"
                    sh_800->sh_link=s_798->link->sh_num;
                }
                # 1981 "tccelf.c"
                sh_800->sh_addralign=s_798->sh_addralign;
                # 1982 "tccelf.c"
                sh_800->sh_addr=s_798->sh_addr;
                # 1983 "tccelf.c"
                sh_800->sh_offset=s_798->sh_offset;
                # 1984 "tccelf.c"
                sh_800->sh_size=s_798->sh_size;
            }
            # 1986 "tccelf.c"
            fwrite(sh_800,1,sizeof(struct anonymous_typeX66),f_781);
        }
    }
    else {
        # 1989 "tccelf.c"
        tcc_output_binary(s1,f_781,section_order_785);
    }
    # 1991 "tccelf.c"
    fclose(f_781);
    # 1993 "tccelf.c"
    ret_784=0;
    # 1995 "tccelf.c"
    the_end:
    # 1995 "tccelf.c"
    tcc_free(s1->symtab_to_dynsym);
    # 1996 "tccelf.c"
    tcc_free(section_order_785);
    # 1997 "tccelf.c"
    tcc_free(phdr_801);
    # 1998 "tccelf.c"
    tcc_free(s1->got_offsets);
    # 1999 "tccelf.c"
    __result165__ = ret_784;
    come_call_finalizer3((&ehdr_780),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
    return __result165__;
    come_call_finalizer3((&ehdr_780),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
}

static void Elf64_Ehdr_finalize(struct anonymous_typeX64* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int tcc_output_file(struct TCCState* s, const char* filename){
void* __result_obj__;
int ret_827;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_827, 0, sizeof(int));
    # 2004 "tccelf.c"
    # 2013 "tccelf.c"
    {
        # 2011 "tccelf.c"
        ret_827=elf_output_file(s,filename);
    }
    # 2013 "tccelf.c"
    __result166__ = ret_827;
    return __result166__;
}

static void* load_data(int fd, unsigned long int file_offset, unsigned long int size){
void* __result_obj__;
void* data_828;
void* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&data_828, 0, sizeof(void*));
    # 2018 "tccelf.c"
    # 2020 "tccelf.c"
    data_828=tcc_malloc(size);
    # 2021 "tccelf.c"
    lseek(fd,file_offset,0);
    # 2022 "tccelf.c"
    read(fd,data_828,size);
    # 2023 "tccelf.c"
    __result167__ = __result_obj__ = data_828;
    return __result167__;
}

static int tcc_load_object_file(struct TCCState* s1, int fd, unsigned long int file_offset){
void* __result_obj__;
struct anonymous_typeX64 ehdr_829;
struct anonymous_typeX66* shdr_830;
struct anonymous_typeX66* sh_831;
int size_832;
int i_833;
int j_834;
int offset_835;
int offseti_836;
int nb_syms_837;
int sym_index_838;
int ret_839;
unsigned char* strsec_840;
unsigned char* strtab_841;
int* old_to_new_syms_842;
char* sh_name_843;
char* name_844;
struct SectionMergeInfo* sm_table_845;
struct SectionMergeInfo* sm_846;
struct anonymous_typeX68* sym_847;
struct anonymous_typeX68* symtab_848;
struct anonymous_typeX74* rel_849;
struct anonymous_typeX74* rel_end_850;
struct Section* s_851;
int stab_index_852;
int stabstr_index_853;
_Bool _if_conditional1079;
_Bool _if_conditional1080;
_Bool _if_conditional1081;
_Bool _if_conditional1082;
int __result168__;
_Bool _if_conditional1083;
_Bool _if_conditional1084;
_Bool _if_conditional1085;
_Bool _if_conditional1086;
_Bool _if_conditional1087;
_Bool _if_conditional1088;
_Bool _if_conditional1089;
_Bool _if_conditional1090;
_Bool _if_conditional1091;
_Bool _if_conditional1092;
_Bool _if_conditional1093;
_Bool _if_conditional1094;
unsigned char* ptr_854;
_Bool _if_conditional1095;
struct anonymous_typeX109* a_855;
struct anonymous_typeX109* b_856;
unsigned int o_857;
_Bool _while_condtional87;
_Bool _if_conditional1096;
_Bool _if_conditional1097;
_Bool _if_conditional1098;
_Bool _if_conditional1099;
_Bool _if_conditional1100;
_Bool _if_conditional1101;
_Bool _if_conditional1102;
_Bool _if_conditional1103;
_Bool _if_conditional1104;
int type_858;
unsigned int sym_index_859;
_Bool _if_conditional1105;
_Bool _if_conditional1106;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ehdr_829, 0, sizeof(struct anonymous_typeX64));
memset(&old_to_new_syms_842, 0, sizeof(int*));
memset(&s_851, 0, sizeof(struct Section*));
memset(&stab_index_852, 0, sizeof(int));
memset(&stabstr_index_853, 0, sizeof(int));
memset(&ptr_854, 0, sizeof(unsigned char*));
memset(&o_857, 0, sizeof(unsigned int));
memset(&type_858, 0, sizeof(int));
memset(&sym_index_859, 0, sizeof(unsigned int));
    # 2038 "tccelf.c"
    # 2039 "tccelf.c"
    # 2040 "tccelf.c"
    # 2041 "tccelf.c"
    # 2042 "tccelf.c"
    # 2043 "tccelf.c"
    # 2044 "tccelf.c"
    # 2045 "tccelf.c"
    # 2046 "tccelf.c"
    # 2047 "tccelf.c"
    # 2049 "tccelf.c"
    # 2050 "tccelf.c"
    # 2052 "tccelf.c"
    stab_index_852=stabstr_index_853=0;
    # 2055 "tccelf.c"
    # 2054 "tccelf.c"
    if(_if_conditional1079=read(fd,&ehdr_829,sizeof(ehdr_829))!=sizeof(ehdr_829),    _if_conditional1079) {
        # 2055 "tccelf.c"
        goto fail1;
    }
    # 2060 "tccelf.c"
    # 2059 "tccelf.c"
    if(_if_conditional1080=ehdr_829.e_ident[0]!=127||ehdr_829.e_ident[1]!=69||ehdr_829.e_ident[2]!=76||ehdr_829.e_ident[3]!=70,    _if_conditional1080) {
        # 2060 "tccelf.c"
        goto fail1;
    }
    # 2063 "tccelf.c"
    # 2062 "tccelf.c"
    if(_if_conditional1081=ehdr_829.e_type!=1,    _if_conditional1081) {
        # 2063 "tccelf.c"
        goto fail1;
    }
    # 2072 "tccelf.c"
    # 2066 "tccelf.c"
    if(_if_conditional1082=ehdr_829.e_ident[5]!=1||ehdr_829.e_machine!=62,    _if_conditional1082) {
        # 2068 "tccelf.c"
        fail1:
        # 2068 "tccelf.c"
        error_noabort("invalid object file");
        # 2069 "tccelf.c"
        __result168__ = -1;
        come_call_finalizer3((&ehdr_829),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
        return __result168__;
    }
    # 2073 "tccelf.c"
    shdr_830=load_data(fd,file_offset+ehdr_829.e_shoff,sizeof(struct anonymous_typeX66)*ehdr_829.e_shnum);
    # 2074 "tccelf.c"
    sm_table_845=tcc_mallocz(sizeof(struct SectionMergeInfo)*ehdr_829.e_shnum);
    # 2077 "tccelf.c"
    sh_831=&shdr_830[ehdr_829.e_shstrndx];
    # 2078 "tccelf.c"
    strsec_840=load_data(fd,file_offset+sh_831->sh_offset,sh_831->sh_size);
    # 2081 "tccelf.c"
    old_to_new_syms_842=((void*)0);
    # 2082 "tccelf.c"
    symtab_848=((void*)0);
    # 2083 "tccelf.c"
    strtab_841=((void*)0);
    # 2084 "tccelf.c"
    nb_syms_837=0;
    # 2106 "tccelf.c"
    for(    i_833=1;    i_833<ehdr_829.e_shnum;    i_833++    ){
        # 2086 "tccelf.c"
        sh_831=&shdr_830[i_833];
        # 2102 "tccelf.c"
        # 2087 "tccelf.c"
        if(_if_conditional1083=sh_831->sh_type==2,        _if_conditional1083) {
            # 2094 "tccelf.c"
            # 2088 "tccelf.c"
            if(symtab_848) {
                # 2089 "tccelf.c"
                error_noabort("object must contain only one symtab");
                # 2091 "tccelf.c"
                fail:
                # 2091 "tccelf.c"
                ret_839=-1;
                # 2092 "tccelf.c"
                goto the_end;
            }
            # 2094 "tccelf.c"
            nb_syms_837=sh_831->sh_size/sizeof(struct anonymous_typeX68);
            # 2095 "tccelf.c"
            symtab_848=load_data(fd,file_offset+sh_831->sh_offset,sh_831->sh_size);
            # 2096 "tccelf.c"
            sm_table_845[i_833].s=symtab_section;
            # 2099 "tccelf.c"
            sh_831=&shdr_830[sh_831->sh_link];
            # 2100 "tccelf.c"
            strtab_841=load_data(fd,file_offset+sh_831->sh_offset,sh_831->sh_size);
        }
    }
    # 2188 "tccelf.c"
    for(    i_833=1;    i_833<ehdr_829.e_shnum;    i_833++    ){
        # 2109 "tccelf.c"
        # 2108 "tccelf.c"
        if(_if_conditional1085=i_833==ehdr_829.e_shstrndx,        _if_conditional1085) {
            # 2109 "tccelf.c"
            continue;
        }
        # 2110 "tccelf.c"
        sh_831=&shdr_830[i_833];
        # 2111 "tccelf.c"
        sh_name_843=strsec_840+sh_831->sh_name;
        # 2121 "tccelf.c"
        # 2120 "tccelf.c"
        if(_if_conditional1086=sh_831->sh_type!=1&&sh_831->sh_type!=4&&sh_831->sh_type!=8&&strcmp(sh_name_843,".stabstr"),        _if_conditional1086) {
            # 2121 "tccelf.c"
            continue;
        }
        # 2123 "tccelf.c"
        # 2122 "tccelf.c"
        if(_if_conditional1087=sh_831->sh_addralign<1,        _if_conditional1087) {
            # 2123 "tccelf.c"
            sh_831->sh_addralign=1;
        }
        # 2142 "tccelf.c"
        for(        j_834=1;        j_834<s1->nb_sections;        j_834++        ){
            # 2126 "tccelf.c"
            s_851=s1->sections[j_834];
            # 2140 "tccelf.c"
            # 2127 "tccelf.c"
            if(_if_conditional1088=!strcmp(s_851->name,sh_name_843),            _if_conditional1088) {
                # 2139 "tccelf.c"
                # 2129 "tccelf.c"
                if(_if_conditional1089=!strncmp(sh_name_843,".gnu.linkonce",sizeof(".gnu.linkonce")-1),                _if_conditional1089) {
                    # 2134 "tccelf.c"
                    sm_table_845[i_833].link_once=1;
                    # 2135 "tccelf.c"
                    goto next;
                }
                else {
                    # 2137 "tccelf.c"
                    goto found;
                }
            }
        }
        # 2142 "tccelf.c"
        s_851=new_section(s1,sh_name_843,sh_831->sh_type,sh_831->sh_flags);
        # 2145 "tccelf.c"
        s_851->sh_addralign=sh_831->sh_addralign;
        # 2146 "tccelf.c"
        s_851->sh_entsize=sh_831->sh_entsize;
        # 2147 "tccelf.c"
        sm_table_845[i_833].new_section=1;
        # 2149 "tccelf.c"
        found:
        # 2155 "tccelf.c"
        # 2149 "tccelf.c"
        if(_if_conditional1090=sh_831->sh_type!=s_851->sh_type,        _if_conditional1090) {
            # 2150 "tccelf.c"
            error_noabort("invalid section type");
            # 2151 "tccelf.c"
            goto fail;
        }
        # 2155 "tccelf.c"
        offset_835=s_851->data_offset;
        # 2161 "tccelf.c"
        # 2157 "tccelf.c"
        if(_if_conditional1091=0==strcmp(sh_name_843,".stab"),        _if_conditional1091) {
            # 2158 "tccelf.c"
            stab_index_852=i_833;
            # 2159 "tccelf.c"
            goto no_align;
        }
        # 2166 "tccelf.c"
        # 2161 "tccelf.c"
        if(_if_conditional1092=0==strcmp(sh_name_843,".stabstr"),        _if_conditional1092) {
            # 2162 "tccelf.c"
            stabstr_index_853=i_833;
            # 2163 "tccelf.c"
            goto no_align;
        }
        # 2166 "tccelf.c"
        size_832=sh_831->sh_addralign-1;
        # 2167 "tccelf.c"
        offset_835=(offset_835+size_832)&~size_832;
        # 2169 "tccelf.c"
        # 2168 "tccelf.c"
        if(_if_conditional1093=sh_831->sh_addralign>s_851->sh_addralign,        _if_conditional1093) {
            # 2169 "tccelf.c"
            s_851->sh_addralign=sh_831->sh_addralign;
        }
        # 2170 "tccelf.c"
        s_851->data_offset=offset_835;
        # 2172 "tccelf.c"
        no_align:
        # 2172 "tccelf.c"
        sm_table_845[i_833].offset=offset_835;
        # 2173 "tccelf.c"
        sm_table_845[i_833].s=s_851;
        # 2175 "tccelf.c"
        size_832=sh_831->sh_size;
        # 2184 "tccelf.c"
        # 2176 "tccelf.c"
        if(_if_conditional1094=sh_831->sh_type!=8,        _if_conditional1094) {
            # 2177 "tccelf.c"
            # 2178 "tccelf.c"
            lseek(fd,file_offset+sh_831->sh_offset,0);
            # 2179 "tccelf.c"
            ptr_854=section_ptr_add(s_851,size_832);
            # 2180 "tccelf.c"
            read(fd,ptr_854,size_832);
        }
        else {
            # 2182 "tccelf.c"
            s_851->data_offset+=size_832;
        }
        # 2184 "tccelf.c"
        next:
    }
    # 2201 "tccelf.c"
    # 2188 "tccelf.c"
    if(_if_conditional1095=stab_index_852&&stabstr_index_853,    _if_conditional1095) {
        # 2189 "tccelf.c"
        # 2190 "tccelf.c"
        # 2191 "tccelf.c"
        s_851=sm_table_845[stab_index_852].s;
        # 2192 "tccelf.c"
        a_855=(struct anonymous_typeX109*)(s_851->data+sm_table_845[stab_index_852].offset);
        # 2193 "tccelf.c"
        b_856=(struct anonymous_typeX109*)(s_851->data+s_851->data_offset);
        # 2194 "tccelf.c"
        o_857=sm_table_845[stabstr_index_853].offset;
        # 2196 "tccelf.c"
        while(_while_condtional87=a_855<b_856,        _while_condtional87) {
            # 2196 "tccelf.c"
            a_855->n_strx+=o_857,a_855++;
        }
    }
    # 2214 "tccelf.c"
    for(    i_833=1;    i_833<ehdr_829.e_shnum;    i_833++    ){
        # 2202 "tccelf.c"
        s_851=sm_table_845[i_833].s;
        # 2204 "tccelf.c"
        # 2203 "tccelf.c"
        if(_if_conditional1096=!s_851||!sm_table_845[i_833].new_section,        _if_conditional1096) {
            # 2204 "tccelf.c"
            continue;
        }
        # 2205 "tccelf.c"
        sh_831=&shdr_830[i_833];
        # 2207 "tccelf.c"
        # 2206 "tccelf.c"
        if(_if_conditional1097=sh_831->sh_link>0,        _if_conditional1097) {
            # 2207 "tccelf.c"
            s_851->link=sm_table_845[sh_831->sh_link].s;
        }
        # 2213 "tccelf.c"
        # 2208 "tccelf.c"
        if(_if_conditional1098=sh_831->sh_type==4,        _if_conditional1098) {
            # 2209 "tccelf.c"
            s_851->sh_info=sm_table_845[sh_831->sh_info].s->sh_num;
            # 2211 "tccelf.c"
            s1->sections[s_851->sh_info]->reloc=s_851;
        }
    }
    # 2214 "tccelf.c"
    sm_846=sm_table_845;
    # 2217 "tccelf.c"
    old_to_new_syms_842=tcc_mallocz(nb_syms_837*sizeof(int));
    # 2219 "tccelf.c"
    sym_847=symtab_848+1;
    # 2253 "tccelf.c"
    for(    i_833=1;    i_833<nb_syms_837;    i_833++,sym_847++    ){
        # 2245 "tccelf.c"
        # 2222 "tccelf.c"
        if(_if_conditional1099=sym_847->st_shndx!=0&&sym_847->st_shndx<65280,        _if_conditional1099) {
            # 2223 "tccelf.c"
            sm_846=&sm_table_845[sym_847->st_shndx];
            # 2237 "tccelf.c"
            # 2224 "tccelf.c"
            if(sm_846->link_once) {
                # 2234 "tccelf.c"
                # 2228 "tccelf.c"
                if(_if_conditional1101=(((unsigned char)(sym_847->st_info))>>4)!=0,                _if_conditional1101) {
                    # 2229 "tccelf.c"
                    name_844=strtab_841+sym_847->st_name;
                    # 2230 "tccelf.c"
                    sym_index_838=find_elf_sym(symtab_section,name_844);
                    # 2233 "tccelf.c"
                    # 2231 "tccelf.c"
                    if(sym_index_838) {
                        # 2232 "tccelf.c"
                        old_to_new_syms_842[i_833]=sym_index_838;
                    }
                }
                # 2234 "tccelf.c"
                continue;
            }
            # 2238 "tccelf.c"
            # 2237 "tccelf.c"
            if(_if_conditional1103=!sm_846->s,            _if_conditional1103) {
                # 2238 "tccelf.c"
                continue;
            }
            # 2240 "tccelf.c"
            sym_847->st_shndx=sm_846->s->sh_num;
            # 2242 "tccelf.c"
            sym_847->st_value+=sm_846->offset;
        }
        # 2245 "tccelf.c"
        name_844=strtab_841+sym_847->st_name;
        # 2248 "tccelf.c"
        sym_index_838=add_elf_sym(symtab_section,sym_847->st_value,sym_847->st_size,sym_847->st_info,sym_847->st_other,sym_847->st_shndx,name_844);
        # 2249 "tccelf.c"
        old_to_new_syms_842[i_833]=sym_index_838;
    }
    # 2293 "tccelf.c"
    for(    i_833=1;    i_833<ehdr_829.e_shnum;    i_833++    ){
        # 2254 "tccelf.c"
        s_851=sm_table_845[i_833].s;
        # 2256 "tccelf.c"
        # 2255 "tccelf.c"
        if(_if_conditional1104=!s_851,        _if_conditional1104) {
            # 2256 "tccelf.c"
            continue;
        }
        # 2257 "tccelf.c"
        sh_831=&shdr_830[i_833];
        # 2258 "tccelf.c"
        offset_835=sm_table_845[i_833].offset;
        # 2291 "tccelf.c"
        switch (s_851->sh_type) {
            # 2262 "tccelf.c"
            case 4:
            # 2262 "tccelf.c"
            offseti_836=sm_table_845[sh_831->sh_info].offset;
            # 2263 "tccelf.c"
            rel_end_850=(struct anonymous_typeX74*)(s_851->data+s_851->data_offset);
            # 2287 "tccelf.c"
            for(            rel_849=(struct anonymous_typeX74*)(s_851->data+offset_835);            rel_849<rel_end_850;            rel_849++            ){
                # 2267 "tccelf.c"
                # 2268 "tccelf.c"
                # 2270 "tccelf.c"
                type_858=((rel_849->r_info)&-1);
                # 2271 "tccelf.c"
                sym_index_859=((rel_849->r_info)>>32);
                # 2274 "tccelf.c"
                # 2273 "tccelf.c"
                if(_if_conditional1105=sym_index_859>=nb_syms_837,                _if_conditional1105) {
                    # 2274 "tccelf.c"
                    goto invalid_reloc;
                }
                # 2275 "tccelf.c"
                sym_index_859=old_to_new_syms_842[sym_index_859];
                # 2283 "tccelf.c"
                # 2277 "tccelf.c"
                if(_if_conditional1106=!sym_index_859&&!sm_846->link_once,                _if_conditional1106) {
                    # 2279 "tccelf.c"
                    invalid_reloc:
                    # 2280 "tccelf.c"
                    error_noabort("Invalid relocation entry [%2d] '%s' @ %.8x",i_833,strsec_840+sh_831->sh_name,rel_849->r_offset);
                    # 2281 "tccelf.c"
                    goto fail;
                }
                # 2283 "tccelf.c"
                rel_849->r_info=((((unsigned long int)(sym_index_859))<<32)+(type_858));
                # 2285 "tccelf.c"
                rel_849->r_offset+=offseti_836;
            }
            # 2287 "tccelf.c"
            break;
            # 2289 "tccelf.c"
            default:
            # 2289 "tccelf.c"
            break;
        }
    }
    # 2293 "tccelf.c"
    ret_839=0;
    # 2295 "tccelf.c"
    the_end:
    # 2295 "tccelf.c"
    tcc_free(symtab_848);
    # 2296 "tccelf.c"
    tcc_free(strtab_841);
    # 2297 "tccelf.c"
    tcc_free(old_to_new_syms_842);
    # 2298 "tccelf.c"
    tcc_free(sm_table_845);
    # 2299 "tccelf.c"
    tcc_free(strsec_840);
    # 2300 "tccelf.c"
    tcc_free(shdr_830);
    # 2301 "tccelf.c"
    __result169__ = ret_839;
    come_call_finalizer3((&ehdr_829),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
    return __result169__;
    come_call_finalizer3((&ehdr_829),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
}

static int get_be32(const unsigned char* b){
void* __result_obj__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2318 "tccelf.c"
    __result170__ = b[3]|(b[2]<<8)|(b[1]<<16)|(b[0]<<24);
    return __result170__;
}

static int tcc_load_alacarte(struct TCCState* s1, int fd, int size){
void* __result_obj__;
int i_860;
int bound_861;
int nsyms_862;
int sym_index_863;
int off_864;
int ret_865;
unsigned char* data_866;
const char* ar_names_867;
const char* p_868;
const unsigned char* ar_index_869;
struct anonymous_typeX68* sym_870;
_Bool _if_conditional1107;
ar_index_869=data_866+4;
ar_names_867=ar_index_869+nsyms_862*4;
p_868=ar_names_867,i_860=0;
_Bool _if_conditional1108;
_Bool _if_conditional1109;
_Bool _if_conditional1110;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&data_866, 0, sizeof(unsigned char*));
memset(&sym_870, 0, sizeof(struct anonymous_typeX68*));
    # 2324 "tccelf.c"
    # 2325 "tccelf.c"
    # 2326 "tccelf.c"
    # 2327 "tccelf.c"
    # 2328 "tccelf.c"
    # 2330 "tccelf.c"
    data_866=tcc_malloc(size);
    # 2332 "tccelf.c"
    # 2331 "tccelf.c"
    if(_if_conditional1107=read(fd,data_866,size)!=size,    _if_conditional1107) {
        # 2332 "tccelf.c"
        goto fail;
    }
    # 2333 "tccelf.c"
    nsyms_862=get_be32(data_866);
    # 2334 "tccelf.c"
    # 2335 "tccelf.c"
    # 2358 "tccelf.c"
    do {
        # 2338 "tccelf.c"
        bound_861=0;
        # 2358 "tccelf.c"
        for(        ;        i_860<nsyms_862;        i_860++,p_868+=strlen(p_868)+1        ){
            # 2340 "tccelf.c"
            sym_index_863=find_elf_sym(symtab_section,p_868);
            # 2357 "tccelf.c"
            # 2341 "tccelf.c"
            if(sym_index_863) {
                # 2342 "tccelf.c"
                sym_870=&((struct anonymous_typeX68*)symtab_section->data)[sym_index_863];
                # 2356 "tccelf.c"
                # 2343 "tccelf.c"
                if(_if_conditional1109=sym_870->st_shndx==0,                _if_conditional1109) {
                    # 2344 "tccelf.c"
                    off_864=get_be32(ar_index_869+i_860*4)+sizeof(struct ArchiveHeader);
                    # 2348 "tccelf.c"
                    ++bound_861;
                    # 2349 "tccelf.c"
                    lseek(fd,off_864,0);
                    # 2355 "tccelf.c"
                    # 2350 "tccelf.c"
                    if(_if_conditional1110=tcc_load_object_file(s1,fd,off_864)<0,                    _if_conditional1110) {
                        # 2352 "tccelf.c"
                        fail:
                        # 2352 "tccelf.c"
                        ret_865=-1;
                        # 2353 "tccelf.c"
                        goto the_end;
                    }
                }
            }
        }
    # 2358 "tccelf.c"
    } while(bound_861);
    # 2359 "tccelf.c"
    ret_865=0;
    # 2361 "tccelf.c"
    the_end:
    # 2361 "tccelf.c"
    tcc_free(data_866);
    # 2362 "tccelf.c"
    __result171__ = ret_865;
    return __result171__;
}

static int tcc_load_archive(struct TCCState* s1, int fd){
void* __result_obj__;
struct ArchiveHeader hdr_871;
int size_875;
int len_876;
int i_877;
unsigned long int file_offset_878;
_Bool _if_conditional1111;
_Bool _if_conditional1112;
int __result172__;
_Bool _if_conditional1113;
_Bool _if_conditional1114;
_Bool _if_conditional1115;
int __result173__;
_Bool _elif_conditional206;
_Bool _if_conditional1116;
int __result174__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hdr_871, 0, sizeof(struct ArchiveHeader));
memset(&file_offset_878, 0, sizeof(unsigned long int));
    # 2368 "tccelf.c"
    # 2369 "tccelf.c"
    char ar_size_872[11];
    memset(&ar_size_872, 0, sizeof(char)    *(11)    );
    # 2370 "tccelf.c"
    char ar_name_873[17];
    memset(&ar_name_873, 0, sizeof(char)    *(17)    );
    # 2371 "tccelf.c"
    char magic_874[8];
    memset(&magic_874, 0, sizeof(char)    *(8)    );
    # 2372 "tccelf.c"
    # 2373 "tccelf.c"
    # 2376 "tccelf.c"
    read(fd,magic_874,sizeof(magic_874));
    # 2414 "tccelf.c"
    for(    ;    ;    ){
        # 2379 "tccelf.c"
        len_876=read(fd,&hdr_871,sizeof(hdr_871));
        # 2381 "tccelf.c"
        # 2380 "tccelf.c"
        if(_if_conditional1111=len_876==0,        _if_conditional1111) {
            # 2381 "tccelf.c"
            break;
        }
        # 2386 "tccelf.c"
        # 2382 "tccelf.c"
        if(_if_conditional1112=len_876!=sizeof(hdr_871),        _if_conditional1112) {
            # 2383 "tccelf.c"
            error_noabort("invalid archive");
            # 2384 "tccelf.c"
            __result172__ = -1;
            come_call_finalizer3((&hdr_871),ArchiveHeader_finalize, 1, 0, 0, 0, (void*)0);
            return __result172__;
        }
        # 2386 "tccelf.c"
        memcpy(ar_size_872,hdr_871.ar_size,sizeof(hdr_871.ar_size));
        # 2387 "tccelf.c"
        ar_size_872[sizeof(hdr_871.ar_size)]=0;
        # 2388 "tccelf.c"
        size_875=strtol(ar_size_872,((void*)0),0);
        # 2389 "tccelf.c"
        memcpy(ar_name_873,hdr_871.ar_name,sizeof(hdr_871.ar_name));
        # 2394 "tccelf.c"
        for(        i_877=sizeof(hdr_871.ar_name)-1;        i_877>=0;        i_877--        ){
            # 2393 "tccelf.c"
            # 2391 "tccelf.c"
            if(_if_conditional1113=ar_name_873[i_877]!=32,            _if_conditional1113) {
                # 2392 "tccelf.c"
                break;
            }
        }
        # 2394 "tccelf.c"
        ar_name_873[i_877+1]=0;
        # 2396 "tccelf.c"
        file_offset_878=lseek(fd,0,1);
        # 2398 "tccelf.c"
        size_875=(size_875+1)&~1;
        # 2412 "tccelf.c"
        # 2399 "tccelf.c"
        if(_if_conditional1114=!strcmp(ar_name_873,"/"),        _if_conditional1114) {
            # 2403 "tccelf.c"
            # 2401 "tccelf.c"
            if(s1->alacarte_link) {
                # 2402 "tccelf.c"
                __result173__ = tcc_load_alacarte(s1,fd,size_875);
                come_call_finalizer3((&hdr_871),ArchiveHeader_finalize, 1, 0, 0, 0, (void*)0);
                return __result173__;
            }
        }
        # 2406 "tccelf.c"
        else if(_elif_conditional206=!strcmp(ar_name_873,"//")||!strcmp(ar_name_873,"__.SYMDEF")||!strcmp(ar_name_873,"__.SYMDEF/")||!strcmp(ar_name_873,"ARFILENAMES/"),        _elif_conditional206) {
        }
        else {
            # 2411 "tccelf.c"
            # 2409 "tccelf.c"
            if(_if_conditional1116=tcc_load_object_file(s1,fd,file_offset_878)<0,            _if_conditional1116) {
                # 2410 "tccelf.c"
                __result174__ = -1;
                come_call_finalizer3((&hdr_871),ArchiveHeader_finalize, 1, 0, 0, 0, (void*)0);
                return __result174__;
            }
        }
        # 2412 "tccelf.c"
        lseek(fd,file_offset_878+size_875,0);
    }
    # 2414 "tccelf.c"
    __result175__ = 0;
    come_call_finalizer3((&hdr_871),ArchiveHeader_finalize, 1, 0, 0, 0, (void*)0);
    return __result175__;
    come_call_finalizer3((&hdr_871),ArchiveHeader_finalize, 1, 0, 0, 0, (void*)0);
}

static void ArchiveHeader_finalize(struct ArchiveHeader* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int tcc_load_dll(struct TCCState* s1, int fd, const char* filename, int level){
void* __result_obj__;
struct anonymous_typeX64 ehdr_879;
struct anonymous_typeX66* shdr_880;
struct anonymous_typeX66* sh_881;
struct anonymous_typeX66* sh1_882;
int i_883;
int j_884;
int nb_syms_885;
int nb_dts_886;
int sym_bind_887;
int ret_888;
struct anonymous_typeX68* sym_889;
struct anonymous_typeX68* dynsym_890;
struct anonymous_typeX80* dt_891;
struct anonymous_typeX80* dynamic_892;
unsigned char* dynstr_893;
const char* name_894;
const char* soname_895;
struct DLLReference* dllref_896;
_Bool _if_conditional1117;
int __result176__;
soname_895=tcc_basename(filename);
_Bool _if_conditional1118;
soname_895=dynstr_893+dt_891->d_un.d_val;
_Bool _if_conditional1119;
_Bool _if_conditional1120;
_Bool _if_conditional1121;
name_894=dynstr_893+sym_889->st_name;
name_894=dynstr_893+dt_891->d_un.d_val;
_Bool _if_conditional1122;
_Bool _if_conditional1123;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ehdr_879, 0, sizeof(struct anonymous_typeX64));
memset(&dynstr_893, 0, sizeof(unsigned char*));
memset(&dllref_896, 0, sizeof(struct DLLReference*));
    # 2422 "tccelf.c"
    # 2423 "tccelf.c"
    # 2424 "tccelf.c"
    # 2425 "tccelf.c"
    # 2426 "tccelf.c"
    # 2427 "tccelf.c"
    # 2428 "tccelf.c"
    # 2429 "tccelf.c"
    # 2431 "tccelf.c"
    read(fd,&ehdr_879,sizeof(ehdr_879));
    # 2441 "tccelf.c"
    # 2435 "tccelf.c"
    if(_if_conditional1117=ehdr_879.e_ident[5]!=1||ehdr_879.e_machine!=62,    _if_conditional1117) {
        # 2436 "tccelf.c"
        error_noabort("bad architecture");
        # 2437 "tccelf.c"
        __result176__ = -1;
        come_call_finalizer3((&ehdr_879),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
        return __result176__;
    }
    # 2441 "tccelf.c"
    shdr_880=load_data(fd,ehdr_879.e_shoff,sizeof(struct anonymous_typeX66)*ehdr_879.e_shnum);
    # 2444 "tccelf.c"
    nb_syms_885=0;
    # 2445 "tccelf.c"
    nb_dts_886=0;
    # 2446 "tccelf.c"
    dynamic_892=((void*)0);
    # 2447 "tccelf.c"
    dynsym_890=((void*)0);
    # 2448 "tccelf.c"
    dynstr_893=((void*)0);
    # 2467 "tccelf.c"
    for(    i_883=0,sh_881=shdr_880;    i_883<ehdr_879.e_shnum;    i_883++,sh_881++    ){
        # 2464 "tccelf.c"
        switch (sh_881->sh_type) {
            # 2452 "tccelf.c"
            case 6:
            # 2452 "tccelf.c"
            nb_dts_886=sh_881->sh_size/sizeof(struct anonymous_typeX80);
            # 2453 "tccelf.c"
            dynamic_892=load_data(fd,sh_881->sh_offset,sh_881->sh_size);
            # 2454 "tccelf.c"
            break;
            # 2456 "tccelf.c"
            case 11:
            # 2456 "tccelf.c"
            nb_syms_885=sh_881->sh_size/sizeof(struct anonymous_typeX68);
            # 2457 "tccelf.c"
            dynsym_890=load_data(fd,sh_881->sh_offset,sh_881->sh_size);
            # 2458 "tccelf.c"
            sh1_882=&shdr_880[sh_881->sh_link];
            # 2459 "tccelf.c"
            dynstr_893=load_data(fd,sh1_882->sh_offset,sh1_882->sh_size);
            # 2460 "tccelf.c"
            break;
            # 2462 "tccelf.c"
            default:
            # 2462 "tccelf.c"
            break;
        }
    }
    # 2467 "tccelf.c"
    # 2476 "tccelf.c"
    for(    i_883=0,dt_891=dynamic_892;    i_883<nb_dts_886;    i_883++,dt_891++    ){
        # 2473 "tccelf.c"
        # 2470 "tccelf.c"
        if(_if_conditional1118=dt_891->d_tag==14,        _if_conditional1118) {
            # 2471 "tccelf.c"
        }
    }
    # 2490 "tccelf.c"
    for(    i_883=0;    i_883<s1->nb_loaded_dlls;    i_883++    ){
        # 2477 "tccelf.c"
        dllref_896=s1->loaded_dlls[i_883];
        # 2485 "tccelf.c"
        # 2478 "tccelf.c"
        if(_if_conditional1119=!strcmp(soname_895,dllref_896->name),        _if_conditional1119) {
            # 2481 "tccelf.c"
            # 2480 "tccelf.c"
            if(_if_conditional1120=level<dllref_896->level,            _if_conditional1120) {
                # 2481 "tccelf.c"
                dllref_896->level=level;
            }
            # 2482 "tccelf.c"
            ret_888=0;
            # 2483 "tccelf.c"
            goto the_end;
        }
    }
    # 2490 "tccelf.c"
    dllref_896=tcc_mallocz(sizeof(struct DLLReference)+strlen(soname_895));
    # 2491 "tccelf.c"
    dllref_896->level=level;
    # 2492 "tccelf.c"
    strcpy(dllref_896->name,soname_895);
    # 2493 "tccelf.c"
    dynarray_add((void***)&s1->loaded_dlls,&s1->nb_loaded_dlls,dllref_896);
    # 2506 "tccelf.c"
    for(    i_883=1,sym_889=dynsym_890+1;    i_883<nb_syms_885;    i_883++,sym_889++    ){
        # 2497 "tccelf.c"
        sym_bind_887=(((unsigned char)(sym_889->st_info))>>4);
        # 2499 "tccelf.c"
        # 2498 "tccelf.c"
        if(_if_conditional1121=sym_bind_887==0,        _if_conditional1121) {
            # 2499 "tccelf.c"
            continue;
        }
        # 2500 "tccelf.c"
        # 2502 "tccelf.c"
        add_elf_sym(s1->dynsymtab_section,sym_889->st_value,sym_889->st_size,sym_889->st_info,sym_889->st_other,sym_889->st_shndx,name_894);
    }
    # 2524 "tccelf.c"
    for(    i_883=0,dt_891=dynamic_892;    i_883<nb_dts_886;    i_883++,dt_891++    ){
        # 2523 "tccelf.c"
        switch (dt_891->d_tag) {
            # 2509 "tccelf.c"
            case 1:
            # 2509 "tccelf.c"
            # 2515 "tccelf.c"
            for(            j_884=0;            j_884<s1->nb_loaded_dlls;            j_884++            ){
                # 2511 "tccelf.c"
                dllref_896=s1->loaded_dlls[j_884];
                # 2514 "tccelf.c"
                # 2512 "tccelf.c"
                if(_if_conditional1122=!strcmp(name_894,dllref_896->name),                _if_conditional1122) {
                    # 2513 "tccelf.c"
                    goto already_loaded;
                }
            }
            # 2520 "tccelf.c"
            # 2515 "tccelf.c"
            if(_if_conditional1123=tcc_add_dll(s1,name_894,2)<0,            _if_conditional1123) {
                # 2516 "tccelf.c"
                error_noabort("referenced dll '%s' not found",name_894);
                # 2517 "tccelf.c"
                ret_888=-1;
                # 2518 "tccelf.c"
                goto the_end;
            }
            # 2521 "tccelf.c"
            already_loaded:
            # 2521 "tccelf.c"
            break;
        }
    }
    # 2524 "tccelf.c"
    ret_888=0;
    # 2526 "tccelf.c"
    the_end:
    # 2526 "tccelf.c"
    tcc_free(dynstr_893);
    # 2527 "tccelf.c"
    tcc_free(dynsym_890);
    # 2528 "tccelf.c"
    tcc_free(dynamic_892);
    # 2529 "tccelf.c"
    tcc_free(shdr_880);
    # 2530 "tccelf.c"
    __result177__ = ret_888;
    come_call_finalizer3((&ehdr_879),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
    return __result177__;
    come_call_finalizer3((&ehdr_879),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
}

static int ld_next(struct TCCState* s1, char* name, int name_size){
void* __result_obj__;
int c_897;
char* q_898;
_Bool _if_conditional1124;
_Bool _if_conditional1125;
_Bool _if_conditional1126;
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_897, 0, sizeof(int));
memset(&q_898, 0, sizeof(char*));
    # 2539 "tccelf.c"
    # 2540 "tccelf.c"
    # 2543 "tccelf.c"
    redo:
    # 2652 "tccelf.c"
    switch (ch) {
        # 2545 "tccelf.c"
        case 32:
        # 2546 "tccelf.c"
        case 9:
        # 2547 "tccelf.c"
        case 12:
        # 2548 "tccelf.c"
        case 11:
        # 2549 "tccelf.c"
        case 13:
        # 2550 "tccelf.c"
        case 10:
        # 2550 "tccelf.c"
        inp();
        # 2551 "tccelf.c"
        goto redo;
        # 2553 "tccelf.c"
        case 47:
        # 2553 "tccelf.c"
        minp();
        # 2563 "tccelf.c"
        # 2554 "tccelf.c"
        if(_if_conditional1124=ch==42,        _if_conditional1124) {
            # 2555 "tccelf.c"
            file->buf_ptr=parse_comment(file->buf_ptr);
            # 2556 "tccelf.c"
            ch=file->buf_ptr[0];
            # 2557 "tccelf.c"
            goto redo;
        }
        else {
            # 2559 "tccelf.c"
            q_898=name;
            # 2560 "tccelf.c"
            *q_898++=47;
            # 2561 "tccelf.c"
            goto parse_name;
        }
        # 2563 "tccelf.c"
        break;
        # 2566 "tccelf.c"
        case 97:
        # 2567 "tccelf.c"
        case 98:
        # 2568 "tccelf.c"
        case 99:
        # 2569 "tccelf.c"
        case 100:
        # 2570 "tccelf.c"
        case 101:
        # 2571 "tccelf.c"
        case 102:
        # 2572 "tccelf.c"
        case 103:
        # 2573 "tccelf.c"
        case 104:
        # 2574 "tccelf.c"
        case 105:
        # 2575 "tccelf.c"
        case 106:
        # 2576 "tccelf.c"
        case 107:
        # 2577 "tccelf.c"
        case 108:
        # 2578 "tccelf.c"
        case 109:
        # 2579 "tccelf.c"
        case 110:
        # 2580 "tccelf.c"
        case 111:
        # 2581 "tccelf.c"
        case 112:
        # 2582 "tccelf.c"
        case 113:
        # 2583 "tccelf.c"
        case 114:
        # 2584 "tccelf.c"
        case 115:
        # 2585 "tccelf.c"
        case 116:
        # 2586 "tccelf.c"
        case 117:
        # 2587 "tccelf.c"
        case 118:
        # 2588 "tccelf.c"
        case 119:
        # 2589 "tccelf.c"
        case 120:
        # 2590 "tccelf.c"
        case 121:
        # 2592 "tccelf.c"
        case 122:
        # 2593 "tccelf.c"
        case 65:
        # 2594 "tccelf.c"
        case 66:
        # 2595 "tccelf.c"
        case 67:
        # 2596 "tccelf.c"
        case 68:
        # 2597 "tccelf.c"
        case 69:
        # 2598 "tccelf.c"
        case 70:
        # 2599 "tccelf.c"
        case 71:
        # 2600 "tccelf.c"
        case 72:
        # 2601 "tccelf.c"
        case 73:
        # 2602 "tccelf.c"
        case 74:
        # 2603 "tccelf.c"
        case 75:
        # 2604 "tccelf.c"
        case 76:
        # 2605 "tccelf.c"
        case 77:
        # 2606 "tccelf.c"
        case 78:
        # 2607 "tccelf.c"
        case 79:
        # 2608 "tccelf.c"
        case 80:
        # 2609 "tccelf.c"
        case 81:
        # 2610 "tccelf.c"
        case 82:
        # 2611 "tccelf.c"
        case 83:
        # 2612 "tccelf.c"
        case 84:
        # 2613 "tccelf.c"
        case 85:
        # 2614 "tccelf.c"
        case 86:
        # 2615 "tccelf.c"
        case 87:
        # 2616 "tccelf.c"
        case 88:
        # 2617 "tccelf.c"
        case 89:
        # 2618 "tccelf.c"
        case 90:
        # 2619 "tccelf.c"
        case 95:
        # 2620 "tccelf.c"
        case 92:
        # 2621 "tccelf.c"
        case 46:
        # 2622 "tccelf.c"
        case 36:
        # 2623 "tccelf.c"
        case 126:
        # 2623 "tccelf.c"
        q_898=name;
        # 2625 "tccelf.c"
        parse_name:
        # 2636 "tccelf.c"
        for(        ;        ;        ){
            # 2630 "tccelf.c"
            # 2629 "tccelf.c"
            if(_if_conditional1125=!((ch>=97&&ch<=122)||(ch>=65&&ch<=90)||(ch>=48&&ch<=57)||strchr("/.-_+=$:\\,~",ch)),            _if_conditional1125) {
                # 2630 "tccelf.c"
                break;
            }
            # 2634 "tccelf.c"
            # 2631 "tccelf.c"
            if(_if_conditional1126=(q_898-name)<name_size-1,            _if_conditional1126) {
                # 2632 "tccelf.c"
                *q_898++=ch;
            }
            # 2634 "tccelf.c"
            minp();
        }
        # 2636 "tccelf.c"
        *q_898=0;
        # 2637 "tccelf.c"
        c_897=256;
        # 2638 "tccelf.c"
        break;
        # 2640 "tccelf.c"
        case (-1):
        # 2640 "tccelf.c"
        c_897=(-1);
        # 2641 "tccelf.c"
        break;
        # 2643 "tccelf.c"
        default:
        # 2643 "tccelf.c"
        c_897=ch;
        # 2644 "tccelf.c"
        inp();
        # 2645 "tccelf.c"
        break;
    }
    # 2652 "tccelf.c"
    __result178__ = c_897;
    return __result178__;
}

static int ld_add_file_list(struct TCCState* s1, int as_needed){
void* __result_obj__;
int t_900;
int ret_901;
_Bool _if_conditional1127;
_Bool _if_conditional1128;
int __result179__;
_Bool _elif_conditional207;
_Bool _elif_conditional208;
int __result180__;
_Bool _if_conditional1129;
_Bool _if_conditional1130;
int __result181__;
_Bool _if_conditional1131;
_Bool _if_conditional1132;
int __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2657 "tccelf.c"
    char filename_899[1024];
    memset(&filename_899, 0, sizeof(char)    *(1024)    );
    # 2658 "tccelf.c"
    # 2660 "tccelf.c"
    t_900=ld_next(s1,filename_899,sizeof(filename_899));
    # 2662 "tccelf.c"
    # 2661 "tccelf.c"
    if(_if_conditional1127=t_900!=40,    _if_conditional1127) {
        # 2662 "tccelf.c"
        expect("(");
    }
    # 2663 "tccelf.c"
    t_900=ld_next(s1,filename_899,sizeof(filename_899));
    # 2688 "tccelf.c"
    for(    ;    ;    ){
        # 2674 "tccelf.c"
        # 2665 "tccelf.c"
        if(_if_conditional1128=t_900==(-1),        _if_conditional1128) {
            # 2666 "tccelf.c"
            error_noabort("unexpected end of file");
            # 2667 "tccelf.c"
            __result179__ = -1;
            return __result179__;
        }
        # 2668 "tccelf.c"
        else if(_elif_conditional207=t_900==41,        _elif_conditional207) {
            # 2669 "tccelf.c"
            break;
        }
        # 2670 "tccelf.c"
        else if(_elif_conditional208=t_900!=256,        _elif_conditional208) {
            # 2671 "tccelf.c"
            error_noabort("filename expected");
            # 2672 "tccelf.c"
            __result180__ = -1;
            return __result180__;
        }
        # 2683 "tccelf.c"
        # 2674 "tccelf.c"
        if(_if_conditional1129=!strcmp(filename_899,"AS_NEEDED"),        _if_conditional1129) {
            # 2675 "tccelf.c"
            ret_901=ld_add_file_list(s1,1);
            # 2678 "tccelf.c"
            # 2676 "tccelf.c"
            if(ret_901) {
                # 2677 "tccelf.c"
                __result181__ = ret_901;
                return __result181__;
            }
        }
        else {
            # 2682 "tccelf.c"
            # 2680 "tccelf.c"
            if(_if_conditional1131=!as_needed,            _if_conditional1131) {
                # 2681 "tccelf.c"
                tcc_add_file(s1,filename_899);
            }
        }
        # 2683 "tccelf.c"
        t_900=ld_next(s1,filename_899,sizeof(filename_899));
        # 2687 "tccelf.c"
        # 2684 "tccelf.c"
        if(_if_conditional1132=t_900==44,        _if_conditional1132) {
            # 2685 "tccelf.c"
            t_900=ld_next(s1,filename_899,sizeof(filename_899));
        }
    }
    # 2688 "tccelf.c"
    __result182__ = 0;
    return __result182__;
}

static int tcc_load_ldscript(struct TCCState* s1){
void* __result_obj__;
int t_904;
int ret_905;
_Bool _if_conditional1133;
int __result183__;
_Bool _elif_conditional209;
int __result184__;
_Bool _if_conditional1134;
_Bool _if_conditional1135;
int __result185__;
_Bool _elif_conditional210;
_Bool _if_conditional1136;
_Bool _if_conditional1137;
int __result186__;
_Bool _elif_conditional211;
int __result187__;
int __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2695 "tccelf.c"
    char cmd_902[64];
    memset(&cmd_902, 0, sizeof(char)    *(64)    );
    # 2696 "tccelf.c"
    char filename_903[1024];
    memset(&filename_903, 0, sizeof(char)    *(1024)    );
    # 2697 "tccelf.c"
    # 2699 "tccelf.c"
    ch=file->buf_ptr[0];
    # 2700 "tccelf.c"
    ch=handle_eob();
    # 2731 "tccelf.c"
    for(    ;    ;    ){
        # 2702 "tccelf.c"
        t_904=ld_next(s1,cmd_902,sizeof(cmd_902));
        # 2706 "tccelf.c"
        # 2703 "tccelf.c"
        if(_if_conditional1133=t_904==(-1),        _if_conditional1133) {
            # 2704 "tccelf.c"
            __result183__ = 0;
            return __result183__;
        }
        # 2705 "tccelf.c"
        else if(_elif_conditional209=t_904!=256,        _elif_conditional209) {
            # 2706 "tccelf.c"
            __result184__ = -1;
            return __result184__;
        }
        # 2730 "tccelf.c"
        # 2708 "tccelf.c"
        if(_if_conditional1134=!strcmp(cmd_902,"INPUT")||!strcmp(cmd_902,"GROUP"),        _if_conditional1134) {
            # 2709 "tccelf.c"
            ret_905=ld_add_file_list(s1,0);
            # 2712 "tccelf.c"
            # 2710 "tccelf.c"
            if(ret_905) {
                # 2711 "tccelf.c"
                __result185__ = ret_905;
                return __result185__;
            }
        }
        # 2713 "tccelf.c"
        else if(_elif_conditional210=!strcmp(cmd_902,"OUTPUT_FORMAT")||!strcmp(cmd_902,"TARGET"),        _elif_conditional210) {
            # 2715 "tccelf.c"
            t_904=ld_next(s1,cmd_902,sizeof(cmd_902));
            # 2717 "tccelf.c"
            # 2716 "tccelf.c"
            if(_if_conditional1136=t_904!=40,            _if_conditional1136) {
                # 2717 "tccelf.c"
                expect("(");
            }
            # 2727 "tccelf.c"
            for(            ;            ;            ){
                # 2719 "tccelf.c"
                t_904=ld_next(s1,filename_903,sizeof(filename_903));
                # 2726 "tccelf.c"
                # 2720 "tccelf.c"
                if(_if_conditional1137=t_904==(-1),                _if_conditional1137) {
                    # 2721 "tccelf.c"
                    error_noabort("unexpected end of file");
                    # 2722 "tccelf.c"
                    __result186__ = -1;
                    return __result186__;
                }
                # 2723 "tccelf.c"
                else if(_elif_conditional211=t_904==41,                _elif_conditional211) {
                    # 2724 "tccelf.c"
                    break;
                }
            }
        }
        else {
            # 2728 "tccelf.c"
            __result187__ = -1;
            return __result187__;
        }
    }
    # 2731 "tccelf.c"
    __result188__ = 0;
    return __result188__;
}

static void rt_printline(unsigned long int wanted_pc){
void* __result_obj__;
struct anonymous_typeX109* sym_906;
struct anonymous_typeX109* sym_end_907;
char func_name_908[128];
char last_func_name_909[128];
unsigned long int func_addr_910;
unsigned long int last_pc_911;
unsigned long int pc_912;
int incl_index_914;
int len_915;
int last_line_num_916;
int i_917;
const char* str_918;
const char* p_919;
_Bool _while_condtional88;
_Bool _if_conditional1138;
_Bool _if_conditional1139;
str_918=stabstr_section->data+sym_906->n_strx;
p_919=strchr(str_918,58);
_Bool _if_conditional1140;
_Bool _if_conditional1141;
_Bool _if_conditional1142;
str_918=stabstr_section->data+sym_906->n_strx;
_Bool _if_conditional1143;
_Bool _if_conditional1144;
_Bool _if_conditional1145;
str_918=stabstr_section->data+sym_906->n_strx;
_Bool _if_conditional1146;
struct anonymous_typeX68* sym_920;
struct anonymous_typeX68* sym_end_921;
int type_922;
_Bool _if_conditional1147;
_Bool _if_conditional1148;
_Bool _if_conditional1149;
_Bool _if_conditional1150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_922, 0, sizeof(int));
    # 1343 "libtcc.c"
    # 1344 "libtcc.c"
    # 1345 "libtcc.c"
    # 1346 "libtcc.c"
    const char* incl_files_913[32];
    memset(&incl_files_913, 0, sizeof(const char*)    *(32)    );
    # 1347 "libtcc.c"
    # 1348 "libtcc.c"
    # 1350 "libtcc.c"
    fprintf((stderr),"0x%08lx:",wanted_pc);
    # 1352 "libtcc.c"
    func_name_908[0]=0;
    # 1353 "libtcc.c"
    func_addr_910=0;
    # 1354 "libtcc.c"
    incl_index_914=0;
    # 1355 "libtcc.c"
    last_func_name_909[0]=0;
    # 1356 "libtcc.c"
    last_pc_911=-1;
    # 1357 "libtcc.c"
    last_line_num_916=1;
    # 1358 "libtcc.c"
    sym_906=(struct anonymous_typeX109*)stab_section->data+1;
    # 1359 "libtcc.c"
    sym_end_907=(struct anonymous_typeX109*)(stab_section->data+stab_section->data_offset);
    # 1424 "libtcc.c"
    while(_while_condtional88=sym_906<sym_end_907,    _while_condtional88) {
        # 1420 "libtcc.c"
        switch (sym_906->n_type) {
            # 1364 "libtcc.c"
            case 36:
            # 1385 "libtcc.c"
            # 1364 "libtcc.c"
            if(_if_conditional1138=sym_906->n_strx==0,            _if_conditional1138) {
                # 1366 "libtcc.c"
                pc_912=sym_906->n_value+func_addr_910;
                # 1368 "libtcc.c"
                # 1367 "libtcc.c"
                if(_if_conditional1139=wanted_pc>=last_pc_911&&wanted_pc<pc_912,                _if_conditional1139) {
                    # 1368 "libtcc.c"
                    goto found;
                }
                # 1369 "libtcc.c"
                func_name_908[0]=0;
                # 1370 "libtcc.c"
                func_addr_910=0;
            }
            else {
                # 1372 "libtcc.c"
                # 1373 "libtcc.c"
                # 1383 "libtcc.c"
                # 1374 "libtcc.c"
                if(_if_conditional1140=!p_919,                _if_conditional1140) {
                    # 1375 "libtcc.c"
                    pstrcpy(func_name_908,sizeof(func_name_908),str_918);
                }
                else {
                    # 1377 "libtcc.c"
                    len_915=p_919-str_918;
                    # 1379 "libtcc.c"
                    # 1378 "libtcc.c"
                    if(_if_conditional1141=len_915>sizeof(func_name_908)-1,                    _if_conditional1141) {
                        # 1379 "libtcc.c"
                        len_915=sizeof(func_name_908)-1;
                    }
                    # 1380 "libtcc.c"
                    memcpy(func_name_908,str_918,len_915);
                    # 1381 "libtcc.c"
                    func_name_908[len_915]=0;
                }
                # 1383 "libtcc.c"
                func_addr_910=sym_906->n_value;
            }
            # 1385 "libtcc.c"
            break;
            # 1388 "libtcc.c"
            case 68:
            # 1388 "libtcc.c"
            pc_912=sym_906->n_value+func_addr_910;
            # 1390 "libtcc.c"
            # 1389 "libtcc.c"
            if(_if_conditional1142=wanted_pc>=last_pc_911&&wanted_pc<pc_912,            _if_conditional1142) {
                # 1390 "libtcc.c"
                goto found;
            }
            # 1391 "libtcc.c"
            last_pc_911=pc_912;
            # 1392 "libtcc.c"
            last_line_num_916=sym_906->n_desc;
            # 1394 "libtcc.c"
            strcpy(last_func_name_909,func_name_908);
            # 1395 "libtcc.c"
            break;
            # 1398 "libtcc.c"
            case 130:
            # 1398 "libtcc.c"
            # 1400 "libtcc.c"
            add_incl:
            # 1403 "libtcc.c"
            # 1400 "libtcc.c"
            if(_if_conditional1143=incl_index_914<32,            _if_conditional1143) {
                # 1401 "libtcc.c"
                incl_files_913[incl_index_914++]=str_918;
            }
            # 1403 "libtcc.c"
            break;
            # 1405 "libtcc.c"
            case 162:
            # 1406 "libtcc.c"
            # 1405 "libtcc.c"
            if(_if_conditional1144=incl_index_914>1,            _if_conditional1144) {
                # 1406 "libtcc.c"
                incl_index_914--;
            }
            # 1407 "libtcc.c"
            break;
            # 1409 "libtcc.c"
            case 100:
            # 1418 "libtcc.c"
            # 1409 "libtcc.c"
            if(_if_conditional1145=sym_906->n_strx==0,            _if_conditional1145) {
                # 1410 "libtcc.c"
                incl_index_914=0;
            }
            else {
                # 1412 "libtcc.c"
                # 1414 "libtcc.c"
                len_915=strlen(str_918);
                # 1417 "libtcc.c"
                # 1415 "libtcc.c"
                if(_if_conditional1146=len_915>0&&str_918[len_915-1]!=47,                _if_conditional1146) {
                    # 1416 "libtcc.c"
                    goto add_incl;
                }
            }
            # 1418 "libtcc.c"
            break;
        }
        # 1420 "libtcc.c"
        sym_906++;
    }
    # 1424 "libtcc.c"
    incl_index_914=0;
    # 1445 "libtcc.c"
    {
        # 1426 "libtcc.c"
        # 1427 "libtcc.c"
        # 1429 "libtcc.c"
        sym_end_921=(struct anonymous_typeX68*)(symtab_section->data+symtab_section->data_offset);
        # 1443 "libtcc.c"
        for(        sym_920=(struct anonymous_typeX68*)symtab_section->data+1;        sym_920<sym_end_921;        sym_920++        ){
            # 1433 "libtcc.c"
            type_922=((sym_920->st_info)&15);
            # 1442 "libtcc.c"
            # 1434 "libtcc.c"
            if(_if_conditional1147=type_922==2,            _if_conditional1147) {
                # 1441 "libtcc.c"
                # 1436 "libtcc.c"
                if(_if_conditional1148=wanted_pc>=sym_920->st_value&&wanted_pc<sym_920->st_value+sym_920->st_size,                _if_conditional1148) {
                    # 1438 "libtcc.c"
                    pstrcpy(last_func_name_909,sizeof(last_func_name_909),strtab_section->data+sym_920->st_name);
                    # 1439 "libtcc.c"
                    goto found;
                }
            }
        }
    }
    # 1445 "libtcc.c"
    fprintf((stderr)," ???\n");
    # 1446 "libtcc.c"
    return;
    # 1448 "libtcc.c"
    found:
    # 1451 "libtcc.c"
    # 1448 "libtcc.c"
    if(_if_conditional1149=last_func_name_909[0]!=0,    _if_conditional1149) {
        # 1449 "libtcc.c"
        fprintf((stderr)," %s()",last_func_name_909);
    }
    # 1458 "libtcc.c"
    # 1451 "libtcc.c"
    if(_if_conditional1150=incl_index_914>0,    _if_conditional1150) {
        # 1453 "libtcc.c"
        fprintf((stderr)," (%s:%d",incl_files_913[incl_index_914-1],last_line_num_916);
        # 1455 "libtcc.c"
        for(        i_917=incl_index_914-2;        i_917>=0;        i_917--        ){
            # 1455 "libtcc.c"
            fprintf((stderr),", included from %s",incl_files_913[i_917]);
        }
        # 1456 "libtcc.c"
        fprintf((stderr),")");
    }
    # 1458 "libtcc.c"
    fprintf((stderr),"\n");
}

static int rt_get_caller_pc(unsigned long int* paddr, struct ucontext* uc, int level){
void* __result_obj__;
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1531 "libtcc.c"
    __result189__ = -1;
    return __result189__;
}

void rt_error(struct ucontext* uc, const char* fmt, ...){
void* __result_obj__;
va_list ap_923;
unsigned long int pc_924;
int i_925;
_Bool _if_conditional1151;
_Bool _if_conditional1152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ap_923, 0, sizeof(va_list));
memset(&pc_924, 0, sizeof(unsigned long int));
memset(&i_925, 0, sizeof(int));
    # 1538 "libtcc.c"
    # 1539 "libtcc.c"
    # 1540 "libtcc.c"
    # 1542 "libtcc.c"
    __builtin_va_start(ap_923,fmt);
    # 1543 "libtcc.c"
    fprintf((stderr),"Runtime error: ");
    # 1544 "libtcc.c"
    vfprintf((stderr),fmt,ap_923);
    # 1545 "libtcc.c"
    fprintf((stderr),"\n");
    # 1555 "libtcc.c"
    for(    i_925=0;    i_925<num_callers;    i_925++    ){
        # 1548 "libtcc.c"
        # 1547 "libtcc.c"
        if(_if_conditional1151=rt_get_caller_pc(&pc_924,uc,i_925)<0,        _if_conditional1151) {
            # 1548 "libtcc.c"
            break;
        }
        # 1552 "libtcc.c"
        # 1549 "libtcc.c"
        if(_if_conditional1152=i_925==0,        _if_conditional1152) {
            # 1550 "libtcc.c"
            fprintf((stderr),"at ");
        }
        else {
            # 1552 "libtcc.c"
            fprintf((stderr),"by ");
        }
        # 1553 "libtcc.c"
        rt_printline(pc_924);
    }
    # 1555 "libtcc.c"
    exit(255);
    # 1556 "libtcc.c"
    __builtin_va_end(ap_923);
    come_call_finalizer3((&ap_923),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

static void sig_error(int signum, struct anonymous_typeX16* siginf, void* puc){
void* __result_obj__;
struct ucontext* uc_926;
_Bool _if_conditional1153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&uc_926, 0, sizeof(struct ucontext*));
    # 1562 "libtcc.c"
    uc_926=puc;
    # 1593 "libtcc.c"
    switch (signum) {
        # 1566 "libtcc.c"
        case 8:
        # 1575 "libtcc.c"
        switch (siginf->si_code) {
            # 1568 "libtcc.c"
            case 1:
            # 1569 "libtcc.c"
            case 3:
            # 1569 "libtcc.c"
            rt_error(uc_926,"division by zero");
            # 1570 "libtcc.c"
            break;
            # 1572 "libtcc.c"
            default:
            # 1572 "libtcc.c"
            rt_error(uc_926,"floating point exception");
            # 1573 "libtcc.c"
            break;
        }
        # 1575 "libtcc.c"
        break;
        # 1577 "libtcc.c"
        case 7:
        # 1578 "libtcc.c"
        case 11:
        # 1581 "libtcc.c"
        # 1578 "libtcc.c"
        if(_if_conditional1153=rt_bound_error_msg&&*rt_bound_error_msg,        _if_conditional1153) {
            # 1579 "libtcc.c"
            rt_error(uc_926,*rt_bound_error_msg);
        }
        else {
            # 1581 "libtcc.c"
            rt_error(uc_926,"dereferencing invalid pointer");
        }
        # 1582 "libtcc.c"
        break;
        # 1584 "libtcc.c"
        case 4:
        # 1584 "libtcc.c"
        rt_error(uc_926,"illegal instruction");
        # 1585 "libtcc.c"
        break;
        # 1587 "libtcc.c"
        case 6:
        # 1587 "libtcc.c"
        rt_error(uc_926,"abort() called");
        # 1588 "libtcc.c"
        break;
        # 1590 "libtcc.c"
        default:
        # 1590 "libtcc.c"
        rt_error(uc_926,"caught signal %d",signum);
        # 1591 "libtcc.c"
        break;
    }
    # 1593 "libtcc.c"
    exit(255);
}

int tcc_relocate(struct TCCState* s1, void* ptr){
void* __result_obj__;
struct Section* s_927;
unsigned long int offset_928;
unsigned long int length_929;
unsigned long int mem_930;
int i_931;
_Bool _if_conditional1154;
_Bool _if_conditional1155;
_Bool _if_conditional1156;
int __result190__;
_Bool _if_conditional1157;
int __result191__;
_Bool _if_conditional1158;
_Bool _if_conditional1159;
_Bool _if_conditional1160;
_Bool _if_conditional1161;
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_927, 0, sizeof(struct Section*));
memset(&i_931, 0, sizeof(int));
    # 1603 "libtcc.c"
    # 1604 "libtcc.c"
    # 1605 "libtcc.c"
    # 1622 "libtcc.c"
    # 1607 "libtcc.c"
    if(_if_conditional1154=0==s1->runtime_added,    _if_conditional1154) {
        # 1608 "libtcc.c"
        s1->runtime_added=1;
        # 1609 "libtcc.c"
        s1->nb_errors=0;
        # 1615 "libtcc.c"
        tcc_add_runtime(s1);
        # 1616 "libtcc.c"
        relocate_common_syms();
        # 1617 "libtcc.c"
        tcc_add_linker_symbols(s1);
        # 1618 "libtcc.c"
        build_got_entries(s1);
    }
    # 1622 "libtcc.c"
    offset_928=0,mem_930=(unsigned long int)ptr;
    # 1633 "libtcc.c"
    for(    i_931=1;    i_931<s1->nb_sections;    i_931++    ){
        # 1624 "libtcc.c"
        s_927=s1->sections[i_931];
        # 1626 "libtcc.c"
        # 1625 "libtcc.c"
        if(_if_conditional1155=0==(s_927->sh_flags&(1<<1)),        _if_conditional1155) {
            # 1626 "libtcc.c"
            continue;
        }
        # 1627 "libtcc.c"
        length_929=s_927->data_offset;
        # 1628 "libtcc.c"
        s_927->sh_addr=mem_930?(mem_930+offset_928+15)&~15:0;
        # 1629 "libtcc.c"
        offset_928=(offset_928+length_929+15)&~15;
    }
    # 1633 "libtcc.c"
    relocate_syms(s1,1);
    # 1635 "libtcc.c"
    # 1634 "libtcc.c"
    if(s1->nb_errors) {
        # 1635 "libtcc.c"
        __result190__ = -1;
        return __result190__;
    }
    # 1638 "libtcc.c"
    s1->runtime_plt_and_got_offset=0;
    # 1639 "libtcc.c"
    s1->runtime_plt_and_got=(char*)(mem_930+offset_928);
    # 1642 "libtcc.c"
    offset_928*=2;
    # 1646 "libtcc.c"
    # 1645 "libtcc.c"
    if(_if_conditional1157=0==mem_930,    _if_conditional1157) {
        # 1646 "libtcc.c"
        __result191__ = offset_928+15;
        return __result191__;
    }
    # 1655 "libtcc.c"
    for(    i_931=1;    i_931<s1->nb_sections;    i_931++    ){
        # 1650 "libtcc.c"
        s_927=s1->sections[i_931];
        # 1653 "libtcc.c"
        # 1651 "libtcc.c"
        if(s_927->reloc) {
            # 1652 "libtcc.c"
            relocate_section(s1,s_927);
        }
    }
    # 1671 "libtcc.c"
    for(    i_931=1;    i_931<s1->nb_sections;    i_931++    ){
        # 1656 "libtcc.c"
        s_927=s1->sections[i_931];
        # 1658 "libtcc.c"
        # 1657 "libtcc.c"
        if(_if_conditional1159=0==(s_927->sh_flags&(1<<1)),        _if_conditional1159) {
            # 1658 "libtcc.c"
            continue;
        }
        # 1659 "libtcc.c"
        length_929=s_927->data_offset;
        # 1661 "libtcc.c"
        ptr=(void*)s_927->sh_addr;
        # 1665 "libtcc.c"
        # 1662 "libtcc.c"
        if(_if_conditional1160=((void*)0)==s_927->data||s_927->sh_type==8,        _if_conditional1160) {
            # 1663 "libtcc.c"
            memset(ptr,0,length_929);
        }
        else {
            # 1665 "libtcc.c"
            memcpy(ptr,s_927->data,length_929);
        }
        # 1669 "libtcc.c"
        # 1667 "libtcc.c"
        if(_if_conditional1161=s_927->sh_flags&(1<<2),        _if_conditional1161) {
            # 1668 "libtcc.c"
            set_pages_executable(ptr,length_929);
        }
    }
    # 1672 "libtcc.c"
    set_pages_executable(s1->runtime_plt_and_got,s1->runtime_plt_and_got_offset);
    # 1674 "libtcc.c"
    __result192__ = 0;
    return __result192__;
}

int tcc_run(struct TCCState* s1, int argc, char** argv){
void* __result_obj__;
int (*prog_main_932)(int,char**);
void* ptr_933;
int ret_934;
_Bool _if_conditional1162;
int __result193__;
_Bool _if_conditional1163;
struct sigaction sigact_935;
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&prog_main_932, 0, sizeof(int (*)(int,char**)));
memset(&ptr_933, 0, sizeof(void*));
memset(&ret_934, 0, sizeof(int));
memset(&sigact_935, 0, sizeof(struct sigaction));
    # 1682 "libtcc.c"
    # 1683 "libtcc.c"
    # 1684 "libtcc.c"
    # 1686 "libtcc.c"
    ret_934=tcc_relocate(s1,((void*)0));
    # 1688 "libtcc.c"
    # 1687 "libtcc.c"
    if(_if_conditional1162=ret_934<0,    _if_conditional1162) {
        # 1688 "libtcc.c"
        __result193__ = -1;
        return __result193__;
    }
    # 1689 "libtcc.c"
    ptr_933=tcc_malloc(ret_934);
    # 1690 "libtcc.c"
    tcc_relocate(s1,ptr_933);
    # 1692 "libtcc.c"
    prog_main_932=tcc_get_symbol_err(s1,"main");
    # 1711 "libtcc.c"
    # 1694 "libtcc.c"
    if(s1->do_debug) {
        # 1696 "libtcc.c"
        # 1699 "libtcc.c"
        sigact_935.sa_flags=4|-2147483648;
        # 1700 "libtcc.c"
        sigact_935.__sa_handler.sa_sigaction=sig_error;
        # 1701 "libtcc.c"
        sigemptyset(&sigact_935.sa_mask);
        # 1702 "libtcc.c"
        sigaction(8,&sigact_935,((void*)0));
        # 1703 "libtcc.c"
        sigaction(4,&sigact_935,((void*)0));
        # 1704 "libtcc.c"
        sigaction(11,&sigact_935,((void*)0));
        # 1705 "libtcc.c"
        sigaction(7,&sigact_935,((void*)0));
        # 1706 "libtcc.c"
        sigaction(6,&sigact_935,((void*)0));
    }
    # 1711 "libtcc.c"
    ret_934=((*prog_main_932))(argc,argv);
    # 1712 "libtcc.c"
    tcc_free(ptr_933);
    # 1713 "libtcc.c"
    __result194__ = ret_934;
    return __result194__;
}

void tcc_memstats(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tcc_cleanup(){
void* __result_obj__;
int i_936;
int n_937;
_Bool _if_conditional1164;
memset(&__result_obj__, 0, sizeof(void*));
    # 1726 "libtcc.c"
    # 1742 "libtcc.c"
    # 1741 "libtcc.c"
    if(_if_conditional1164=((void*)0)==tcc_state,    _if_conditional1164) {
        # 1742 "libtcc.c"
        return;
    }
    # 1743 "libtcc.c"
    tcc_state=((void*)0);
    # 1746 "libtcc.c"
    free_defines(((void*)0));
    # 1749 "libtcc.c"
    n_937=tok_ident-256;
    # 1751 "libtcc.c"
    for(    i_936=0;    i_936<n_937;    i_936++    ){
        # 1751 "libtcc.c"
        tcc_free(table_ident[i_936]);
    }
    # 1752 "libtcc.c"
    tcc_free(table_ident);
    # 1755 "libtcc.c"
    dynarray_reset(&sym_pools,&nb_sym_pools);
    # 1757 "libtcc.c"
    cstr_free(&tokcstr);
    # 1759 "libtcc.c"
    sym_free_first=((void*)0);
    # 1761 "libtcc.c"
    macro_ptr=((void*)0);
}

struct TCCState* tcc_new(){
void* __result_obj__;
struct TCCState* s_938;
_Bool _if_conditional1165;
struct TCCState* __result195__;
struct TCCState* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&s_938, 0, sizeof(struct TCCState*));
    # 1766 "libtcc.c"
    # 1768 "libtcc.c"
    tcc_cleanup();
    # 1770 "libtcc.c"
    s_938=tcc_mallocz(sizeof(struct TCCState));
    # 1772 "libtcc.c"
    # 1771 "libtcc.c"
    if(_if_conditional1165=!s_938,    _if_conditional1165) {
        # 1772 "libtcc.c"
        __result195__ = __result_obj__ = ((void*)0);
        return __result195__;
    }
    # 1773 "libtcc.c"
    tcc_state=s_938;
    # 1774 "libtcc.c"
    s_938->output_type=0;
    # 1775 "libtcc.c"
    s_938->tcc_lib_path="/usr/local/lib/tcc";
    # 1777 "libtcc.c"
    preprocess_new();
    # 1781 "libtcc.c"
    define_push(327,0,((void*)0),((void*)0));
    # 1782 "libtcc.c"
    define_push(328,0,((void*)0),((void*)0));
    # 1783 "libtcc.c"
    define_push(329,0,((void*)0),((void*)0));
    # 1784 "libtcc.c"
    define_push(330,0,((void*)0),((void*)0));
    # 1787 "libtcc.c"
    tcc_define_symbol(s_938,"__STDC__",((void*)0));
    # 1788 "libtcc.c"
    tcc_define_symbol(s_938,"__STDC_VERSION__","199901L");
    # 1793 "libtcc.c"
    tcc_define_symbol(s_938,"__x86_64__",((void*)0));
    # 1808 "libtcc.c"
    tcc_define_symbol(s_938,"__unix__",((void*)0));
    # 1809 "libtcc.c"
    tcc_define_symbol(s_938,"__unix",((void*)0));
    # 1811 "libtcc.c"
    tcc_define_symbol(s_938,"__linux__",((void*)0));
    # 1812 "libtcc.c"
    tcc_define_symbol(s_938,"__linux",((void*)0));
    # 1816 "libtcc.c"
    tcc_define_symbol(s_938,"__TINYC__",((void*)0));
    # 1819 "libtcc.c"
    tcc_define_symbol(s_938,"__SIZE_TYPE__","unsigned int");
    # 1820 "libtcc.c"
    tcc_define_symbol(s_938,"__PTRDIFF_TYPE__","int");
    # 1824 "libtcc.c"
    tcc_define_symbol(s_938,"__WCHAR_TYPE__","int");
    # 1829 "libtcc.c"
    tcc_add_library_path(s_938,"/usr/local/lib");
    # 1830 "libtcc.c"
    tcc_add_library_path(s_938,"/usr/lib");
    # 1831 "libtcc.c"
    tcc_add_library_path(s_938,"/lib");
    # 1835 "libtcc.c"
    dynarray_add((void***)&s_938->sections,&s_938->nb_sections,((void*)0));
    # 1838 "libtcc.c"
    text_section=new_section(s_938,".text",1,(1<<1)|(1<<2));
    # 1839 "libtcc.c"
    data_section=new_section(s_938,".data",1,(1<<1)|(1<<0));
    # 1840 "libtcc.c"
    bss_section=new_section(s_938,".bss",8,(1<<1)|(1<<0));
    # 1845 "libtcc.c"
    symtab_section=new_symtab(s_938,".symtab",2,0,".strtab",".hashtab",-2147483648);
    # 1846 "libtcc.c"
    strtab_section=symtab_section->link;
    # 1851 "libtcc.c"
    s_938->dynsymtab_section=new_symtab(s_938,".dynsymtab",2,-2147483648,".dynstrtab",".dynhashtab",-2147483648);
    # 1852 "libtcc.c"
    s_938->alacarte_link=1;
    # 1861 "libtcc.c"
    __result196__ = __result_obj__ = s_938;
    return __result196__;
}

void tcc_delete(struct TCCState* s1){
void* __result_obj__;
int i_939;
struct DLLReference* ref_940;
_Bool _if_conditional1166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_939, 0, sizeof(int));
memset(&ref_940, 0, sizeof(struct DLLReference*));
    # 1866 "libtcc.c"
    # 1868 "libtcc.c"
    tcc_cleanup();
    # 1872 "libtcc.c"
    for(    i_939=1;    i_939<s1->nb_sections;    i_939++    ){
        # 1872 "libtcc.c"
        free_section(s1->sections[i_939]);
    }
    # 1873 "libtcc.c"
    dynarray_reset(&s1->sections,&s1->nb_sections);
    # 1876 "libtcc.c"
    for(    i_939=0;    i_939<s1->nb_priv_sections;    i_939++    ){
        # 1876 "libtcc.c"
        free_section(s1->priv_sections[i_939]);
    }
    # 1877 "libtcc.c"
    dynarray_reset(&s1->priv_sections,&s1->nb_priv_sections);
    # 1887 "libtcc.c"
    for(    i_939=0;    i_939<s1->nb_loaded_dlls;    i_939++    ){
        # 1881 "libtcc.c"
        ref_940=s1->loaded_dlls[i_939];
        # 1884 "libtcc.c"
        # 1882 "libtcc.c"
        if(ref_940->handle) {
            # 1883 "libtcc.c"
            dlclose(ref_940->handle);
        }
    }
    # 1887 "libtcc.c"
    dynarray_reset(&s1->loaded_dlls,&s1->nb_loaded_dlls);
    # 1890 "libtcc.c"
    dynarray_reset(&s1->library_paths,&s1->nb_library_paths);
    # 1893 "libtcc.c"
    dynarray_reset(&s1->cached_includes,&s1->nb_cached_includes);
    # 1894 "libtcc.c"
    dynarray_reset(&s1->include_paths,&s1->nb_include_paths);
    # 1895 "libtcc.c"
    dynarray_reset(&s1->sysinclude_paths,&s1->nb_sysinclude_paths);
    # 1897 "libtcc.c"
    tcc_free(s1);
}

int tcc_add_include_path(struct TCCState* s1, const char* pathname){
void* __result_obj__;
char* pathname1_941;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pathname1_941, 0, sizeof(char*));
    # 1902 "libtcc.c"
    # 1904 "libtcc.c"
    pathname1_941=tcc_strdup(pathname);
    # 1905 "libtcc.c"
    dynarray_add((void***)&s1->include_paths,&s1->nb_include_paths,pathname1_941);
    # 1906 "libtcc.c"
    __result197__ = 0;
    return __result197__;
}

int tcc_add_sysinclude_path(struct TCCState* s1, const char* pathname){
void* __result_obj__;
char* pathname1_942;
int __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pathname1_942, 0, sizeof(char*));
    # 1911 "libtcc.c"
    # 1913 "libtcc.c"
    pathname1_942=tcc_strdup(pathname);
    # 1914 "libtcc.c"
    dynarray_add((void***)&s1->sysinclude_paths,&s1->nb_sysinclude_paths,pathname1_942);
    # 1915 "libtcc.c"
    __result198__ = 0;
    return __result198__;
}

static int tcc_add_file_internal(struct TCCState* s1, const char* filename, int flags){
void* __result_obj__;
const char* ext_943;
struct anonymous_typeX64 ehdr_944;
int fd_945;
int ret_946;
struct BufferedFile* saved_file_947;
ext_943=tcc_fileextension(filename);
_Bool _if_conditional1167;
_Bool _if_conditional1168;
_Bool _if_conditional1169;
_Bool _if_conditional1170;
_Bool _elif_conditional212;
_Bool _if_conditional1171;
_Bool _elif_conditional213;
_Bool _if_conditional1172;
_Bool _if_conditional1173;
_Bool _elif_conditional214;
_Bool _if_conditional1174;
void* h_948;
_Bool _if_conditional1175;
_Bool _elif_conditional215;
_Bool _if_conditional1176;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ehdr_944, 0, sizeof(struct anonymous_typeX64));
memset(&saved_file_947, 0, sizeof(struct BufferedFile*));
memset(&h_948, 0, sizeof(void*));
    # 1920 "libtcc.c"
    # 1921 "libtcc.c"
    # 1922 "libtcc.c"
    # 1923 "libtcc.c"
    # 1926 "libtcc.c"
    # 1928 "libtcc.c"
    # 1927 "libtcc.c"
    if(_if_conditional1167=ext_943[0],    _if_conditional1167) {
        # 1928 "libtcc.c"
        ext_943++;
    }
    # 1931 "libtcc.c"
    saved_file_947=file;
    # 1932 "libtcc.c"
    file=tcc_open(s1,filename);
    # 1941 "libtcc.c"
    # 1933 "libtcc.c"
    if(_if_conditional1168=!file,    _if_conditional1168) {
        # 1937 "libtcc.c"
        # 1934 "libtcc.c"
        if(_if_conditional1169=flags&1,        _if_conditional1169) {
            # 1935 "libtcc.c"
            error_noabort("file '%s' not found",filename);
        }
        # 1937 "libtcc.c"
        ret_946=-1;
        # 1938 "libtcc.c"
        goto fail1;
    }
    # 2024 "libtcc.c"
    # 1941 "libtcc.c"
    if(_if_conditional1170=flags&4,    _if_conditional1170) {
        # 1942 "libtcc.c"
        ret_946=tcc_preprocess(s1);
    }
    # 1943 "libtcc.c"
    else if(_elif_conditional212=!ext_943[0]||!strcmp(ext_943,"c"),    _elif_conditional212) {
        # 1945 "libtcc.c"
        ret_946=tcc_compile(s1);
    }
    else {
        # 1962 "libtcc.c"
        fd_945=file->fd;
        # 1964 "libtcc.c"
        ret_946=read(fd_945,&ehdr_944,sizeof(ehdr_944));
        # 1965 "libtcc.c"
        lseek(fd_945,0,0);
        # 1973 "libtcc.c"
        # 1966 "libtcc.c"
        if(_if_conditional1171=ret_946<=0,        _if_conditional1171) {
            # 1967 "libtcc.c"
            error_noabort("could not read header");
            # 1968 "libtcc.c"
            goto fail;
        }
        # 1969 "libtcc.c"
        else if(_elif_conditional213=ret_946!=sizeof(ehdr_944),        _elif_conditional213) {
            # 1970 "libtcc.c"
            goto try_load_script;
        }
        # 2023 "libtcc.c"
        # 1976 "libtcc.c"
        if(_if_conditional1172=ehdr_944.e_ident[0]==127&&ehdr_944.e_ident[1]==69&&ehdr_944.e_ident[2]==76&&ehdr_944.e_ident[3]==70,        _if_conditional1172) {
            # 1977 "libtcc.c"
            file->line_num=0;
            # 2000 "libtcc.c"
            # 1978 "libtcc.c"
            if(_if_conditional1173=ehdr_944.e_type==1,            _if_conditional1173) {
                # 1979 "libtcc.c"
                ret_946=tcc_load_object_file(s1,fd_945,0);
            }
            # 1980 "libtcc.c"
            else if(_elif_conditional214=ehdr_944.e_type==3,            _elif_conditional214) {
                # 1996 "libtcc.c"
                # 1981 "libtcc.c"
                if(_if_conditional1174=s1->output_type==0,                _if_conditional1174) {
                    # 1985 "libtcc.c"
                    # 1986 "libtcc.c"
                    h_948=dlopen(filename,256|1);
                    # 1990 "libtcc.c"
                    # 1987 "libtcc.c"
                    if(h_948) {
                        # 1988 "libtcc.c"
                        ret_946=0;
                    }
                    else {
                        # 1990 "libtcc.c"
                        ret_946=-1;
                    }
                }
                else {
                    # 1994 "libtcc.c"
                    ret_946=tcc_load_dll(s1,fd_945,filename,(flags&2)!=0);
                }
            }
            else {
                # 1997 "libtcc.c"
                error_noabort("unrecognized ELF file");
                # 1998 "libtcc.c"
                goto fail;
            }
        }
        # 2000 "libtcc.c"
        else if(_elif_conditional215=memcmp((char*)&ehdr_944,"!<arch>\012",8)==0,        _elif_conditional215) {
            # 2001 "libtcc.c"
            file->line_num=0;
            # 2002 "libtcc.c"
            ret_946=tcc_load_archive(s1,fd_945);
        }
        else {
            # 2017 "libtcc.c"
            try_load_script:
            # 2017 "libtcc.c"
            ret_946=tcc_load_ldscript(s1);
            # 2022 "libtcc.c"
            # 2018 "libtcc.c"
            if(_if_conditional1176=ret_946<0,            _if_conditional1176) {
                # 2019 "libtcc.c"
                error_noabort("unrecognized file type");
                # 2020 "libtcc.c"
                goto fail;
            }
        }
    }
    # 2025 "libtcc.c"
    the_end:
    # 2025 "libtcc.c"
    tcc_close(file);
    # 2027 "libtcc.c"
    fail1:
    # 2027 "libtcc.c"
    file=saved_file_947;
    # 2028 "libtcc.c"
    __result199__ = ret_946;
    come_call_finalizer3((&ehdr_944),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
    return __result199__;
    # 2030 "libtcc.c"
    fail:
    # 2030 "libtcc.c"
    ret_946=-1;
    # 2031 "libtcc.c"
    goto the_end;
    come_call_finalizer3((&ehdr_944),Elf64_Ehdr_finalize, 1, 0, 0, 0, (void*)0);
}

int tcc_add_file(struct TCCState* s, const char* filename){
void* __result_obj__;
_Bool _if_conditional1177;
int __result200__;
int __result201__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2039 "libtcc.c"
    # 2036 "libtcc.c"
    if(_if_conditional1177=s->output_type==4,    _if_conditional1177) {
        # 2037 "libtcc.c"
        __result200__ = tcc_add_file_internal(s,filename,1|4);
        return __result200__;
    }
    else {
        # 2039 "libtcc.c"
        __result201__ = tcc_add_file_internal(s,filename,1);
        return __result201__;
    }
}

int tcc_add_library_path(struct TCCState* s, const char* pathname){
void* __result_obj__;
char* pathname1_949;
int __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pathname1_949, 0, sizeof(char*));
    # 2044 "libtcc.c"
    # 2046 "libtcc.c"
    pathname1_949=tcc_strdup(pathname);
    # 2047 "libtcc.c"
    dynarray_add((void***)&s->library_paths,&s->nb_library_paths,pathname1_949);
    # 2048 "libtcc.c"
    __result202__ = 0;
    return __result202__;
}

static int tcc_add_dll(struct TCCState* s, const char* filename, int flags){
void* __result_obj__;
int i_951;
_Bool _if_conditional1178;
int __result203__;
int __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_951, 0, sizeof(int));
    # 2055 "libtcc.c"
    char buf_950[1024];
    memset(&buf_950, 0, sizeof(char)    *(1024)    );
    # 2056 "libtcc.c"
    # 2064 "libtcc.c"
    for(    i_951=0;    i_951<s->nb_library_paths;    i_951++    ){
        # 2060 "libtcc.c"
        snprintf(buf_950,sizeof(buf_950),"%s/%s",s->library_paths[i_951],filename);
        # 2063 "libtcc.c"
        # 2061 "libtcc.c"
        if(_if_conditional1178=tcc_add_file_internal(s,buf_950,flags)==0,        _if_conditional1178) {
            # 2062 "libtcc.c"
            __result203__ = 0;
            return __result203__;
        }
    }
    # 2064 "libtcc.c"
    __result204__ = -1;
    return __result204__;
}

int tcc_add_library(struct TCCState* s, const char* libraryname){
void* __result_obj__;
int i_953;
_Bool _if_conditional1179;
_Bool _if_conditional1180;
int __result205__;
_Bool _if_conditional1181;
int __result206__;
int __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_953, 0, sizeof(int));
    # 2070 "libtcc.c"
    char buf_952[1024];
    memset(&buf_952, 0, sizeof(char)    *(1024)    );
    # 2071 "libtcc.c"
    # 2085 "libtcc.c"
    # 2074 "libtcc.c"
    if(_if_conditional1179=!s->static_link,    _if_conditional1179) {
        # 2078 "libtcc.c"
        snprintf(buf_952,sizeof(buf_952),"lib%s.so",libraryname);
        # 2082 "libtcc.c"
        # 2080 "libtcc.c"
        if(_if_conditional1180=tcc_add_dll(s,buf_952,0)==0,        _if_conditional1180) {
            # 2081 "libtcc.c"
            __result205__ = 0;
            return __result205__;
        }
    }
    # 2091 "libtcc.c"
    for(    i_953=0;    i_953<s->nb_library_paths;    i_953++    ){
        # 2087 "libtcc.c"
        snprintf(buf_952,sizeof(buf_952),"%s/lib%s.a",s->library_paths[i_953],libraryname);
        # 2090 "libtcc.c"
        # 2088 "libtcc.c"
        if(_if_conditional1181=tcc_add_file_internal(s,buf_952,0)==0,        _if_conditional1181) {
            # 2089 "libtcc.c"
            __result206__ = 0;
            return __result206__;
        }
    }
    # 2091 "libtcc.c"
    __result207__ = -1;
    return __result207__;
}

int tcc_add_symbol(struct TCCState* s, const char* name, void* val){
void* __result_obj__;
int __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2098 "libtcc.c"
    add_elf_sym(symtab_section,(unsigned long int)val,0,((((1))<<4)+(((0))&15)),0,65521,name);
    # 2099 "libtcc.c"
    __result208__ = 0;
    return __result208__;
}

int tcc_set_output_type(struct TCCState* s, int output_type){
void* __result_obj__;
_Bool _if_conditional1182;
_Bool _if_conditional1183;
_Bool _if_conditional1184;
_Bool _if_conditional1185;
_Bool _if_conditional1186;
int __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2104 "libtcc.c"
    char buf_954[1024];
    memset(&buf_954, 0, sizeof(char)    *(1024)    );
    # 2106 "libtcc.c"
    s->output_type=output_type;
    # 2122 "libtcc.c"
    # 2108 "libtcc.c"
    if(_if_conditional1182=!s->nostdinc,    _if_conditional1182) {
        # 2112 "libtcc.c"
        tcc_add_sysinclude_path(s,"/usr/local/include");
        # 2113 "libtcc.c"
        tcc_add_sysinclude_path(s,"/usr/include");
        # 2115 "libtcc.c"
        snprintf(buf_954,sizeof(buf_954),"%s/include",s->tcc_lib_path);
        # 2116 "libtcc.c"
        tcc_add_sysinclude_path(s,buf_954);
    }
    # 2141 "libtcc.c"
    # 2122 "libtcc.c"
    if(s->char_is_unsigned) {
        # 2137 "libtcc.c"
        tcc_define_symbol(s,"__CHAR_UNSIGNED__",((void*)0));
    }
    # 2154 "libtcc.c"
    # 2141 "libtcc.c"
    if(s->do_debug) {
        # 2143 "libtcc.c"
        stab_section=new_section(s,".stab",1,0);
        # 2144 "libtcc.c"
        stab_section->sh_entsize=sizeof(struct anonymous_typeX109);
        # 2145 "libtcc.c"
        stabstr_section=new_section(s,".stabstr",3,0);
        # 2146 "libtcc.c"
        put_elf_str(stabstr_section,"");
        # 2147 "libtcc.c"
        stab_section->link=stabstr_section;
        # 2149 "libtcc.c"
        put_stabs("",0,0,0,0);
    }
    # 2167 "libtcc.c"
    # 2155 "libtcc.c"
    if(_if_conditional1185=(output_type==1||output_type==2)&&!s->nostdlib,    _if_conditional1185) {
        # 2157 "libtcc.c"
        # 2156 "libtcc.c"
        if(_if_conditional1186=output_type!=2,        _if_conditional1186) {
            # 2157 "libtcc.c"
            tcc_add_file(s,"/usr/lib/crt1.o");
        }
        # 2158 "libtcc.c"
        tcc_add_file(s,"/usr/lib/crti.o");
    }
    # 2167 "libtcc.c"
    __result209__ = 0;
    return __result209__;
}

static int set_flag(struct TCCState* s, const struct FlagDef* flags, int nb_flags, const char* name, int value){
void* __result_obj__;
int i_955;
const struct FlagDef* p_956;
const char* r_957;
r_957=name;
_Bool _if_conditional1187;
p_956=flags;
_Bool _if_conditional1188;
int __result210__;
_Bool _if_conditional1189;
int __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_955, 0, sizeof(int));
    # 2190 "libtcc.c"
    # 2191 "libtcc.c"
    # 2192 "libtcc.c"
    # 2194 "libtcc.c"
    # 2199 "libtcc.c"
    # 2195 "libtcc.c"
    if(_if_conditional1187=r_957[0]==110&&r_957[1]==111&&r_957[2]==45,    _if_conditional1187) {
        # 2196 "libtcc.c"
        r_957+=3;
        # 2197 "libtcc.c"
        value=!value;
    }
    # 2203 "libtcc.c"
    for(    i_955=0,;    i_955<nb_flags;    i_955++,p_956++    ){
        # 2202 "libtcc.c"
        # 2200 "libtcc.c"
        if(_if_conditional1188=!strcmp(r_957,p_956->name),        _if_conditional1188) {
            # 2201 "libtcc.c"
            goto found;
        }
    }
    # 2203 "libtcc.c"
    __result210__ = -1;
    return __result210__;
    # 2205 "libtcc.c"
    found:
    # 2207 "libtcc.c"
    # 2205 "libtcc.c"
    if(_if_conditional1189=p_956->flags&2,    _if_conditional1189) {
        # 2206 "libtcc.c"
        value=!value;
    }
    # 2207 "libtcc.c"
    *(int*)((unsigned char*)s+p_956->offset)=value;
    # 2208 "libtcc.c"
    __result211__ = 0;
    return __result211__;
}

int tcc_set_warning(struct TCCState* s, const char* warning_name, int value){
void* __result_obj__;
int i_958;
const struct FlagDef* p_959;
_Bool _if_conditional1190;
p_959=warning_defs;
_Bool _if_conditional1191;
int __result212__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_958, 0, sizeof(int));
    # 2215 "libtcc.c"
    # 2216 "libtcc.c"
    # 2228 "libtcc.c"
    # 2218 "libtcc.c"
    if(_if_conditional1190=!strcmp(warning_name,"all"),    _if_conditional1190) {
        # 2223 "libtcc.c"
        for(        i_958=0,;        i_958<(sizeof(warning_defs)/sizeof((warning_defs)[0]));        i_958++,p_959++        ){
            # 2222 "libtcc.c"
            # 2220 "libtcc.c"
            if(_if_conditional1191=p_959->flags&1,            _if_conditional1191) {
                # 2221 "libtcc.c"
                *(int*)((unsigned char*)s+p_959->offset)=1;
            }
        }
        # 2223 "libtcc.c"
        __result212__ = 0;
        return __result212__;
    }
    else {
        # 2226 "libtcc.c"
        __result213__ = set_flag(s,warning_defs,(sizeof(warning_defs)/sizeof((warning_defs)[0])),warning_name,value);
        return __result213__;
    }
}

int tcc_set_flag(struct TCCState* s, const char* flag_name, int value){
void* __result_obj__;
int __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2241 "libtcc.c"
    __result214__ = set_flag(s,flag_defs,(sizeof(flag_defs)/sizeof((flag_defs)[0])),flag_name,value);
    return __result214__;
}

void tcc_set_lib_path(struct TCCState* s, const char* path){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2247 "libtcc.c"
    s->tcc_lib_path=tcc_strdup(path);
}

void tcc_print_stats(struct TCCState* s, long total_time){
void* __result_obj__;
double tt_960;
_Bool _if_conditional1192;
_Bool _if_conditional1193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tt_960, 0, sizeof(double));
    # 2252 "libtcc.c"
    # 2253 "libtcc.c"
    tt_960=(double)total_time/1000000.000000;
    # 2255 "libtcc.c"
    # 2254 "libtcc.c"
    if(_if_conditional1192=tt_960<0.001000,    _if_conditional1192) {
        # 2255 "libtcc.c"
        tt_960=0.001000;
    }
    # 2257 "libtcc.c"
    # 2256 "libtcc.c"
    if(_if_conditional1193=total_bytes<1,    _if_conditional1193) {
        # 2257 "libtcc.c"
        total_bytes=1;
    }
    # 2261 "libtcc.c"
    printf("%d idents, %d lines, %d bytes, %0.3f s, %d lines/s, %0.1f MB/s\n",tok_ident-256,total_lines,total_bytes,tt_960,(int)(total_lines/tt_960),total_bytes/tt_960/1000000.000000);
}

void help(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 62 "tcc.c"
    printf("tcc version 0.9.25 - Tiny C Compiler - Copyright (C) 2001-2006 Fabrice Bellard\nusage: tcc [-v] [-c] [-o outfile] [-Bdir] [-bench] [-Idir] [-Dsym[=val]] [-Usym]\n           [-Wwarn] [-g] [-b] [-bt N] [-Ldir] [-llib] [-shared] [-soname name]\n           [-static] [infile1 infile2...] [-run infile args...]\n\nGeneral options:\n  -v          display current version, increase verbosity\n  -c          compile only - generate an object file\n  -o outfile  set output filename\n  -Bdir       set tcc internal library path\n  -bench      output compilation statistics\n  -run        run compiled source\n  -fflag      set or reset (with 'no-' prefix) 'flag' (see man page)\n  -Wwarning   set or reset (with 'no-' prefix) 'warning' (see man page)\n  -w          disable all warnings\nPreprocessor options:\n  -E          preprocess only\n  -Idir       add include path 'dir'\n  -Dsym[=val] define 'sym' with value 'val'\n  -Usym       undefine 'sym'\nLinker options:\n  -Ldir       add library path 'dir'\n  -llib       link with dynamic or static library 'lib'\n  -shared     generate a shared library\n  -soname     set name for shared library to be used at runtime\n  -static     static linking\n  -rdynamic   export all global symbols to dynamic linker\n  -r          generate (relocatable) object file\nDebugger options:\n  -g          generate runtime debug info\n  -bt N       show N callers in stack traces\n");
}

static long getclock_us(){
void* __result_obj__;
struct timeval tv_961;
long __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tv_961, 0, sizeof(struct timeval));
    # 166 "tcc.c"
    # 163 "tcc.c"
    gettimeofday(&tv_961,((void*)0));
    # 164 "tcc.c"
    __result215__ = tv_961.tv_sec*1000000+tv_961.tv_usec;
    come_call_finalizer3((&tv_961),timeval_finalize, 1, 0, 0, 0, (void*)0);
    return __result215__;
    come_call_finalizer3((&tv_961),timeval_finalize, 1, 0, 0, 0, (void*)0);
}

static void timeval_finalize(struct timeval* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int strstart(const char* str, const char* val, const char** ptr){
void* __result_obj__;
const char* p_962;
const char* q_963;
p_962=str;
q_963=val;
_Bool _while_condtional89;
_Bool _if_conditional1194;
int __result216__;
_Bool _if_conditional1195;
int __result217__;
memset(&__result_obj__, 0, sizeof(void*));
    # 170 "tcc.c"
    # 171 "tcc.c"
    # 172 "tcc.c"
    # 179 "tcc.c"
    while(_while_condtional89=*q_963!=0,    _while_condtional89) {
        # 175 "tcc.c"
        # 174 "tcc.c"
        if(_if_conditional1194=*p_962!=*q_963,        _if_conditional1194) {
            # 175 "tcc.c"
            __result216__ = 0;
            return __result216__;
        }
        # 176 "tcc.c"
        p_962++;
        # 177 "tcc.c"
        q_963++;
    }
    # 180 "tcc.c"
    # 179 "tcc.c"
    if(ptr) {
        # 180 "tcc.c"
        *ptr=p_962;
    }
    # 181 "tcc.c"
    __result217__ = 1;
    return __result217__;
}

static int expand_args(char*** pargv, const char* str){
void* __result_obj__;
const char* s1_964;
char** argv_965;
char* arg_966;
int argc_967;
int len_968;
_Bool _while_condtional90;
_Bool _if_conditional1196;
s1_964=str;
_Bool _while_condtional91;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    # 187 "tcc.c"
    # 188 "tcc.c"
    # 189 "tcc.c"
    # 191 "tcc.c"
    argc_967=0;
    # 192 "tcc.c"
    argv_965=((void*)0);
    # 207 "tcc.c"
    for(    ;    ;    ){
        # 195 "tcc.c"
        while(_while_condtional90=is_space(*str),        _while_condtional90) {
            # 195 "tcc.c"
            str++;
        }
        # 197 "tcc.c"
        # 196 "tcc.c"
        if(_if_conditional1196=*str==0,        _if_conditional1196) {
            # 197 "tcc.c"
            break;
        }
        # 198 "tcc.c"
        # 200 "tcc.c"
        while(_while_condtional91=*str!=0&&!is_space(*str),        _while_condtional91) {
            # 200 "tcc.c"
            str++;
        }
        # 201 "tcc.c"
        len_968=str-s1_964;
        # 202 "tcc.c"
        arg_966=tcc_malloc(len_968+1);
        # 203 "tcc.c"
        memcpy(arg_966,s1_964,len_968);
        # 204 "tcc.c"
        arg_966[len_968]=0;
        # 205 "tcc.c"
        dynarray_add((void***)&argv_965,&argc_967,arg_966);
    }
    # 207 "tcc.c"
    *pargv=argv_965;
    # 208 "tcc.c"
    __result218__ = argc_967;
    return __result218__;
}

int parse_args(struct TCCState* s, int argc, char** argv){
void* __result_obj__;
int optind_969;
const struct TCCOption* popt_970;
const char* optarg_971;
const char* p1_972;
const char* r1_973;
char* r_974;
_Bool _while_condtional92;
_Bool _if_conditional1197;
_Bool _if_conditional1198;
popt_970=tcc_options;
p1_972=popt_970->name;
_Bool _if_conditional1199;
r1_973=r_974+1;
_Bool _if_conditional1200;
_Bool _if_conditional1201;
_Bool _if_conditional1202;
_Bool _if_conditional1203;
optarg_971=r1_973;
_Bool _if_conditional1204;
optarg_971=argv[optind_969++];
_Bool _if_conditional1205;
int __result219__;
optarg_971=((void*)0);
int __result220__;
_Bool _if_conditional1206;
char* sym_975;
char* value_976;
_Bool _if_conditional1207;
outfile=optarg_971;
int argc1_977;
char** argv1_978;
_Bool _if_conditional1208;
_Bool _if_conditional1209;
_Bool _do_while_condtional3;
_Bool _if_conditional1210;
_Bool _if_conditional1211;
const char* p_979;
_Bool _if_conditional1212;
_Bool _elif_conditional216;
_Bool _if_conditional1213;
_Bool _elif_conditional217;
_Bool _if_conditional1214;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&optind_969, 0, sizeof(int));
memset(&r_974, 0, sizeof(char*));
memset(&argc1_977, 0, sizeof(int));
memset(&argv1_978, 0, sizeof(char**));
    # 213 "tcc.c"
    # 214 "tcc.c"
    # 215 "tcc.c"
    # 216 "tcc.c"
    # 218 "tcc.c"
    optind_969=0;
    # 415 "tcc.c"
    while(_while_condtional92=optind_969<argc,    _while_condtional92) {
        # 221 "tcc.c"
        r_974=argv[optind_969++];
        # 414 "tcc.c"
        # 222 "tcc.c"
        if(_if_conditional1197=r_974[0]!=45||r_974[1]==0,        _if_conditional1197) {
            # 224 "tcc.c"
            dynarray_add((void***)&files,&nb_files,r_974);
            # 230 "tcc.c"
            # 225 "tcc.c"
            if(_if_conditional1198=!multiple_files,            _if_conditional1198) {
                # 226 "tcc.c"
                optind_969--;
                # 228 "tcc.c"
                break;
            }
        }
        else {
            # 232 "tcc.c"
            # 248 "tcc.c"
            for(            ;            ;            ){
                # 234 "tcc.c"
                # 236 "tcc.c"
                # 235 "tcc.c"
                if(_if_conditional1199=p1_972==((void*)0),                _if_conditional1199) {
                    # 236 "tcc.c"
                    error("invalid option -- '%s'",r_974);
                }
                # 237 "tcc.c"
                # 246 "tcc.c"
                for(                ;                ;                ){
                    # 240 "tcc.c"
                    # 239 "tcc.c"
                    if(_if_conditional1200=*p1_972==0,                    _if_conditional1200) {
                        # 240 "tcc.c"
                        goto option_found;
                    }
                    # 242 "tcc.c"
                    # 241 "tcc.c"
                    if(_if_conditional1201=*r1_973!=*p1_972,                    _if_conditional1201) {
                        # 242 "tcc.c"
                        break;
                    }
                    # 243 "tcc.c"
                    p1_972++;
                    # 244 "tcc.c"
                    r1_973++;
                }
                # 246 "tcc.c"
                popt_970++;
            }
            # 249 "tcc.c"
            option_found:
            # 263 "tcc.c"
            # 249 "tcc.c"
            if(_if_conditional1202=popt_970->flags&1,            _if_conditional1202) {
                # 257 "tcc.c"
                # 250 "tcc.c"
                if(_if_conditional1203=*r1_973!=0||(popt_970->flags&2),                _if_conditional1203) {
                    # 251 "tcc.c"
                }
                else {
                    # 254 "tcc.c"
                    # 253 "tcc.c"
                    if(_if_conditional1204=optind_969>=argc,                    _if_conditional1204) {
                        # 254 "tcc.c"
                        error("argument to '%s' is missing",r_974);
                    }
                    # 255 "tcc.c"
                }
            }
            else {
                # 259 "tcc.c"
                # 258 "tcc.c"
                if(_if_conditional1205=*r1_973!=0,                _if_conditional1205) {
                    # 259 "tcc.c"
                    __result219__ = 0;
                    return __result219__;
                }
                # 260 "tcc.c"
            }
            # 413 "tcc.c"
            switch (popt_970->index) {
                # 265 "tcc.c"
                case 0:
                # 265 "tcc.c"
                __result220__ = 0;
                return __result220__;
                # 268 "tcc.c"
                case 1:
                # 269 "tcc.c"
                # 268 "tcc.c"
                if(_if_conditional1206=tcc_add_include_path(s,optarg_971)<0,                _if_conditional1206) {
                    # 269 "tcc.c"
                    error("too many include paths");
                }
                # 270 "tcc.c"
                break;
                # 272 "tcc.c"
                case 2:
                # 282 "tcc.c"
                {
                    # 273 "tcc.c"
                    # 274 "tcc.c"
                    sym_975=(char*)optarg_971;
                    # 275 "tcc.c"
                    value_976=strchr(sym_975,61);
                    # 280 "tcc.c"
                    # 276 "tcc.c"
                    if(value_976) {
                        # 277 "tcc.c"
                        *value_976=0;
                        # 278 "tcc.c"
                        value_976++;
                    }
                    # 280 "tcc.c"
                    tcc_define_symbol(s,sym_975,value_976);
                }
                # 282 "tcc.c"
                break;
                # 284 "tcc.c"
                case 3:
                # 284 "tcc.c"
                tcc_undefine_symbol(s,optarg_971);
                # 285 "tcc.c"
                break;
                # 287 "tcc.c"
                case 4:
                # 287 "tcc.c"
                tcc_add_library_path(s,optarg_971);
                # 288 "tcc.c"
                break;
                # 291 "tcc.c"
                case 5:
                # 291 "tcc.c"
                tcc_set_lib_path(s,optarg_971);
                # 292 "tcc.c"
                break;
                # 294 "tcc.c"
                case 6:
                # 294 "tcc.c"
                dynarray_add((void***)&files,&nb_files,r_974);
                # 295 "tcc.c"
                nb_libraries++;
                # 296 "tcc.c"
                break;
                # 298 "tcc.c"
                case 7:
                # 298 "tcc.c"
                do_bench=1;
                # 299 "tcc.c"
                break;
                # 302 "tcc.c"
                case 8:
                # 302 "tcc.c"
                num_callers=atoi(optarg_971);
                # 303 "tcc.c"
                break;
                # 312 "tcc.c"
                case 10:
                # 312 "tcc.c"
                s->do_debug=1;
                # 313 "tcc.c"
                break;
                # 315 "tcc.c"
                case 11:
                # 315 "tcc.c"
                multiple_files=1;
                # 316 "tcc.c"
                output_type=3;
                # 317 "tcc.c"
                break;
                # 319 "tcc.c"
                case 12:
                # 319 "tcc.c"
                s->static_link=1;
                # 320 "tcc.c"
                break;
                # 322 "tcc.c"
                case 13:
                # 322 "tcc.c"
                output_type=2;
                # 323 "tcc.c"
                break;
                # 325 "tcc.c"
                case 14:
                # 325 "tcc.c"
                s->soname=optarg_971;
                # 326 "tcc.c"
                break;
                # 328 "tcc.c"
                case 15:
                # 328 "tcc.c"
                multiple_files=1;
                # 329 "tcc.c"
                # 330 "tcc.c"
                break;
                # 333 "tcc.c"
                case 16:
                # 333 "tcc.c"
                reloc_output=1;
                # 334 "tcc.c"
                output_type=3;
                # 335 "tcc.c"
                break;
                # 337 "tcc.c"
                case 22:
                # 337 "tcc.c"
                s->nostdinc=1;
                # 338 "tcc.c"
                break;
                # 340 "tcc.c"
                case 23:
                # 340 "tcc.c"
                s->nostdlib=1;
                # 341 "tcc.c"
                break;
                # 343 "tcc.c"
                case 24:
                # 343 "tcc.c"
                print_search_dirs=1;
                # 344 "tcc.c"
                break;
                # 346 "tcc.c"
                case 26:
                # 356 "tcc.c"
                {
                    # 347 "tcc.c"
                    # 348 "tcc.c"
                    # 349 "tcc.c"
                    argc1_977=expand_args(&argv1_978,optarg_971);
                    # 353 "tcc.c"
                    # 350 "tcc.c"
                    if(_if_conditional1208=argc1_977>0,                    _if_conditional1208) {
                        # 351 "tcc.c"
                        parse_args(s,argc1_977,argv1_978);
                    }
                    # 353 "tcc.c"
                    multiple_files=0;
                    # 354 "tcc.c"
                    output_type=0;
                }
                # 356 "tcc.c"
                break;
                # 358 "tcc.c"
                case 27:
                # 361 "tcc.c"
                do {
                    # 361 "tcc.c"
                    # 359 "tcc.c"
                    if(_if_conditional1209=0==s->verbose++,                    _if_conditional1209) {
                        # 360 "tcc.c"
                        printf("tcc version %s\n","0.9.25");
                    }
                # 361 "tcc.c"
                } while(_do_while_condtional3=*optarg_971++==118,                _do_while_condtional3);
                # 362 "tcc.c"
                break;
                # 364 "tcc.c"
                case 21:
                # 365 "tcc.c"
                # 364 "tcc.c"
                if(_if_conditional1210=tcc_set_flag(s,optarg_971,1)<0&&s->warn_unsupported,                _if_conditional1210) {
                    # 365 "tcc.c"
                    goto unsupported_option;
                }
                # 366 "tcc.c"
                break;
                # 368 "tcc.c"
                case 18:
                # 370 "tcc.c"
                # 369 "tcc.c"
                if(_if_conditional1211=tcc_set_warning(s,optarg_971,1)<0&&s->warn_unsupported,                _if_conditional1211) {
                    # 370 "tcc.c"
                    goto unsupported_option;
                }
                # 371 "tcc.c"
                break;
                # 373 "tcc.c"
                case 28:
                # 373 "tcc.c"
                s->warn_none=1;
                # 374 "tcc.c"
                break;
                # 376 "tcc.c"
                case 25:
                # 376 "tcc.c"
                s->rdynamic=1;
                # 377 "tcc.c"
                break;
                # 379 "tcc.c"
                case 17:
                # 402 "tcc.c"
                {
                    # 380 "tcc.c"
                    # 401 "tcc.c"
                    # 381 "tcc.c"
                    if(_if_conditional1212=strstart(optarg_971,"-Ttext,",&p_979),                    _if_conditional1212) {
                        # 382 "tcc.c"
                        s->text_addr=strtoul(p_979,((void*)0),16);
                        # 383 "tcc.c"
                        s->has_text_addr=1;
                    }
                    # 384 "tcc.c"
                    else if(_elif_conditional216=strstart(optarg_971,"--oformat,",&p_979),                    _elif_conditional216) {
                        # 398 "tcc.c"
                        # 385 "tcc.c"
                        if(_if_conditional1213=strstart(p_979,"elf32-",((void*)0)),                        _if_conditional1213) {
                            # 386 "tcc.c"
                            s->output_format=0;
                        }
                        # 387 "tcc.c"
                        else if(_elif_conditional217=!strcmp(p_979,"binary"),                        _elif_conditional217) {
                            # 388 "tcc.c"
                            s->output_format=1;
                        }
                        else {
                            # 396 "tcc.c"
                            error("target %s not found",p_979);
                        }
                    }
                    else {
                        # 399 "tcc.c"
                        error("unsupported linker option '%s'",optarg_971);
                    }
                }
                # 402 "tcc.c"
                break;
                # 404 "tcc.c"
                case 30:
                # 404 "tcc.c"
                output_type=4;
                # 405 "tcc.c"
                break;
                # 407 "tcc.c"
                default:
                # 411 "tcc.c"
                # 407 "tcc.c"
                if(s->warn_unsupported) {
                    # 409 "tcc.c"
                    unsupported_option:
                    # 409 "tcc.c"
                    warning("unsupported option '%s'",r_974);
                }
                # 411 "tcc.c"
                break;
            }
        }
    }
    # 415 "tcc.c"
    __result221__ = optind_969+1;
    return __result221__;
}

int main(int argc, char** argv){
void* __result_obj__;
int i_980;
struct TCCState* s_981;
int nb_objfiles_982;
int ret_983;
int optind_984;
long start_time_986;
outfile=((void*)0);
_Bool _if_conditional1215;
int __result222__;
_Bool _if_conditional1216;
_Bool _if_conditional1217;
int __result223__;
int __result224__;
_Bool _if_conditional1218;
_Bool _if_conditional1219;
_Bool _if_conditional1220;
_Bool _if_conditional1221;
_Bool _if_conditional1222;
_Bool _if_conditional1223;
_Bool _if_conditional1224;
_Bool _elif_conditional218;
_Bool _if_conditional1225;
char* ext_987;
const char* name_988=strcmp(files[0],"-")==0?"a":tcc_basename(files[0]);
_Bool _if_conditional1226;
outfile=objfilename_985;
_Bool _if_conditional1227;
const char* filename_989;
filename_989=files[i_980];
_Bool _if_conditional1228;
_Bool _if_conditional1229;
_Bool _if_conditional1230;
_Bool _if_conditional1231;
_Bool _if_conditional1232;
_Bool _if_conditional1233;
_Bool _if_conditional1234;
_Bool _if_conditional1235;
_Bool _elif_conditional219;
_Bool _if_conditional1236;
int __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_980, 0, sizeof(int));
memset(&s_981, 0, sizeof(struct TCCState*));
memset(&start_time_986, 0, sizeof(long));
memset(&ext_987, 0, sizeof(char*));
come_heap_init(0, 0, 0);
    # 420 "tcc.c"
    # 421 "tcc.c"
    # 422 "tcc.c"
    # 423 "tcc.c"
    char objfilename_985[1024];
    memset(&objfilename_985, 0, sizeof(char)    *(1024)    );
    # 424 "tcc.c"
    start_time_986=0;
    # 426 "tcc.c"
    s_981=tcc_new();
    # 430 "tcc.c"
    output_type=1;
    # 431 "tcc.c"
    # 432 "tcc.c"
    multiple_files=1;
    # 433 "tcc.c"
    files=((void*)0);
    # 434 "tcc.c"
    nb_files=0;
    # 435 "tcc.c"
    nb_libraries=0;
    # 436 "tcc.c"
    reloc_output=0;
    # 437 "tcc.c"
    print_search_dirs=0;
    # 438 "tcc.c"
    ret_983=0;
    # 440 "tcc.c"
    optind_984=parse_args(s_981,argc-1,argv+1);
    # 446 "tcc.c"
    # 441 "tcc.c"
    if(print_search_dirs) {
        # 443 "tcc.c"
        printf("install: %s/\n",s_981->tcc_lib_path);
        # 444 "tcc.c"
        __result222__ = 0;
        come_heap_final();
        return __result222__;
    }
    # 453 "tcc.c"
    # 446 "tcc.c"
    if(_if_conditional1216=optind_984==0||nb_files==0,    _if_conditional1216) {
        # 448 "tcc.c"
        # 447 "tcc.c"
        if(_if_conditional1217=optind_984&&s_981->verbose,        _if_conditional1217) {
            # 448 "tcc.c"
            __result223__ = 0;
            come_heap_final();
            return __result223__;
        }
        # 449 "tcc.c"
        help();
        # 450 "tcc.c"
        __result224__ = 1;
        come_heap_final();
        return __result224__;
    }
    # 453 "tcc.c"
    nb_objfiles_982=nb_files-nb_libraries;
    # 458 "tcc.c"
    # 457 "tcc.c"
    if(_if_conditional1218=outfile&&output_type==0,    _if_conditional1218) {
        # 458 "tcc.c"
        output_type=1;
    }
    # 470 "tcc.c"
    # 461 "tcc.c"
    if(_if_conditional1219=output_type==3&&!reloc_output,    _if_conditional1219) {
        # 464 "tcc.c"
        # 463 "tcc.c"
        if(_if_conditional1220=nb_objfiles_982!=1,        _if_conditional1220) {
            # 464 "tcc.c"
            error("cannot specify multiple files with -c");
        }
        # 467 "tcc.c"
        # 465 "tcc.c"
        if(_if_conditional1221=nb_libraries!=0,        _if_conditional1221) {
            # 466 "tcc.c"
            error("cannot specify libraries with -c");
        }
    }
    # 502 "tcc.c"
    # 470 "tcc.c"
    if(_if_conditional1222=output_type==4,    _if_conditional1222) {
        # 478 "tcc.c"
        # 471 "tcc.c"
        if(_if_conditional1223=!outfile,        _if_conditional1223) {
            # 472 "tcc.c"
            s_981->outfile=(stdout);
        }
        else {
            # 474 "tcc.c"
            s_981->outfile=fopen(outfile,"w");
            # 477 "tcc.c"
            # 475 "tcc.c"
            if(_if_conditional1224=!s_981->outfile,            _if_conditional1224) {
                # 476 "tcc.c"
                error("could not open '%s",outfile);
            }
        }
    }
    # 478 "tcc.c"
    else if(_elif_conditional218=output_type!=0,    _elif_conditional218) {
        # 500 "tcc.c"
        # 479 "tcc.c"
        if(_if_conditional1225=!outfile,        _if_conditional1225) {
            # 481 "tcc.c"
            # 483 "tcc.c"
            # 484 "tcc.c"
            pstrcpy(objfilename_985,sizeof(objfilename_985),name_988);
            # 485 "tcc.c"
            ext_987=tcc_fileextension(objfilename_985);
            # 497 "tcc.c"
            # 494 "tcc.c"
            if(_if_conditional1226=output_type==3&&!reloc_output&&*ext_987,            _if_conditional1226) {
                # 495 "tcc.c"
                strcpy(ext_987,".o");
            }
            else {
                # 497 "tcc.c"
                pstrcpy(objfilename_985,sizeof(objfilename_985),"a.out");
            }
            # 498 "tcc.c"
        }
    }
    # 506 "tcc.c"
    # 502 "tcc.c"
    if(do_bench) {
        # 503 "tcc.c"
        start_time_986=getclock_us();
    }
    # 506 "tcc.c"
    tcc_set_output_type(s_981,output_type);
    # 527 "tcc.c"
    for(    i_980=0;    i_980<nb_files&&ret_983==0;    i_980++    ){
        # 510 "tcc.c"
        # 512 "tcc.c"
        # 524 "tcc.c"
        # 513 "tcc.c"
        if(_if_conditional1228=filename_989[0]==45&&filename_989[1],        _if_conditional1228) {
            # 518 "tcc.c"
            # 514 "tcc.c"
            if(_if_conditional1229=tcc_add_library(s_981,filename_989+2)<0,            _if_conditional1229) {
                # 515 "tcc.c"
                error_noabort("cannot find %s",filename_989);
                # 516 "tcc.c"
                ret_983=1;
            }
        }
        else {
            # 520 "tcc.c"
            # 519 "tcc.c"
            if(_if_conditional1230=1==s_981->verbose,            _if_conditional1230) {
                # 520 "tcc.c"
                printf("-> %s\n",filename_989);
            }
            # 523 "tcc.c"
            # 521 "tcc.c"
            if(_if_conditional1231=tcc_add_file(s_981,filename_989)<0,            _if_conditional1231) {
                # 522 "tcc.c"
                ret_983=1;
            }
        }
    }
    # 527 "tcc.c"
    tcc_free(files);
    # 530 "tcc.c"
    # 529 "tcc.c"
    if(ret_983) {
        # 530 "tcc.c"
        goto the_end;
    }
    # 533 "tcc.c"
    # 532 "tcc.c"
    if(do_bench) {
        # 533 "tcc.c"
        tcc_print_stats(s_981,getclock_us()-start_time_986);
    }
    # 541 "tcc.c"
    # 535 "tcc.c"
    if(_if_conditional1234=s_981->output_type==4,    _if_conditional1234) {
        # 538 "tcc.c"
        # 536 "tcc.c"
        if(outfile) {
            # 537 "tcc.c"
            fclose(s_981->outfile);
        }
    }
    # 538 "tcc.c"
    else if(_elif_conditional219=s_981->output_type==0,    _elif_conditional219) {
        # 539 "tcc.c"
        ret_983=tcc_run(s_981,argc-optind_984,argv+optind_984);
    }
    else {
        # 541 "tcc.c"
        ret_983=tcc_output_file(s_981,outfile)?1:0;
    }
    # 544 "tcc.c"
    the_end:
    # 545 "tcc.c"
    # 544 "tcc.c"
    if(_if_conditional1236=!s_981->do_bounds_check,    _if_conditional1236) {
        # 545 "tcc.c"
        tcc_delete(s_981);
    }
    # 552 "tcc.c"
    __result225__ = ret_983;
    come_heap_final();
    return __result225__;
come_heap_final();
}

