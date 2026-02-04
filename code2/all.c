/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef long  int  ssize_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef long  int  time_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  long    ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX3 __sigset_t;

typedef struct anonymous_typeX3  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX4 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ5 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX7 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ8 pthread_mutexattr_t;

typedef union anonymous_typeZ9 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ10 pthread_mutex_t;

typedef union anonymous_typeZ11 pthread_cond_t;

typedef union anonymous_typeZ12 pthread_rwlock_t;

typedef union anonymous_typeZ13 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ14 pthread_barrier_t;

typedef union anonymous_typeZ15 pthread_barrierattr_t;

typedef union sigval  __sigval_t  ;

typedef struct sigevent  sigevent_t  ;

typedef __builtin_va_list __gnuc_va_list;

typedef struct anonymous_typeX20 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef int error_t;

typedef int (*argp_parser_t)(int,char*,struct argp_state* );

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef char  int_least8_t  ;

typedef short int  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long  int  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  int  uint_least64_t  ;

typedef char int_fast8_t;

typedef long  int int_fast16_t;

typedef long  int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast16_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int  intmax_t  ;

typedef unsigned long  int  uintmax_t  ;

typedef unsigned int  chtype  ;

typedef unsigned int  mmask_t  ;

typedef __builtin_va_list va_list;

typedef long ptrdiff_t;

typedef struct anonymous_typeX23 max_align_t;

typedef unsigned char NCURSES_BOOL;

typedef struct screen SCREEN;

typedef struct _win_st WINDOW;

typedef unsigned int  attr_t  ;

typedef unsigned int wint_t;

typedef struct anonymous_typeX20  mbstate_t  ;

typedef struct anonymous_typeX24 cchar_t;

typedef int (*NCURSES_OUTC)(int);

typedef int (*NCURSES_WINDOW_CB)(struct _win_st* ,void*);

typedef int (*NCURSES_SCREEN_CB)(struct screen* ,void*);

typedef int (*NCURSES_OUTC_sp)(struct screen* ,int);

typedef struct anonymous_typeX25 MEVENT;

typedef struct __dirstream DIR;

typedef long  int Lmid_t;

typedef struct anonymous_typeX26 Dl_info;

typedef struct anonymous_typeX27 Dl_serpath;

typedef struct anonymous_typeX28 Dl_serinfo;

typedef unsigned short int  Elf32_Half  ;

typedef unsigned short int  Elf64_Half  ;

typedef unsigned int  Elf32_Word  ;

typedef int  Elf32_Sword  ;

typedef unsigned int  Elf64_Word  ;

typedef int  Elf64_Sword  ;

typedef unsigned long  int  Elf32_Xword  ;

typedef long  int  Elf32_Sxword  ;

typedef unsigned long  int  Elf64_Xword  ;

typedef long  int  Elf64_Sxword  ;

typedef unsigned int  Elf32_Addr  ;

typedef unsigned long  int  Elf64_Addr  ;

typedef unsigned int  Elf32_Off  ;

typedef unsigned long  int  Elf64_Off  ;

typedef unsigned short int  Elf32_Section  ;

typedef unsigned short int  Elf64_Section  ;

typedef unsigned short int  Elf32_Versym  ;

typedef unsigned short int  Elf64_Versym  ;

typedef struct anonymous_typeX31 Elf32_Ehdr;

typedef struct anonymous_typeX32 Elf64_Ehdr;

typedef struct anonymous_typeX33 Elf32_Shdr;

typedef struct anonymous_typeX34 Elf64_Shdr;

typedef struct anonymous_typeX35 Elf32_Chdr;

typedef struct anonymous_typeX36 Elf64_Chdr;

typedef struct anonymous_typeX37 Elf32_Sym;

typedef struct anonymous_typeX38 Elf64_Sym;

typedef struct anonymous_typeX39 Elf32_Syminfo;

typedef struct anonymous_typeX40 Elf64_Syminfo;

typedef struct anonymous_typeX41 Elf32_Rel;

typedef struct anonymous_typeX42 Elf64_Rel;

typedef struct anonymous_typeX43 Elf32_Rela;

typedef struct anonymous_typeX44 Elf64_Rela;

typedef unsigned int  Elf32_Relr  ;

typedef unsigned long  int  Elf64_Relr  ;

typedef struct anonymous_typeX45 Elf32_Phdr;

typedef struct anonymous_typeX46 Elf64_Phdr;

typedef struct anonymous_typeX47 Elf32_Dyn;

typedef struct anonymous_typeX50 Elf64_Dyn;

typedef struct anonymous_typeX53 Elf32_Verdef;

typedef struct anonymous_typeX54 Elf64_Verdef;

typedef struct anonymous_typeX55 Elf32_Verdaux;

typedef struct anonymous_typeX56 Elf64_Verdaux;

typedef struct anonymous_typeX57 Elf32_Verneed;

typedef struct anonymous_typeX58 Elf64_Verneed;

typedef struct anonymous_typeX59 Elf32_Vernaux;

typedef struct anonymous_typeX60 Elf64_Vernaux;

typedef struct anonymous_typeX61 Elf32_auxv_t;

typedef struct anonymous_typeX64 Elf64_auxv_t;

typedef struct anonymous_typeX67 Elf32_Nhdr;

typedef struct anonymous_typeX68 Elf64_Nhdr;

typedef struct anonymous_typeX69 Elf32_Move;

typedef struct anonymous_typeX70 Elf64_Move;

typedef union anonymous_typeZ71 Elf32_gptab;

typedef struct anonymous_typeX74 Elf32_RegInfo;

typedef struct anonymous_typeX75 Elf_Options;

typedef struct anonymous_typeX76 Elf_Options_Hw;

typedef struct anonymous_typeX77 Elf32_Lib;

typedef struct anonymous_typeX78 Elf64_Lib;

typedef unsigned int  Elf32_Conflict  ;

typedef struct anonymous_typeX79 Elf_MIPS_ABIFlags_v0;

typedef unsigned short int fexcept_t;

typedef struct anonymous_typeX80 fenv_t;

typedef struct anonymous_typeX81 femode_t;

typedef void* FIELD_CELL;

typedef int Form_Options;

typedef int Field_Options;

typedef struct pagenode _PAGE;

typedef struct fieldnode  FIELD  ;

typedef struct formnode  FORM  ;

typedef struct typenode FIELDTYPE;

typedef void (*Form_Hook)(struct formnode* );

typedef unsigned int __attribute__ ((__mode__ (__HI__))) fpu_control_t __attribute__ ((__mode__ (__HI__)));

typedef struct anonymous_typeX82 FTS;

typedef struct anonymous_typeX83 FTS64;

typedef struct _ftsent  FTSENT  ;

typedef struct _ftsent64  FTSENT64  ;

typedef int (*__ftw_func_t)(const char*,const struct stat* ,int);

typedef int (*__ftw64_func_t)(const char*,const struct stat64* ,int);

typedef int (*__nftw_func_t)(const char*,const struct stat* ,int,struct FTW* );

typedef int (*__nftw64_func_t)(const char*,const struct stat64* ,int,struct FTW* );

typedef int (*__gconv_fct)(struct __gconv_step* ,struct __gconv_step_data* ,const unsigned char**,const unsigned char*,unsigned char**,unsigned long* ,int,int);

typedef unsigned int (*__gconv_btowc_fct)(struct __gconv_step* ,unsigned char);

typedef int (*__gconv_init_fct)(struct __gconv_step* );

typedef void (*__gconv_end_fct)(struct __gconv_step* );

typedef struct __gconv_info*  __gconv_t  ;

typedef unsigned long  int __size_t;

typedef unsigned long  long    ;

typedef struct anonymous_typeX84 glob_t;

typedef struct anonymous_typeX85 glob64_t;

typedef struct anonymous_typeX86 gmk_floc;

typedef char* (*gmk_func_ptr)(const char*,unsigned int,char**);

typedef void* iconv_t;

typedef unsigned int  socklen_t  ;

typedef unsigned short int sa_family_t;

typedef struct anonymous_typeX93 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef unsigned long  int __kernel_old_dev_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int  __kernel_ino_t  ;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long  __kernel_suseconds_t  ;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned long  int  __kernel_size_t  ;

typedef long  __kernel_ssize_t  ;

typedef long  __kernel_ptrdiff_t  ;

typedef struct anonymous_typeX94 __kernel_fsid_t;

typedef long  __kernel_off_t  ;

typedef long long __kernel_loff_t;

typedef long  __kernel_old_time_t  ;

typedef long  __kernel_time_t  ;

typedef long long __kernel_time64_t;

typedef long  __kernel_clock_t  ;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef struct sockaddr* __restrict  __SOCKADDR_ARG  ;

typedef const struct sockaddr* __restrict  __CONST_SOCKADDR_ARG  ;

typedef int wchar_t;

typedef struct anonymous_typeX97 imaxdiv_t;

typedef void* nl_catd;

typedef int nl_item;

typedef enum __itimer_which __itimer_which_t;

typedef float float_t;

typedef double double_t;

typedef int Menu_Options;

typedef int Item_Options;

typedef struct tagITEM ITEM;

typedef void (*Menu_Hook)(struct tagMENU* );

typedef struct tagMENU  MENU  ;

typedef int mqd_t;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef enum nss_status (*nss_endaliasent)();

typedef enum nss_status (*nss_endetherent)();

typedef enum nss_status (*nss_endgrent)();

typedef enum nss_status (*nss_endhostent)();

typedef enum nss_status (*nss_endnetent)();

typedef enum nss_status (*nss_endnetgrent)(struct __netgrent* );

typedef enum nss_status (*nss_endprotoent)();

typedef enum nss_status (*nss_endpwent)();

typedef enum nss_status (*nss_endrpcent)();

typedef enum nss_status (*nss_endservent)();

typedef enum nss_status (*nss_endsgent)();

typedef enum nss_status (*nss_endspent)();

typedef enum nss_status (*nss_getaliasbyname_r)(const char*,struct aliasent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getaliasent_r)(struct aliasent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getcanonname_r)(const char*,char*,unsigned long ,char**,int*,int*);

typedef enum nss_status (*nss_getetherent_r)(struct etherent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getgrent_r)(struct group* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getgrgid_r)(unsigned int ,struct group* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getgrnam_r)(const char*,struct group* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_gethostbyaddr2_r)(const void*,unsigned int ,int,struct hostent* ,char*,unsigned long ,int*,int*,int* );

typedef enum nss_status (*nss_gethostbyaddr_r)(const void*,unsigned int ,int,struct hostent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_gethostbyname2_r)(const char*,int,struct hostent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_gethostbyname3_r)(const char*,int,struct hostent* ,char*,unsigned long ,int*,int*,int* ,char**);

typedef enum nss_status (*nss_gethostbyname4_r)(const char*,struct gaih_addrtuple** ,char*,unsigned long ,int*,int*,int* );

typedef enum nss_status (*nss_gethostbyname_r)(const char*,struct hostent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_gethostent_r)(struct hostent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_gethostton_r)(const char*,struct etherent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getnetbyaddr_r)(unsigned int ,int,struct netent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_getnetbyname_r)(const char*,struct netent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_getnetent_r)(struct netent* ,char*,unsigned long ,int*,int*);

typedef enum nss_status (*nss_getnetgrent_r)(struct __netgrent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getntohost_r)(const struct ether_addr* ,struct etherent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getprotobyname_r)(const char*,struct protoent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getprotobynumber_r)(int,struct protoent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getprotoent_r)(struct protoent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getpublickey)(const char*,char*,int*);

typedef enum nss_status (*nss_getpwent_r)(struct passwd* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getpwnam_r)(const char*,struct passwd* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getpwuid_r)(unsigned int ,struct passwd* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getrpcbyname_r)(const char*,struct rpcent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getrpcbynumber_r)(int,struct rpcent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getrpcent_r)(struct rpcent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getsecretkey)(const char*,char*,char*,int*);

typedef enum nss_status (*nss_getservbyname_r)(const char*,const char*,struct servent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getservbyport_r)(int,const char*,struct servent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getservent_r)(struct servent* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getsgent_r)(struct sgrp* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getsgnam_r)(const char*,struct sgrp* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getspent_r)(struct spwd* ,char*,unsigned long ,int*);

typedef enum nss_status (*nss_getspnam_r)(const char*,struct spwd* ,char*,unsigned long ,int*);

typedef void (*nss_init)(void (*)(unsigned long ,struct traced_file* ));

typedef enum nss_status (*nss_initgroups_dyn)(const char*,unsigned int ,long  int*,long  int*,unsigned int** ,long  int,int*);

typedef enum nss_status (*nss_netname2user)(char,unsigned int* ,unsigned int* ,int*,unsigned int* ,int*);

typedef enum nss_status (*nss_setaliasent)();

typedef enum nss_status (*nss_setetherent)(int);

typedef enum nss_status (*nss_setgrent)(int);

typedef enum nss_status (*nss_sethostent)(int);

typedef enum nss_status (*nss_setnetent)(int);

typedef enum nss_status (*nss_setnetgrent)(const char*,struct __netgrent* );

typedef enum nss_status (*nss_setprotoent)(int);

typedef enum nss_status (*nss_setpwent)(int);

typedef enum nss_status (*nss_setrpcent)(int);

typedef enum nss_status (*nss_setservent)(int);

typedef enum nss_status (*nss_setsgent)(int);

typedef enum nss_status (*nss_setspent)(int);

typedef struct panel PANEL;

typedef unsigned long  int nfds_t;

typedef int (*printf_function)(struct _IO_FILE* ,const struct printf_info* ,const void** const);

typedef int (*printf_arginfo_size_function)(const struct printf_info* ,unsigned long ,int*,int*);

typedef int (*printf_arginfo_function)(const struct printf_info* ,unsigned long ,int*);

typedef void (*printf_va_arg_function)(void*,__builtin_va_list* );

typedef unsigned long  long elf_greg_t;

typedef struct user_fpregs_struct  elf_fpregset_t  ;

typedef unsigned int __pr_uid_t;

typedef unsigned int __pr_gid_t;

typedef void* psaddr_t;

typedef struct user_fpregs_struct  __prfpregset_t  ;

typedef struct user_fpregs_struct  prfpregset_t  ;

typedef int  lwpid_t  ;

typedef struct elf_prstatus  prstatus_t  ;

typedef struct elf_prpsinfo  prpsinfo_t  ;

typedef enum anonymous_typeY107 ps_err_e;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef unsigned short int  __le16  ;

typedef unsigned short int  __be16  ;

typedef unsigned int  __le32  ;

typedef unsigned int  __be32  ;

typedef unsigned long  long  __le64  ;

typedef unsigned long  long  __be64  ;

typedef unsigned short int  __sum16  ;

typedef unsigned int  __wsum  ;

typedef unsigned int __poll_t;

typedef unsigned long  int __cpu_mask;

typedef struct anonymous_typeX108 cpu_set_t;

typedef struct anonymous_typeX109 __attribute__ ((__aligned__)) __pthread_unwind_buf_t __attribute__ ((__aligned__));

typedef unsigned char cc_t;

typedef unsigned int speed_t;

typedef unsigned int tcflag_t;

typedef unsigned int  baud_t  ;

typedef unsigned int __re_size_t;

typedef unsigned long  int __re_long_size_t;

typedef long  int s_reg_t;

typedef unsigned long  int active_reg_t;

typedef unsigned long  int reg_syntax_t;

typedef enum anonymous_typeY113 reg_errcode_t;

typedef struct re_pattern_buffer  regex_t  ;

typedef int regoff_t;

typedef struct anonymous_typeX114 regmatch_t;

typedef int  sig_atomic_t  ;

typedef struct anonymous_typeX115 siginfo_t;

typedef union sigval  sigval_t  ;

typedef void (*__sighandler_t)(int);

typedef void (*sighandler_t)(int)  ;

typedef void (*sig_t)(int)  ;

typedef struct anonymous_typeX144 stack_t;

typedef long long int greg_t;

typedef struct _libc_fpstate*  fpregset_t  ;

typedef struct anonymous_typeX145 mcontext_t;

typedef struct ucontext_t  ucontext_t  ;

typedef enum __ns_sect ns_sect;

typedef struct __ns_msg  ns_msg  ;

typedef struct __ns_rr  ns_rr  ;

typedef enum __ns_flag ns_flag;

typedef enum __ns_opcode ns_opcode;

typedef enum __ns_rcode ns_rcode;

typedef enum __ns_update_operation ns_update_operation;

typedef struct ns_tsig_key  ns_tsig_key  ;

typedef struct ns_tcp_tsig_state  ns_tcp_tsig_state  ;

typedef enum __ns_type ns_type;

typedef enum __ns_class ns_class;

typedef enum __ns_cert_types ns_cert_types;

typedef struct anonymous_typeX146 HEADER;

typedef struct __res_state*  res_state  ;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef enum anonymous_typeY152 ACTION;

typedef struct entry  ENTRY  ;

typedef enum anonymous_typeY152 VISIT;

typedef void (*__action_fn_t)(const void*,enum anonymous_typeY152 ,int);

typedef void (*__free_fn_t)(void*);

typedef union anonymous_typeZ153 sem_t;

typedef struct anonymous_typeX154 posix_spawnattr_t;

typedef struct anonymous_typeX155 posix_spawn_file_actions_t;

typedef struct anonymous_typeX156 div_t;

typedef struct anonymous_typeX157 ldiv_t;

typedef struct anonymous_typeX158 lldiv_t;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef struct termtype  TERMTYPE  ;

typedef struct term  TERMINAL  ;

typedef enum anonymous_typeY158 td_err_e;

typedef enum anonymous_typeY158 td_thr_state_e;

typedef enum anonymous_typeY158 td_thr_type_e;

typedef struct td_thragent td_thragent_t;

typedef struct td_thrhandle  td_thrhandle_t  ;

typedef struct td_thr_events  td_thr_events_t  ;

typedef enum anonymous_typeY158 td_event_e;

typedef enum anonymous_typeY158 td_notify_e;

typedef struct td_notify  td_notify_t  ;

typedef struct td_event_msg  td_event_msg_t  ;

typedef struct anonymous_typeX163 td_eventbuf_t;

typedef struct td_ta_stats  td_ta_stats_t  ;

typedef unsigned long  int  thread_t  ;

typedef unsigned int  thread_key_t  ;

typedef int (*td_thr_iter_f)(const struct td_thrhandle* ,void*);

typedef int (*td_key_iter_f)(unsigned int ,void (*)(void*),void*);

typedef struct td_thrinfo  td_thrinfo_t  ;

typedef unsigned int  tss_t  ;

typedef void (*tss_dtor_t)(void*);

typedef unsigned long  int  thrd_t  ;

typedef int (*thrd_start_t)(void*);

typedef struct anonymous_typeX7  once_flag  ;

typedef union anonymous_typeZ164 mtx_t;

typedef union anonymous_typeZ165 cnd_t;

typedef unsigned char char8_t;

typedef unsigned short int  char16_t  ;

typedef unsigned int  char32_t  ;

typedef enum anonymous_typeY167 idtype_t;

typedef unsigned long  int wctype_t;

typedef const int*  wctrans_t  ;

typedef struct anonymous_typeX168 wordexp_t;

typedef unsigned int  Elf_Symndx  ;

typedef float __attribute__ ((__mode__ (__V4SF__))) La_x86_64_xmm __attribute__ ((__mode__ (__V4SF__)));

typedef union anonymous_typeZ169 __attribute__ ((__aligned__ (16))) La_x86_64_vector __attribute__ ((__aligned__ (16)));

typedef struct La_x86_64_regs  La_x86_64_regs  ;

typedef struct La_x86_64_retval  La_x86_64_retval  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct argp;

struct argp_state;

struct argp_child;

struct tm;

struct __gconv_step;

struct __gconv_step_data;

struct __gconv_loaded_object;

struct stat;

struct stat64;

struct tagMENU;

struct cmsghdr;

struct __netgrent;

struct aliasent;

struct ether_addr;

struct etherent;

struct group;

struct hostent;

struct netent;

struct passwd;

struct protoent;

struct rpcent;

struct servent;

struct sgrp;

struct spwd;

struct traced_file;

struct sigevent;

struct termios;

struct winsize;

struct _ENTRY;

struct sgttyb;

struct link_map;

struct ps_prochandle;

struct utmp;

struct rusage;

/// struct definition ///
struct exec
{
    unsigned long  int a_info;
    unsigned int a_text;
    unsigned int a_data;
    unsigned int a_bss;
    unsigned int a_syms;
    unsigned int a_entry;
    unsigned int a_trsize;
    unsigned int a_drsize;
};

enum  machine_type { M_OLDSUN2=(0),
M_68010=(1),
M_68020=(2),
M_SPARC=(3),
M_386=(100),
M_MIPS1=(151),
M_MIPS2=(152)
};

union anonymous_typeZ1
{
char* n_name;
struct nlist*  n_next  ;
long n_strx;
};

union anonymous_typeZ2
{
char* n_name;
struct nlist*  n_next  ;
long n_strx;
};

struct nlist
{
    union {
        char* n_name;
        struct nlist*  n_next  ;
        long n_strx;
    } n_un;
    unsigned char n_type;
    char n_other;
    short n_desc;
    unsigned long  int n_value;
};

struct relocation_info
{
    int r_address;
    unsigned int r_symbolnum:24;
    unsigned int r_pcrel:1;
    unsigned int r_length:2;
    unsigned int r_extern:1;
    unsigned int r_pad:4;
};

struct __fsid_t
{
    int __val[2];
};

struct anonymous_typeX3
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX4
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct anonymous_typeX6
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ5
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list*  __prev  ;
    struct __pthread_internal_list*  __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist*  __next  ;
};

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list  __list  ;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __wseq;
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
};

struct anonymous_typeX7
{
    int __data;
};

union anonymous_typeZ8
{
char __size[4];
int __align;
};

union anonymous_typeZ9
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ10
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ11
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ12
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ13
{
char __size[8];
long  int __align;
};

union anonymous_typeZ14
{
char __size[32];
long  int __align;
};

union anonymous_typeZ15
{
char __size[4];
int __align;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX17
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ16
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX19
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ18
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct sigevent
{
    union sigval  sigev_value  ;
    int sigev_signo;
    int sigev_notify;
    union {
        int _pad[((64/sizeof(int))-4)];
        int  _tid  ;
        struct {
            void (*_function)(union sigval );
            union pthread_attr_t*  _attribute  ;
        } _sigev_thread;
    } _sigev_un;
};

enum { SIGEV_SIGNAL=(0),
SIGEV_NONE 
,SIGEV_THREAD 
,SIGEV_THREAD_ID=(4)
};

struct aiocb
{
    int aio_fildes;
    int aio_lio_opcode;
    int aio_reqprio;
    volatile void* aio_buf;
    unsigned long  aio_nbytes  ;
    struct sigevent  aio_sigevent  ;
    struct aiocb*  __next_prio  ;
    int __abs_prio;
    int __policy;
    int __error_code;
    long  int  __return_value  ;
    long  int  aio_offset  ;
    char __pad[sizeof(long  int )-sizeof(long  int )];
    char __glibc_reserved[32];
};

struct aiocb64
{
    int aio_fildes;
    int aio_lio_opcode;
    int aio_reqprio;
    volatile void* aio_buf;
    unsigned long  aio_nbytes  ;
    struct sigevent  aio_sigevent  ;
    struct aiocb*  __next_prio  ;
    int __abs_prio;
    int __policy;
    int __error_code;
    long  int  __return_value  ;
    long  int  aio_offset  ;
    char __glibc_reserved[32];
};

struct aioinit
{
    int aio_threads;
    int aio_num;
    int aio_locks;
    int aio_usedba;
    int aio_debug;
    int aio_numusers;
    int aio_idle_time;
    int aio_reserved;
};

enum { AIO_CANCELED 
,AIO_NOTCANCELED 
,AIO_ALLDONE 
};

enum { LIO_READ 
,LIO_WRITE 
,LIO_NOP 
};

enum { LIO_WAIT 
,LIO_NOWAIT 
};

struct aliasent
{
    char* alias_name;
    unsigned long  alias_members_len  ;
    char** alias_members;
    int alias_local;
};

struct ar_hdr
{
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
};

union anonymous_typeZ21
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ22
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX20
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _G_fpos64_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker*  _markers  ;
    struct _IO_FILE*  _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int  _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void*  _lock  ;
    long  int  _offset  ;
    struct _IO_codecvt*  _codecvt  ;
    struct _IO_wide_data*  _wide_data  ;
    struct _IO_FILE*  _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE**  _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int  _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct option
{
    const char* name;
    int has_arg;
    int* flag;
    int val;
};

struct argp_option
{
    const char* name;
    int key;
    const char* arg;
    int flags;
    const char* doc;
    int group;
};

struct argp
{
    const struct argp_option*  options  ;
    int (*parser)(int,char*,struct argp_state* )  ;
    const char* args_doc;
    const char* doc;
    const struct argp_child*  children  ;
    char* (*help_filter)(int,const char*,void*);
    const char* argp_domain;
};

struct argp_child
{
    const struct argp*  argp  ;
    int flags;
    const char* header;
    int group;
};

struct argp_state
{
    const struct argp*  root_argp  ;
    int argc;
    char** argv;
    int next;
    unsigned int flags;
    unsigned int arg_num;
    int quoted;
    void* input;
    void** child_inputs;
    void* hook;
    char* name;
    struct _IO_FILE*  err_stream  ;
    struct _IO_FILE*  out_stream  ;
    void* pstate;
};

struct crypt_data
{
    char output[384];
    char setting[384];
    char input[512];
    char reserved[767];
    char initialized;
    char internal[30720];
};

struct anonymous_typeX23
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

struct anonymous_typeX24
{
    unsigned int  attr  ;
    int  chars[5]  ;
    int ext_color;
};

struct anonymous_typeX25
{
    short id;
    int x;
    int y;
    int z;
    unsigned int  bstate  ;
};

struct dirent
{
    unsigned long  int  d_ino  ;
    long  int  d_off  ;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct dirent64
{
    unsigned long  int  d_ino  ;
    long  int  d_off  ;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

enum { DT_UNKNOWN=(0),
DT_FIFO=(1),
DT_CHR=(2),
DT_DIR=(4),
DT_BLK=(6),
DT_REG=(8),
DT_LNK=(10),
DT_SOCK=(12),
DT_WHT=(14)
};

struct anonymous_typeX26
{
    const char* dli_fname;
    void* dli_fbase;
    const char* dli_sname;
    void* dli_saddr;
};

enum { RTLD_DL_SYMENT=(1),
RTLD_DL_LINKMAP=(2)
};

enum { RTLD_DI_LMID=(1),
RTLD_DI_LINKMAP=(2),
RTLD_DI_CONFIGADDR=(3),
RTLD_DI_SERINFO=(4),
RTLD_DI_SERINFOSIZE=(5),
RTLD_DI_ORIGIN=(6),
RTLD_DI_PROFILENAME=(7),
RTLD_DI_PROFILEOUT=(8),
RTLD_DI_TLS_MODID=(9),
RTLD_DI_TLS_DATA=(10),
RTLD_DI_PHDR=(11),
RTLD_DI_MAX=(11)
};

struct anonymous_typeX27
{
    char* dls_name;
    unsigned int dls_flags;
};

union anonymous_typeZ29
{
    struct {
        char* dls_name;
        unsigned int dls_flags;
    } dls_serpath;
    struct {
        char* dls_name;
        unsigned int dls_flags;
    } __dls_serpath_pad;
};

union anonymous_typeZ30
{
    struct {
        char* dls_name;
        unsigned int dls_flags;
    } dls_serpath;
    struct {
        char* dls_name;
        unsigned int dls_flags;
    } __dls_serpath_pad;
};

struct anonymous_typeX28
{
    unsigned long  dls_size  ;
    unsigned int dls_cnt;
    union {
        struct {
            char* dls_name;
            unsigned int dls_flags;
        } dls_serpath;
        struct {
            char* dls_name;
            unsigned int dls_flags;
        } __dls_serpath_pad;
    };
};

struct dl_find_object
{
    unsigned long long int dlfo_flags;
    void* dlfo_map_start;
    void* dlfo_map_end;
    struct link_map* dlfo_link_map;
    void* dlfo_eh_frame;
    void* dlfo_sframe;
    unsigned long long int __dlfo_reserved[6];
};

struct anonymous_typeX31
{
    unsigned char e_ident[(16)];
    unsigned short int  e_type  ;
    unsigned short int  e_machine  ;
    unsigned int  e_version  ;
    unsigned int  e_entry  ;
    unsigned int  e_phoff  ;
    unsigned int  e_shoff  ;
    unsigned int  e_flags  ;
    unsigned short int  e_ehsize  ;
    unsigned short int  e_phentsize  ;
    unsigned short int  e_phnum  ;
    unsigned short int  e_shentsize  ;
    unsigned short int  e_shnum  ;
    unsigned short int  e_shstrndx  ;
};

struct anonymous_typeX32
{
    unsigned char e_ident[(16)];
    unsigned short int  e_type  ;
    unsigned short int  e_machine  ;
    unsigned int  e_version  ;
    unsigned long  int  e_entry  ;
    unsigned long  int  e_phoff  ;
    unsigned long  int  e_shoff  ;
    unsigned int  e_flags  ;
    unsigned short int  e_ehsize  ;
    unsigned short int  e_phentsize  ;
    unsigned short int  e_phnum  ;
    unsigned short int  e_shentsize  ;
    unsigned short int  e_shnum  ;
    unsigned short int  e_shstrndx  ;
};

struct anonymous_typeX33
{
    unsigned int  sh_name  ;
    unsigned int  sh_type  ;
    unsigned int  sh_flags  ;
    unsigned int  sh_addr  ;
    unsigned int  sh_offset  ;
    unsigned int  sh_size  ;
    unsigned int  sh_link  ;
    unsigned int  sh_info  ;
    unsigned int  sh_addralign  ;
    unsigned int  sh_entsize  ;
};

struct anonymous_typeX34
{
    unsigned int  sh_name  ;
    unsigned int  sh_type  ;
    unsigned long  int  sh_flags  ;
    unsigned long  int  sh_addr  ;
    unsigned long  int  sh_offset  ;
    unsigned long  int  sh_size  ;
    unsigned int  sh_link  ;
    unsigned int  sh_info  ;
    unsigned long  int  sh_addralign  ;
    unsigned long  int  sh_entsize  ;
};

struct anonymous_typeX35
{
    unsigned int  ch_type  ;
    unsigned int  ch_size  ;
    unsigned int  ch_addralign  ;
};

struct anonymous_typeX36
{
    unsigned int  ch_type  ;
    unsigned int  ch_reserved  ;
    unsigned long  int  ch_size  ;
    unsigned long  int  ch_addralign  ;
};

struct anonymous_typeX37
{
    unsigned int  st_name  ;
    unsigned int  st_value  ;
    unsigned int  st_size  ;
    unsigned char st_info;
    unsigned char st_other;
    unsigned short int  st_shndx  ;
};

struct anonymous_typeX38
{
    unsigned int  st_name  ;
    unsigned char st_info;
    unsigned char st_other;
    unsigned short int  st_shndx  ;
    unsigned long  int  st_value  ;
    unsigned long  int  st_size  ;
};

struct anonymous_typeX39
{
    unsigned short int  si_boundto  ;
    unsigned short int  si_flags  ;
};

struct anonymous_typeX40
{
    unsigned short int  si_boundto  ;
    unsigned short int  si_flags  ;
};

struct anonymous_typeX41
{
    unsigned int  r_offset  ;
    unsigned int  r_info  ;
};

struct anonymous_typeX42
{
    unsigned long  int  r_offset  ;
    unsigned long  int  r_info  ;
};

struct anonymous_typeX43
{
    unsigned int  r_offset  ;
    unsigned int  r_info  ;
    int  r_addend  ;
};

struct anonymous_typeX44
{
    unsigned long  int  r_offset  ;
    unsigned long  int  r_info  ;
    long  int  r_addend  ;
};

struct anonymous_typeX45
{
    unsigned int  p_type  ;
    unsigned int  p_offset  ;
    unsigned int  p_vaddr  ;
    unsigned int  p_paddr  ;
    unsigned int  p_filesz  ;
    unsigned int  p_memsz  ;
    unsigned int  p_flags  ;
    unsigned int  p_align  ;
};

struct anonymous_typeX46
{
    unsigned int  p_type  ;
    unsigned int  p_flags  ;
    unsigned long  int  p_offset  ;
    unsigned long  int  p_vaddr  ;
    unsigned long  int  p_paddr  ;
    unsigned long  int  p_filesz  ;
    unsigned long  int  p_memsz  ;
    unsigned long  int  p_align  ;
};

union anonymous_typeZ48
{
unsigned int  d_val  ;
unsigned int  d_ptr  ;
};

union anonymous_typeZ49
{
unsigned int  d_val  ;
unsigned int  d_ptr  ;
};

struct anonymous_typeX47
{
    int  d_tag  ;
    union {
        unsigned int  d_val  ;
        unsigned int  d_ptr  ;
    } d_un;
};

union anonymous_typeZ51
{
unsigned long  int  d_val  ;
unsigned long  int  d_ptr  ;
};

union anonymous_typeZ52
{
unsigned long  int  d_val  ;
unsigned long  int  d_ptr  ;
};

struct anonymous_typeX50
{
    long  int  d_tag  ;
    union {
        unsigned long  int  d_val  ;
        unsigned long  int  d_ptr  ;
    } d_un;
};

struct anonymous_typeX53
{
    unsigned short int  vd_version  ;
    unsigned short int  vd_flags  ;
    unsigned short int  vd_ndx  ;
    unsigned short int  vd_cnt  ;
    unsigned int  vd_hash  ;
    unsigned int  vd_aux  ;
    unsigned int  vd_next  ;
};

struct anonymous_typeX54
{
    unsigned short int  vd_version  ;
    unsigned short int  vd_flags  ;
    unsigned short int  vd_ndx  ;
    unsigned short int  vd_cnt  ;
    unsigned int  vd_hash  ;
    unsigned int  vd_aux  ;
    unsigned int  vd_next  ;
};

struct anonymous_typeX55
{
    unsigned int  vda_name  ;
    unsigned int  vda_next  ;
};

struct anonymous_typeX56
{
    unsigned int  vda_name  ;
    unsigned int  vda_next  ;
};

struct anonymous_typeX57
{
    unsigned short int  vn_version  ;
    unsigned short int  vn_cnt  ;
    unsigned int  vn_file  ;
    unsigned int  vn_aux  ;
    unsigned int  vn_next  ;
};

struct anonymous_typeX58
{
    unsigned short int  vn_version  ;
    unsigned short int  vn_cnt  ;
    unsigned int  vn_file  ;
    unsigned int  vn_aux  ;
    unsigned int  vn_next  ;
};

struct anonymous_typeX59
{
    unsigned int  vna_hash  ;
    unsigned short int  vna_flags  ;
    unsigned short int  vna_other  ;
    unsigned int  vna_name  ;
    unsigned int  vna_next  ;
};

struct anonymous_typeX60
{
    unsigned int  vna_hash  ;
    unsigned short int  vna_flags  ;
    unsigned short int  vna_other  ;
    unsigned int  vna_name  ;
    unsigned int  vna_next  ;
};

union anonymous_typeZ62
{
unsigned int  a_val  ;
};

union anonymous_typeZ63
{
unsigned int  a_val  ;
};

struct anonymous_typeX61
{
    unsigned int  a_type  ;
    union {
        unsigned int  a_val  ;
    } a_un;
};

union anonymous_typeZ65
{
unsigned long  int  a_val  ;
};

union anonymous_typeZ66
{
unsigned long  int  a_val  ;
};

struct anonymous_typeX64
{
    unsigned long  int  a_type  ;
    union {
        unsigned long  int  a_val  ;
    } a_un;
};

struct anonymous_typeX67
{
    unsigned int  n_namesz  ;
    unsigned int  n_descsz  ;
    unsigned int  n_type  ;
};

struct anonymous_typeX68
{
    unsigned int  n_namesz  ;
    unsigned int  n_descsz  ;
    unsigned int  n_type  ;
};

struct anonymous_typeX69
{
    unsigned long  int  m_value  ;
    unsigned int  m_info  ;
    unsigned int  m_poffset  ;
    unsigned short int  m_repeat  ;
    unsigned short int  m_stride  ;
};

struct anonymous_typeX70
{
    unsigned long  int  m_value  ;
    unsigned long  int  m_info  ;
    unsigned long  int  m_poffset  ;
    unsigned short int  m_repeat  ;
    unsigned short int  m_stride  ;
};

struct anonymous_typeX72
{
    unsigned int  gt_current_g_value  ;
    unsigned int  gt_unused  ;
};

struct anonymous_typeX73
{
    unsigned int  gt_g_value  ;
    unsigned int  gt_bytes  ;
};

union anonymous_typeZ71
{
    struct {
        unsigned int  gt_current_g_value  ;
        unsigned int  gt_unused  ;
    } gt_header;
    struct {
        unsigned int  gt_g_value  ;
        unsigned int  gt_bytes  ;
    } gt_entry;
};

struct anonymous_typeX74
{
    unsigned int  ri_gprmask  ;
    unsigned int  ri_cprmask[4]  ;
    int  ri_gp_value  ;
};

struct anonymous_typeX75
{
    unsigned char kind;
    unsigned char size;
    unsigned short int  section  ;
    unsigned int  info  ;
};

struct anonymous_typeX76
{
    unsigned int  hwp_flags1  ;
    unsigned int  hwp_flags2  ;
};

struct anonymous_typeX77
{
    unsigned int  l_name  ;
    unsigned int  l_time_stamp  ;
    unsigned int  l_checksum  ;
    unsigned int  l_version  ;
    unsigned int  l_flags  ;
};

struct anonymous_typeX78
{
    unsigned int  l_name  ;
    unsigned int  l_time_stamp  ;
    unsigned int  l_checksum  ;
    unsigned int  l_version  ;
    unsigned int  l_flags  ;
};

struct anonymous_typeX79
{
    unsigned short int  version  ;
    unsigned char isa_level;
    unsigned char isa_rev;
    unsigned char gpr_size;
    unsigned char cpr1_size;
    unsigned char cpr2_size;
    unsigned char fp_abi;
    unsigned int  isa_ext  ;
    unsigned int  ases  ;
    unsigned int  flags1  ;
    unsigned int  flags2  ;
};

enum { Val_GNU_MIPS_ABI_FP_ANY=(0),
Val_GNU_MIPS_ABI_FP_DOUBLE=(1),
Val_GNU_MIPS_ABI_FP_SINGLE=(2),
Val_GNU_MIPS_ABI_FP_SOFT=(3),
Val_GNU_MIPS_ABI_FP_OLD_64=(4),
Val_GNU_MIPS_ABI_FP_XX=(5),
Val_GNU_MIPS_ABI_FP_64=(6),
Val_GNU_MIPS_ABI_FP_64A=(7),
Val_GNU_MIPS_ABI_FP_MAX=(7)
};

struct flock
{
    short int l_type;
    short int l_whence;
    long  int  l_start  ;
    long  int  l_len  ;
    int  l_pid  ;
};

struct flock64
{
    short int l_type;
    short int l_whence;
    long  int  l_start  ;
    long  int  l_len  ;
    int  l_pid  ;
};

struct iovec
{
    void* iov_base;
    unsigned long  iov_len  ;
};

enum  __pid_type { F_OWNER_TID=(0),
F_OWNER_PID 
,F_OWNER_PGRP 
,F_OWNER_GID=((0+2))
};

struct f_owner_ex
{
    enum __pid_type type;
    int  pid  ;
};

struct file_handle
{
    unsigned int handle_bytes;
    int handle_type;
    unsigned char f_handle[0];
};

struct stat
{
    unsigned long  int  st_dev  ;
    unsigned long  int  st_ino  ;
    unsigned long  int  st_nlink  ;
    unsigned int  st_mode  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int __pad0;
    unsigned long  int  st_rdev  ;
    long  int  st_size  ;
    long  int  st_blksize  ;
    long  int  st_blocks  ;
    struct timespec  st_atim  ;
    struct timespec  st_mtim  ;
    struct timespec  st_ctim  ;
    long  int  __glibc_reserved[3]  ;
};

struct stat64
{
    unsigned long  int  st_dev  ;
    unsigned long  int  st_ino  ;
    unsigned long  int  st_nlink  ;
    unsigned int  st_mode  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int __pad0;
    unsigned long  int  st_rdev  ;
    long  int  st_size  ;
    long  int  st_blksize  ;
    long  int  st_blocks  ;
    struct timespec  st_atim  ;
    struct timespec  st_mtim  ;
    struct timespec  st_ctim  ;
    long  int  __glibc_reserved[3]  ;
};

enum { FE_INVALID=(0x01),
__FE_DENORM=(0x02),
FE_DIVBYZERO=(0x04),
FE_OVERFLOW=(0x08),
FE_UNDERFLOW=(0x10),
FE_INEXACT=(0x20)
};

enum { FE_TONEAREST=(0),
FE_DOWNWARD=(0x400),
FE_UPWARD=(0x800),
FE_TOWARDZERO=(0xc00)
};

struct anonymous_typeX80
{
    unsigned short int __control_word;
    unsigned short int __glibc_reserved1;
    unsigned short int __status_word;
    unsigned short int __glibc_reserved2;
    unsigned short int __tags;
    unsigned short int __glibc_reserved3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __glibc_reserved4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __glibc_reserved5;
    unsigned int __mxcsr;
};

struct anonymous_typeX81
{
    unsigned short int __control_word;
    unsigned short int __glibc_reserved;
    unsigned int __mxcsr;
};

enum { MM_HARD=(0x001),
MM_SOFT=(0x002),
MM_FIRM=(0x004),
MM_APPL=(0x008),
MM_UTIL=(0x010),
MM_OPSYS=(0x020),
MM_RECOVER=(0x040),
MM_NRECOV=(0x080),
MM_PRINT=(0x100),
MM_CONSOLE=(0x200)
};

enum { MM_NOSEV=(0),
MM_HALT 
,MM_ERROR 
,MM_WARNING 
,MM_INFO 
};

enum { MM_NOTOK=(-1),
MM_OK=(0),
MM_NOMSG=(1),
MM_NOCON=(4)
};

struct fieldnode
{
    unsigned short int status;
    short rows;
    short cols;
    short frow;
    short fcol;
    int drows;
    int dcols;
    int maxgrow;
    int nrow;
    short nbuf;
    short just;
    short page;
    short index;
    int pad;
    unsigned int  fore  ;
    unsigned int  back  ;
    int  opts  ;
    struct fieldnode*  snext  ;
    struct fieldnode*  sprev  ;
    struct fieldnode*  link  ;
    struct formnode* form;
    struct typenode* type;
    void* arg;
    void**  buf  ;
    void* usrptr;
};

struct formnode
{
    unsigned short int status;
    short rows;
    short cols;
    int currow;
    int curcol;
    int toprow;
    int begincol;
    short maxfield;
    short maxpage;
    short curpage;
    int  opts  ;
    struct _win_st*  win  ;
    struct _win_st*  sub  ;
    struct _win_st*  w  ;
    struct fieldnode**  field  ;
    struct fieldnode*  current  ;
    struct pagenode*  page  ;
    void* usrptr;
    void (*forminit)(struct formnode* );
    void (*formterm)(struct formnode* );
    void (*fieldinit)(struct formnode* );
    void (*fieldterm)(struct formnode* );
};

struct anonymous_typeX82
{
    struct _ftsent* fts_cur;
    struct _ftsent* fts_child;
    struct _ftsent** fts_array;
    unsigned long  int  fts_dev  ;
    char* fts_path;
    int fts_rfd;
    int fts_pathlen;
    int fts_nitems;
    int (*fts_compar)(const void*,const void*);
    int fts_options;
};

struct anonymous_typeX83
{
    struct _ftsent64* fts_cur;
    struct _ftsent64* fts_child;
    struct _ftsent64** fts_array;
    unsigned long  int  fts_dev  ;
    char* fts_path;
    int fts_rfd;
    int fts_pathlen;
    int fts_nitems;
    int (*fts_compar)(const void*,const void*);
    int fts_options;
};

struct _ftsent
{
    struct _ftsent*  fts_cycle  ;
    struct _ftsent*  fts_parent  ;
    struct _ftsent*  fts_link  ;
    long fts_number;
    void* fts_pointer;
    char* fts_accpath;
    char* fts_path;
    int fts_errno;
    int fts_symfd;
    unsigned short int fts_pathlen;
    unsigned short int fts_namelen;
    unsigned long  int  fts_ino  ;
    unsigned long  int  fts_dev  ;
    unsigned long  int  fts_nlink  ;
    short fts_level;
    unsigned short int fts_info;
    unsigned short int fts_flags;
    unsigned short int fts_instr;
    struct stat*  fts_statp  ;
    char fts_name[1];
};

struct _ftsent64
{
    struct _ftsent64*  fts_cycle  ;
    struct _ftsent64*  fts_parent  ;
    struct _ftsent64*  fts_link  ;
    long fts_number;
    void* fts_pointer;
    char* fts_accpath;
    char* fts_path;
    int fts_errno;
    int fts_symfd;
    unsigned short int fts_pathlen;
    unsigned short int fts_namelen;
    unsigned long  int  fts_ino  ;
    unsigned long  int  fts_dev  ;
    unsigned long  int  fts_nlink  ;
    short fts_level;
    unsigned short int fts_info;
    unsigned short int fts_flags;
    unsigned short int fts_instr;
    struct stat64*  fts_statp  ;
    char fts_name[1];
};

struct statx_timestamp
{
    long  int  tv_sec  ;
    unsigned int  tv_nsec  ;
    int  __statx_timestamp_pad1[1]  ;
};

struct statx
{
    unsigned int  stx_mask  ;
    unsigned int  stx_blksize  ;
    unsigned long  int  stx_attributes  ;
    unsigned int  stx_nlink  ;
    unsigned int  stx_uid  ;
    unsigned int  stx_gid  ;
    unsigned short int  stx_mode  ;
    unsigned short int  __statx_pad1[1]  ;
    unsigned long  int  stx_ino  ;
    unsigned long  int  stx_size  ;
    unsigned long  int  stx_blocks  ;
    unsigned long  int  stx_attributes_mask  ;
    struct statx_timestamp  stx_atime  ;
    struct statx_timestamp  stx_btime  ;
    struct statx_timestamp  stx_ctime  ;
    struct statx_timestamp  stx_mtime  ;
    unsigned int  stx_rdev_major  ;
    unsigned int  stx_rdev_minor  ;
    unsigned int  stx_dev_major  ;
    unsigned int  stx_dev_minor  ;
    unsigned long  int  __statx_pad2[14]  ;
};

enum { FTW_F 
,FTW_D 
,FTW_DNR 
,FTW_NS 
,FTW_SL 
,FTW_DP 
,FTW_SLN 
};

enum { FTW_PHYS=(1),
FTW_MOUNT=(2),
FTW_CHDIR=(4),
FTW_DEPTH=(8),
FTW_ACTIONRETVAL=(16)
};

enum { FTW_CONTINUE=(0),
FTW_STOP=(1),
FTW_SKIP_SUBTREE=(2),
FTW_SKIP_SIBLINGS=(3)
};

struct FTW
{
    int base;
    int level;
};

enum { __GCONV_OK=(0),
__GCONV_NOCONV 
,__GCONV_NODB 
,__GCONV_NOMEM 
,__GCONV_EMPTY_INPUT 
,__GCONV_FULL_OUTPUT 
,__GCONV_ILLEGAL_INPUT 
,__GCONV_INCOMPLETE_INPUT 
,__GCONV_ILLEGAL_DESCRIPTOR 
,__GCONV_INTERNAL_ERROR 
};

enum { __GCONV_IS_LAST=(0x0001),
__GCONV_IGNORE_ERRORS=(0x0002),
__GCONV_SWAP=(0x0004),
__GCONV_TRANSLIT=(0x0008)
};

struct __gconv_step
{
    struct __gconv_loaded_object*  __shlib_handle  ;
    const char* __modname;
    int __counter;
    char* __from_name;
    char* __to_name;
    int (*__fct)(struct __gconv_step* ,struct __gconv_step_data* ,const unsigned char**,const unsigned char*,unsigned char**,unsigned long* ,int,int)  ;
    unsigned int (*__btowc_fct)(struct __gconv_step* ,unsigned char)  ;
    int (*__init_fct)(struct __gconv_step* )  ;
    void (*__end_fct)(struct __gconv_step* )  ;
    int __min_needed_from;
    int __max_needed_from;
    int __min_needed_to;
    int __max_needed_to;
    int __stateful;
    void* __data;
};

struct __gconv_step_data
{
    unsigned char* __outbuf;
    unsigned char* __outbufend;
    int __flags;
    int __invocation_counter;
    int __internal_use;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __statep;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct __gconv_info
{
    unsigned long  __nsteps  ;
    struct __gconv_step*  __steps  ;
    struct __gconv_step_data  __data[0]  ;
};

struct anonymous_typeX84
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
    unsigned long  int  gl_offs  ;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char* __restrict,struct stat* __restrict );
    int (*gl_stat)(const char* __restrict,struct stat* __restrict );
};

struct anonymous_typeX85
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
    unsigned long  int  gl_offs  ;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent64* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char* __restrict,struct stat64* __restrict );
    int (*gl_stat)(const char* __restrict,struct stat64* __restrict );
};

struct anonymous_typeX86
{
    const char* filenm;
    unsigned long  int lineno;
};

struct group
{
    char* gr_name;
    char* gr_passwd;
    unsigned int  gr_gid  ;
    char** gr_mem;
};

struct sgrp
{
    char* sg_namp;
    char* sg_passwd;
    char** sg_adm;
    char** sg_mem;
};

struct anonymous_typeX87
{
    unsigned int mantissa:23;
    unsigned int exponent:8;
    unsigned int negative:1;
};

struct anonymous_typeX88
{
    unsigned int mantissa:22;
    unsigned int quiet_nan:1;
    unsigned int exponent:8;
    unsigned int negative:1;
};

union ieee754_float
{
float f;
    struct {
        unsigned int mantissa:23;
        unsigned int exponent:8;
        unsigned int negative:1;
    } ieee;
    struct {
        unsigned int mantissa:22;
        unsigned int quiet_nan:1;
        unsigned int exponent:8;
        unsigned int negative:1;
    } ieee_nan;
};

struct anonymous_typeX89
{
    unsigned int mantissa1:32;
    unsigned int mantissa0:20;
    unsigned int exponent:11;
    unsigned int negative:1;
};

struct anonymous_typeX90
{
    unsigned int mantissa1:32;
    unsigned int mantissa0:19;
    unsigned int quiet_nan:1;
    unsigned int exponent:11;
    unsigned int negative:1;
};

union ieee754_double
{
double d;
    struct {
        unsigned int mantissa1:32;
        unsigned int mantissa0:20;
        unsigned int exponent:11;
        unsigned int negative:1;
    } ieee;
    struct {
        unsigned int mantissa1:32;
        unsigned int mantissa0:19;
        unsigned int quiet_nan:1;
        unsigned int exponent:11;
        unsigned int negative:1;
    } ieee_nan;
};

struct anonymous_typeX91
{
    unsigned int mantissa1:32;
    unsigned int mantissa0:32;
    unsigned int exponent:15;
    unsigned int negative:1;
    unsigned int empty:16;
};

struct anonymous_typeX92
{
    unsigned int mantissa1:32;
    unsigned int mantissa0:30;
    unsigned int quiet_nan:1;
    unsigned int one:1;
    unsigned int exponent:15;
    unsigned int negative:1;
    unsigned int empty:16;
};

union ieee854_long_double
{
long  double d;
    struct {
        unsigned int mantissa1:32;
        unsigned int mantissa0:32;
        unsigned int exponent:15;
        unsigned int negative:1;
        unsigned int empty:16;
    } ieee;
    struct {
        unsigned int mantissa1:32;
        unsigned int mantissa0:30;
        unsigned int quiet_nan:1;
        unsigned int one:1;
        unsigned int exponent:15;
        unsigned int negative:1;
        unsigned int empty:16;
    } ieee_nan;
};

enum  __socket_type { SOCK_STREAM=(1),
SOCK_DGRAM=(2),
SOCK_RAW=(3),
SOCK_RDM=(4),
SOCK_SEQPACKET=(5),
SOCK_DCCP=(6),
SOCK_PACKET=(10),
SOCK_CLOEXEC=(02000000),
SOCK_NONBLOCK=(00004000)
};

struct sockaddr
{
    unsigned short int  sa_family  ;
    char sa_data[14];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_storage
{
    unsigned short int  ss_family  ;
    char __ss_padding[(128-(sizeof(unsigned short int))-sizeof(unsigned long  int))];
    unsigned long  int __ss_align;
} __attribute__ ((__may_alias__)) ;

enum { MSG_OOB=(0x01),
MSG_PEEK=(0x02),
MSG_DONTROUTE=(0x04),
MSG_TRYHARD=((0x04)),
MSG_CTRUNC=(0x08),
MSG_PROXY=(0x10),
MSG_TRUNC=(0x20),
MSG_DONTWAIT=(0x40),
MSG_EOR=(0x80),
MSG_WAITALL=(0x100),
MSG_FIN=(0x200),
MSG_SYN=(0x400),
MSG_CONFIRM=(0x800),
MSG_RST=(0x1000),
MSG_ERRQUEUE=(0x2000),
MSG_NOSIGNAL=(0x4000),
MSG_MORE=(0x8000),
MSG_WAITFORONE=(0x10000),
MSG_BATCH=(0x40000),
MSG_SOCK_DEVMEM=(0x2000000),
MSG_ZEROCOPY=(0x4000000),
MSG_FASTOPEN=(0x20000000),
MSG_CMSG_CLOEXEC=(0x40000000)
};

struct msghdr
{
    void* msg_name;
    unsigned int  msg_namelen  ;
    struct iovec*  msg_iov  ;
    unsigned long  msg_iovlen  ;
    void* msg_control;
    unsigned long  msg_controllen  ;
    int msg_flags;
};

struct cmsghdr
{
    unsigned long  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
    unsigned char __cmsg_data[];
};

enum { SCM_RIGHTS=(0x01),
SCM_CREDENTIALS=(0x02),
SCM_SECURITY=(0x03),
SCM_PIDFD=(0x04)
};

struct ucred
{
    int  pid  ;
    unsigned int  uid  ;
    unsigned int  gid  ;
};

struct anonymous_typeX93
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX94
{
    int val[2];
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct osockaddr
{
    unsigned short int sa_family;
    unsigned char sa_data[14];
};

enum { SHUT_RD=(0),
SHUT_WR 
,SHUT_RDWR 
};

struct mmsghdr
{
    struct msghdr  msg_hdr  ;
    unsigned int msg_len;
};

union anonymous_typeZ95
{
struct sockaddr*  ifu_broadaddr  ;
struct sockaddr*  ifu_dstaddr  ;
};

union anonymous_typeZ96
{
struct sockaddr*  ifu_broadaddr  ;
struct sockaddr*  ifu_dstaddr  ;
};

struct ifaddrs
{
    struct ifaddrs*  ifa_next  ;
    char* ifa_name;
    unsigned int ifa_flags;
    struct sockaddr*  ifa_addr  ;
    struct sockaddr*  ifa_netmask  ;
    union {
        struct sockaddr*  ifu_broadaddr  ;
        struct sockaddr*  ifu_dstaddr  ;
    } ifa_ifu;
    void* ifa_data;
};

struct anonymous_typeX97
{
    long  int quot;
    long  int rem;
};

enum { ABDAY_1=((((2)<<16)|(0))),
ABDAY_2 
,ABDAY_3 
,ABDAY_4 
,ABDAY_5 
,ABDAY_6 
,ABDAY_7 
,DAY_1 
,DAY_2 
,DAY_3 
,DAY_4 
,DAY_5 
,DAY_6 
,DAY_7 
,ABMON_1 
,ABMON_2 
,ABMON_3 
,ABMON_4 
,ABMON_5 
,ABMON_6 
,ABMON_7 
,ABMON_8 
,ABMON_9 
,ABMON_10 
,ABMON_11 
,ABMON_12 
,MON_1 
,MON_2 
,MON_3 
,MON_4 
,MON_5 
,MON_6 
,MON_7 
,MON_8 
,MON_9 
,MON_10 
,MON_11 
,MON_12 
,AM_STR 
,PM_STR 
,D_T_FMT 
,D_FMT 
,T_FMT 
,T_FMT_AMPM 
,ERA 
,__ERA_YEAR 
,ERA_D_FMT 
,ALT_DIGITS 
,ERA_D_T_FMT 
,ERA_T_FMT 
,_NL_TIME_ERA_NUM_ENTRIES 
,_NL_TIME_ERA_ENTRIES 
,_NL_WABDAY_1 
,_NL_WABDAY_2 
,_NL_WABDAY_3 
,_NL_WABDAY_4 
,_NL_WABDAY_5 
,_NL_WABDAY_6 
,_NL_WABDAY_7 
,_NL_WDAY_1 
,_NL_WDAY_2 
,_NL_WDAY_3 
,_NL_WDAY_4 
,_NL_WDAY_5 
,_NL_WDAY_6 
,_NL_WDAY_7 
,_NL_WABMON_1 
,_NL_WABMON_2 
,_NL_WABMON_3 
,_NL_WABMON_4 
,_NL_WABMON_5 
,_NL_WABMON_6 
,_NL_WABMON_7 
,_NL_WABMON_8 
,_NL_WABMON_9 
,_NL_WABMON_10 
,_NL_WABMON_11 
,_NL_WABMON_12 
,_NL_WMON_1 
,_NL_WMON_2 
,_NL_WMON_3 
,_NL_WMON_4 
,_NL_WMON_5 
,_NL_WMON_6 
,_NL_WMON_7 
,_NL_WMON_8 
,_NL_WMON_9 
,_NL_WMON_10 
,_NL_WMON_11 
,_NL_WMON_12 
,_NL_WAM_STR 
,_NL_WPM_STR 
,_NL_WD_T_FMT 
,_NL_WD_FMT 
,_NL_WT_FMT 
,_NL_WT_FMT_AMPM 
,_NL_WERA_YEAR 
,_NL_WERA_D_FMT 
,_NL_WALT_DIGITS 
,_NL_WERA_D_T_FMT 
,_NL_WERA_T_FMT 
,_NL_TIME_WEEK_NDAYS 
,_NL_TIME_WEEK_1STDAY 
,_NL_TIME_WEEK_1STWEEK 
,_NL_TIME_FIRST_WEEKDAY 
,_NL_TIME_FIRST_WORKDAY 
,_NL_TIME_CAL_DIRECTION 
,_NL_TIME_TIMEZONE 
,_DATE_FMT 
,_NL_W_DATE_FMT 
,_NL_TIME_CODESET 
,__ALTMON_1 
,__ALTMON_2 
,__ALTMON_3 
,__ALTMON_4 
,__ALTMON_5 
,__ALTMON_6 
,__ALTMON_7 
,__ALTMON_8 
,__ALTMON_9 
,__ALTMON_10 
,__ALTMON_11 
,__ALTMON_12 
,_NL_WALTMON_1 
,_NL_WALTMON_2 
,_NL_WALTMON_3 
,_NL_WALTMON_4 
,_NL_WALTMON_5 
,_NL_WALTMON_6 
,_NL_WALTMON_7 
,_NL_WALTMON_8 
,_NL_WALTMON_9 
,_NL_WALTMON_10 
,_NL_WALTMON_11 
,_NL_WALTMON_12 
,_NL_ABALTMON_1 
,_NL_ABALTMON_2 
,_NL_ABALTMON_3 
,_NL_ABALTMON_4 
,_NL_ABALTMON_5 
,_NL_ABALTMON_6 
,_NL_ABALTMON_7 
,_NL_ABALTMON_8 
,_NL_ABALTMON_9 
,_NL_ABALTMON_10 
,_NL_ABALTMON_11 
,_NL_ABALTMON_12 
,_NL_WABALTMON_1 
,_NL_WABALTMON_2 
,_NL_WABALTMON_3 
,_NL_WABALTMON_4 
,_NL_WABALTMON_5 
,_NL_WABALTMON_6 
,_NL_WABALTMON_7 
,_NL_WABALTMON_8 
,_NL_WABALTMON_9 
,_NL_WABALTMON_10 
,_NL_WABALTMON_11 
,_NL_WABALTMON_12 
,_NL_NUM_LC_TIME 
,_NL_COLLATE_NRULES=((((3)<<16)|(0))),
_NL_COLLATE_RULESETS 
,_NL_COLLATE_TABLEMB 
,_NL_COLLATE_WEIGHTMB 
,_NL_COLLATE_EXTRAMB 
,_NL_COLLATE_INDIRECTMB 
,_NL_COLLATE_GAP1 
,_NL_COLLATE_GAP2 
,_NL_COLLATE_GAP3 
,_NL_COLLATE_TABLEWC 
,_NL_COLLATE_WEIGHTWC 
,_NL_COLLATE_EXTRAWC 
,_NL_COLLATE_INDIRECTWC 
,_NL_COLLATE_SYMB_HASH_SIZEMB 
,_NL_COLLATE_SYMB_TABLEMB 
,_NL_COLLATE_SYMB_EXTRAMB 
,_NL_COLLATE_COLLSEQMB 
,_NL_COLLATE_COLLSEQWC 
,_NL_COLLATE_CODESET 
,_NL_NUM_LC_COLLATE 
,_NL_CTYPE_CLASS=((((0)<<16)|(0))),
_NL_CTYPE_TOUPPER 
,_NL_CTYPE_GAP1 
,_NL_CTYPE_TOLOWER 
,_NL_CTYPE_GAP2 
,_NL_CTYPE_CLASS32 
,_NL_CTYPE_GAP3 
,_NL_CTYPE_GAP4 
,_NL_CTYPE_GAP5 
,_NL_CTYPE_GAP6 
,_NL_CTYPE_CLASS_NAMES 
,_NL_CTYPE_MAP_NAMES 
,_NL_CTYPE_WIDTH 
,_NL_CTYPE_MB_CUR_MAX 
,_NL_CTYPE_CODESET_NAME 
,CODESET=(((((0)<<16)|(0))+14)),
_NL_CTYPE_TOUPPER32 
,_NL_CTYPE_TOLOWER32 
,_NL_CTYPE_CLASS_OFFSET 
,_NL_CTYPE_MAP_OFFSET 
,_NL_CTYPE_INDIGITS_MB_LEN 
,_NL_CTYPE_INDIGITS0_MB 
,_NL_CTYPE_INDIGITS1_MB 
,_NL_CTYPE_INDIGITS2_MB 
,_NL_CTYPE_INDIGITS3_MB 
,_NL_CTYPE_INDIGITS4_MB 
,_NL_CTYPE_INDIGITS5_MB 
,_NL_CTYPE_INDIGITS6_MB 
,_NL_CTYPE_INDIGITS7_MB 
,_NL_CTYPE_INDIGITS8_MB 
,_NL_CTYPE_INDIGITS9_MB 
,_NL_CTYPE_INDIGITS_WC_LEN 
,_NL_CTYPE_INDIGITS0_WC 
,_NL_CTYPE_INDIGITS1_WC 
,_NL_CTYPE_INDIGITS2_WC 
,_NL_CTYPE_INDIGITS3_WC 
,_NL_CTYPE_INDIGITS4_WC 
,_NL_CTYPE_INDIGITS5_WC 
,_NL_CTYPE_INDIGITS6_WC 
,_NL_CTYPE_INDIGITS7_WC 
,_NL_CTYPE_INDIGITS8_WC 
,_NL_CTYPE_INDIGITS9_WC 
,_NL_CTYPE_OUTDIGIT0_MB 
,_NL_CTYPE_OUTDIGIT1_MB 
,_NL_CTYPE_OUTDIGIT2_MB 
,_NL_CTYPE_OUTDIGIT3_MB 
,_NL_CTYPE_OUTDIGIT4_MB 
,_NL_CTYPE_OUTDIGIT5_MB 
,_NL_CTYPE_OUTDIGIT6_MB 
,_NL_CTYPE_OUTDIGIT7_MB 
,_NL_CTYPE_OUTDIGIT8_MB 
,_NL_CTYPE_OUTDIGIT9_MB 
,_NL_CTYPE_OUTDIGIT0_WC 
,_NL_CTYPE_OUTDIGIT1_WC 
,_NL_CTYPE_OUTDIGIT2_WC 
,_NL_CTYPE_OUTDIGIT3_WC 
,_NL_CTYPE_OUTDIGIT4_WC 
,_NL_CTYPE_OUTDIGIT5_WC 
,_NL_CTYPE_OUTDIGIT6_WC 
,_NL_CTYPE_OUTDIGIT7_WC 
,_NL_CTYPE_OUTDIGIT8_WC 
,_NL_CTYPE_OUTDIGIT9_WC 
,_NL_CTYPE_TRANSLIT_TAB_SIZE 
,_NL_CTYPE_TRANSLIT_FROM_IDX 
,_NL_CTYPE_TRANSLIT_FROM_TBL 
,_NL_CTYPE_TRANSLIT_TO_IDX 
,_NL_CTYPE_TRANSLIT_TO_TBL 
,_NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN 
,_NL_CTYPE_TRANSLIT_DEFAULT_MISSING 
,_NL_CTYPE_TRANSLIT_IGNORE_LEN 
,_NL_CTYPE_TRANSLIT_IGNORE 
,_NL_CTYPE_MAP_TO_NONASCII 
,_NL_CTYPE_NONASCII_CASE 
,_NL_CTYPE_EXTRA_MAP_1 
,_NL_CTYPE_EXTRA_MAP_2 
,_NL_CTYPE_EXTRA_MAP_3 
,_NL_CTYPE_EXTRA_MAP_4 
,_NL_CTYPE_EXTRA_MAP_5 
,_NL_CTYPE_EXTRA_MAP_6 
,_NL_CTYPE_EXTRA_MAP_7 
,_NL_CTYPE_EXTRA_MAP_8 
,_NL_CTYPE_EXTRA_MAP_9 
,_NL_CTYPE_EXTRA_MAP_10 
,_NL_CTYPE_EXTRA_MAP_11 
,_NL_CTYPE_EXTRA_MAP_12 
,_NL_CTYPE_EXTRA_MAP_13 
,_NL_CTYPE_EXTRA_MAP_14 
,_NL_NUM_LC_CTYPE 
,__INT_CURR_SYMBOL=((((4)<<16)|(0))),
__CURRENCY_SYMBOL 
,__MON_DECIMAL_POINT 
,__MON_THOUSANDS_SEP 
,__MON_GROUPING 
,__POSITIVE_SIGN 
,__NEGATIVE_SIGN 
,__INT_FRAC_DIGITS 
,__FRAC_DIGITS 
,__P_CS_PRECEDES 
,__P_SEP_BY_SPACE 
,__N_CS_PRECEDES 
,__N_SEP_BY_SPACE 
,__P_SIGN_POSN 
,__N_SIGN_POSN 
,_NL_MONETARY_CRNCYSTR 
,__INT_P_CS_PRECEDES 
,__INT_P_SEP_BY_SPACE 
,__INT_N_CS_PRECEDES 
,__INT_N_SEP_BY_SPACE 
,__INT_P_SIGN_POSN 
,__INT_N_SIGN_POSN 
,_NL_MONETARY_DUO_INT_CURR_SYMBOL 
,_NL_MONETARY_DUO_CURRENCY_SYMBOL 
,_NL_MONETARY_DUO_INT_FRAC_DIGITS 
,_NL_MONETARY_DUO_FRAC_DIGITS 
,_NL_MONETARY_DUO_P_CS_PRECEDES 
,_NL_MONETARY_DUO_P_SEP_BY_SPACE 
,_NL_MONETARY_DUO_N_CS_PRECEDES 
,_NL_MONETARY_DUO_N_SEP_BY_SPACE 
,_NL_MONETARY_DUO_INT_P_CS_PRECEDES 
,_NL_MONETARY_DUO_INT_P_SEP_BY_SPACE 
,_NL_MONETARY_DUO_INT_N_CS_PRECEDES 
,_NL_MONETARY_DUO_INT_N_SEP_BY_SPACE 
,_NL_MONETARY_DUO_P_SIGN_POSN 
,_NL_MONETARY_DUO_N_SIGN_POSN 
,_NL_MONETARY_DUO_INT_P_SIGN_POSN 
,_NL_MONETARY_DUO_INT_N_SIGN_POSN 
,_NL_MONETARY_UNO_VALID_FROM 
,_NL_MONETARY_UNO_VALID_TO 
,_NL_MONETARY_DUO_VALID_FROM 
,_NL_MONETARY_DUO_VALID_TO 
,_NL_MONETARY_CONVERSION_RATE 
,_NL_MONETARY_DECIMAL_POINT_WC 
,_NL_MONETARY_THOUSANDS_SEP_WC 
,_NL_MONETARY_CODESET 
,_NL_NUM_LC_MONETARY 
,__DECIMAL_POINT=((((1)<<16)|(0))),
RADIXCHAR=(((((1)<<16)|(0)))),
__THOUSANDS_SEP 
,THOUSEP=((((((1)<<16)|(0)))+1)),
__GROUPING 
,_NL_NUMERIC_DECIMAL_POINT_WC 
,_NL_NUMERIC_THOUSANDS_SEP_WC 
,_NL_NUMERIC_CODESET 
,_NL_NUM_LC_NUMERIC 
,__YESEXPR=((((5)<<16)|(0))),
__NOEXPR 
,__YESSTR 
,__NOSTR 
,_NL_MESSAGES_CODESET 
,_NL_NUM_LC_MESSAGES 
,_NL_PAPER_HEIGHT=((((7)<<16)|(0))),
_NL_PAPER_WIDTH 
,_NL_PAPER_CODESET 
,_NL_NUM_LC_PAPER 
,_NL_NAME_NAME_FMT=((((8)<<16)|(0))),
_NL_NAME_NAME_GEN 
,_NL_NAME_NAME_MR 
,_NL_NAME_NAME_MRS 
,_NL_NAME_NAME_MISS 
,_NL_NAME_NAME_MS 
,_NL_NAME_CODESET 
,_NL_NUM_LC_NAME 
,_NL_ADDRESS_POSTAL_FMT=((((9)<<16)|(0))),
_NL_ADDRESS_COUNTRY_NAME 
,_NL_ADDRESS_COUNTRY_POST 
,_NL_ADDRESS_COUNTRY_AB2 
,_NL_ADDRESS_COUNTRY_AB3 
,_NL_ADDRESS_COUNTRY_CAR 
,_NL_ADDRESS_COUNTRY_NUM 
,_NL_ADDRESS_COUNTRY_ISBN 
,_NL_ADDRESS_LANG_NAME 
,_NL_ADDRESS_LANG_AB 
,_NL_ADDRESS_LANG_TERM 
,_NL_ADDRESS_LANG_LIB 
,_NL_ADDRESS_CODESET 
,_NL_NUM_LC_ADDRESS 
,_NL_TELEPHONE_TEL_INT_FMT=((((10)<<16)|(0))),
_NL_TELEPHONE_TEL_DOM_FMT 
,_NL_TELEPHONE_INT_SELECT 
,_NL_TELEPHONE_INT_PREFIX 
,_NL_TELEPHONE_CODESET 
,_NL_NUM_LC_TELEPHONE 
,_NL_MEASUREMENT_MEASUREMENT=((((11)<<16)|(0))),
_NL_MEASUREMENT_CODESET 
,_NL_NUM_LC_MEASUREMENT 
,_NL_IDENTIFICATION_TITLE=((((12)<<16)|(0))),
_NL_IDENTIFICATION_SOURCE 
,_NL_IDENTIFICATION_ADDRESS 
,_NL_IDENTIFICATION_CONTACT 
,_NL_IDENTIFICATION_EMAIL 
,_NL_IDENTIFICATION_TEL 
,_NL_IDENTIFICATION_FAX 
,_NL_IDENTIFICATION_LANGUAGE 
,_NL_IDENTIFICATION_TERRITORY 
,_NL_IDENTIFICATION_AUDIENCE 
,_NL_IDENTIFICATION_APPLICATION 
,_NL_IDENTIFICATION_ABBREVIATION 
,_NL_IDENTIFICATION_REVISION 
,_NL_IDENTIFICATION_DATE 
,_NL_IDENTIFICATION_CATEGORY 
,_NL_IDENTIFICATION_CODESET 
,_NL_NUM_LC_IDENTIFICATION 
,_NL_NUM 
};

struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};

enum  __itimer_which { ITIMER_REAL=(0),
ITIMER_VIRTUAL=(1),
ITIMER_PROF=(2)
};

struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};

struct lastlog
{
    unsigned int  ll_time  ;
    char ll_line[32];
    char ll_host[256];
};

struct exit_status
{
    short int e_termination;
    short int e_exit;
};

struct anonymous_typeX98
{
    unsigned int  tv_sec  ;
    int  tv_usec  ;
};

struct anonymous_typeX99
{
    unsigned int  tv_sec  ;
    int  tv_usec  ;
};

struct utmp
{
    short int ut_type;
    int  ut_pid  ;
    char ut_line[32];
    char ut_id[4];
    char ut_user[32];
    char ut_host[256];
    struct exit_status  ut_exit  ;
    int  ut_session  ;
    struct {
        unsigned int  tv_sec  ;
        int  tv_usec  ;
    } ut_tv;
    int  ut_addr_v6[4]  ;
    char __glibc_reserved[20];
};

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

struct mallinfo
{
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

struct mallinfo2
{
    unsigned long  arena  ;
    unsigned long  ordblks  ;
    unsigned long  smblks  ;
    unsigned long  hblks  ;
    unsigned long  hblkhd  ;
    unsigned long  usmblks  ;
    unsigned long  fsmblks  ;
    unsigned long  uordblks  ;
    unsigned long  fordblks  ;
    unsigned long  keepcost  ;
};

enum { FP_INT_UPWARD=(0),
FP_INT_DOWNWARD=(1),
FP_INT_TOWARDZERO=(2),
FP_INT_TONEARESTFROMZERO=(3),
FP_INT_TONEAREST=(4)
};

enum { FP_NAN=(0),
FP_INFINITE=(1),
FP_ZERO=(2),
FP_SUBNORMAL=(3),
FP_NORMAL=(4)
};

enum  mcheck_status { MCHECK_DISABLED=(-1),
MCHECK_OK 
,MCHECK_FREE 
,MCHECK_HEAD 
,MCHECK_TAIL 
};

struct tagMENU
{
    short height;
    short width;
    short rows;
    short cols;
    short frows;
    short fcols;
    short arows;
    short namelen;
    short desclen;
    short marklen;
    short itemlen;
    short spc_desc;
    short spc_cols;
    short spc_rows;
    char* pattern;
    short pindex;
    struct _win_st*  win  ;
    struct _win_st*  sub  ;
    struct _win_st*  userwin  ;
    struct _win_st*  usersub  ;
    struct tagITEM**  items  ;
    short nitems;
    struct tagITEM*  curitem  ;
    short toprow;
    unsigned int  fore  ;
    unsigned int  back  ;
    unsigned int  grey  ;
    unsigned char pad;
    void (*menuinit)(struct tagMENU* )  ;
    void (*menuterm)(struct tagMENU* )  ;
    void (*iteminit)(struct tagMENU* )  ;
    void (*itemterm)(struct tagMENU* )  ;
    void* userptr;
    char* mark;
    int  opt  ;
    unsigned short int status;
};

struct mntent
{
    char* mnt_fsname;
    char* mnt_dir;
    char* mnt_type;
    char* mnt_opts;
    int mnt_freq;
    int mnt_passno;
};

struct mq_attr
{
    long  int  mq_flags  ;
    long  int  mq_maxmsg  ;
    long  int  mq_msgsize  ;
    long  int  mq_curmsgs  ;
    long  int  __pad[4]  ;
};

struct in_addr
{
    unsigned int  s_addr  ;
};

struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};

struct in_pktinfo
{
    int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};

enum { IPPROTO_IP=(0),
IPPROTO_ICMP=(1),
IPPROTO_IGMP=(2),
IPPROTO_IPIP=(4),
IPPROTO_TCP=(6),
IPPROTO_EGP=(8),
IPPROTO_PUP=(12),
IPPROTO_UDP=(17),
IPPROTO_IDP=(22),
IPPROTO_TP=(29),
IPPROTO_DCCP=(33),
IPPROTO_IPV6=(41),
IPPROTO_RSVP=(46),
IPPROTO_GRE=(47),
IPPROTO_ESP=(50),
IPPROTO_AH=(51),
IPPROTO_MTP=(92),
IPPROTO_BEETPH=(94),
IPPROTO_ENCAP=(98),
IPPROTO_PIM=(103),
IPPROTO_COMP=(108),
IPPROTO_L2TP=(115),
IPPROTO_SCTP=(132),
IPPROTO_UDPLITE=(136),
IPPROTO_MPLS=(137),
IPPROTO_ETHERNET=(143),
IPPROTO_RAW=(255),
IPPROTO_SMC=(256),
IPPROTO_MPTCP=(262),
IPPROTO_MAX 
};

enum { IPPROTO_HOPOPTS=(0),
IPPROTO_ROUTING=(43),
IPPROTO_FRAGMENT=(44),
IPPROTO_ICMPV6=(58),
IPPROTO_NONE=(59),
IPPROTO_DSTOPTS=(60),
IPPROTO_MH=(135)
};

enum { IPPORT_ECHO=(7),
IPPORT_DISCARD=(9),
IPPORT_SYSTAT=(11),
IPPORT_DAYTIME=(13),
IPPORT_NETSTAT=(15),
IPPORT_FTP=(21),
IPPORT_TELNET=(23),
IPPORT_SMTP=(25),
IPPORT_TIMESERVER=(37),
IPPORT_NAMESERVER=(42),
IPPORT_WHOIS=(43),
IPPORT_MTP=(57),
IPPORT_TFTP=(69),
IPPORT_RJE=(77),
IPPORT_FINGER=(79),
IPPORT_TTYLINK=(87),
IPPORT_SUPDUP=(95),
IPPORT_EXECSERVER=(512),
IPPORT_LOGINSERVER=(513),
IPPORT_CMDSERVER=(514),
IPPORT_EFSSERVER=(520),
IPPORT_BIFFUDP=(512),
IPPORT_WHOSERVER=(513),
IPPORT_ROUTESERVER=(520),
IPPORT_RESERVED=(1024),
IPPORT_USERRESERVED=(5000)
};

union anonymous_typeZ100
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

union anonymous_typeZ101
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

struct in6_addr
{
    union {
        unsigned char  __u6_addr8[16]  ;
        unsigned short int  __u6_addr16[8]  ;
        unsigned int  __u6_addr32[4]  ;
    } __in6_u;
};

struct sockaddr_in
{
    unsigned short int  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    unsigned char sin_zero[sizeof(struct sockaddr )-(sizeof(unsigned short int))-sizeof(unsigned short int )-sizeof(struct in_addr )];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_in6
{
    unsigned short int  sin6_family  ;
    unsigned short int  sin6_port  ;
    unsigned int  sin6_flowinfo  ;
    struct in6_addr  sin6_addr  ;
    unsigned int  sin6_scope_id  ;
} __attribute__ ((__may_alias__)) ;

struct ip_mreq
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
};

struct ip_mreqn
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_address  ;
    int imr_ifindex;
};

struct ip_mreq_source
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
    struct in_addr  imr_sourceaddr  ;
};

struct ipv6_mreq
{
    struct in6_addr  ipv6mr_multiaddr  ;
    unsigned int ipv6mr_interface;
};

struct group_req
{
    unsigned int  gr_interface  ;
    struct sockaddr_storage  gr_group  ;
};

struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct sockaddr_storage  gsr_group  ;
    struct sockaddr_storage  gsr_source  ;
};

struct ip_msfilter
{
    struct in_addr  imsf_multiaddr  ;
    struct in_addr  imsf_interface  ;
    unsigned int  imsf_fmode  ;
    unsigned int  imsf_numsrc  ;
    struct in_addr  imsf_slist[1]  ;
};

struct group_filter
{
    unsigned int  gf_interface  ;
    struct sockaddr_storage  gf_group  ;
    unsigned int  gf_fmode  ;
    unsigned int  gf_numsrc  ;
    struct sockaddr_storage  gf_slist[1]  ;
};

struct in6_pktinfo
{
    struct in6_addr  ipi6_addr  ;
    unsigned int ipi6_ifindex;
};

struct ip6_mtuinfo
{
    struct sockaddr_in6  ip6m_addr  ;
    unsigned int  ip6m_mtu  ;
};

struct rpcent
{
    char* r_name;
    char** r_aliases;
    int r_number;
};

struct netent
{
    char* n_name;
    char** n_aliases;
    int n_addrtype;
    unsigned int  n_net  ;
};

struct hostent
{
    char* h_name;
    char** h_aliases;
    int h_addrtype;
    int h_length;
    char** h_addr_list;
};

struct servent
{
    char* s_name;
    char** s_aliases;
    int s_port;
    char* s_proto;
};

struct protoent
{
    char* p_name;
    char** p_aliases;
    int p_proto;
};

struct addrinfo
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    unsigned int  ai_addrlen  ;
    struct sockaddr*  ai_addr  ;
    char* ai_canonname;
    struct addrinfo*  ai_next  ;
};

struct gaicb
{
    const char* ar_name;
    const char* ar_service;
    const struct addrinfo*  ar_request  ;
    struct addrinfo*  ar_result  ;
    int __return;
    int __glibc_reserved[5];
};

enum  nss_status { NSS_STATUS_TRYAGAIN=(-2),
NSS_STATUS_UNAVAIL 
,NSS_STATUS_NOTFOUND 
,NSS_STATUS_SUCCESS 
,NSS_STATUS_RETURN 
};

struct gaih_addrtuple
{
    struct gaih_addrtuple*  next  ;
    char* name;
    int family;
    unsigned int  addr[4]  ;
    unsigned int  scopeid  ;
};

struct _obstack_chunk
{
    char* limit;
    struct _obstack_chunk*  prev  ;
    char contents[4];
};

union anonymous_typeZ102
{
long tempint;
void* tempptr;
};

union anonymous_typeZ103
{
long tempint;
void* tempptr;
};

struct obstack
{
    long chunk_size;
    struct _obstack_chunk*  chunk  ;
    char* object_base;
    char* next_free;
    char* chunk_limit;
    union {
        long tempint;
        void* tempptr;
    } temp;
    int alignment_mask;
    struct _obstack_chunk* (*chunkfun)(void*,long);
    void (*freefun)(void*,struct _obstack_chunk* );
    void* extra_arg;
    unsigned int use_extra_arg:1;
    unsigned int maybe_empty_object:1;
    unsigned int alloc_failed:1;
};

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct printf_info
{
    int prec;
    int width;
    int  spec  ;
    unsigned int is_long_double:1;
    unsigned int is_short:1;
    unsigned int is_long:1;
    unsigned int alt:1;
    unsigned int space:1;
    unsigned int left:1;
    unsigned int showsign:1;
    unsigned int group:1;
    unsigned int extra:1;
    unsigned int is_char:1;
    unsigned int wide:1;
    unsigned int i18n:1;
    unsigned int is_binary128:1;
    unsigned int __pad:3;
    unsigned short int user;
    int  pad  ;
};

enum { PA_INT 
,PA_CHAR 
,PA_WCHAR 
,PA_STRING 
,PA_WSTRING 
,PA_POINTER 
,PA_FLOAT 
,PA_DOUBLE 
,PA_LAST 
};

struct user_fpregs_struct
{
    unsigned short int cwd;
    unsigned short int swd;
    unsigned short int ftw;
    unsigned short int fop;
    unsigned long long int rip;
    unsigned long long int rdp;
    unsigned int mxcsr;
    unsigned int mxcr_mask;
    unsigned int st_space[32];
    unsigned int xmm_space[64];
    unsigned int padding[24];
};

struct user_regs_struct
{
    unsigned long long int r15;
    unsigned long long int r14;
    unsigned long long int r13;
    unsigned long long int r12;
    unsigned long long int rbp;
    unsigned long long int rbx;
    unsigned long long int r11;
    unsigned long long int r10;
    unsigned long long int r9;
    unsigned long long int r8;
    unsigned long long int rax;
    unsigned long long int rcx;
    unsigned long long int rdx;
    unsigned long long int rsi;
    unsigned long long int rdi;
    unsigned long long int orig_rax;
    unsigned long long int rip;
    unsigned long long int cs;
    unsigned long long int eflags;
    unsigned long long int rsp;
    unsigned long long int ss;
    unsigned long long int fs_base;
    unsigned long long int gs_base;
    unsigned long long int ds;
    unsigned long long int es;
    unsigned long long int fs;
    unsigned long long int gs;
};

union anonymous_typeZ104
{
struct user_regs_struct*  u_ar0  ;
unsigned long long int __u_ar0_word;
};

union anonymous_typeZ105
{
struct user_regs_struct*  u_ar0  ;
unsigned long long int __u_ar0_word;
};

union anonymous_typeZ106
{
struct user_fpregs_struct*  u_fpstate  ;
unsigned long long int __u_fpstate_word;
};

union anonymous_typeZ107
{
struct user_fpregs_struct*  u_fpstate  ;
unsigned long long int __u_fpstate_word;
};

struct user
{
    struct user_regs_struct  regs  ;
    int u_fpvalid;
    struct user_fpregs_struct  i387  ;
    unsigned long long int u_tsize;
    unsigned long long int u_dsize;
    unsigned long long int u_ssize;
    unsigned long long int start_code;
    unsigned long long int start_stack;
    long long int signal;
    int reserved;
    union {
        struct user_regs_struct*  u_ar0  ;
        unsigned long long int __u_ar0_word;
    };
    union {
        struct user_fpregs_struct*  u_fpstate  ;
        unsigned long long int __u_fpstate_word;
    };
    unsigned long long int magic;
    char u_comm[32];
    unsigned long long int u_debugreg[8];
};

typedef unsigned long  long  elf_gregset_t[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  ;

struct elf_siginfo
{
    int si_signo;
    int si_code;
    int si_errno;
};

struct elf_prstatus
{
    struct elf_siginfo  pr_info  ;
    short int pr_cursig;
    unsigned long  int pr_sigpend;
    unsigned long  int pr_sighold;
    int  pr_pid  ;
    int  pr_ppid  ;
    int  pr_pgrp  ;
    int  pr_sid  ;
    struct timeval  pr_utime  ;
    struct timeval  pr_stime  ;
    struct timeval  pr_cutime  ;
    struct timeval  pr_cstime  ;
    unsigned long  long  pr_reg[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  ;
    int pr_fpvalid;
};

struct elf_prpsinfo
{
    char pr_state;
    char pr_sname;
    char pr_zomb;
    char pr_nice;
    unsigned long  int pr_flag;
    unsigned int  pr_uid  ;
    unsigned int  pr_gid  ;
    int pr_pid;
    int pr_ppid;
    int pr_pgrp;
    int pr_sid;
    char pr_fname[16];
    char pr_psargs[(80)];
};

typedef unsigned long  long  __prgregset_t[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  ;

typedef unsigned long  long  prgregset_t[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  ;

enum  anonymous_typeY107 { PS_OK 
,PS_ERR 
,PS_BADPID 
,PS_BADLID 
,PS_BADADDR 
,PS_NOSYM 
,PS_NOFREGS 
};

struct sched_attr
{
    unsigned int  size  ;
    unsigned int  sched_policy  ;
    unsigned long  long  sched_flags  ;
    int  sched_nice  ;
    unsigned int  sched_priority  ;
    unsigned long  long  sched_runtime  ;
    unsigned long  long  sched_deadline  ;
    unsigned long  long  sched_period  ;
    unsigned int  sched_util_min  ;
    unsigned int  sched_util_max  ;
};

struct sched_param
{
    int sched_priority;
};

struct anonymous_typeX108
{
    unsigned long  int  __bits[1024/(8*sizeof(unsigned long  int ))]  ;
};

struct timex
{
    unsigned int modes;
    long  int  offset  ;
    long  int  freq  ;
    long  int  maxerror  ;
    long  int  esterror  ;
    int status;
    long  int  constant  ;
    long  int  precision  ;
    long  int  tolerance  ;
    struct timeval  time  ;
    long  int  tick  ;
    long  int  ppsfreq  ;
    long  int  jitter  ;
    int shift;
    long  int  stabil  ;
    long  int  jitcnt  ;
    long  int  calcnt  ;
    long  int  errcnt  ;
    long  int  stbcnt  ;
    int tai;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
};

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
    long  int tm_gmtoff;
    const char* tm_zone;
};

struct itimerspec
{
    struct timespec  it_interval  ;
    struct timespec  it_value  ;
};

typedef long  int __jmp_buf[8];

struct __jmp_buf_tag
{
    long  int  __jmpbuf[8]  ;
    int __mask_was_saved;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __saved_mask;
};

enum { PTHREAD_CREATE_JOINABLE 
,PTHREAD_CREATE_DETACHED 
};

enum { PTHREAD_MUTEX_TIMED_NP 
,PTHREAD_MUTEX_RECURSIVE_NP 
,PTHREAD_MUTEX_ERRORCHECK_NP 
,PTHREAD_MUTEX_ADAPTIVE_NP 
,PTHREAD_MUTEX_NORMAL=((0)),
PTHREAD_MUTEX_RECURSIVE=((1)),
PTHREAD_MUTEX_ERRORCHECK=((2)),
PTHREAD_MUTEX_DEFAULT=(((0))),
PTHREAD_MUTEX_FAST_NP=((0))
};

enum { PTHREAD_MUTEX_STALLED 
,PTHREAD_MUTEX_STALLED_NP=((0)),
PTHREAD_MUTEX_ROBUST 
,PTHREAD_MUTEX_ROBUST_NP=(((0)+1))
};

enum { PTHREAD_PRIO_NONE 
,PTHREAD_PRIO_INHERIT 
,PTHREAD_PRIO_PROTECT 
};

enum { PTHREAD_RWLOCK_PREFER_READER_NP 
,PTHREAD_RWLOCK_PREFER_WRITER_NP 
,PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP 
,PTHREAD_RWLOCK_DEFAULT_NP=((0))
};

enum { PTHREAD_INHERIT_SCHED 
,PTHREAD_EXPLICIT_SCHED 
};

enum { PTHREAD_SCOPE_SYSTEM 
,PTHREAD_SCOPE_PROCESS 
};

enum { PTHREAD_PROCESS_PRIVATE 
,PTHREAD_PROCESS_SHARED 
};

struct _pthread_cleanup_buffer
{
    void (*__routine)(void*);
    void* __arg;
    int __canceltype;
    struct _pthread_cleanup_buffer*  __prev  ;
};

enum { PTHREAD_CANCEL_ENABLE 
,PTHREAD_CANCEL_DISABLE 
};

enum { PTHREAD_CANCEL_DEFERRED 
,PTHREAD_CANCEL_ASYNCHRONOUS 
};

struct __cancel_jmp_buf_tag
{
    long  int  __cancel_jmp_buf[8]  ;
    int __mask_was_saved;
};

struct anonymous_typeX109
{
    struct __cancel_jmp_buf_tag  __cancel_jmp_buf[1]  ;
    void* __pad[4];
};

struct __pthread_cleanup_frame
{
    void (*__cancel_routine)(void*);
    void* __cancel_arg;
    int __do_it;
    int __cancel_type;
};

union anonymous_typeZ110
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ111
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ112
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

union anonymous_typeZ113
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

struct termios
{
    unsigned int  c_iflag  ;
    unsigned int  c_oflag  ;
    unsigned int  c_cflag  ;
    unsigned int  c_lflag  ;
    unsigned char  c_line  ;
    unsigned char  c_cc[32]  ;
    union {
        unsigned int  __ispeed  ;
        unsigned int  c_ispeed  ;
    };
    union {
        unsigned int  __ospeed  ;
        unsigned int  c_ospeed  ;
    };
};

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};

struct passwd
{
    char* pw_name;
    char* pw_passwd;
    unsigned int  pw_uid  ;
    unsigned int  pw_gid  ;
    char* pw_gecos;
    char* pw_dir;
    char* pw_shell;
};

enum  anonymous_typeY113 { _REG_ENOSYS=(-1),
_REG_NOERROR=(0),
_REG_NOMATCH 
,_REG_BADPAT 
,_REG_ECOLLATE 
,_REG_ECTYPE 
,_REG_EESCAPE 
,_REG_ESUBREG 
,_REG_EBRACK 
,_REG_EPAREN 
,_REG_EBRACE 
,_REG_BADBR 
,_REG_ERANGE 
,_REG_ESPACE 
,_REG_BADRPT 
,_REG_EEND 
,_REG_ESIZE 
,_REG_ERPAREN 
};

struct re_pattern_buffer
{
    struct re_dfa_t* buffer;
    unsigned long  int  allocated  ;
    unsigned long  int  used  ;
    unsigned long  int  syntax  ;
    char* fastmap;
    unsigned char* translate;
    unsigned long  re_nsub  ;
    unsigned int can_be_null:1;
    unsigned int regs_allocated:2;
    unsigned int fastmap_accurate:1;
    unsigned int no_sub:1;
    unsigned int not_bol:1;
    unsigned int not_eol:1;
    unsigned int newline_anchor:1;
};

struct re_registers
{
    unsigned int  num_regs  ;
    int*  start  ;
    int*  end  ;
};

struct anonymous_typeX114
{
    int  rm_so  ;
    int  rm_eo  ;
};

struct anonymous_typeX117
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX118
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX119
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX120
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX123
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ122
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX125
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ124
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX121
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX126
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX127
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ116
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX129
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX130
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX131
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX132
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX135
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ134
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX137
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ136
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX133
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX138
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX139
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ128
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX115
{
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union {
        int _pad[((128/sizeof(int))-4)];
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
        } _kill;
        struct {
            int si_tid;
            int si_overrun;
            union sigval  si_sigval  ;
        } _timer;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            union sigval  si_sigval  ;
        } _rt;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            int si_status;
            long  int  si_utime  ;
            long  int  si_stime  ;
        } _sigchld;
        struct {
            void* si_addr;
            short int si_addr_lsb;
            union {
                struct {
                    void* _lower;
                    void* _upper;
                } _addr_bnd;
                unsigned int  _pkey  ;
            } _bounds;
        } _sigfault;
        struct {
            long  int si_band;
            int si_fd;
        } _sigpoll;
        struct {
            void* _call_addr;
            int _syscall;
            unsigned int _arch;
        } _sigsys;
    } _sifields;
};

enum { SI_ASYNCNL=(-60),
SI_DETHREAD=(-7),
SI_TKILL 
,SI_SIGIO 
,SI_ASYNCIO 
,SI_MESGQ 
,SI_TIMER 
,SI_QUEUE 
,SI_USER 
,SI_KERNEL=(0x80)
};

enum { ILL_ILLOPC=(1),
ILL_ILLOPN 
,ILL_ILLADR 
,ILL_ILLTRP 
,ILL_PRVOPC 
,ILL_PRVREG 
,ILL_COPROC 
,ILL_BADSTK 
,ILL_BADIADDR 
};

enum { FPE_INTDIV=(1),
FPE_INTOVF 
,FPE_FLTDIV 
,FPE_FLTOVF 
,FPE_FLTUND 
,FPE_FLTRES 
,FPE_FLTINV 
,FPE_FLTSUB 
,FPE_FLTUNK=(14),
FPE_CONDTRAP 
};

enum { SEGV_MAPERR=(1),
SEGV_ACCERR 
,SEGV_BNDERR 
,SEGV_PKUERR 
,SEGV_ACCADI 
,SEGV_ADIDERR 
,SEGV_ADIPERR 
,SEGV_MTEAERR 
,SEGV_MTESERR 
,SEGV_CPERR 
};

enum { BUS_ADRALN=(1),
BUS_ADRERR 
,BUS_OBJERR 
,BUS_MCEERR_AR 
,BUS_MCEERR_AO 
};

enum { TRAP_BRKPT=(1),
TRAP_TRACE 
,TRAP_BRANCH 
,TRAP_HWBKPT 
,TRAP_UNK 
};

enum { CLD_EXITED=(1),
CLD_KILLED 
,CLD_DUMPED 
,CLD_TRAPPED 
,CLD_STOPPED 
,CLD_CONTINUED 
};

enum { POLL_IN=(1),
POLL_OUT 
,POLL_MSG 
,POLL_ERR 
,POLL_PRI 
,POLL_HUP 
};

union anonymous_typeZ140
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX115* ,void*);
};

union anonymous_typeZ141
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX115* ,void*);
};

struct sigaction
{
    union {
        void (*sa_handler)(int)  ;
        void (*sa_sigaction)(int,struct anonymous_typeX115* ,void*);
    } __sigaction_handler;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};

struct _fpx_sw_bytes
{
    unsigned int  magic1  ;
    unsigned int  extended_size  ;
    unsigned long  int  xstate_bv  ;
    unsigned int  xstate_size  ;
    unsigned int  __glibc_reserved1[7]  ;
};

struct _fpreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
};

struct _fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _xmmreg
{
    unsigned int  element[4]  ;
};

struct _fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _fpxreg  _st[8]  ;
    struct _xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

union anonymous_typeZ142
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

union anonymous_typeZ143
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

struct sigcontext
{
    unsigned long  int  r8  ;
    unsigned long  int  r9  ;
    unsigned long  int  r10  ;
    unsigned long  int  r11  ;
    unsigned long  int  r12  ;
    unsigned long  int  r13  ;
    unsigned long  int  r14  ;
    unsigned long  int  r15  ;
    unsigned long  int  rdi  ;
    unsigned long  int  rsi  ;
    unsigned long  int  rbp  ;
    unsigned long  int  rbx  ;
    unsigned long  int  rdx  ;
    unsigned long  int  rax  ;
    unsigned long  int  rcx  ;
    unsigned long  int  rsp  ;
    unsigned long  int  rip  ;
    unsigned long  int  eflags  ;
    unsigned short int cs;
    unsigned short int gs;
    unsigned short int fs;
    unsigned short int __pad0;
    unsigned long  int  err  ;
    unsigned long  int  trapno  ;
    unsigned long  int  oldmask  ;
    unsigned long  int  cr2  ;
    union {
        struct _fpstate*  fpstate  ;
        unsigned long  int  __fpstate_word  ;
    };
    unsigned long  int  __reserved1[8]  ;
};

struct _xsave_hdr
{
    unsigned long  int  xstate_bv  ;
    unsigned long  int  __glibc_reserved1[2]  ;
    unsigned long  int  __glibc_reserved2[5]  ;
};

struct _ymmh_state
{
    unsigned int  ymmh_space[64]  ;
};

struct _xstate
{
    struct _fpstate  fpstate  ;
    struct _xsave_hdr  xstate_hdr  ;
    struct _ymmh_state  ymmh  ;
};

struct anonymous_typeX144
{
    void* ss_sp;
    int ss_flags;
    unsigned long  ss_size  ;
};

typedef long long int  gregset_t[23]  ;

enum { REG_R8=(0),
REG_R9 
,REG_R10 
,REG_R11 
,REG_R12 
,REG_R13 
,REG_R14 
,REG_R15 
,REG_RDI 
,REG_RSI 
,REG_RBP 
,REG_RBX 
,REG_RDX 
,REG_RAX 
,REG_RCX 
,REG_RSP 
,REG_RIP 
,REG_EFL 
,REG_CSGSFS 
,REG_ERR 
,REG_TRAPNO 
,REG_OLDMASK 
,REG_CR2 
};

struct _libc_fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
    unsigned int  element[4]  ;
};

struct _libc_fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _libc_fpxreg  _st[8]  ;
    struct _libc_xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

struct anonymous_typeX145
{
    long long int  gregs[23]  ;
    struct _libc_fpstate*  fpregs  ;
    unsigned long  long __reserved1[8];
};

struct ucontext_t
{
    unsigned long  int uc_flags;
    struct ucontext_t*  uc_link  ;
    struct {
        void* ss_sp;
        int ss_flags;
        unsigned long  ss_size  ;
    } uc_stack;
    struct {
        long long int  gregs[23]  ;
        struct _libc_fpstate*  fpregs  ;
        unsigned long  long __reserved1[8];
    } uc_mcontext;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } uc_sigmask;
    struct _libc_fpstate  __fpregs_mem  ;
    unsigned long long int __ssp[4];
};

enum { _PC_LINK_MAX 
,_PC_MAX_CANON 
,_PC_MAX_INPUT 
,_PC_NAME_MAX 
,_PC_PATH_MAX 
,_PC_PIPE_BUF 
,_PC_CHOWN_RESTRICTED 
,_PC_NO_TRUNC 
,_PC_VDISABLE 
,_PC_SYNC_IO 
,_PC_ASYNC_IO 
,_PC_PRIO_IO 
,_PC_SOCK_MAXBUF 
,_PC_FILESIZEBITS 
,_PC_REC_INCR_XFER_SIZE 
,_PC_REC_MAX_XFER_SIZE 
,_PC_REC_MIN_XFER_SIZE 
,_PC_REC_XFER_ALIGN 
,_PC_ALLOC_SIZE_MIN 
,_PC_SYMLINK_MAX 
,_PC_2_SYMLINKS 
};

enum { _SC_ARG_MAX 
,_SC_CHILD_MAX 
,_SC_CLK_TCK 
,_SC_NGROUPS_MAX 
,_SC_OPEN_MAX 
,_SC_STREAM_MAX 
,_SC_TZNAME_MAX 
,_SC_JOB_CONTROL 
,_SC_SAVED_IDS 
,_SC_REALTIME_SIGNALS 
,_SC_PRIORITY_SCHEDULING 
,_SC_TIMERS 
,_SC_ASYNCHRONOUS_IO 
,_SC_PRIORITIZED_IO 
,_SC_SYNCHRONIZED_IO 
,_SC_FSYNC 
,_SC_MAPPED_FILES 
,_SC_MEMLOCK 
,_SC_MEMLOCK_RANGE 
,_SC_MEMORY_PROTECTION 
,_SC_MESSAGE_PASSING 
,_SC_SEMAPHORES 
,_SC_SHARED_MEMORY_OBJECTS 
,_SC_AIO_LISTIO_MAX 
,_SC_AIO_MAX 
,_SC_AIO_PRIO_DELTA_MAX 
,_SC_DELAYTIMER_MAX 
,_SC_MQ_OPEN_MAX 
,_SC_MQ_PRIO_MAX 
,_SC_VERSION 
,_SC_PAGESIZE 
,_SC_RTSIG_MAX 
,_SC_SEM_NSEMS_MAX 
,_SC_SEM_VALUE_MAX 
,_SC_SIGQUEUE_MAX 
,_SC_TIMER_MAX 
,_SC_BC_BASE_MAX 
,_SC_BC_DIM_MAX 
,_SC_BC_SCALE_MAX 
,_SC_BC_STRING_MAX 
,_SC_COLL_WEIGHTS_MAX 
,_SC_EQUIV_CLASS_MAX 
,_SC_EXPR_NEST_MAX 
,_SC_LINE_MAX 
,_SC_RE_DUP_MAX 
,_SC_CHARCLASS_NAME_MAX 
,_SC_2_VERSION 
,_SC_2_C_BIND 
,_SC_2_C_DEV 
,_SC_2_FORT_DEV 
,_SC_2_FORT_RUN 
,_SC_2_SW_DEV 
,_SC_2_LOCALEDEF 
,_SC_PII 
,_SC_PII_XTI 
,_SC_PII_SOCKET 
,_SC_PII_INTERNET 
,_SC_PII_OSI 
,_SC_POLL 
,_SC_SELECT 
,_SC_UIO_MAXIOV 
,_SC_IOV_MAX=((60)),
_SC_PII_INTERNET_STREAM 
,_SC_PII_INTERNET_DGRAM 
,_SC_PII_OSI_COTS 
,_SC_PII_OSI_CLTS 
,_SC_PII_OSI_M 
,_SC_T_IOV_MAX 
,_SC_THREADS 
,_SC_THREAD_SAFE_FUNCTIONS 
,_SC_GETGR_R_SIZE_MAX 
,_SC_GETPW_R_SIZE_MAX 
,_SC_LOGIN_NAME_MAX 
,_SC_TTY_NAME_MAX 
,_SC_THREAD_DESTRUCTOR_ITERATIONS 
,_SC_THREAD_KEYS_MAX 
,_SC_THREAD_STACK_MIN 
,_SC_THREAD_THREADS_MAX 
,_SC_THREAD_ATTR_STACKADDR 
,_SC_THREAD_ATTR_STACKSIZE 
,_SC_THREAD_PRIORITY_SCHEDULING 
,_SC_THREAD_PRIO_INHERIT 
,_SC_THREAD_PRIO_PROTECT 
,_SC_THREAD_PROCESS_SHARED 
,_SC_NPROCESSORS_CONF 
,_SC_NPROCESSORS_ONLN 
,_SC_PHYS_PAGES 
,_SC_AVPHYS_PAGES 
,_SC_ATEXIT_MAX 
,_SC_PASS_MAX 
,_SC_XOPEN_VERSION 
,_SC_XOPEN_XCU_VERSION 
,_SC_XOPEN_UNIX 
,_SC_XOPEN_CRYPT 
,_SC_XOPEN_ENH_I18N 
,_SC_XOPEN_SHM 
,_SC_2_CHAR_TERM 
,_SC_2_C_VERSION 
,_SC_2_UPE 
,_SC_XOPEN_XPG2 
,_SC_XOPEN_XPG3 
,_SC_XOPEN_XPG4 
,_SC_CHAR_BIT 
,_SC_CHAR_MAX 
,_SC_CHAR_MIN 
,_SC_INT_MAX 
,_SC_INT_MIN 
,_SC_LONG_BIT 
,_SC_WORD_BIT 
,_SC_MB_LEN_MAX 
,_SC_NZERO 
,_SC_SSIZE_MAX 
,_SC_SCHAR_MAX 
,_SC_SCHAR_MIN 
,_SC_SHRT_MAX 
,_SC_SHRT_MIN 
,_SC_UCHAR_MAX 
,_SC_UINT_MAX 
,_SC_ULONG_MAX 
,_SC_USHRT_MAX 
,_SC_NL_ARGMAX 
,_SC_NL_LANGMAX 
,_SC_NL_MSGMAX 
,_SC_NL_NMAX 
,_SC_NL_SETMAX 
,_SC_NL_TEXTMAX 
,_SC_XBS5_ILP32_OFF32 
,_SC_XBS5_ILP32_OFFBIG 
,_SC_XBS5_LP64_OFF64 
,_SC_XBS5_LPBIG_OFFBIG 
,_SC_XOPEN_LEGACY 
,_SC_XOPEN_REALTIME 
,_SC_XOPEN_REALTIME_THREADS 
,_SC_ADVISORY_INFO 
,_SC_BARRIERS 
,_SC_BASE 
,_SC_C_LANG_SUPPORT 
,_SC_C_LANG_SUPPORT_R 
,_SC_CLOCK_SELECTION 
,_SC_CPUTIME 
,_SC_THREAD_CPUTIME 
,_SC_DEVICE_IO 
,_SC_DEVICE_SPECIFIC 
,_SC_DEVICE_SPECIFIC_R 
,_SC_FD_MGMT 
,_SC_FIFO 
,_SC_PIPE 
,_SC_FILE_ATTRIBUTES 
,_SC_FILE_LOCKING 
,_SC_FILE_SYSTEM 
,_SC_MONOTONIC_CLOCK 
,_SC_MULTI_PROCESS 
,_SC_SINGLE_PROCESS 
,_SC_NETWORKING 
,_SC_READER_WRITER_LOCKS 
,_SC_SPIN_LOCKS 
,_SC_REGEXP 
,_SC_REGEX_VERSION 
,_SC_SHELL 
,_SC_SIGNALS 
,_SC_SPAWN 
,_SC_SPORADIC_SERVER 
,_SC_THREAD_SPORADIC_SERVER 
,_SC_SYSTEM_DATABASE 
,_SC_SYSTEM_DATABASE_R 
,_SC_TIMEOUTS 
,_SC_TYPED_MEMORY_OBJECTS 
,_SC_USER_GROUPS 
,_SC_USER_GROUPS_R 
,_SC_2_PBS 
,_SC_2_PBS_ACCOUNTING 
,_SC_2_PBS_LOCATE 
,_SC_2_PBS_MESSAGE 
,_SC_2_PBS_TRACK 
,_SC_SYMLOOP_MAX 
,_SC_STREAMS 
,_SC_2_PBS_CHECKPOINT 
,_SC_V6_ILP32_OFF32 
,_SC_V6_ILP32_OFFBIG 
,_SC_V6_LP64_OFF64 
,_SC_V6_LPBIG_OFFBIG 
,_SC_HOST_NAME_MAX 
,_SC_TRACE 
,_SC_TRACE_EVENT_FILTER 
,_SC_TRACE_INHERIT 
,_SC_TRACE_LOG 
,_SC_LEVEL1_ICACHE_SIZE 
,_SC_LEVEL1_ICACHE_ASSOC 
,_SC_LEVEL1_ICACHE_LINESIZE 
,_SC_LEVEL1_DCACHE_SIZE 
,_SC_LEVEL1_DCACHE_ASSOC 
,_SC_LEVEL1_DCACHE_LINESIZE 
,_SC_LEVEL2_CACHE_SIZE 
,_SC_LEVEL2_CACHE_ASSOC 
,_SC_LEVEL2_CACHE_LINESIZE 
,_SC_LEVEL3_CACHE_SIZE 
,_SC_LEVEL3_CACHE_ASSOC 
,_SC_LEVEL3_CACHE_LINESIZE 
,_SC_LEVEL4_CACHE_SIZE 
,_SC_LEVEL4_CACHE_ASSOC 
,_SC_LEVEL4_CACHE_LINESIZE 
,_SC_IPV6=(((60)+125)+50),
_SC_RAW_SOCKETS 
,_SC_V7_ILP32_OFF32 
,_SC_V7_ILP32_OFFBIG 
,_SC_V7_LP64_OFF64 
,_SC_V7_LPBIG_OFFBIG 
,_SC_SS_REPL_MAX 
,_SC_TRACE_EVENT_NAME_MAX 
,_SC_TRACE_NAME_MAX 
,_SC_TRACE_SYS_MAX 
,_SC_TRACE_USER_EVENT_MAX 
,_SC_XOPEN_STREAMS 
,_SC_THREAD_ROBUST_PRIO_INHERIT 
,_SC_THREAD_ROBUST_PRIO_PROTECT 
,_SC_MINSIGSTKSZ 
,_SC_SIGSTKSZ 
};

enum { _CS_PATH 
,_CS_V6_WIDTH_RESTRICTED_ENVS 
,_CS_GNU_LIBC_VERSION 
,_CS_GNU_LIBPTHREAD_VERSION 
,_CS_V5_WIDTH_RESTRICTED_ENVS 
,_CS_V7_WIDTH_RESTRICTED_ENVS 
,_CS_LFS_CFLAGS=(1000),
_CS_LFS_LDFLAGS 
,_CS_LFS_LIBS 
,_CS_LFS_LINTFLAGS 
,_CS_LFS64_CFLAGS 
,_CS_LFS64_LDFLAGS 
,_CS_LFS64_LIBS 
,_CS_LFS64_LINTFLAGS 
,_CS_XBS5_ILP32_OFF32_CFLAGS=(1100),
_CS_XBS5_ILP32_OFF32_LDFLAGS 
,_CS_XBS5_ILP32_OFF32_LIBS 
,_CS_XBS5_ILP32_OFF32_LINTFLAGS 
,_CS_XBS5_ILP32_OFFBIG_CFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LIBS 
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS 
,_CS_XBS5_LP64_OFF64_CFLAGS 
,_CS_XBS5_LP64_OFF64_LDFLAGS 
,_CS_XBS5_LP64_OFF64_LIBS 
,_CS_XBS5_LP64_OFF64_LINTFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LIBS 
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LIBS 
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_LP64_OFF64_CFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LIBS 
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LIBS 
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_LP64_OFF64_CFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LIBS 
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS 
,_CS_V6_ENV 
,_CS_V7_ENV 
};

enum { SS_ONSTACK=(1),
SS_DISABLE 
};

struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};

enum  __ns_sect { ns_s_qd=(0),
ns_s_zn=(0),
ns_s_an=(1),
ns_s_pr=(1),
ns_s_ns=(2),
ns_s_ud=(2),
ns_s_ar=(3),
ns_s_max=(4)
};

struct __ns_msg
{
    const unsigned char* _msg;
    const unsigned char** _eom;
    unsigned short int  _id  ;
    unsigned short int  _flags  ;
    unsigned short int  _counts[(4)]  ;
    const unsigned char* _sections[(4)];
    enum __ns_sect  _sect  ;
    int _rrnum;
    const unsigned char* _msg_ptr;
};

struct _ns_flagdata
{
    int mask;
    int shift;
};

struct __ns_rr
{
    char name[1025];
    unsigned short int  type  ;
    unsigned short int  rr_class  ;
    unsigned int  ttl  ;
    unsigned short int  rdlength  ;
    const unsigned char* rdata;
};

enum  __ns_flag { ns_f_qr 
,ns_f_opcode 
,ns_f_aa 
,ns_f_tc 
,ns_f_rd 
,ns_f_ra 
,ns_f_z 
,ns_f_ad 
,ns_f_cd 
,ns_f_rcode 
,ns_f_max 
};

enum  __ns_opcode { ns_o_query=(0),
ns_o_iquery=(1),
ns_o_status=(2),
ns_o_notify=(4),
ns_o_update=(5),
ns_o_max=(6)
};

enum  __ns_rcode { ns_r_noerror=(0),
ns_r_formerr=(1),
ns_r_servfail=(2),
ns_r_nxdomain=(3),
ns_r_notimpl=(4),
ns_r_refused=(5),
ns_r_yxdomain=(6),
ns_r_yxrrset=(7),
ns_r_nxrrset=(8),
ns_r_notauth=(9),
ns_r_notzone=(10),
ns_r_max=(11),
ns_r_badvers=(16),
ns_r_badsig=(16),
ns_r_badkey=(17),
ns_r_badtime=(18)
};

enum  __ns_update_operation { ns_uop_delete=(0),
ns_uop_add=(1),
ns_uop_max=(2)
};

struct ns_tsig_key
{
    char name[1025];
    char alg[1025];
    unsigned char* data;
    int len;
};

struct ns_tcp_tsig_state
{
    int counter;
    struct dst_key* key;
    void* ctx;
    unsigned char sig[512];
    int siglen;
};

enum  __ns_type { ns_t_invalid=(0),
ns_t_a=(1),
ns_t_ns=(2),
ns_t_md=(3),
ns_t_mf=(4),
ns_t_cname=(5),
ns_t_soa=(6),
ns_t_mb=(7),
ns_t_mg=(8),
ns_t_mr=(9),
ns_t_null=(10),
ns_t_wks=(11),
ns_t_ptr=(12),
ns_t_hinfo=(13),
ns_t_minfo=(14),
ns_t_mx=(15),
ns_t_txt=(16),
ns_t_rp=(17),
ns_t_afsdb=(18),
ns_t_x25=(19),
ns_t_isdn=(20),
ns_t_rt=(21),
ns_t_nsap=(22),
ns_t_nsap_ptr=(23),
ns_t_sig=(24),
ns_t_key=(25),
ns_t_px=(26),
ns_t_gpos=(27),
ns_t_aaaa=(28),
ns_t_loc=(29),
ns_t_nxt=(30),
ns_t_eid=(31),
ns_t_nimloc=(32),
ns_t_srv=(33),
ns_t_atma=(34),
ns_t_naptr=(35),
ns_t_kx=(36),
ns_t_cert=(37),
ns_t_a6=(38),
ns_t_dname=(39),
ns_t_sink=(40),
ns_t_opt=(41),
ns_t_apl=(42),
ns_t_ds=(43),
ns_t_sshfp=(44),
ns_t_ipseckey=(45),
ns_t_rrsig=(46),
ns_t_nsec=(47),
ns_t_dnskey=(48),
ns_t_dhcid=(49),
ns_t_nsec3=(50),
ns_t_nsec3param=(51),
ns_t_tlsa=(52),
ns_t_smimea=(53),
ns_t_hip=(55),
ns_t_ninfo=(56),
ns_t_rkey=(57),
ns_t_talink=(58),
ns_t_cds=(59),
ns_t_cdnskey=(60),
ns_t_openpgpkey=(61),
ns_t_csync=(62),
ns_t_spf=(99),
ns_t_uinfo=(100),
ns_t_uid=(101),
ns_t_gid=(102),
ns_t_unspec=(103),
ns_t_nid=(104),
ns_t_l32=(105),
ns_t_l64=(106),
ns_t_lp=(107),
ns_t_eui48=(108),
ns_t_eui64=(109),
ns_t_tkey=(249),
ns_t_tsig=(250),
ns_t_ixfr=(251),
ns_t_axfr=(252),
ns_t_mailb=(253),
ns_t_maila=(254),
ns_t_any=(255),
ns_t_uri=(256),
ns_t_caa=(257),
ns_t_avc=(258),
ns_t_ta=(32768),
ns_t_dlv=(32769),
ns_t_max=(65536)
};

enum  __ns_class { ns_c_invalid=(0),
ns_c_in=(1),
ns_c_2=(2),
ns_c_chaos=(3),
ns_c_hs=(4),
ns_c_none=(254),
ns_c_any=(255),
ns_c_max=(65536)
};

enum  __ns_cert_types { cert_t_pkix=(1),
cert_t_spki=(2),
cert_t_pgp=(3),
cert_t_url=(253),
cert_t_oid=(254)
};

struct anonymous_typeX146
{
    unsigned int id:16;
    unsigned int rd:1;
    unsigned int tc:1;
    unsigned int aa:1;
    unsigned int opcode:4;
    unsigned int qr:1;
    unsigned int rcode:4;
    unsigned int cd:1;
    unsigned int ad:1;
    unsigned int unused:1;
    unsigned int ra:1;
    unsigned int qdcount:16;
    unsigned int ancount:16;
    unsigned int nscount:16;
    unsigned int arcount:16;
};

struct anonymous_typeX147
{
    struct in_addr  addr  ;
    unsigned int  mask  ;
};

struct anonymous_typeX148
{
    struct in_addr  addr  ;
    unsigned int  mask  ;
};

struct anonymous_typeX150
{
    unsigned short int  nscount  ;
    unsigned short int  nsmap[3]  ;
    int nssocks[3];
    unsigned short int  nscount6  ;
    unsigned short int  nsinit  ;
    struct sockaddr_in6*  nsaddrs[3]  ;
    unsigned int __glibc_reserved[2];
};

union anonymous_typeZ149
{
char pad[52];
    struct {
        unsigned short int  nscount  ;
        unsigned short int  nsmap[3]  ;
        int nssocks[3];
        unsigned short int  nscount6  ;
        unsigned short int  nsinit  ;
        struct sockaddr_in6*  nsaddrs[3]  ;
        unsigned int __glibc_reserved[2];
    } _ext;
};

struct anonymous_typeX152
{
    unsigned short int  nscount  ;
    unsigned short int  nsmap[3]  ;
    int nssocks[3];
    unsigned short int  nscount6  ;
    unsigned short int  nsinit  ;
    struct sockaddr_in6*  nsaddrs[3]  ;
    unsigned int __glibc_reserved[2];
};

union anonymous_typeZ151
{
char pad[52];
    struct {
        unsigned short int  nscount  ;
        unsigned short int  nsmap[3]  ;
        int nssocks[3];
        unsigned short int  nscount6  ;
        unsigned short int  nsinit  ;
        struct sockaddr_in6*  nsaddrs[3]  ;
        unsigned int __glibc_reserved[2];
    } _ext;
};

struct __res_state
{
    int retrans;
    int retry;
    unsigned long  int options;
    int nscount;
    struct sockaddr_in  nsaddr_list[3]  ;
    unsigned short int id;
    char* dnsrch[6+1];
    char defdname[256];
    unsigned long  int pfcode;
    unsigned int ndots:4;
    unsigned int nsort:4;
    unsigned int ipv6_unavail:1;
    unsigned int unused:23;
    struct {
        struct in_addr  addr  ;
        unsigned int  mask  ;
    } sort_list;
    void* __glibc_unused_qhook;
    void* __glibc_unused_rhook;
    int res_h_errno;
    int _vcsock;
    unsigned int _flags;
    union {
        char pad[52];
        struct {
            unsigned short int  nscount  ;
            unsigned short int  nsmap[3]  ;
            int nssocks[3];
            unsigned short int  nscount6  ;
            unsigned short int  nsinit  ;
            struct sockaddr_in6*  nsaddrs[3]  ;
            unsigned int __glibc_reserved[2];
        } _ext;
    } _u;
};

struct res_sym
{
    int number;
    char* name;
    char* humanname;
};

struct qelem
{
    struct qelem*  q_forw  ;
    struct qelem*  q_back  ;
    char q_data[1];
};

enum  anonymous_typeY152 { FIND 
,ENTER 
};

struct entry
{
    char* key;
    void* data;
};

struct hsearch_data
{
    struct _ENTRY*  table  ;
    unsigned int size;
    unsigned int filled;
};

union anonymous_typeZ153
{
char __size[32];
long  int __align;
};

typedef struct __jmp_buf_tag  jmp_buf[1]  ;

typedef struct __jmp_buf_tag  sigjmp_buf[1]  ;

struct spwd
{
    char* sp_namp;
    char* sp_pwdp;
    long  int sp_lstchg;
    long  int sp_min;
    long  int sp_max;
    long  int sp_warn;
    long  int sp_inact;
    long  int sp_expire;
    unsigned long  int sp_flag;
};

struct anonymous_typeX154
{
    short int __flags;
    int  __pgrp  ;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __sd;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __ss;
    struct sched_param  __sp  ;
    int __policy;
    int __cgroup;
    int __pad[15];
};

struct anonymous_typeX155
{
    int __allocated;
    int __used  __used;
    struct __spawn_action* __actions;
    int __pad[16];
};

enum  __stab_debug_code { N_GSYM=(0x20),
N_FNAME=(0x22),
N_FUN=(0x24),
N_STSYM=(0x26),
N_LCSYM=(0x28),
N_MAIN=(0x2a),
N_PC=(0x30),
N_NSYMS=(0x32),
N_NOMAP=(0x34),
N_OBJ=(0x38),
N_OPT=(0x3c),
N_RSYM=(0x40),
N_M2C=(0x42),
N_SLINE=(0x44),
N_DSLINE=(0x46),
N_BSLINE=(0x48),
N_BROWS=(0x48),
N_DEFD=(0x4a),
N_EHDECL=(0x50),
N_MOD2=(0x50),
N_CATCH=(0x54),
N_SSYM=(0x60),
N_SO=(0x64),
N_LSYM=(0x80),
N_BINCL=(0x82),
N_SOL=(0x84),
N_PSYM=(0xa0),
N_EINCL=(0xa2),
N_ENTRY=(0xa4),
N_LBRAC=(0xc0),
N_EXCL=(0xc2),
N_SCOPE=(0xc4),
N_RBRAC=(0xe0),
N_BCOMM=(0xe2),
N_ECOMM=(0xe4),
N_ECOML=(0xe8),
N_NBTEXT=(0xF0),
N_NBDATA=(0xF2),
N_NBBSS=(0xF4),
N_NBSTS=(0xF6),
N_NBLCS=(0xF8),
N_LENG=(0xfe),
LAST_UNUSED_STAB_CODE 
};

enum { FSETLOCKING_QUERY=(0),
FSETLOCKING_INTERNAL 
,FSETLOCKING_BYCALLER 
};

struct anonymous_typeX156
{
    int quot;
    int rem;
};

struct anonymous_typeX157
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX158
{
    long long int quot;
    long long int rem;
};

struct random_data
{
    int*  fptr  ;
    int*  rptr  ;
    int*  state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int*  end_ptr  ;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int  __init;
    unsigned long long int __a;
};

struct termtype
{
    char* term_names;
    char* str_table;
    char* Booleans;
    short* Numbers;
    char** Strings;
    char* ext_str_table;
    char** ext_Names;
    unsigned short int num_Booleans;
    unsigned short int num_Numbers;
    unsigned short int num_Strings;
    unsigned short int ext_Booleans;
    unsigned short int ext_Numbers;
    unsigned short int ext_Strings;
};

struct term
{
    struct termtype  type  ;
};

enum  anonymous_typeY158 { TD_OK 
,TD_ERR 
,TD_NOTHR 
,TD_NOSV 
,TD_NOLWP 
,TD_BADPH 
,TD_BADTH 
,TD_BADSH 
,TD_BADTA 
,TD_BADKEY 
,TD_NOMSG 
,TD_NOFPREGS 
,TD_NOLIBTHREAD 
,TD_NOEVENT 
,TD_NOCAPAB 
,TD_DBERR 
,TD_NOAPLIC 
,TD_NOTSD 
,TD_MALLOC 
,TD_PARTIALREG 
,TD_NOXREGS 
,TD_TLSDEFER 
,TD_NOTALLOC=((21)),
TD_VERSION 
,TD_NOTLS 
};

struct td_thrhandle
{
    struct td_thragent*  th_ta_p  ;
    void*  th_unique  ;
};

struct td_thr_events
{
    unsigned int  event_bits[2]  ;
};

union anonymous_typeZ159
{
void*  bptaddr  ;
int syscallno;
};

union anonymous_typeZ160
{
void*  bptaddr  ;
int syscallno;
};

struct td_notify
{
    enum anonymous_typeY158  type  ;
    union {
        void*  bptaddr  ;
        int syscallno;
    } u;
};

union anonymous_typeZ161
{
unsigned long  int  data  ;
};

union anonymous_typeZ162
{
unsigned long  int  data  ;
};

struct td_event_msg
{
    enum anonymous_typeY158  event  ;
    const struct td_thrhandle*  th_p  ;
    union {
        unsigned long  int  data  ;
    } msg;
};

struct anonymous_typeX163
{
    struct td_thr_events  eventmask  ;
    enum anonymous_typeY158  eventnum  ;
    void* eventdata;
};

struct td_ta_stats
{
    int nthreads;
    int r_concurrency;
    int nrunnable_num;
    int nrunnable_den;
    int a_concurrency_num;
    int a_concurrency_den;
    int nlwps_num;
    int nlwps_den;
    int nidle_num;
    int nidle_den;
};

struct td_thrinfo
{
    struct td_thragent*  ti_ta_p  ;
    unsigned int ti_user_flags;
    unsigned long  int  ti_tid  ;
    char* ti_tls;
    void*  ti_startfunc  ;
    void*  ti_stkbase  ;
    long  int ti_stksize;
    void*  ti_ro_area  ;
    int ti_ro_size;
    enum anonymous_typeY158  ti_state  ;
    unsigned char ti_db_suspended;
    enum anonymous_typeY158  ti_type  ;
    long  int  ti_pc  ;
    long  int  ti_sp  ;
    short int ti_flags;
    int ti_pri;
    int  ti_lid  ;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } ti_sigmask;
    unsigned char ti_traceme;
    unsigned char ti_preemptflag;
    unsigned char ti_pirecflag;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } ti_pending;
    struct td_thr_events  ti_events  ;
};

enum { thrd_success=(0),
thrd_busy=(1),
thrd_error=(2),
thrd_nomem=(3),
thrd_timedout=(4)
};

enum { mtx_plain=(0),
mtx_recursive=(1),
mtx_timed=(2)
};

union anonymous_typeZ164
{
char __size[40];
long  int __align;
};

union anonymous_typeZ165
{
char __size[48];
long long int __align;
};

struct ttyent
{
    char* ty_name;
    char* ty_getty;
    char* ty_type;
    int ty_status;
    char* ty_window;
    char* ty_comment;
};

enum { UL_GETFSIZE=(1),
UL_SETFSIZE 
,__UL_GETMAXBRK 
,__UL_GETOPENMAX 
};

struct utimbuf
{
    long  int  actime  ;
    long  int  modtime  ;
};

struct __exit_status
{
    short int e_termination;
    short int e_exit;
};

struct anonymous_typeX166
{
    unsigned int  tv_sec  ;
    int  tv_usec  ;
};

struct anonymous_typeX167
{
    unsigned int  tv_sec  ;
    int  tv_usec  ;
};

struct utmpx
{
    short int ut_type;
    int  ut_pid  ;
    char ut_line[32];
    char ut_id[4];
    char ut_user[32];
    char ut_host[256];
    struct __exit_status  ut_exit  ;
    int  ut_session  ;
    struct {
        unsigned int  tv_sec  ;
        int  tv_usec  ;
    } ut_tv;
    int  ut_addr_v6[4]  ;
    char __glibc_reserved[20];
};

enum  anonymous_typeY167 { P_ALL 
,P_PID 
,P_PGID 
,P_PIDFD 
};

enum { __ISwupper=(0),
__ISwlower=(1),
__ISwalpha=(2),
__ISwdigit=(3),
__ISwxdigit=(4),
__ISwspace=(5),
__ISwprint=(6),
__ISwgraph=(7),
__ISwblank=(8),
__ISwcntrl=(9),
__ISwpunct=(10),
__ISwalnum=(11),
_ISwupper=((((((0))<8)?((int)((1UL<<((0)))<<24)):((((((0))<16)?((int)((1UL<<((0)))<<8)):((((((0))<24)?((int)((1UL<<((0)))>>8)):((int)((1UL<<((0)))>>24))))))))))),
_ISwlower=((((((1))<8)?((int)((1UL<<((1)))<<24)):((((((1))<16)?((int)((1UL<<((1)))<<8)):((((((1))<24)?((int)((1UL<<((1)))>>8)):((int)((1UL<<((1)))>>24))))))))))),
_ISwalpha=((((((2))<8)?((int)((1UL<<((2)))<<24)):((((((2))<16)?((int)((1UL<<((2)))<<8)):((((((2))<24)?((int)((1UL<<((2)))>>8)):((int)((1UL<<((2)))>>24))))))))))),
_ISwdigit=((((((3))<8)?((int)((1UL<<((3)))<<24)):((((((3))<16)?((int)((1UL<<((3)))<<8)):((((((3))<24)?((int)((1UL<<((3)))>>8)):((int)((1UL<<((3)))>>24))))))))))),
_ISwxdigit=((((((4))<8)?((int)((1UL<<((4)))<<24)):((((((4))<16)?((int)((1UL<<((4)))<<8)):((((((4))<24)?((int)((1UL<<((4)))>>8)):((int)((1UL<<((4)))>>24))))))))))),
_ISwspace=((((((5))<8)?((int)((1UL<<((5)))<<24)):((((((5))<16)?((int)((1UL<<((5)))<<8)):((((((5))<24)?((int)((1UL<<((5)))>>8)):((int)((1UL<<((5)))>>24))))))))))),
_ISwprint=((((((6))<8)?((int)((1UL<<((6)))<<24)):((((((6))<16)?((int)((1UL<<((6)))<<8)):((((((6))<24)?((int)((1UL<<((6)))>>8)):((int)((1UL<<((6)))>>24))))))))))),
_ISwgraph=((((((7))<8)?((int)((1UL<<((7)))<<24)):((((((7))<16)?((int)((1UL<<((7)))<<8)):((((((7))<24)?((int)((1UL<<((7)))>>8)):((int)((1UL<<((7)))>>24))))))))))),
_ISwblank=((((((8))<8)?((int)((1UL<<((8)))<<24)):((((((8))<16)?((int)((1UL<<((8)))<<8)):((((((8))<24)?((int)((1UL<<((8)))>>8)):((int)((1UL<<((8)))>>24))))))))))),
_ISwcntrl=((((((9))<8)?((int)((1UL<<((9)))<<24)):((((((9))<16)?((int)((1UL<<((9)))<<8)):((((((9))<24)?((int)((1UL<<((9)))>>8)):((int)((1UL<<((9)))>>24))))))))))),
_ISwpunct=((((((10))<8)?((int)((1UL<<((10)))<<24)):((((((10))<16)?((int)((1UL<<((10)))<<8)):((((((10))<24)?((int)((1UL<<((10)))>>8)):((int)((1UL<<((10)))>>24))))))))))),
_ISwalnum=((((((11))<8)?((int)((1UL<<((11)))<<24)):((((((11))<16)?((int)((1UL<<((11)))<<8)):((((((11))<24)?((int)((1UL<<((11)))>>8)):((int)((1UL<<((11)))>>24)))))))))))
};

enum { WRDE_DOOFFS=((1<<0)),
WRDE_APPEND=((1<<1)),
WRDE_NOCMD=((1<<2)),
WRDE_REUSE=((1<<3)),
WRDE_SHOWERR=((1<<4)),
WRDE_UNDEF=((1<<5)),
__WRDE_FLAGS=((((1<<0))|((1<<1))|((1<<2))|((1<<3))|((1<<4))|((1<<5))))
};

struct anonymous_typeX168
{
    unsigned long  we_wordc  ;
    char** we_wordv;
    unsigned long  we_offs  ;
};

enum { WRDE_NOSYS=(-1),
WRDE_NOSPACE=(1),
WRDE_BADCHAR 
,WRDE_BADVAL 
,WRDE_CMDSUB 
,WRDE_SYNTAX 
};

struct fstab
{
    char* fs_spec;
    char* fs_file;
    char* fs_vfstype;
    char* fs_mntops;
    const char* fs_type;
    int fs_freq;
    int fs_passno;
};

union anonymous_typeZ169
{
float  xmm[4]  ;
};

struct La_x86_64_regs
{
    unsigned long  int  lr_rdx  ;
    unsigned long  int  lr_r8  ;
    unsigned long  int  lr_r9  ;
    unsigned long  int  lr_rcx  ;
    unsigned long  int  lr_rsi  ;
    unsigned long  int  lr_rdi  ;
    unsigned long  int  lr_rbp  ;
    unsigned long  int  lr_rsp  ;
    float  lr_xmm[8]  ;
    union {
        float  xmm[4]  ;
    } lr_vector;
    __int128_t __glibc_unused1[4];
};

struct La_x86_64_retval
{
    unsigned long  int  lrv_rax  ;
    unsigned long  int  lrv_rdx  ;
    float  lrv_xmm0  ;
    float  lrv_xmm1  ;
    long  double lrv_st0;
    long  double lrv_st1;
    union {
        float  xmm[4]  ;
    } lrv_vector0;
    union {
        float  xmm[4]  ;
    } lrv_vector1;
    __int128_t __glibc_unused1;
    __int128_t __glibc_unused2;
};

enum  anonymous_typeY169 { RT_CONSISTENT 
,RT_ADD 
,RT_DELETE 
};

struct r_debug
{
    int r_version;
    struct link_map*  r_map  ;
    unsigned long  int  r_brk  ;
    enum anonymous_typeY169 r_state;
    unsigned long  int  r_ldbase  ;
};

struct r_debug_extended
{
    struct r_debug  base  ;
    struct r_debug_extended*  r_next  ;
};

struct link_map
{
    unsigned long  int  l_addr  ;
    char* l_name;
    struct {
        long  int  d_tag  ;
        union {
            unsigned long  int  d_val  ;
            unsigned long  int  d_ptr  ;
        } d_un;
    } l_ld;
    struct link_map*  l_next  ;
    struct link_map**  l_prev  ;
};

enum { LA_ACT_CONSISTENT 
,LA_ACT_ADD 
,LA_ACT_DELETE 
};

enum { LA_SER_ORIG=(0x01),
LA_SER_LIBPATH=(0x02),
LA_SER_RUNPATH=(0x04),
LA_SER_CONFIG=(0x08),
LA_SER_DEFAULT=(0x40),
LA_SER_SECURE=(0x80)
};

enum { LA_FLG_BINDTO=(0x01),
LA_FLG_BINDFROM=(0x02)
};

enum { LA_SYMB_NOPLTENTER=(0x01),
LA_SYMB_NOPLTEXIT=(0x02),
LA_SYMB_STRUCTCALL=(0x04),
LA_SYMB_DLSYM=(0x08),
LA_SYMB_ALTVALUE=(0x10)
};

struct dl_phdr_info
{
    unsigned long  int  dlpi_addr  ;
    const char* dlpi_name;
    struct {
        unsigned int  p_type  ;
        unsigned int  p_flags  ;
        unsigned long  int  p_offset  ;
        unsigned long  int  p_vaddr  ;
        unsigned long  int  p_paddr  ;
        unsigned long  int  p_filesz  ;
        unsigned long  int  p_memsz  ;
        unsigned long  int  p_align  ;
    } dlpi_phdr;
    unsigned short int  dlpi_phnum  ;
    unsigned long long int dlpi_adds;
    unsigned long long int dlpi_subs;
    unsigned long  dlpi_tls_modid  ;
    void* dlpi_tls_data;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern const char* argp_program_version;
extern void (*argp_program_version_hook)(struct _IO_FILE* __restrict ,struct argp_state* __restrict );
extern const char* argp_program_bug_address;
extern int  argp_err_exit_status  ;
extern unsigned int  acs_map[]  ;
extern struct _win_st*  curscr  ;
extern struct _win_st*  newscr  ;
extern struct _win_st*  stdscr  ;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
extern struct anonymous_typeX24*  _nc_wacs  ;
extern void (*error_print_progname)();
extern unsigned int error_message_count;
extern int error_one_per_line;
extern struct typenode*  TYPE_ALPHA  ;
extern struct typenode*  TYPE_ALNUM  ;
extern struct typenode*  TYPE_ENUM  ;
extern struct typenode*  TYPE_INTEGER  ;
extern struct typenode*  TYPE_NUMERIC  ;
extern struct typenode*  TYPE_REGEXP  ;
extern struct typenode*  TYPE_IPV4  ;
extern unsigned int  __fpu_control  ;
extern int signgam;
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
extern void (*obstack_alloc_failed_handler)();
extern int obstack_exit_failure;
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
extern unsigned long  int  re_syntax_options  ;
extern char** __environ;
extern char** environ;
extern const struct _ns_flagdata  _ns_flagdata[]  ;
extern struct term*  cur_term  ;
extern const char* const boolnames[];
extern const char* const boolcodes[];
extern const char* const boolfnames[];
extern const char* const numnames[];
extern const char* const numcodes[];
extern const char* const numfnames[];
extern const char* const strnames[];
extern const char* const strcodes[];
extern const char* const strfnames[];
extern char PC;
extern char* UP;
extern char* BC;
extern unsigned int ospeed;
extern struct r_debug  _r_debug  ;
extern struct anonymous_typeX50  _DYNAMIC[]  ;
// source head

// header function
int select(int __nfds, struct anonymous_typeX4* __restrict  __readfds  , struct anonymous_typeX4* __restrict  __writefds  , struct anonymous_typeX4* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX4* __restrict  __readfds  , struct anonymous_typeX4* __restrict  __writefds  , struct anonymous_typeX4* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX3* __restrict  __sigmask  );
void aio_init(const struct aioinit*    __init);
int aio_read(struct aiocb*  __aiocbp  );
int aio_write(struct aiocb*  __aiocbp  );
int lio_listio(int __mode, struct aiocb* const  __list[]  , int __nent, struct sigevent* __restrict  __sig  );
int aio_error(const struct aiocb*  __aiocbp  );
long  int  aio_return(struct aiocb*  __aiocbp  );
int aio_cancel(int __fildes, struct aiocb*  __aiocbp  );
int aio_suspend(const struct aiocb* const  __list[]  , int __nent, const struct timespec* __restrict  __timeout  );
int aio_fsync(int __operation, struct aiocb*  __aiocbp  );
int aio_read64(struct aiocb64*  __aiocbp  );
int aio_write64(struct aiocb64*  __aiocbp  );
int lio_listio64(int __mode, struct aiocb64* const  __list[]  , int __nent, struct sigevent* __restrict  __sig  );
int aio_error64(const struct aiocb64*  __aiocbp  );
long  int  aio_return64(struct aiocb64*  __aiocbp  );
int aio_cancel64(int __fildes, struct aiocb64*  __aiocbp  );
int aio_suspend64(const struct aiocb64* const  __list[]  , int __nent, const struct timespec* __restrict  __timeout  );
int aio_fsync64(int __operation, struct aiocb64*  __aiocbp  );
void setaliasent();
void endaliasent();
struct aliasent*  getaliasent();
int getaliasent_r(struct aliasent* __restrict  __result_buf  , char* __restrict __buffer, unsigned long  __buflen  , struct aliasent** __restrict  __result  );
struct aliasent*  getaliasbyname(const char* __name);
int getaliasbyname_r(const char* __restrict __name, struct aliasent* __restrict  __result_buf  , char* __restrict __buffer, unsigned long  __buflen  , struct aliasent** __restrict  __result  );
void* alloca(unsigned long  __size  );
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  tmpfile() __attribute__ ((__malloc__))  ;
struct _IO_FILE*  tmpfile64() __attribute__ ((__malloc__))  ;
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx) __attribute__ ((__malloc__))  ;
int fflush(struct _IO_FILE*  __stream  );
int fflush_unlocked(struct _IO_FILE*  __stream  );
int fcloseall();
struct _IO_FILE*  fopen(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fopen64(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen64(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fdopen(int __fd, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fopencookie(void* __restrict __magic_cookie, const char* __restrict __modes, struct _IO_cookie_io_functions_t  __io_funcs  ) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict  __format, ...);
int printf(const char* __restrict  __format, ...);
int sprintf(char* __restrict __s, const char* __restrict  __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict  __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict  __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict  __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict  __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict  __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf(char** __restrict __ptr, const char* __restrict __f, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0))) ;
int __asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int vdprintf(int __fd, const char* __restrict __fmt, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int dprintf(int __fd, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict  __format, ...);
int scanf(const char* __restrict  __format, ...);
int sscanf(const char* __restrict __s, const char* __restrict  __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict  __format, ...);
int __isoc23_scanf(const char* __restrict  __format, ...);
int __isoc23_sscanf(const char* __restrict __s, const char* __restrict  __format, ...);
int vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict  __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)))  ;
int vscanf(const char* __restrict  __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __restrict __s, const char* __restrict  __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc23_vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict  __format, __builtin_va_list  __arg  );
int __isoc23_vscanf(const char* __restrict  __format, __builtin_va_list  __arg  );
int __isoc23_vsscanf(const char* __restrict __s, const char* __restrict  __format, __builtin_va_list  __arg  );
int fgetc(struct _IO_FILE*  __stream  );
int getc(struct _IO_FILE*  __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE*  __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE*  __stream  );
int fputc(int __c, struct _IO_FILE*  __stream  );
int putc(int __c, struct _IO_FILE*  __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE*  __stream  );
int putw(int __w, struct _IO_FILE*  __stream  );
char* fgets(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
char* fgets_unlocked(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
int fseek(struct _IO_FILE*  __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE*  __stream  );
void rewind(struct _IO_FILE*  __stream  );
int fseeko(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello(struct _IO_FILE*  __stream  );
int fgetpos(struct _IO_FILE* __restrict  __stream  , struct _G_fpos_t* __restrict  __pos  );
int fsetpos(struct _IO_FILE*  __stream  , const struct _G_fpos_t*  __pos  );
int fseeko64(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello64(struct _IO_FILE*  __stream  );
int fgetpos64(struct _IO_FILE* __restrict  __stream  , struct _G_fpos64_t* __restrict  __pos  );
int fsetpos64(struct _IO_FILE*  __stream  , const struct _G_fpos64_t*  __pos  );
void clearerr(struct _IO_FILE*  __stream  );
int feof(struct _IO_FILE*  __stream  );
int ferror(struct _IO_FILE*  __stream  );
void clearerr_unlocked(struct _IO_FILE*  __stream  );
int feof_unlocked(struct _IO_FILE*  __stream  );
int ferror_unlocked(struct _IO_FILE*  __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE*  __stream  );
int fileno_unlocked(struct _IO_FILE*  __stream  );
int pclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  popen(const char* __command, const char* __modes) __attribute__ ((__malloc__))  ;
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __restrict  __obstack  , const char* __restrict  __format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int obstack_vprintf(struct obstack* __restrict  __obstack  , const char* __restrict  __format, __builtin_va_list  __args  ) __attribute__ ((__format__ (__printf__, 2, 0)));
void flockfile(struct _IO_FILE*  __stream  );
int ftrylockfile(struct _IO_FILE*  __stream  );
void funlockfile(struct _IO_FILE*  __stream  );
int __uflow(struct _IO_FILE*    );
int __overflow(struct _IO_FILE*    , int );
const unsigned short int** __ctype_b_loc() __attribute__ ((__const__));
const int**  __ctype_tolower_loc() __attribute__ ((__const__));
const int**  __ctype_toupper_loc() __attribute__ ((__const__));
int isalnum(int );
int isalpha(int );
int iscntrl(int );
int isdigit(int );
int islower(int );
int isgraph(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int __c);
int toupper(int __c);
int isblank(int );
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int );
int _tolower(int );
int isalnum_l(int , struct __locale_struct*    );
int isalpha_l(int , struct __locale_struct*    );
int iscntrl_l(int , struct __locale_struct*    );
int isdigit_l(int , struct __locale_struct*    );
int islower_l(int , struct __locale_struct*    );
int isgraph_l(int , struct __locale_struct*    );
int isprint_l(int , struct __locale_struct*    );
int ispunct_l(int , struct __locale_struct*    );
int isspace_l(int , struct __locale_struct*    );
int isupper_l(int , struct __locale_struct*    );
int isxdigit_l(int , struct __locale_struct*    );
int isblank_l(int , struct __locale_struct*    );
int __tolower_l(int __c, struct __locale_struct*  __l  );
int tolower_l(int __c, struct __locale_struct*  __l  );
int __toupper_l(int __c, struct __locale_struct*  __l  );
int toupper_l(int __c, struct __locale_struct*  __l  );
int getopt(int ___argc, char** const ___argv, const char* __shortopts);
int getopt_long(int ___argc, char** const ___argv, const char* __shortopts, const struct option*  __longopts  , int* __longind);
int getopt_long_only(int ___argc, char** const ___argv, const char* __shortopts, const struct option*  __longopts  , int* __longind);
long  int __sysconf(int __name);
int* __errno_location() __attribute__ ((__const__));
int  argp_parse(const struct argp* __restrict  __argp  , int __argc, char** __restrict __argv, unsigned int __flags, int* __restrict __arg_index, void* __restrict __input);
int  __argp_parse(const struct argp* __restrict  __argp  , int __argc, char** __restrict __argv, unsigned int __flags, int* __restrict __arg_index, void* __restrict __input);
void argp_help(const struct argp* __restrict  __argp  , struct _IO_FILE* __restrict  __stream  , unsigned int __flags, char* __restrict __name);
void __argp_help(const struct argp* __restrict  __argp  , struct _IO_FILE* __restrict  __stream  , unsigned int __flags, char* __name);
void argp_state_help(const struct argp_state* __restrict  __state  , struct _IO_FILE* __restrict  __stream  , unsigned int __flags);
void __argp_state_help(const struct argp_state* __restrict  __state  , struct _IO_FILE* __restrict  __stream  , unsigned int __flags);
void argp_usage(const struct argp_state*  __state  );
void __argp_usage(const struct argp_state*  __state  );
void argp_error(const struct argp_state* __restrict  __state  , const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
void __argp_error(const struct argp_state* __restrict  __state  , const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
void argp_failure(const struct argp_state* __restrict  __state  , int __status, int __errnum, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
void __argp_failure(const struct argp_state* __restrict  __state  , int __status, int __errnum, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
int _option_is_short(const struct argp_option*  __opt  );
int __option_is_short(const struct argp_option*  __opt  );
int _option_is_end(const struct argp_option*  __opt  );
int __option_is_end(const struct argp_option*  __opt  );
void* _argp_input(const struct argp* __restrict  __argp  , const struct argp_state* __restrict  __state  );
void* __argp_input(const struct argp* __restrict  __argp  , const struct argp_state* __restrict  __state  );
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
int  __argz_create(char* const __argv[], char** __restrict __argz, unsigned long* __restrict  __len  );
int  argz_create(char* const __argv[], char** __restrict __argz, unsigned long* __restrict  __len  );
int  argz_create_sep(const char* __restrict __string, int __sep, char** __restrict __argz, unsigned long* __restrict  __len  );
unsigned long  __argz_count(const char* __argz, unsigned long  __len  ) __attribute__ ((__pure__));
unsigned long  argz_count(const char* __argz, unsigned long  __len  ) __attribute__ ((__pure__));
void __argz_extract(const char* __restrict __argz, unsigned long  __len  , char** __restrict __argv);
void argz_extract(const char* __restrict __argz, unsigned long  __len  , char** __restrict __argv);
void __argz_stringify(char* __argz, unsigned long  __len  , int __sep);
void argz_stringify(char* __argz, unsigned long  __len  , int __sep);
int  argz_append(char** __restrict __argz, unsigned long* __restrict  __argz_len  , const char* __restrict __buf, unsigned long  __buf_len  );
int  argz_add(char** __restrict __argz, unsigned long* __restrict  __argz_len  , const char* __restrict __str);
int  argz_add_sep(char** __restrict __argz, unsigned long* __restrict  __argz_len  , const char* __restrict __string, int __delim);
void argz_delete(char** __restrict __argz, unsigned long* __restrict  __argz_len  , char* __restrict __entry);
int  argz_insert(char** __restrict __argz, unsigned long* __restrict  __argz_len  , char* __restrict __before, const char* __restrict __entry);
int  argz_replace(char** __restrict __argz, unsigned long* __restrict  __argz_len  , const char* __restrict __str, const char* __restrict __with, unsigned int* __restrict __replace_count);
char* __argz_next(const char* __restrict __argz, unsigned long  __argz_len  , const char* __restrict __entry);
char* argz_next(const char* __restrict __argz, unsigned long  __argz_len  , const char* __restrict __entry);
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert(const char* __assertion, const char* __file, int __line) __attribute__ ((__noreturn__)) ;
_Complex double cacos(_Complex double __z);
_Complex double __cacos(_Complex double __z);
_Complex double casin(_Complex double __z);
_Complex double __casin(_Complex double __z);
_Complex double catan(_Complex double __z);
_Complex double __catan(_Complex double __z);
_Complex double ccos(_Complex double __z);
_Complex double __ccos(_Complex double __z);
_Complex double csin(_Complex double __z);
_Complex double __csin(_Complex double __z);
_Complex double ctan(_Complex double __z);
_Complex double __ctan(_Complex double __z);
_Complex double cacosh(_Complex double __z);
_Complex double __cacosh(_Complex double __z);
_Complex double casinh(_Complex double __z);
_Complex double __casinh(_Complex double __z);
_Complex double catanh(_Complex double __z);
_Complex double __catanh(_Complex double __z);
_Complex double ccosh(_Complex double __z);
_Complex double __ccosh(_Complex double __z);
_Complex double csinh(_Complex double __z);
_Complex double __csinh(_Complex double __z);
_Complex double ctanh(_Complex double __z);
_Complex double __ctanh(_Complex double __z);
_Complex double cexp(_Complex double __z);
_Complex double __cexp(_Complex double __z);
_Complex double clog(_Complex double __z);
_Complex double __clog(_Complex double __z);
_Complex double clog10(_Complex double __z);
_Complex double __clog10(_Complex double __z);
_Complex double cpow(_Complex double __x, _Complex double __y);
_Complex double __cpow(_Complex double __x, _Complex double __y);
_Complex double csqrt(_Complex double __z);
_Complex double __csqrt(_Complex double __z);
double cabs(_Complex double __z);
double __cabs(_Complex double __z);
double carg(_Complex double __z);
double __carg(_Complex double __z);
_Complex double conj(_Complex double __z);
_Complex double __conj(_Complex double __z);
_Complex double cproj(_Complex double __z);
_Complex double __cproj(_Complex double __z);
double cimag(_Complex double __z);
double __cimag(_Complex double __z);
double creal(_Complex double __z);
double __creal(_Complex double __z);
_Complex float cacosf(_Complex float __z);
_Complex float __cacosf(_Complex float __z);
_Complex float casinf(_Complex float __z);
_Complex float __casinf(_Complex float __z);
_Complex float catanf(_Complex float __z);
_Complex float __catanf(_Complex float __z);
_Complex float ccosf(_Complex float __z);
_Complex float __ccosf(_Complex float __z);
_Complex float csinf(_Complex float __z);
_Complex float __csinf(_Complex float __z);
_Complex float ctanf(_Complex float __z);
_Complex float __ctanf(_Complex float __z);
_Complex float cacoshf(_Complex float __z);
_Complex float __cacoshf(_Complex float __z);
_Complex float casinhf(_Complex float __z);
_Complex float __casinhf(_Complex float __z);
_Complex float catanhf(_Complex float __z);
_Complex float __catanhf(_Complex float __z);
_Complex float ccoshf(_Complex float __z);
_Complex float __ccoshf(_Complex float __z);
_Complex float csinhf(_Complex float __z);
_Complex float __csinhf(_Complex float __z);
_Complex float ctanhf(_Complex float __z);
_Complex float __ctanhf(_Complex float __z);
_Complex float cexpf(_Complex float __z);
_Complex float __cexpf(_Complex float __z);
_Complex float clogf(_Complex float __z);
_Complex float __clogf(_Complex float __z);
_Complex float clog10f(_Complex float __z);
_Complex float __clog10f(_Complex float __z);
_Complex float cpowf(_Complex float __x, _Complex float __y);
_Complex float __cpowf(_Complex float __x, _Complex float __y);
_Complex float csqrtf(_Complex float __z);
_Complex float __csqrtf(_Complex float __z);
float cabsf(_Complex float __z);
float __cabsf(_Complex float __z);
float cargf(_Complex float __z);
float __cargf(_Complex float __z);
_Complex float conjf(_Complex float __z);
_Complex float __conjf(_Complex float __z);
_Complex float cprojf(_Complex float __z);
_Complex float __cprojf(_Complex float __z);
float cimagf(_Complex float __z);
float __cimagf(_Complex float __z);
float crealf(_Complex float __z);
float __crealf(_Complex float __z);
_Complex long  double cacosl(_Complex long  double __z);
_Complex long  double __cacosl(_Complex long  double __z);
_Complex long  double casinl(_Complex long  double __z);
_Complex long  double __casinl(_Complex long  double __z);
_Complex long  double catanl(_Complex long  double __z);
_Complex long  double __catanl(_Complex long  double __z);
_Complex long  double ccosl(_Complex long  double __z);
_Complex long  double __ccosl(_Complex long  double __z);
_Complex long  double csinl(_Complex long  double __z);
_Complex long  double __csinl(_Complex long  double __z);
_Complex long  double ctanl(_Complex long  double __z);
_Complex long  double __ctanl(_Complex long  double __z);
_Complex long  double cacoshl(_Complex long  double __z);
_Complex long  double __cacoshl(_Complex long  double __z);
_Complex long  double casinhl(_Complex long  double __z);
_Complex long  double __casinhl(_Complex long  double __z);
_Complex long  double catanhl(_Complex long  double __z);
_Complex long  double __catanhl(_Complex long  double __z);
_Complex long  double ccoshl(_Complex long  double __z);
_Complex long  double __ccoshl(_Complex long  double __z);
_Complex long  double csinhl(_Complex long  double __z);
_Complex long  double __csinhl(_Complex long  double __z);
_Complex long  double ctanhl(_Complex long  double __z);
_Complex long  double __ctanhl(_Complex long  double __z);
_Complex long  double cexpl(_Complex long  double __z);
_Complex long  double __cexpl(_Complex long  double __z);
_Complex long  double clogl(_Complex long  double __z);
_Complex long  double __clogl(_Complex long  double __z);
_Complex long  double clog10l(_Complex long  double __z);
_Complex long  double __clog10l(_Complex long  double __z);
_Complex long  double cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtl(_Complex long  double __z);
_Complex long  double __csqrtl(_Complex long  double __z);
long  double cabsl(_Complex long  double __z);
long  double __cabsl(_Complex long  double __z);
long  double cargl(_Complex long  double __z);
long  double __cargl(_Complex long  double __z);
_Complex long  double conjl(_Complex long  double __z);
_Complex long  double __conjl(_Complex long  double __z);
_Complex long  double cprojl(_Complex long  double __z);
_Complex long  double __cprojl(_Complex long  double __z);
long  double cimagl(_Complex long  double __z);
long  double __cimagl(_Complex long  double __z);
long  double creall(_Complex long  double __z);
long  double __creall(_Complex long  double __z);
_Complex float cacosf32(_Complex float __z);
_Complex float __cacosf32(_Complex float __z);
_Complex float casinf32(_Complex float __z);
_Complex float __casinf32(_Complex float __z);
_Complex float catanf32(_Complex float __z);
_Complex float __catanf32(_Complex float __z);
_Complex float ccosf32(_Complex float __z);
_Complex float __ccosf32(_Complex float __z);
_Complex float csinf32(_Complex float __z);
_Complex float __csinf32(_Complex float __z);
_Complex float ctanf32(_Complex float __z);
_Complex float __ctanf32(_Complex float __z);
_Complex float cacoshf32(_Complex float __z);
_Complex float __cacoshf32(_Complex float __z);
_Complex float casinhf32(_Complex float __z);
_Complex float __casinhf32(_Complex float __z);
_Complex float catanhf32(_Complex float __z);
_Complex float __catanhf32(_Complex float __z);
_Complex float ccoshf32(_Complex float __z);
_Complex float __ccoshf32(_Complex float __z);
_Complex float csinhf32(_Complex float __z);
_Complex float __csinhf32(_Complex float __z);
_Complex float ctanhf32(_Complex float __z);
_Complex float __ctanhf32(_Complex float __z);
_Complex float cexpf32(_Complex float __z);
_Complex float __cexpf32(_Complex float __z);
_Complex float clogf32(_Complex float __z);
_Complex float __clogf32(_Complex float __z);
_Complex float clog10f32(_Complex float __z);
_Complex float __clog10f32(_Complex float __z);
_Complex float cpowf32(_Complex float __x, _Complex float __y);
_Complex float __cpowf32(_Complex float __x, _Complex float __y);
_Complex float csqrtf32(_Complex float __z);
_Complex float __csqrtf32(_Complex float __z);
float  cabsf32(_Complex float __z);
float  __cabsf32(_Complex float __z);
float  cargf32(_Complex float __z);
float  __cargf32(_Complex float __z);
_Complex float conjf32(_Complex float __z);
_Complex float __conjf32(_Complex float __z);
_Complex float cprojf32(_Complex float __z);
_Complex float __cprojf32(_Complex float __z);
float  cimagf32(_Complex float __z);
float  __cimagf32(_Complex float __z);
float  crealf32(_Complex float __z);
float  __crealf32(_Complex float __z);
_Complex double cacosf64(_Complex double __z);
_Complex double __cacosf64(_Complex double __z);
_Complex double casinf64(_Complex double __z);
_Complex double __casinf64(_Complex double __z);
_Complex double catanf64(_Complex double __z);
_Complex double __catanf64(_Complex double __z);
_Complex double ccosf64(_Complex double __z);
_Complex double __ccosf64(_Complex double __z);
_Complex double csinf64(_Complex double __z);
_Complex double __csinf64(_Complex double __z);
_Complex double ctanf64(_Complex double __z);
_Complex double __ctanf64(_Complex double __z);
_Complex double cacoshf64(_Complex double __z);
_Complex double __cacoshf64(_Complex double __z);
_Complex double casinhf64(_Complex double __z);
_Complex double __casinhf64(_Complex double __z);
_Complex double catanhf64(_Complex double __z);
_Complex double __catanhf64(_Complex double __z);
_Complex double ccoshf64(_Complex double __z);
_Complex double __ccoshf64(_Complex double __z);
_Complex double csinhf64(_Complex double __z);
_Complex double __csinhf64(_Complex double __z);
_Complex double ctanhf64(_Complex double __z);
_Complex double __ctanhf64(_Complex double __z);
_Complex double cexpf64(_Complex double __z);
_Complex double __cexpf64(_Complex double __z);
_Complex double clogf64(_Complex double __z);
_Complex double __clogf64(_Complex double __z);
_Complex double clog10f64(_Complex double __z);
_Complex double __clog10f64(_Complex double __z);
_Complex double cpowf64(_Complex double __x, _Complex double __y);
_Complex double __cpowf64(_Complex double __x, _Complex double __y);
_Complex double csqrtf64(_Complex double __z);
_Complex double __csqrtf64(_Complex double __z);
double  cabsf64(_Complex double __z);
double  __cabsf64(_Complex double __z);
double  cargf64(_Complex double __z);
double  __cargf64(_Complex double __z);
_Complex double conjf64(_Complex double __z);
_Complex double __conjf64(_Complex double __z);
_Complex double cprojf64(_Complex double __z);
_Complex double __cprojf64(_Complex double __z);
double  cimagf64(_Complex double __z);
double  __cimagf64(_Complex double __z);
double  crealf64(_Complex double __z);
double  __crealf64(_Complex double __z);
_Complex double cacosf32x(_Complex double __z);
_Complex double __cacosf32x(_Complex double __z);
_Complex double casinf32x(_Complex double __z);
_Complex double __casinf32x(_Complex double __z);
_Complex double catanf32x(_Complex double __z);
_Complex double __catanf32x(_Complex double __z);
_Complex double ccosf32x(_Complex double __z);
_Complex double __ccosf32x(_Complex double __z);
_Complex double csinf32x(_Complex double __z);
_Complex double __csinf32x(_Complex double __z);
_Complex double ctanf32x(_Complex double __z);
_Complex double __ctanf32x(_Complex double __z);
_Complex double cacoshf32x(_Complex double __z);
_Complex double __cacoshf32x(_Complex double __z);
_Complex double casinhf32x(_Complex double __z);
_Complex double __casinhf32x(_Complex double __z);
_Complex double catanhf32x(_Complex double __z);
_Complex double __catanhf32x(_Complex double __z);
_Complex double ccoshf32x(_Complex double __z);
_Complex double __ccoshf32x(_Complex double __z);
_Complex double csinhf32x(_Complex double __z);
_Complex double __csinhf32x(_Complex double __z);
_Complex double ctanhf32x(_Complex double __z);
_Complex double __ctanhf32x(_Complex double __z);
_Complex double cexpf32x(_Complex double __z);
_Complex double __cexpf32x(_Complex double __z);
_Complex double clogf32x(_Complex double __z);
_Complex double __clogf32x(_Complex double __z);
_Complex double clog10f32x(_Complex double __z);
_Complex double __clog10f32x(_Complex double __z);
_Complex double cpowf32x(_Complex double __x, _Complex double __y);
_Complex double __cpowf32x(_Complex double __x, _Complex double __y);
_Complex double csqrtf32x(_Complex double __z);
_Complex double __csqrtf32x(_Complex double __z);
double  cabsf32x(_Complex double __z);
double  __cabsf32x(_Complex double __z);
double  cargf32x(_Complex double __z);
double  __cargf32x(_Complex double __z);
_Complex double conjf32x(_Complex double __z);
_Complex double __conjf32x(_Complex double __z);
_Complex double cprojf32x(_Complex double __z);
_Complex double __cprojf32x(_Complex double __z);
double  cimagf32x(_Complex double __z);
double  __cimagf32x(_Complex double __z);
double  crealf32x(_Complex double __z);
double  __crealf32x(_Complex double __z);
_Complex long  double cacosf64x(_Complex long  double __z);
_Complex long  double __cacosf64x(_Complex long  double __z);
_Complex long  double casinf64x(_Complex long  double __z);
_Complex long  double __casinf64x(_Complex long  double __z);
_Complex long  double catanf64x(_Complex long  double __z);
_Complex long  double __catanf64x(_Complex long  double __z);
_Complex long  double ccosf64x(_Complex long  double __z);
_Complex long  double __ccosf64x(_Complex long  double __z);
_Complex long  double csinf64x(_Complex long  double __z);
_Complex long  double __csinf64x(_Complex long  double __z);
_Complex long  double ctanf64x(_Complex long  double __z);
_Complex long  double __ctanf64x(_Complex long  double __z);
_Complex long  double cacoshf64x(_Complex long  double __z);
_Complex long  double __cacoshf64x(_Complex long  double __z);
_Complex long  double casinhf64x(_Complex long  double __z);
_Complex long  double __casinhf64x(_Complex long  double __z);
_Complex long  double catanhf64x(_Complex long  double __z);
_Complex long  double __catanhf64x(_Complex long  double __z);
_Complex long  double ccoshf64x(_Complex long  double __z);
_Complex long  double __ccoshf64x(_Complex long  double __z);
_Complex long  double csinhf64x(_Complex long  double __z);
_Complex long  double __csinhf64x(_Complex long  double __z);
_Complex long  double ctanhf64x(_Complex long  double __z);
_Complex long  double __ctanhf64x(_Complex long  double __z);
_Complex long  double cexpf64x(_Complex long  double __z);
_Complex long  double __cexpf64x(_Complex long  double __z);
_Complex long  double clogf64x(_Complex long  double __z);
_Complex long  double __clogf64x(_Complex long  double __z);
_Complex long  double clog10f64x(_Complex long  double __z);
_Complex long  double __clog10f64x(_Complex long  double __z);
_Complex long  double cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtf64x(_Complex long  double __z);
_Complex long  double __csqrtf64x(_Complex long  double __z);
long  double  cabsf64x(_Complex long  double __z);
long  double  __cabsf64x(_Complex long  double __z);
long  double  cargf64x(_Complex long  double __z);
long  double  __cargf64x(_Complex long  double __z);
_Complex long  double conjf64x(_Complex long  double __z);
_Complex long  double __conjf64x(_Complex long  double __z);
_Complex long  double cprojf64x(_Complex long  double __z);
_Complex long  double __cprojf64x(_Complex long  double __z);
long  double  cimagf64x(_Complex long  double __z);
long  double  __cimagf64x(_Complex long  double __z);
long  double  crealf64x(_Complex long  double __z);
long  double  __crealf64x(_Complex long  double __z);
char* crypt_r(const char* __phrase, const char* __setting, struct crypt_data* __restrict  __data  );
char* crypt_rn(const char* __phrase, const char* __setting, void* __data, int __size);
char* crypt_ra(const char* __phrase, const char* __setting, void** __data, int* __size);
char* crypt_gensalt(const char* __prefix, unsigned long  int __count, const char* __rbytes, int __nrbytes);
char* crypt_gensalt_rn(const char* __prefix, unsigned long  int __count, const char* __rbytes, int __nrbytes, char* __output, int __output_size);
char* crypt_gensalt_ra(const char* __prefix, unsigned long  int __count, const char* __rbytes, int __nrbytes);
int crypt_checksalt(const char* __setting);
const char* crypt_preferred_method();
int*  wcscpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX20*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __p  );
unsigned long  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  __mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __len  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __len  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX20* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
double wcstod(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float wcstof(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double wcstold(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float  wcstof32(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof64(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof32x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double  wcstof64x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  int wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstouq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int __isoc23_wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int __isoc23_wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long  int __isoc23_wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int __isoc23_wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
double wcstod_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float wcstof_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double wcstold_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float  wcstof32_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof64_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof32x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double  wcstof64x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
int*  wcpcpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict    __format, ...);
int wprintf(const int* __restrict    __format, ...);
int swprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict    __format, ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict    __format, __builtin_va_list  __arg  );
int vwprintf(const int* __restrict    __format, __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict    __format, __builtin_va_list  __arg  );
int fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict    __format, ...);
int wscanf(const int* __restrict    __format, ...);
int swscanf(const int* __restrict  __s  , const int* __restrict    __format, ...);
int __isoc23_fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict    __format, ...);
int __isoc23_wscanf(const int* __restrict    __format, ...);
int __isoc23_swscanf(const int* __restrict  __s  , const int* __restrict    __format, ...);
int vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict    __format, __builtin_va_list  __arg  );
int vwscanf(const int* __restrict    __format, __builtin_va_list  __arg  );
int vswscanf(const int* __restrict  __s  , const int* __restrict    __format, __builtin_va_list  __arg  );
int __isoc23_vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict    __format, __builtin_va_list  __arg  );
int __isoc23_vwscanf(const int* __restrict    __format, __builtin_va_list  __arg  );
int __isoc23_vswscanf(const int* __restrict  __s  , const int* __restrict    __format, __builtin_va_list  __arg  );
unsigned int  fgetwc(struct _IO_FILE*  __stream  );
unsigned int  getwc(struct _IO_FILE*  __stream  );
unsigned int  getwchar();
unsigned int  fputwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar(int  __wc  );
int*  fgetws(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned int  ungetwc(unsigned int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  getwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  getwchar_unlocked();
unsigned int  fgetwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  fputwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar_unlocked(int  __wc  );
int*  fgetws_unlocked(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws_unlocked(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned long  wcsftime(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict    __format, const struct tm* __restrict  __tp  );
unsigned long  wcsftime_l(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict    __format, const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
int addch(const unsigned int    );
int addchnstr(const unsigned int*    , int );
int addchstr(const unsigned int*    );
int addnstr(const char* , int );
int addstr(const char* );
int attroff(int );
int attron(int );
int attrset(int );
int attr_get(unsigned int*    , short* , void* );
int attr_off(unsigned int    , void* );
int attr_on(unsigned int    , void* );
int attr_set(unsigned int    , short , void* );
int baudrate();
int beep();
int bkgd(unsigned int    );
void bkgdset(unsigned int    );
int border(unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int box(struct _win_st*    , unsigned int    , unsigned int    );
_Bool can_change_color();
int cbreak();
int chgat(int , unsigned int    , short , const void* );
int clear();
int clearok(struct _win_st*    , _Bool );
int clrtobot();
int clrtoeol();
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int COLOR_PAIR(int );
int copywin(const struct _win_st*    , struct _win_st*    , int , int , int , int , int , int , int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delay_output(int );
int delch();
void delscreen(struct screen*    );
int delwin(struct _win_st*    );
int deleteln();
struct _win_st*  derwin(struct _win_st*    , int , int , int , int );
int doupdate();
struct _win_st*  dupwin(struct _win_st*    );
int echo();
int echochar(const unsigned int    );
int erase();
int endwin();
char erasechar();
void filter();
int flash();
int flushinp();
unsigned int  getbkgd(struct _win_st*    );
int getch();
int getnstr(char* , int );
int getstr(char* );
struct _win_st*  getwin(struct _IO_FILE*    );
int halfdelay(int );
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
int hline(unsigned int    , int );
void idcok(struct _win_st*    , _Bool );
int idlok(struct _win_st*    , _Bool );
void immedok(struct _win_st*    , _Bool );
unsigned int  inch();
int inchnstr(unsigned int*    , int );
int inchstr(unsigned int*    );
struct _win_st*  initscr();
int init_color(short , short , short , short );
int init_pair(short , short , short );
int innstr(char* , int );
int insch(unsigned int    );
int insdelln(int );
int insertln();
int insnstr(const char* , int );
int insstr(const char* );
int instr(char* );
int intrflush(struct _win_st*    , _Bool );
_Bool isendwin();
_Bool is_linetouched(struct _win_st*    , int );
_Bool is_wintouched(struct _win_st*    );
const char* keyname(int );
int keypad(struct _win_st*    , _Bool );
char killchar();
int leaveok(struct _win_st*    , _Bool );
char* longname();
int meta(struct _win_st*    , _Bool );
int move(int , int );
int mvaddch(int , int , const unsigned int    );
int mvaddchnstr(int , int , const unsigned int*    , int );
int mvaddchstr(int , int , const unsigned int*    );
int mvaddnstr(int , int , const char* , int );
int mvaddstr(int , int , const char* );
int mvchgat(int , int , int , unsigned int    , short , const void* );
int mvcur(int , int , int , int );
int mvdelch(int , int );
int mvderwin(struct _win_st*    , int , int );
int mvgetch(int , int );
int mvgetnstr(int , int , char* , int );
int mvgetstr(int , int , char* );
int mvhline(int , int , unsigned int    , int );
unsigned int  mvinch(int , int );
int mvinchnstr(int , int , unsigned int*    , int );
int mvinchstr(int , int , unsigned int*    );
int mvinnstr(int , int , char* , int );
int mvinsch(int , int , unsigned int    );
int mvinsnstr(int , int , const char* , int );
int mvinsstr(int , int , const char* );
int mvinstr(int , int , char* );
int mvprintw(int , int , const char* , ...) __attribute__((format(printf,3,4)));
int mvscanw(int , int , const char* , ...);
int mvvline(int , int , unsigned int    , int );
int mvwaddch(struct _win_st*    , int , int , const unsigned int    );
int mvwaddchnstr(struct _win_st*    , int , int , const unsigned int*    , int );
int mvwaddchstr(struct _win_st*    , int , int , const unsigned int*    );
int mvwaddnstr(struct _win_st*    , int , int , const char* , int );
int mvwaddstr(struct _win_st*    , int , int , const char* );
int mvwchgat(struct _win_st*    , int , int , int , unsigned int    , short , const void* );
int mvwdelch(struct _win_st*    , int , int );
int mvwgetch(struct _win_st*    , int , int );
int mvwgetnstr(struct _win_st*    , int , int , char* , int );
int mvwgetstr(struct _win_st*    , int , int , char* );
int mvwhline(struct _win_st*    , int , int , unsigned int    , int );
int mvwin(struct _win_st*    , int , int );
unsigned int  mvwinch(struct _win_st*    , int , int );
int mvwinchnstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwinchstr(struct _win_st*    , int , int , unsigned int*    );
int mvwinnstr(struct _win_st*    , int , int , char* , int );
int mvwinsch(struct _win_st*    , int , int , unsigned int    );
int mvwinsnstr(struct _win_st*    , int , int , const char* , int );
int mvwinsstr(struct _win_st*    , int , int , const char* );
int mvwinstr(struct _win_st*    , int , int , char* );
int mvwprintw(struct _win_st*    , int , int , const char* , ...) __attribute__((format(printf,4,5)));
int mvwscanw(struct _win_st*    , int , int , const char* , ...);
int mvwvline(struct _win_st*    , int , int , unsigned int    , int );
int napms(int );
struct _win_st*  newpad(int , int );
struct screen*  newterm(const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin(int , int , int , int );
int nl();
int nocbreak();
int nodelay(struct _win_st*    , _Bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st*    , _Bool );
int overlay(const struct _win_st*    , struct _win_st*    );
int overwrite(const struct _win_st*    , struct _win_st*    );
int pair_content(short , short* , short* );
int PAIR_NUMBER(int );
int pechochar(struct _win_st*    , const unsigned int    );
int pnoutrefresh(struct _win_st*    , int , int , int , int , int , int );
int prefresh(struct _win_st*    , int , int , int , int , int , int );
int printw(const char* , ...) __attribute__((format(printf,1,2)));
int putwin(struct _win_st*    , struct _IO_FILE*    );
void qiflush();
int raw();
int redrawwin(struct _win_st*    );
int refresh();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , int (*anonymous_lambda_var_nameZ1)(struct _win_st* ,int));
int savetty();
int scanw(const char* , ...);
int scr_dump(const char* );
int scr_init(const char* );
int scrl(int );
int scroll(struct _win_st*    );
int scrollok(struct _win_st*    , _Bool );
int scr_restore(const char* );
int scr_set(const char* );
int setscrreg(int , int );
struct screen*  set_term(struct screen*    );
int slk_attroff(const unsigned int    );
int slk_attr_off(const unsigned int    , void* );
int slk_attron(const unsigned int    );
int slk_attr_on(unsigned int    , void* );
int slk_attrset(const unsigned int    );
unsigned int  slk_attr();
int slk_attr_set(const unsigned int    , short , void* );
int slk_clear();
int slk_color(short );
int slk_init(int );
char* slk_label(int );
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int , const char* , int );
int slk_touch();
int standout();
int standend();
int start_color();
struct _win_st*  subpad(struct _win_st*    , int , int , int , int );
struct _win_st*  subwin(struct _win_st*    , int , int , int , int );
int syncok(struct _win_st*    , _Bool );
unsigned int  termattrs();
char* termname();
void timeout(int );
int touchline(struct _win_st*    , int , int );
int touchwin(struct _win_st*    );
int typeahead(int );
int ungetch(int );
int untouchwin(struct _win_st*    );
void use_env(_Bool );
void use_tioctl(_Bool );
int vidattr(unsigned int    );
int vidputs(unsigned int    , int (*anonymous_var_nameY481)(int)  );
int vline(unsigned int    , int );
int vwprintw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		__attribute__((format(printf,2,0)));
int vw_printw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((format(printf,2,0)));
int vwscanw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		;
int vw_scanw(struct _win_st*    , const char* , __builtin_va_list    );
int waddch(struct _win_st*    , const unsigned int    );
int waddchnstr(struct _win_st*    , const unsigned int*    , int );
int waddchstr(struct _win_st*    , const unsigned int*    );
int waddnstr(struct _win_st*    , const char* , int );
int waddstr(struct _win_st*    , const char* );
int wattron(struct _win_st*    , int );
int wattroff(struct _win_st*    , int );
int wattrset(struct _win_st*    , int );
int wattr_get(struct _win_st*    , unsigned int*    , short* , void* );
int wattr_on(struct _win_st*    , unsigned int    , void* );
int wattr_off(struct _win_st*    , unsigned int    , void* );
int wattr_set(struct _win_st*    , unsigned int    , short , void* );
int wbkgd(struct _win_st*    , unsigned int    );
void wbkgdset(struct _win_st*    , unsigned int    );
int wborder(struct _win_st*    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int wchgat(struct _win_st*    , int , unsigned int    , short , const void* );
int wclear(struct _win_st*    );
int wclrtobot(struct _win_st*    );
int wclrtoeol(struct _win_st*    );
int wcolor_set(struct _win_st*    , short , void* );
void wcursyncup(struct _win_st*    );
int wdelch(struct _win_st*    );
int wdeleteln(struct _win_st*    );
int wechochar(struct _win_st*    , const unsigned int    );
int werase(struct _win_st*    );
int wgetch(struct _win_st*    );
int wgetnstr(struct _win_st*    , char* , int );
int wgetstr(struct _win_st*    , char* );
int whline(struct _win_st*    , unsigned int    , int );
unsigned int  winch(struct _win_st*    );
int winchnstr(struct _win_st*    , unsigned int*    , int );
int winchstr(struct _win_st*    , unsigned int*    );
int winnstr(struct _win_st*    , char* , int );
int winsch(struct _win_st*    , unsigned int    );
int winsdelln(struct _win_st*    , int );
int winsertln(struct _win_st*    );
int winsnstr(struct _win_st*    , const char* , int );
int winsstr(struct _win_st*    , const char* );
int winstr(struct _win_st*    , char* );
int wmove(struct _win_st*    , int , int );
int wnoutrefresh(struct _win_st*    );
int wprintw(struct _win_st*    , const char* , ...) __attribute__((format(printf,2,3)));
int wredrawln(struct _win_st*    , int , int );
int wrefresh(struct _win_st*    );
int wscanw(struct _win_st*    , const char* , ...);
int wscrl(struct _win_st*    , int );
int wsetscrreg(struct _win_st*    , int , int );
int wstandout(struct _win_st*    );
int wstandend(struct _win_st*    );
void wsyncdown(struct _win_st*    );
void wsyncup(struct _win_st*    );
void wtimeout(struct _win_st*    , int );
int wtouchln(struct _win_st*    , int , int , int );
int wvline(struct _win_st*    , unsigned int    , int );
int tigetflag(const char* );
int tigetnum(const char* );
char* tigetstr(const char* );
int putp(const char* );
char* tparm(const char* , ...);
char* tiparm(const char* , ...);
char* tiparm_s(int , int , const char* , ...);
int tiscan_s(int* , int* , const char* );
int getattrs(const struct _win_st*    );
int getcurx(const struct _win_st*    );
int getcury(const struct _win_st*    );
int getbegx(const struct _win_st*    );
int getbegy(const struct _win_st*    );
int getmaxx(const struct _win_st*    );
int getmaxy(const struct _win_st*    );
int getparx(const struct _win_st*    );
int getpary(const struct _win_st*    );
int alloc_pair(int , int );
int assume_default_colors(int , int );
const char* curses_version();
int define_key(const char* , int );
int extended_color_content(int , int* , int* , int* );
int extended_pair_content(int , int* , int* );
int extended_slk_color(int );
int find_pair(int , int );
int free_pair(int );
int get_escdelay();
int init_extended_color(int , int , int , int );
int init_extended_pair(int , int , int );
int is_cbreak();
int is_echo();
int is_nl();
int is_raw();
_Bool is_term_resized(int , int );
int key_defined(const char* );
char* keybound(int , int );
int keyok(int , _Bool );
void nofilter();
void reset_color_pairs();
int resize_term(int , int );
int resizeterm(int , int );
int set_escdelay(int );
int set_tabsize(int );
int use_default_colors();
int use_legacy_coding(int );
int use_screen(struct screen*    , int (*anonymous_var_nameY682)(struct screen* ,void*)  , void* );
int use_window(struct _win_st*    , int (*anonymous_var_nameY685)(struct _win_st* ,void*)  , void* );
int wresize(struct _win_st*    , int , int );
int use_extended_names(_Bool );
struct _win_st*  wgetparent(const struct _win_st*    );
_Bool is_cleared(const struct _win_st*    );
_Bool is_idcok(const struct _win_st*    );
_Bool is_idlok(const struct _win_st*    );
_Bool is_immedok(const struct _win_st*    );
_Bool is_keypad(const struct _win_st*    );
_Bool is_leaveok(const struct _win_st*    );
_Bool is_nodelay(const struct _win_st*    );
_Bool is_notimeout(const struct _win_st*    );
_Bool is_pad(const struct _win_st*    );
_Bool is_scrollok(const struct _win_st*    );
_Bool is_subwin(const struct _win_st*    );
_Bool is_syncok(const struct _win_st*    );
int wgetdelay(const struct _win_st*    );
int wgetscrreg(const struct _win_st*    , int* , int* );
struct screen*  new_prescr();
int baudrate_sp(struct screen*    );
int beep_sp(struct screen*    );
_Bool can_change_color_sp(struct screen*    );
int cbreak_sp(struct screen*    );
int curs_set_sp(struct screen*    , int );
int color_content_sp(struct screen*    , short , short* , short* , short* );
int def_prog_mode_sp(struct screen*    );
int def_shell_mode_sp(struct screen*    );
int delay_output_sp(struct screen*    , int );
int doupdate_sp(struct screen*    );
int echo_sp(struct screen*    );
int endwin_sp(struct screen*    );
char erasechar_sp(struct screen*    );
void filter_sp(struct screen*    );
int flash_sp(struct screen*    );
int flushinp_sp(struct screen*    );
struct _win_st*  getwin_sp(struct screen*    , struct _IO_FILE*    );
int halfdelay_sp(struct screen*    , int );
_Bool has_colors_sp(struct screen*    );
_Bool has_ic_sp(struct screen*    );
_Bool has_il_sp(struct screen*    );
int init_color_sp(struct screen*    , short , short , short , short );
int init_pair_sp(struct screen*    , short , short , short );
int intrflush_sp(struct screen*    , struct _win_st*    , _Bool );
_Bool isendwin_sp(struct screen*    );
const char* keyname_sp(struct screen*    , int );
char killchar_sp(struct screen*    );
char* longname_sp(struct screen*    );
int mvcur_sp(struct screen*    , int , int , int , int );
int napms_sp(struct screen*    , int );
struct _win_st*  newpad_sp(struct screen*    , int , int );
struct screen*  newterm_sp(struct screen*    , const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin_sp(struct screen*    , int , int , int , int );
int nl_sp(struct screen*    );
int nocbreak_sp(struct screen*    );
int noecho_sp(struct screen*    );
int nonl_sp(struct screen*    );
void noqiflush_sp(struct screen*    );
int noraw_sp(struct screen*    );
int pair_content_sp(struct screen*    , short , short* , short* );
void qiflush_sp(struct screen*    );
int raw_sp(struct screen*    );
int reset_prog_mode_sp(struct screen*    );
int reset_shell_mode_sp(struct screen*    );
int resetty_sp(struct screen*    );
int ripoffline_sp(struct screen*    , int , int (*anonymous_lambda_var_nameZ2)(struct _win_st* ,int));
int savetty_sp(struct screen*    );
int scr_init_sp(struct screen*    , const char* );
int scr_restore_sp(struct screen*    , const char* );
int scr_set_sp(struct screen*    , const char* );
int slk_attroff_sp(struct screen*    , const unsigned int    );
int slk_attron_sp(struct screen*    , const unsigned int    );
int slk_attrset_sp(struct screen*    , const unsigned int    );
unsigned int  slk_attr_sp(struct screen*    );
int slk_attr_set_sp(struct screen*    , const unsigned int    , short , void* );
int slk_clear_sp(struct screen*    );
int slk_color_sp(struct screen*    , short );
int slk_init_sp(struct screen*    , int );
char* slk_label_sp(struct screen*    , int );
int slk_noutrefresh_sp(struct screen*    );
int slk_refresh_sp(struct screen*    );
int slk_restore_sp(struct screen*    );
int slk_set_sp(struct screen*    , int , const char* , int );
int slk_touch_sp(struct screen*    );
int start_color_sp(struct screen*    );
unsigned int  termattrs_sp(struct screen*    );
char* termname_sp(struct screen*    );
int typeahead_sp(struct screen*    , int );
int ungetch_sp(struct screen*    , int );
void use_env_sp(struct screen*    , _Bool );
void use_tioctl_sp(struct screen*    , _Bool );
int vidattr_sp(struct screen*    , unsigned int    );
int vidputs_sp(struct screen*    , unsigned int    , int (*anonymous_var_nameY842)(struct screen* ,int)  );
int alloc_pair_sp(struct screen*    , int , int );
int assume_default_colors_sp(struct screen*    , int , int );
int define_key_sp(struct screen*    , const char* , int );
int extended_color_content_sp(struct screen*    , int , int* , int* , int* );
int extended_pair_content_sp(struct screen*    , int , int* , int* );
int extended_slk_color_sp(struct screen*    , int );
int find_pair_sp(struct screen*    , int , int );
int free_pair_sp(struct screen*    , int );
int get_escdelay_sp(struct screen*    );
int init_extended_color_sp(struct screen*    , int , int , int , int );
int init_extended_pair_sp(struct screen*    , int , int , int );
int is_cbreak_sp(struct screen*    );
int is_echo_sp(struct screen*    );
int is_nl_sp(struct screen*    );
int is_raw_sp(struct screen*    );
_Bool is_term_resized_sp(struct screen*    , int , int );
int key_defined_sp(struct screen*    , const char* );
char* keybound_sp(struct screen*    , int , int );
int keyok_sp(struct screen*    , int , _Bool );
void nofilter_sp(struct screen*    );
void reset_color_pairs_sp(struct screen*    );
int resize_term_sp(struct screen*    , int , int );
int resizeterm_sp(struct screen*    , int , int );
int set_escdelay_sp(struct screen*    , int );
int set_tabsize_sp(struct screen*    , int );
int use_default_colors_sp(struct screen*    );
int use_legacy_coding_sp(struct screen*    , int );
int add_wch(const struct anonymous_typeX24*    );
int add_wchnstr(const struct anonymous_typeX24*    , int );
int add_wchstr(const struct anonymous_typeX24*    );
int addnwstr(const int*    , int );
int addwstr(const int*    );
int bkgrnd(const struct anonymous_typeX24*    );
void bkgrndset(const struct anonymous_typeX24*    );
int border_set(const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    );
int box_set(struct _win_st*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    );
int echo_wchar(const struct anonymous_typeX24*    );
int erasewchar(int*    );
int get_wch(unsigned int*    );
int get_wstr(unsigned int*    );
int getbkgrnd(struct anonymous_typeX24*    );
int getcchar(const struct anonymous_typeX24*    , int*    , unsigned int*    , short* , void* );
int getn_wstr(unsigned int*    , int );
int hline_set(const struct anonymous_typeX24*    , int );
int in_wch(struct anonymous_typeX24*    );
int in_wchnstr(struct anonymous_typeX24*    , int );
int in_wchstr(struct anonymous_typeX24*    );
int innwstr(int*    , int );
int ins_nwstr(const int*    , int );
int ins_wch(const struct anonymous_typeX24*    );
int ins_wstr(const int*    );
int inwstr(int*    );
const char* key_name(int    );
int killwchar(int*    );
int mvadd_wch(int , int , const struct anonymous_typeX24*    );
int mvadd_wchnstr(int , int , const struct anonymous_typeX24*    , int );
int mvadd_wchstr(int , int , const struct anonymous_typeX24*    );
int mvaddnwstr(int , int , const int*    , int );
int mvaddwstr(int , int , const int*    );
int mvget_wch(int , int , unsigned int*    );
int mvget_wstr(int , int , unsigned int*    );
int mvgetn_wstr(int , int , unsigned int*    , int );
int mvhline_set(int , int , const struct anonymous_typeX24*    , int );
int mvin_wch(int , int , struct anonymous_typeX24*    );
int mvin_wchnstr(int , int , struct anonymous_typeX24*    , int );
int mvin_wchstr(int , int , struct anonymous_typeX24*    );
int mvinnwstr(int , int , int*    , int );
int mvins_nwstr(int , int , const int*    , int );
int mvins_wch(int , int , const struct anonymous_typeX24*    );
int mvins_wstr(int , int , const int*    );
int mvinwstr(int , int , int*    );
int mvvline_set(int , int , const struct anonymous_typeX24*    , int );
int mvwadd_wch(struct _win_st*    , int , int , const struct anonymous_typeX24*    );
int mvwadd_wchnstr(struct _win_st*    , int , int , const struct anonymous_typeX24*    , int );
int mvwadd_wchstr(struct _win_st*    , int , int , const struct anonymous_typeX24*    );
int mvwaddnwstr(struct _win_st*    , int , int , const int*    , int );
int mvwaddwstr(struct _win_st*    , int , int , const int*    );
int mvwget_wch(struct _win_st*    , int , int , unsigned int*    );
int mvwget_wstr(struct _win_st*    , int , int , unsigned int*    );
int mvwgetn_wstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwhline_set(struct _win_st*    , int , int , const struct anonymous_typeX24*    , int );
int mvwin_wch(struct _win_st*    , int , int , struct anonymous_typeX24*    );
int mvwin_wchnstr(struct _win_st*    , int , int , struct anonymous_typeX24*    , int );
int mvwin_wchstr(struct _win_st*    , int , int , struct anonymous_typeX24*    );
int mvwinnwstr(struct _win_st*    , int , int , int*    , int );
int mvwins_nwstr(struct _win_st*    , int , int , const int*    , int );
int mvwins_wch(struct _win_st*    , int , int , const struct anonymous_typeX24*    );
int mvwins_wstr(struct _win_st*    , int , int , const int*    );
int mvwinwstr(struct _win_st*    , int , int , int*    );
int mvwvline_set(struct _win_st*    , int , int , const struct anonymous_typeX24*    , int );
int pecho_wchar(struct _win_st*    , const struct anonymous_typeX24*    );
int setcchar(struct anonymous_typeX24*    , const int*    , const unsigned int    , short , const void* );
int slk_wset(int , const int*    , int );
unsigned int  term_attrs();
int unget_wch(const int    );
int vid_attr(unsigned int    , short , void* );
int vid_puts(unsigned int    , short , void* , int (*anonymous_var_nameY1114)(int)  );
int vline_set(const struct anonymous_typeX24*    , int );
int wadd_wch(struct _win_st*    , const struct anonymous_typeX24*    );
int wadd_wchnstr(struct _win_st*    , const struct anonymous_typeX24*    , int );
int wadd_wchstr(struct _win_st*    , const struct anonymous_typeX24*    );
int waddnwstr(struct _win_st*    , const int*    , int );
int waddwstr(struct _win_st*    , const int*    );
int wbkgrnd(struct _win_st*    , const struct anonymous_typeX24*    );
void wbkgrndset(struct _win_st*    , const struct anonymous_typeX24*    );
int wborder_set(struct _win_st*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    , const struct anonymous_typeX24*    );
int wecho_wchar(struct _win_st*    , const struct anonymous_typeX24*    );
int wget_wch(struct _win_st*    , unsigned int*    );
int wget_wstr(struct _win_st*    , unsigned int*    );
int wgetbkgrnd(struct _win_st*    , struct anonymous_typeX24*    );
int wgetn_wstr(struct _win_st*    , unsigned int*    , int );
int whline_set(struct _win_st*    , const struct anonymous_typeX24*    , int );
int win_wch(struct _win_st*    , struct anonymous_typeX24*    );
int win_wchnstr(struct _win_st*    , struct anonymous_typeX24*    , int );
int win_wchstr(struct _win_st*    , struct anonymous_typeX24*    );
int winnwstr(struct _win_st*    , int*    , int );
int wins_nwstr(struct _win_st*    , const int*    , int );
int wins_wch(struct _win_st*    , const struct anonymous_typeX24*    );
int wins_wstr(struct _win_st*    , const int*    );
int winwstr(struct _win_st*    , int*    );
int*  wunctrl(struct anonymous_typeX24*    );
int wvline_set(struct _win_st*    , const struct anonymous_typeX24*    , int );
unsigned int  term_attrs_sp(struct screen*    );
int erasewchar_sp(struct screen*    , int*    );
int killwchar_sp(struct screen*    , int*    );
int unget_wch_sp(struct screen*    , const int    );
int vid_attr_sp(struct screen*    , unsigned int    , short , void* );
int vid_puts_sp(struct screen*    , unsigned int    , short , void* , int (*anonymous_var_nameY1194)(struct screen* ,int)  );
int*  wunctrl_sp(struct screen*    , struct anonymous_typeX24*    );
_Bool has_mouse();
int getmouse(struct anonymous_typeX25*    );
int ungetmouse(struct anonymous_typeX25*    );
unsigned int  mousemask(unsigned int    , unsigned int*    );
_Bool wenclose(const struct _win_st*    , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const struct _win_st*    , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
_Bool has_mouse_sp(struct screen*    );
int getmouse_sp(struct screen*    , struct anonymous_typeX25*    );
int ungetmouse_sp(struct screen*    , struct anonymous_typeX25*    );
unsigned int  mousemask_sp(struct screen*    , unsigned int    , unsigned int*    );
int mouseinterval_sp(struct screen*    , int );
int mcprint(char* , int );
int has_key(int );
int has_key_sp(struct screen*    , int );
int mcprint_sp(struct screen*    , char* , int );
void _tracef(const char* , ...) __attribute__((format(printf,1,2)));
char* _traceattr(unsigned int    );
char* _traceattr2(int , unsigned int    );
char* _tracechar(int );
char* _tracechtype(unsigned int    );
char* _tracechtype2(int , unsigned int    );
char* _tracecchar_t(const struct anonymous_typeX24*    );
char* _tracecchar_t2(int , const struct anonymous_typeX24*    );
void trace(const unsigned int ) __attribute__((deprecated));
unsigned int curses_trace(const unsigned int );
void exit_curses(int );
const char* unctrl(unsigned int    );
const char* unctrl_sp(struct screen*    , unsigned int    );
int closedir(struct __dirstream*  __dirp  );
struct __dirstream*  opendir(const char* __name) __attribute__ ((__malloc__)) ;
struct __dirstream*  fdopendir(int __fd) __attribute__ ((__malloc__)) ;
struct dirent*  readdir(struct __dirstream*  __dirp  );
struct dirent64*  readdir64(struct __dirstream*  __dirp  );
int readdir_r(struct __dirstream* __restrict  __dirp  , struct dirent* __restrict  __entry  , struct dirent** __restrict  __result  ) __attribute__ ((__deprecated__));
int readdir64_r(struct __dirstream* __restrict  __dirp  , struct dirent64* __restrict  __entry  , struct dirent64** __restrict  __result  ) __attribute__ ((__deprecated__));
void rewinddir(struct __dirstream*  __dirp  );
void seekdir(struct __dirstream*  __dirp  , long  int __pos);
long  int telldir(struct __dirstream*  __dirp  );
int dirfd(struct __dirstream*  __dirp  );
int scandir(const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandir64(const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int scandirat(int __dfd, const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandirat64(int __dfd, const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int alphasort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int alphasort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdirentries(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
long  int  getdirentries64(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
int versionsort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int versionsort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdents64(int __fd, void* __buffer, unsigned long  __length  );
void _dl_mcount_wrapper_check(void* __selfpc);
void* dlopen(const char* __file, int __mode);
int dlclose(void* __handle);
void* dlsym(void* __restrict __handle, const char* __restrict __name);
void* dlmopen(long  int  __nsid  , const char* __file, int __mode);
void* dlvsym(void* __restrict __handle, const char* __restrict __name, const char* __restrict __version);
char* dlerror();
int dladdr(const void* __address, struct anonymous_typeX26*  __info  );
int dladdr1(const void* __address, struct anonymous_typeX26*  __info  , void** __extra_info, int __flags);
int dlinfo(void* __restrict __handle, int __request, void* __restrict __arg);
int _dl_find_object(void* __address, struct dl_find_object*  __result  );
char* envz_entry(const char* __restrict __envz, unsigned long  __envz_len  , const char* __restrict __name) __attribute__ ((__pure__));
char* envz_get(const char* __restrict __envz, unsigned long  __envz_len  , const char* __restrict __name) __attribute__ ((__pure__));
int  envz_add(char** __restrict __envz, unsigned long* __restrict  __envz_len  , const char* __restrict __name, const char* __restrict __value);
int  envz_merge(char** __restrict __envz, unsigned long* __restrict  __envz_len  , const char* __restrict __envz2, unsigned long  __envz2_len  , int __override);
void envz_remove(char** __restrict __envz, unsigned long* __restrict  __envz_len  , const char* __restrict __name);
void envz_strip(char** __restrict __envz, unsigned long* __restrict  __envz_len  );
void warn(const char*  __format, ...) __attribute__ ((__format__ (__printf__, 1, 2))) ;
void vwarn(const char*  __format, __builtin_va_list    ) __attribute__ ((__format__ (__printf__, 1, 0))) ;
void warnx(const char*  __format, ...) __attribute__ ((__format__ (__printf__, 1, 2)));
void vwarnx(const char*  __format, __builtin_va_list    ) __attribute__ ((__format__ (__printf__, 1, 0)));
void err(int __status, const char*  __format, ...) __attribute__ ((__noreturn__, __format__ (__printf__, 2, 3))) ;
void verr(int __status, const char*  __format, __builtin_va_list    ) __attribute__ ((__noreturn__, __format__ (__printf__, 2, 0))) ;
void errx(int __status, const char*  __format, ...) __attribute__ ((__noreturn__, __format__ (__printf__, 2, 3))) ;
void verrx(int __status, const char* , __builtin_va_list    ) __attribute__ ((__noreturn__, __format__ (__printf__, 2, 0))) ;
void error(int __status, int __errnum, const char*  __format, ...) __attribute__ ((__format__ (__printf__, 3, 4))) ;
void error_at_line(int __status, int __errnum, const char* __fname, unsigned int __lineno, const char*  __format, ...) __attribute__ ((__format__ (__printf__, 5, 6))) ;
int backtrace(void** __array, int __size);
char** backtrace_symbols(void** const __array, int __size);
void backtrace_symbols_fd(void** const __array, int __size, int __fd);
long  int  readahead(int __fd, long  int  __offset  , unsigned long  __count  );
int sync_file_range(int __fd, long  int  __offset  , long  int  __count  , unsigned int __flags);
long  int  vmsplice(int __fdout, const struct iovec*  __iov  , unsigned long  __count  , unsigned int __flags);
long  int  splice(int __fdin, long  int*  __offin  , int __fdout, long  int*  __offout  , unsigned long  __len  , unsigned int __flags);
long  int  tee(int __fdin, int __fdout, unsigned long  __len  , unsigned int __flags);
int fallocate(int __fd, int __mode, long  int  __offset  , long  int  __len  );
int fallocate64(int __fd, int __mode, long  int  __offset  , long  int  __len  );
int name_to_handle_at(int __dfd, const char* __name, struct file_handle*  __handle  , int* __mnt_id, int __flags);
int open_by_handle_at(int __mountdirfd, struct file_handle*  __handle  , int __flags);
int fcntl(int __fd, int __cmd, ...);
int fcntl64(int __fd, int __cmd, ...);
int open(const char* __file, int __oflag, ...);
int open64(const char* __file, int __oflag, ...);
int openat(int __fd, const char* __file, int __oflag, ...);
int openat64(int __fd, const char* __file, int __oflag, ...);
int creat(const char* __file, unsigned int  __mode  );
int creat64(const char* __file, unsigned int  __mode  );
int lockf(int __fd, int __cmd, long  int  __len  );
int lockf64(int __fd, int __cmd, long  int  __len  );
int posix_fadvise(int __fd, long  int  __offset  , long  int  __len  , int __advise);
int posix_fadvise64(int __fd, long  int  __offset  , long  int  __len  , int __advise);
int posix_fallocate(int __fd, long  int  __offset  , long  int  __len  );
int posix_fallocate64(int __fd, long  int  __offset  , long  int  __len  );
int feclearexcept(int __excepts);
int fegetexceptflag(unsigned short int*  __flagp  , int __excepts);
int feraiseexcept(int __excepts);
int fesetexcept(int __excepts);
int fesetexceptflag(const unsigned short int*  __flagp  , int __excepts);
int fetestexcept(int __excepts);
int fetestexceptflag(const unsigned short int*  __flagp  , int __excepts);
int fegetround() __attribute__ ((__pure__));
int fesetround(int __rounding_direction);
int fegetenv(struct anonymous_typeX80*  __envp  );
int feholdexcept(struct anonymous_typeX80*  __envp  );
int fesetenv(const struct anonymous_typeX80*  __envp  );
int feupdateenv(const struct anonymous_typeX80*  __envp  );
int fegetmode(struct anonymous_typeX81*  __modep  );
int fesetmode(const struct anonymous_typeX81*  __modep  );
int feenableexcept(int __excepts);
int fedisableexcept(int __excepts);
int fegetexcept();
int fmtmsg(long  int __classification, const char* __label, int __severity, const char* __text, const char* __action, const char* __tag);
int addseverity(int __severity, const char* __string);
int fnmatch(const char* __pattern, const char* __name, int __flags);
struct typenode*  new_fieldtype(_Bool (* const field_check)(struct fieldnode* ,const void*), _Bool (* const char_check)(int,const void*));
struct typenode*  link_fieldtype(struct typenode*    , struct typenode*    );
int free_fieldtype(struct typenode*    );
int set_fieldtype_arg(struct typenode*    , void* (* const make_arg)(__builtin_va_list* ), void* (* const copy_arg)(const void*), void (* const free_arg)(void*));
int set_fieldtype_choice(struct typenode*    , _Bool (* const next_choice)(struct fieldnode* ,const void*), _Bool (* const prev_choice)(struct fieldnode* ,const void*));
struct fieldnode*  new_field(int , int , int , int , int , int );
struct fieldnode*  dup_field(struct fieldnode*    , int , int );
struct fieldnode*  link_field(struct fieldnode*    , int , int );
int free_field(struct fieldnode*    );
int field_info(const struct fieldnode*    , int* , int* , int* , int* , int* , int* );
int dynamic_field_info(const struct fieldnode*    , int* , int* , int* );
int set_max_field(struct fieldnode*    , int );
int move_field(struct fieldnode*    , int , int );
int set_field_type(struct fieldnode*    , struct typenode*    , ...);
int set_new_page(struct fieldnode*    , _Bool );
int set_field_just(struct fieldnode*    , int );
int field_just(const struct fieldnode*    );
int set_field_fore(struct fieldnode*    , unsigned int    );
int set_field_back(struct fieldnode*    , unsigned int    );
int set_field_pad(struct fieldnode*    , int );
int field_pad(const struct fieldnode*    );
int set_field_buffer(struct fieldnode*    , int , const char* );
int set_field_status(struct fieldnode*    , _Bool );
int set_field_userptr(struct fieldnode*    , void* );
int set_field_opts(struct fieldnode*    , int    );
int field_opts_on(struct fieldnode*    , int    );
int field_opts_off(struct fieldnode*    , int    );
unsigned int  field_fore(const struct fieldnode*    );
unsigned int  field_back(const struct fieldnode*    );
_Bool new_page(const struct fieldnode*    );
_Bool field_status(const struct fieldnode*    );
void* field_arg(const struct fieldnode*    );
void* field_userptr(const struct fieldnode*    );
struct typenode*  field_type(const struct fieldnode*    );
char* field_buffer(const struct fieldnode*    , int );
int  field_opts(const struct fieldnode*    );
struct formnode*  new_form(struct fieldnode**    );
struct fieldnode**  form_fields(const struct formnode*    );
struct fieldnode*  current_field(const struct formnode*    );
struct _win_st*  form_win(const struct formnode*    );
struct _win_st*  form_sub(const struct formnode*    );
void (*form_init(const struct formnode*    ))(struct formnode* ) ;
void (*form_term(const struct formnode*    ))(struct formnode* ) ;
void (*field_init(const struct formnode*    ))(struct formnode* ) ;
void (*field_term(const struct formnode*    ))(struct formnode* ) ;
int free_form(struct formnode*    );
int set_form_fields(struct formnode*    , struct fieldnode**    );
int field_count(const struct formnode*    );
int set_form_win(struct formnode*    , struct _win_st*    );
int set_form_sub(struct formnode*    , struct _win_st*    );
int set_current_field(struct formnode*    , struct fieldnode*    );
int unfocus_current_field(struct formnode*    );
int field_index(const struct fieldnode*    );
int set_form_page(struct formnode*    , int );
int form_page(const struct formnode*    );
int scale_form(const struct formnode*    , int* , int* );
int set_form_init(struct formnode*    , void (*anonymous_var_nameY1394)(struct formnode* )  );
int set_form_term(struct formnode*    , void (*anonymous_var_nameY1396)(struct formnode* )  );
int set_field_init(struct formnode*    , void (*anonymous_var_nameY1398)(struct formnode* )  );
int set_field_term(struct formnode*    , void (*anonymous_var_nameY1400)(struct formnode* )  );
int post_form(struct formnode*    );
int unpost_form(struct formnode*    );
int pos_form_cursor(struct formnode*    );
int form_driver(struct formnode*    , int );
int form_driver_w(struct formnode*    , int , int    );
int set_form_userptr(struct formnode*    , void* );
int set_form_opts(struct formnode*    , int    );
int form_opts_on(struct formnode*    , int    );
int form_opts_off(struct formnode*    , int    );
int form_request_by_name(const char* );
const char* form_request_name(int );
void* form_userptr(const struct formnode*    );
int  form_opts(const struct formnode*    );
_Bool data_ahead(const struct formnode*    );
_Bool data_behind(const struct formnode*    );
struct formnode*  new_form_sp(struct screen*    , struct fieldnode**    );
struct _ftsent*  fts_children(struct anonymous_typeX82*    , int );
int fts_close(struct anonymous_typeX82*    );
struct anonymous_typeX82*  fts_open(char** const , int , int (*anonymous_lambda_var_nameZ3)(const struct _ftsent** ,const struct _ftsent** ));
struct _ftsent*  fts_read(struct anonymous_typeX82*    );
int fts_set(struct anonymous_typeX82*    , struct _ftsent*    , int );
struct _ftsent64*  fts64_children(struct anonymous_typeX83*    , int );
int fts64_close(struct anonymous_typeX83*    );
struct anonymous_typeX83*  fts64_open(char** const , int , int (*anonymous_lambda_var_nameZ4)(const struct _ftsent64** ,const struct _ftsent64** ));
struct _ftsent64*  fts64_read(struct anonymous_typeX83*    );
int fts64_set(struct anonymous_typeX83*    , struct _ftsent64*    , int );
int stat(const char* __restrict __file, struct stat* __restrict  __buf  );
int fstat(int __fd, struct stat*  __buf  );
int stat64(const char* __restrict __file, struct stat64* __restrict  __buf  );
int fstat64(int __fd, struct stat64*  __buf  );
int fstatat(int __fd, const char* __restrict __file, struct stat* __restrict  __buf  , int __flag);
int fstatat64(int __fd, const char* __restrict __file, struct stat64* __restrict  __buf  , int __flag);
int lstat(const char* __restrict __file, struct stat* __restrict  __buf  );
int lstat64(const char* __restrict __file, struct stat64* __restrict  __buf  );
int chmod(const char* __file, unsigned int  __mode  );
int lchmod(const char* __file, unsigned int  __mode  );
int fchmod(int __fd, unsigned int  __mode  );
int fchmodat(int __fd, const char* __file, unsigned int  __mode  , int __flag);
unsigned int  umask(unsigned int  __mask  );
unsigned int  getumask();
int mkdir(const char* __path, unsigned int  __mode  );
int mkdirat(int __fd, const char* __path, unsigned int  __mode  );
int mknod(const char* __path, unsigned int  __mode  , unsigned long  int  __dev  );
int mknodat(int __fd, const char* __path, unsigned int  __mode  , unsigned long  int  __dev  );
int mkfifo(const char* __path, unsigned int  __mode  );
int mkfifoat(int __fd, const char* __path, unsigned int  __mode  );
int utimensat(int __fd, const char* __path, const struct timespec  __times[2]  , int __flags);
int futimens(int __fd, const struct timespec  __times[2]  );
int statx(int __dirfd, const char* __restrict __path, int __flags, unsigned int __mask, struct statx* __restrict  __buf  );
int ftw(const char* __dir, int (*__func)(const char*,const struct stat* ,int)  , int __descriptors);
int ftw64(const char* __dir, int (*__func)(const char*,const struct stat64* ,int)  , int __descriptors);
int nftw(const char* __dir, int (*__func)(const char*,const struct stat* ,int,struct FTW* )  , int __descriptors, int __flag);
int nftw64(const char* __dir, int (*__func)(const char*,const struct stat64* ,int,struct FTW* )  , int __descriptors, int __flag);
int glob(const char* __restrict __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX84* __restrict  __pglob  );
void globfree(struct anonymous_typeX84*  __pglob  );
int glob64(const char* __restrict __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX85* __restrict  __pglob  );
void globfree64(struct anonymous_typeX85*  __pglob  );
int glob_pattern_p(const char* __pattern, int __quote);
void gmk_free(char* str);
char* gmk_alloc(unsigned int len);
void gmk_eval(const char* buffer, const struct anonymous_typeX86*  floc  );
char* gmk_expand(const char* str);
void gmk_add_function(const char* name, char* (*func)(const char*,unsigned int,char**)  , unsigned int min_args, unsigned int max_args, unsigned int flags);
void setgrent();
void endgrent();
struct group*  getgrent();
struct group*  fgetgrent(struct _IO_FILE*  __stream  );
int putgrent(const struct group* __restrict  __p  , struct _IO_FILE* __restrict  __f  );
struct group*  getgrgid(unsigned int  __gid  );
struct group*  getgrnam(const char* __name);
int getgrent_r(struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int getgrgid_r(unsigned int  __gid  , struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int getgrnam_r(const char* __restrict __name, struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int fgetgrent_r(struct _IO_FILE* __restrict  __stream  , struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int setgroups(unsigned long  __n  , const unsigned int*  __groups  );
int getgrouplist(const char* , unsigned int  __group  , unsigned int*  __groups  , int* __ngroups);
int initgroups(const char* , unsigned int  __group  );
void setsgent();
void endsgent();
struct sgrp*  getsgent();
struct sgrp*  getsgnam(const char* __name);
struct sgrp*  sgetsgent(const char* __string);
struct sgrp*  fgetsgent(struct _IO_FILE*  __stream  );
int putsgent(const struct sgrp*  __g  , struct _IO_FILE*  __stream  );
int getsgent_r(struct sgrp*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct sgrp**  __result  );
int getsgnam_r(const char* __name, struct sgrp*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct sgrp**  __result  );
int sgetsgent_r(const char* __string, struct sgrp*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct sgrp**  __result  );
int fgetsgent_r(struct _IO_FILE*  __stream  , struct sgrp*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct sgrp**  __result  );
int iconv_close(void*  __cd  );
void*  iconv_open(const char* __tocode, const char* __fromcode) __attribute__ ((__malloc__)) ;
unsigned long  iconv(void*  __cd  , char** __restrict __inbuf, unsigned long* __restrict  __inbytesleft  , char** __restrict __outbuf, unsigned long* __restrict  __outbytesleft  );
struct cmsghdr*  __cmsg_nxthdr(struct msghdr*  __mhdr  , struct cmsghdr*  __cmsg  );
int socket(int __domain, int __type, int __protocol);
int socketpair(int __domain, int __type, int __protocol, int __fds[2]);
int bind(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getsockname(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
int connect(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getpeername(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
long  int  send(int __fd, const void* __buf, unsigned long  __n  , int __flags);
long  int  recv(int __fd, void* __buf, unsigned long  __n  , int __flags);
long  int  sendto(int __fd, const void* __buf, unsigned long  __n  , int __flags, const struct sockaddr* __restrict  __addr  , unsigned int  __addr_len  );
long  int  recvfrom(int __fd, void* __restrict __buf, unsigned long  __n  , int __flags, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
long  int  sendmsg(int __fd, const struct msghdr*  __message  , int __flags);
int sendmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags);
long  int  recvmsg(int __fd, struct msghdr*  __message  , int __flags);
int recvmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags, struct timespec*  __tmo  );
int getsockopt(int __fd, int __level, int __optname, void* __restrict __optval, unsigned int* __restrict  __optlen  );
int setsockopt(int __fd, int __level, int __optname, const void* __optval, unsigned int  __optlen  );
int listen(int __fd, int __n);
int accept(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
int accept4(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  , int __flags);
int shutdown(int __fd, int __how);
int sockatmark(int __fd);
int isfdtype(int __fd, int __fdtype);
int getifaddrs(struct ifaddrs**  __ifap  );
void freeifaddrs(struct ifaddrs*  __ifa  );
long  int  imaxabs(long  int  __n  ) __attribute__ ((__const__));
unsigned long  int  uimaxabs(long  int  __n  ) __attribute__ ((__const__));
struct anonymous_typeX97  imaxdiv(long  int  __numer  , long  int  __denom  ) __attribute__ ((__const__));
long  int  strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int  __isoc23_strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  __isoc23_strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  __isoc23_wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  __isoc23_wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
void*  catopen(const char* __cat_name, int __flag);
char* catgets(void*  __catalog  , int __set, int __number, const char* __string);
int catclose(void*  __catalog  );
char* nl_langinfo(int  __item  );
char* nl_langinfo_l(int  __item  , struct __locale_struct*  __l  );
int gettimeofday(struct timeval* __restrict  __tv  , void* __restrict __tz);
int settimeofday(const struct timeval*  __tv  , const struct timezone*  __tz  );
int adjtime(const struct timeval*  __delta  , struct timeval*  __olddelta  );
int getitimer(enum __itimer_which  __which  , struct itimerval*  __value  );
int setitimer(enum __itimer_which  __which  , const struct itimerval* __restrict  __new  , struct itimerval* __restrict  __old  );
int utimes(const char* __file, const struct timeval  __tvp[2]  );
int lutimes(const char* __file, const struct timeval  __tvp[2]  );
int futimes(int __fd, const struct timeval  __tvp[2]  );
int futimesat(int __fd, const char* __file, const struct timeval  __tvp[2]  );
int login_tty(int __fd);
void login(const struct utmp*  __entry  );
int logout(const char* __ut_line);
void logwtmp(const char* __ut_line, const char* __ut_name, const char* __ut_host);
void updwtmp(const char* __wtmp_file, const struct utmp*  __utmp  );
int utmpname(const char* __file);
struct utmp*  getutent();
void setutent();
void endutent();
struct utmp*  getutid(const struct utmp*  __id  );
struct utmp*  getutline(const struct utmp*  __line  );
struct utmp*  pututline(const struct utmp*  __utmp_ptr  );
int getutent_r(struct utmp*  __buffer  , struct utmp**  __result  );
int getutid_r(const struct utmp*  __id  , struct utmp*  __buffer  , struct utmp**  __result  );
int getutline_r(const struct utmp*  __line  , struct utmp*  __buffer  , struct utmp**  __result  );
char* dirname(char* __path);
char* __xpg_basename(char* __path);
char* gettext(const char* __msgid) __attribute__ ((__format_arg__ (1)));
char* dgettext(const char* __domainname, const char* __msgid) __attribute__ ((__format_arg__ (2)));
char* __dgettext(const char* __domainname, const char* __msgid) __attribute__ ((__format_arg__ (2)));
char* dcgettext(const char* __domainname, const char* __msgid, int __category) __attribute__ ((__format_arg__ (2)));
char* __dcgettext(const char* __domainname, const char* __msgid, int __category) __attribute__ ((__format_arg__ (2)));
char* ngettext(const char* __msgid1, const char* __msgid2, unsigned long  int __n) __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
char* dngettext(const char* __domainname, const char* __msgid1, const char* __msgid2, unsigned long  int __n) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
char* dcngettext(const char* __domainname, const char* __msgid1, const char* __msgid2, unsigned long  int __n, int __category) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
char* textdomain(const char* __domainname);
char* bindtextdomain(const char* __domainname, const char* __dirname);
char* bind_textdomain_codeset(const char* __domainname, const char* __codeset);
char* setlocale(int __category, const char* __locale);
struct lconv*  localeconv();
struct __locale_struct*  newlocale(int __category_mask, const char* __locale, struct __locale_struct*  __base  );
struct __locale_struct*  duplocale(struct __locale_struct*  __dataset  );
void freelocale(struct __locale_struct*  __dataset  );
struct __locale_struct*  uselocale(struct __locale_struct*  __dataset  );
void* memalign(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
    ;
void* pvalloc(unsigned long  __size  ) __attribute__ ((__malloc__))
   ;
struct mallinfo  mallinfo() __attribute__ ((__deprecated__));
struct mallinfo2  mallinfo2();
int mallopt(int __param, int __val);
int malloc_trim(unsigned long  __pad  );
unsigned long  malloc_usable_size(void* __ptr);
void malloc_stats();
int malloc_info(int __options, struct _IO_FILE*  __fp  );
int __fpclassify(double __value) __attribute__ ((__const__));
int __signbit(double __value) __attribute__ ((__const__));
int __isinf(double __value) __attribute__ ((__const__));
int __finite(double __value) __attribute__ ((__const__));
int __isnan(double __value) __attribute__ ((__const__));
int __iseqsig(double __x, double __y);
int __issignaling(double __value) __attribute__ ((__const__));
double acos(double __x);
double __acos(double __x);
double asin(double __x);
double __asin(double __x);
double atan(double __x);
double __atan(double __x);
double atan2(double __y, double __x);
double __atan2(double __y, double __x);
double cos(double __x);
double __cos(double __x);
double sin(double __x);
double __sin(double __x);
double tan(double __x);
double __tan(double __x);
double acospi(double __x);
double __acospi(double __x);
double asinpi(double __x);
double __asinpi(double __x);
double atanpi(double __x);
double __atanpi(double __x);
double atan2pi(double __y, double __x);
double __atan2pi(double __y, double __x);
double cospi(double __x);
double __cospi(double __x);
double sinpi(double __x);
double __sinpi(double __x);
double tanpi(double __x);
double __tanpi(double __x);
double cosh(double __x);
double __cosh(double __x);
double sinh(double __x);
double __sinh(double __x);
double tanh(double __x);
double __tanh(double __x);
void sincos(double __x, double* __sinx, double* __cosx);
void __sincos(double __x, double* __sinx, double* __cosx);
double acosh(double __x);
double __acosh(double __x);
double asinh(double __x);
double __asinh(double __x);
double atanh(double __x);
double __atanh(double __x);
double exp(double __x);
double __exp(double __x);
double frexp(double __x, int* __exponent);
double __frexp(double __x, int* __exponent);
double ldexp(double __x, int __exponent);
double __ldexp(double __x, int __exponent);
double log(double __x);
double __log(double __x);
double log10(double __x);
double __log10(double __x);
double modf(double __x, double* __iptr);
double __modf(double __x, double* __iptr);
double exp10(double __x);
double __exp10(double __x);
double exp2m1(double __x);
double __exp2m1(double __x);
double exp10m1(double __x);
double __exp10m1(double __x);
double log2p1(double __x);
double __log2p1(double __x);
double log10p1(double __x);
double __log10p1(double __x);
double logp1(double __x);
double __logp1(double __x);
double expm1(double __x);
double __expm1(double __x);
double log1p(double __x);
double __log1p(double __x);
double logb(double __x);
double __logb(double __x);
double exp2(double __x);
double __exp2(double __x);
double log2(double __x);
double __log2(double __x);
double pow(double __x, double __y);
double __pow(double __x, double __y);
double sqrt(double __x);
double __sqrt(double __x);
double hypot(double __x, double __y);
double __hypot(double __x, double __y);
double cbrt(double __x);
double __cbrt(double __x);
double compoundn(double __x, long long int __y);
double __compoundn(double __x, long long int __y);
double pown(double __x, long long int __y);
double __pown(double __x, long long int __y);
double powr(double __x, double __y);
double __powr(double __x, double __y);
double rootn(double __x, long long int __y);
double __rootn(double __x, long long int __y);
double rsqrt(double __x);
double __rsqrt(double __x);
double ceil(double __x) __attribute__ ((__const__));
double fabs(double __x) __attribute__ ((__const__));
double floor(double __x) __attribute__ ((__const__));
double fmod(double __x, double __y);
double __fmod(double __x, double __y);
int isinf(double __value) __attribute__ ((__const__));
int finite(double __value) __attribute__ ((__const__));
double drem(double __x, double __y);
double __drem(double __x, double __y);
double significand(double __x);
double __significand(double __x);
double copysign(double __x, double __y) __attribute__ ((__const__));
double nan(const char* __tagb);
double __nan(const char* __tagb);
int isnan(double __value) __attribute__ ((__const__));
double j0(double );
double __j0(double );
double j1(double );
double __j1(double );
double jn(int , double );
double __jn(int , double );
double y0(double );
double __y0(double );
double y1(double );
double __y1(double );
double yn(int , double );
double __yn(int , double );
double erf(double );
double __erf(double );
double erfc(double );
double __erfc(double );
double lgamma(double );
double __lgamma(double );
double tgamma(double );
double __tgamma(double );
double gamma(double );
double __gamma(double );
double lgamma_r(double , int* __signgamp);
double __lgamma_r(double , int* __signgamp);
double rint(double __x);
double __rint(double __x);
double nextafter(double __x, double __y);
double __nextafter(double __x, double __y);
double nexttoward(double __x, long  double __y);
double __nexttoward(double __x, long  double __y);
double nextdown(double __x);
double __nextdown(double __x);
double nextup(double __x);
double __nextup(double __x);
double remainder(double __x, double __y);
double __remainder(double __x, double __y);
double scalbn(double __x, int __n);
double __scalbn(double __x, int __n);
int ilogb(double __x);
int __ilogb(double __x);
long  int llogb(double __x);
long  int __llogb(double __x);
double scalbln(double __x, long  int __n);
double __scalbln(double __x, long  int __n);
double nearbyint(double __x);
double __nearbyint(double __x);
double round(double __x) __attribute__ ((__const__));
double trunc(double __x) __attribute__ ((__const__));
double remquo(double __x, double __y, int* __quo);
double __remquo(double __x, double __y, int* __quo);
long  int lrint(double __x);
long  int __lrint(double __x);
long long int llrint(double __x);
long long int __llrint(double __x);
long  int lround(double __x);
long  int __lround(double __x);
long long int llround(double __x);
long long int __llround(double __x);
double fdim(double __x, double __y);
double __fdim(double __x, double __y);
double fmax(double __x, double __y) __attribute__ ((__const__));
double fmin(double __x, double __y) __attribute__ ((__const__));
double fma(double __x, double __y, double __z);
double __fma(double __x, double __y, double __z);
double roundeven(double __x) __attribute__ ((__const__));
long  int  fromfp(double __x, int __round, unsigned int __width);
long  int  __fromfp(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfp(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfp(double __x, int __round, unsigned int __width);
long  int  fromfpx(double __x, int __round, unsigned int __width);
long  int  __fromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpx(double __x, int __round, unsigned int __width);
int canonicalize(double* __cx, const double* __x);
double fmaxmag(double __x, double __y) __attribute__ ((__const__));
double fminmag(double __x, double __y) __attribute__ ((__const__));
double fmaximum(double __x, double __y) __attribute__ ((__const__));
double fminimum(double __x, double __y) __attribute__ ((__const__));
double fmaximum_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_num(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag_num(double __x, double __y) __attribute__ ((__const__));
int totalorder(const double* __x, const double* __y) __attribute__ ((__pure__));
int totalordermag(const double* __x, const double* __y) __attribute__ ((__pure__));
double getpayload(const double* __x);
double __getpayload(const double* __x);
int setpayload(double* __x, double __payload);
int setpayloadsig(double* __x, double __payload);
double scalb(double __x, double __n);
double __scalb(double __x, double __n);
int __fpclassifyf(float __value) __attribute__ ((__const__));
int __signbitf(float __value) __attribute__ ((__const__));
int __isinff(float __value) __attribute__ ((__const__));
int __finitef(float __value) __attribute__ ((__const__));
int __isnanf(float __value) __attribute__ ((__const__));
int __iseqsigf(float __x, float __y);
int __issignalingf(float __value) __attribute__ ((__const__));
float acosf(float __x);
float __acosf(float __x);
float asinf(float __x);
float __asinf(float __x);
float atanf(float __x);
float __atanf(float __x);
float atan2f(float __y, float __x);
float __atan2f(float __y, float __x);
float cosf(float __x);
float __cosf(float __x);
float sinf(float __x);
float __sinf(float __x);
float tanf(float __x);
float __tanf(float __x);
float acospif(float __x);
float __acospif(float __x);
float asinpif(float __x);
float __asinpif(float __x);
float atanpif(float __x);
float __atanpif(float __x);
float atan2pif(float __y, float __x);
float __atan2pif(float __y, float __x);
float cospif(float __x);
float __cospif(float __x);
float sinpif(float __x);
float __sinpif(float __x);
float tanpif(float __x);
float __tanpif(float __x);
float coshf(float __x);
float __coshf(float __x);
float sinhf(float __x);
float __sinhf(float __x);
float tanhf(float __x);
float __tanhf(float __x);
void sincosf(float __x, float* __sinx, float* __cosx);
void __sincosf(float __x, float* __sinx, float* __cosx);
float acoshf(float __x);
float __acoshf(float __x);
float asinhf(float __x);
float __asinhf(float __x);
float atanhf(float __x);
float __atanhf(float __x);
float expf(float __x);
float __expf(float __x);
float frexpf(float __x, int* __exponent);
float __frexpf(float __x, int* __exponent);
float ldexpf(float __x, int __exponent);
float __ldexpf(float __x, int __exponent);
float logf(float __x);
float __logf(float __x);
float log10f(float __x);
float __log10f(float __x);
float modff(float __x, float* __iptr);
float __modff(float __x, float* __iptr);
float exp10f(float __x);
float __exp10f(float __x);
float exp2m1f(float __x);
float __exp2m1f(float __x);
float exp10m1f(float __x);
float __exp10m1f(float __x);
float log2p1f(float __x);
float __log2p1f(float __x);
float log10p1f(float __x);
float __log10p1f(float __x);
float logp1f(float __x);
float __logp1f(float __x);
float expm1f(float __x);
float __expm1f(float __x);
float log1pf(float __x);
float __log1pf(float __x);
float logbf(float __x);
float __logbf(float __x);
float exp2f(float __x);
float __exp2f(float __x);
float log2f(float __x);
float __log2f(float __x);
float powf(float __x, float __y);
float __powf(float __x, float __y);
float sqrtf(float __x);
float __sqrtf(float __x);
float hypotf(float __x, float __y);
float __hypotf(float __x, float __y);
float cbrtf(float __x);
float __cbrtf(float __x);
float compoundnf(float __x, long long int __y);
float __compoundnf(float __x, long long int __y);
float pownf(float __x, long long int __y);
float __pownf(float __x, long long int __y);
float powrf(float __x, float __y);
float __powrf(float __x, float __y);
float rootnf(float __x, long long int __y);
float __rootnf(float __x, long long int __y);
float rsqrtf(float __x);
float __rsqrtf(float __x);
float ceilf(float __x) __attribute__ ((__const__));
float fabsf(float __x) __attribute__ ((__const__));
float floorf(float __x) __attribute__ ((__const__));
float fmodf(float __x, float __y);
float __fmodf(float __x, float __y);
int isinff(float __value) __attribute__ ((__const__));
int finitef(float __value) __attribute__ ((__const__));
float dremf(float __x, float __y);
float __dremf(float __x, float __y);
float significandf(float __x);
float __significandf(float __x);
float copysignf(float __x, float __y) __attribute__ ((__const__));
float nanf(const char* __tagb);
float __nanf(const char* __tagb);
int isnanf(float __value) __attribute__ ((__const__));
float j0f(float );
float __j0f(float );
float j1f(float );
float __j1f(float );
float jnf(int , float );
float __jnf(int , float );
float y0f(float );
float __y0f(float );
float y1f(float );
float __y1f(float );
float ynf(int , float );
float __ynf(int , float );
float erff(float );
float __erff(float );
float erfcf(float );
float __erfcf(float );
float lgammaf(float );
float __lgammaf(float );
float tgammaf(float );
float __tgammaf(float );
float gammaf(float );
float __gammaf(float );
float lgammaf_r(float , int* __signgamp);
float __lgammaf_r(float , int* __signgamp);
float rintf(float __x);
float __rintf(float __x);
float nextafterf(float __x, float __y);
float __nextafterf(float __x, float __y);
float nexttowardf(float __x, long  double __y);
float __nexttowardf(float __x, long  double __y);
float nextdownf(float __x);
float __nextdownf(float __x);
float nextupf(float __x);
float __nextupf(float __x);
float remainderf(float __x, float __y);
float __remainderf(float __x, float __y);
float scalbnf(float __x, int __n);
float __scalbnf(float __x, int __n);
int ilogbf(float __x);
int __ilogbf(float __x);
long  int llogbf(float __x);
long  int __llogbf(float __x);
float scalblnf(float __x, long  int __n);
float __scalblnf(float __x, long  int __n);
float nearbyintf(float __x);
float __nearbyintf(float __x);
float roundf(float __x) __attribute__ ((__const__));
float truncf(float __x) __attribute__ ((__const__));
float remquof(float __x, float __y, int* __quo);
float __remquof(float __x, float __y, int* __quo);
long  int lrintf(float __x);
long  int __lrintf(float __x);
long long int llrintf(float __x);
long long int __llrintf(float __x);
long  int lroundf(float __x);
long  int __lroundf(float __x);
long long int llroundf(float __x);
long long int __llroundf(float __x);
float fdimf(float __x, float __y);
float __fdimf(float __x, float __y);
float fmaxf(float __x, float __y) __attribute__ ((__const__));
float fminf(float __x, float __y) __attribute__ ((__const__));
float fmaf(float __x, float __y, float __z);
float __fmaf(float __x, float __y, float __z);
float roundevenf(float __x) __attribute__ ((__const__));
long  int  fromfpf(float __x, int __round, unsigned int __width);
long  int  __fromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpf(float __x, int __round, unsigned int __width);
long  int  fromfpxf(float __x, int __round, unsigned int __width);
long  int  __fromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxf(float __x, int __round, unsigned int __width);
int canonicalizef(float* __cx, const float* __x);
float fmaxmagf(float __x, float __y) __attribute__ ((__const__));
float fminmagf(float __x, float __y) __attribute__ ((__const__));
float fmaximumf(float __x, float __y) __attribute__ ((__const__));
float fminimumf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_numf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_magf(float __x, float __y) __attribute__ ((__const__));
float fminimum_magf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_mag_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_mag_numf(float __x, float __y) __attribute__ ((__const__));
int totalorderf(const float* __x, const float* __y) __attribute__ ((__pure__));
int totalordermagf(const float* __x, const float* __y) __attribute__ ((__pure__));
float getpayloadf(const float* __x);
float __getpayloadf(const float* __x);
int setpayloadf(float* __x, float __payload);
int setpayloadsigf(float* __x, float __payload);
float scalbf(float __x, float __n);
float __scalbf(float __x, float __n);
int __fpclassifyl(long  double __value) __attribute__ ((__const__));
int __signbitl(long  double __value) __attribute__ ((__const__));
int __isinfl(long  double __value) __attribute__ ((__const__));
int __finitel(long  double __value) __attribute__ ((__const__));
int __isnanl(long  double __value) __attribute__ ((__const__));
int __iseqsigl(long  double __x, long  double __y);
int __issignalingl(long  double __value) __attribute__ ((__const__));
long  double acosl(long  double __x);
long  double __acosl(long  double __x);
long  double asinl(long  double __x);
long  double __asinl(long  double __x);
long  double atanl(long  double __x);
long  double __atanl(long  double __x);
long  double atan2l(long  double __y, long  double __x);
long  double __atan2l(long  double __y, long  double __x);
long  double cosl(long  double __x);
long  double __cosl(long  double __x);
long  double sinl(long  double __x);
long  double __sinl(long  double __x);
long  double tanl(long  double __x);
long  double __tanl(long  double __x);
long  double acospil(long  double __x);
long  double __acospil(long  double __x);
long  double asinpil(long  double __x);
long  double __asinpil(long  double __x);
long  double atanpil(long  double __x);
long  double __atanpil(long  double __x);
long  double atan2pil(long  double __y, long  double __x);
long  double __atan2pil(long  double __y, long  double __x);
long  double cospil(long  double __x);
long  double __cospil(long  double __x);
long  double sinpil(long  double __x);
long  double __sinpil(long  double __x);
long  double tanpil(long  double __x);
long  double __tanpil(long  double __x);
long  double coshl(long  double __x);
long  double __coshl(long  double __x);
long  double sinhl(long  double __x);
long  double __sinhl(long  double __x);
long  double tanhl(long  double __x);
long  double __tanhl(long  double __x);
void sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
void __sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
long  double acoshl(long  double __x);
long  double __acoshl(long  double __x);
long  double asinhl(long  double __x);
long  double __asinhl(long  double __x);
long  double atanhl(long  double __x);
long  double __atanhl(long  double __x);
long  double expl(long  double __x);
long  double __expl(long  double __x);
long  double frexpl(long  double __x, int* __exponent);
long  double __frexpl(long  double __x, int* __exponent);
long  double ldexpl(long  double __x, int __exponent);
long  double __ldexpl(long  double __x, int __exponent);
long  double logl(long  double __x);
long  double __logl(long  double __x);
long  double log10l(long  double __x);
long  double __log10l(long  double __x);
long  double modfl(long  double __x, long  double* __iptr);
long  double __modfl(long  double __x, long  double* __iptr);
long  double exp10l(long  double __x);
long  double __exp10l(long  double __x);
long  double exp2m1l(long  double __x);
long  double __exp2m1l(long  double __x);
long  double exp10m1l(long  double __x);
long  double __exp10m1l(long  double __x);
long  double log2p1l(long  double __x);
long  double __log2p1l(long  double __x);
long  double log10p1l(long  double __x);
long  double __log10p1l(long  double __x);
long  double logp1l(long  double __x);
long  double __logp1l(long  double __x);
long  double expm1l(long  double __x);
long  double __expm1l(long  double __x);
long  double log1pl(long  double __x);
long  double __log1pl(long  double __x);
long  double logbl(long  double __x);
long  double __logbl(long  double __x);
long  double exp2l(long  double __x);
long  double __exp2l(long  double __x);
long  double log2l(long  double __x);
long  double __log2l(long  double __x);
long  double powl(long  double __x, long  double __y);
long  double __powl(long  double __x, long  double __y);
long  double sqrtl(long  double __x);
long  double __sqrtl(long  double __x);
long  double hypotl(long  double __x, long  double __y);
long  double __hypotl(long  double __x, long  double __y);
long  double cbrtl(long  double __x);
long  double __cbrtl(long  double __x);
long  double compoundnl(long  double __x, long long int __y);
long  double __compoundnl(long  double __x, long long int __y);
long  double pownl(long  double __x, long long int __y);
long  double __pownl(long  double __x, long long int __y);
long  double powrl(long  double __x, long  double __y);
long  double __powrl(long  double __x, long  double __y);
long  double rootnl(long  double __x, long long int __y);
long  double __rootnl(long  double __x, long long int __y);
long  double rsqrtl(long  double __x);
long  double __rsqrtl(long  double __x);
long  double ceill(long  double __x) __attribute__ ((__const__));
long  double fabsl(long  double __x) __attribute__ ((__const__));
long  double floorl(long  double __x) __attribute__ ((__const__));
long  double fmodl(long  double __x, long  double __y);
long  double __fmodl(long  double __x, long  double __y);
int isinfl(long  double __value) __attribute__ ((__const__));
int finitel(long  double __value) __attribute__ ((__const__));
long  double dreml(long  double __x, long  double __y);
long  double __dreml(long  double __x, long  double __y);
long  double significandl(long  double __x);
long  double __significandl(long  double __x);
long  double copysignl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double nanl(const char* __tagb);
long  double __nanl(const char* __tagb);
int isnanl(long  double __value) __attribute__ ((__const__));
long  double j0l(long  double );
long  double __j0l(long  double );
long  double j1l(long  double );
long  double __j1l(long  double );
long  double jnl(int , long  double );
long  double __jnl(int , long  double );
long  double y0l(long  double );
long  double __y0l(long  double );
long  double y1l(long  double );
long  double __y1l(long  double );
long  double ynl(int , long  double );
long  double __ynl(int , long  double );
long  double erfl(long  double );
long  double __erfl(long  double );
long  double erfcl(long  double );
long  double __erfcl(long  double );
long  double lgammal(long  double );
long  double __lgammal(long  double );
long  double tgammal(long  double );
long  double __tgammal(long  double );
long  double gammal(long  double );
long  double __gammal(long  double );
long  double lgammal_r(long  double , int* __signgamp);
long  double __lgammal_r(long  double , int* __signgamp);
long  double rintl(long  double __x);
long  double __rintl(long  double __x);
long  double nextafterl(long  double __x, long  double __y);
long  double __nextafterl(long  double __x, long  double __y);
long  double nexttowardl(long  double __x, long  double __y);
long  double __nexttowardl(long  double __x, long  double __y);
long  double nextdownl(long  double __x);
long  double __nextdownl(long  double __x);
long  double nextupl(long  double __x);
long  double __nextupl(long  double __x);
long  double remainderl(long  double __x, long  double __y);
long  double __remainderl(long  double __x, long  double __y);
long  double scalbnl(long  double __x, int __n);
long  double __scalbnl(long  double __x, int __n);
int ilogbl(long  double __x);
int __ilogbl(long  double __x);
long  int llogbl(long  double __x);
long  int __llogbl(long  double __x);
long  double scalblnl(long  double __x, long  int __n);
long  double __scalblnl(long  double __x, long  int __n);
long  double nearbyintl(long  double __x);
long  double __nearbyintl(long  double __x);
long  double roundl(long  double __x) __attribute__ ((__const__));
long  double truncl(long  double __x) __attribute__ ((__const__));
long  double remquol(long  double __x, long  double __y, int* __quo);
long  double __remquol(long  double __x, long  double __y, int* __quo);
long  int lrintl(long  double __x);
long  int __lrintl(long  double __x);
long long int llrintl(long  double __x);
long long int __llrintl(long  double __x);
long  int lroundl(long  double __x);
long  int __lroundl(long  double __x);
long long int llroundl(long  double __x);
long long int __llroundl(long  double __x);
long  double fdiml(long  double __x, long  double __y);
long  double __fdiml(long  double __x, long  double __y);
long  double fmaxl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmal(long  double __x, long  double __y, long  double __z);
long  double __fmal(long  double __x, long  double __y, long  double __z);
long  double roundevenl(long  double __x) __attribute__ ((__const__));
long  int  fromfpl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpl(long  double __x, int __round, unsigned int __width);
long  int  fromfpxl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxl(long  double __x, int __round, unsigned int __width);
int canonicalizel(long  double* __cx, const long  double* __x);
long  double fmaxmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
int totalorderl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
int totalordermagl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
long  double getpayloadl(const long  double* __x);
long  double __getpayloadl(const long  double* __x);
int setpayloadl(long  double* __x, long  double __payload);
int setpayloadsigl(long  double* __x, long  double __payload);
long  double scalbl(long  double __x, long  double __n);
long  double __scalbl(long  double __x, long  double __n);
float  acosf32(float  __x  );
float  __acosf32(float  __x  );
float  asinf32(float  __x  );
float  __asinf32(float  __x  );
float  atanf32(float  __x  );
float  __atanf32(float  __x  );
float  atan2f32(float  __y  , float  __x  );
float  __atan2f32(float  __y  , float  __x  );
float  cosf32(float  __x  );
float  __cosf32(float  __x  );
float  sinf32(float  __x  );
float  __sinf32(float  __x  );
float  tanf32(float  __x  );
float  __tanf32(float  __x  );
float  acospif32(float  __x  );
float  __acospif32(float  __x  );
float  asinpif32(float  __x  );
float  __asinpif32(float  __x  );
float  atanpif32(float  __x  );
float  __atanpif32(float  __x  );
float  atan2pif32(float  __y  , float  __x  );
float  __atan2pif32(float  __y  , float  __x  );
float  cospif32(float  __x  );
float  __cospif32(float  __x  );
float  sinpif32(float  __x  );
float  __sinpif32(float  __x  );
float  tanpif32(float  __x  );
float  __tanpif32(float  __x  );
float  coshf32(float  __x  );
float  __coshf32(float  __x  );
float  sinhf32(float  __x  );
float  __sinhf32(float  __x  );
float  tanhf32(float  __x  );
float  __tanhf32(float  __x  );
void sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
void __sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
float  acoshf32(float  __x  );
float  __acoshf32(float  __x  );
float  asinhf32(float  __x  );
float  __asinhf32(float  __x  );
float  atanhf32(float  __x  );
float  __atanhf32(float  __x  );
float  expf32(float  __x  );
float  __expf32(float  __x  );
float  frexpf32(float  __x  , int* __exponent);
float  __frexpf32(float  __x  , int* __exponent);
float  ldexpf32(float  __x  , int __exponent);
float  __ldexpf32(float  __x  , int __exponent);
float  logf32(float  __x  );
float  __logf32(float  __x  );
float  log10f32(float  __x  );
float  __log10f32(float  __x  );
float  modff32(float  __x  , float*  __iptr  );
float  __modff32(float  __x  , float*  __iptr  );
float  exp10f32(float  __x  );
float  __exp10f32(float  __x  );
float  exp2m1f32(float  __x  );
float  __exp2m1f32(float  __x  );
float  exp10m1f32(float  __x  );
float  __exp10m1f32(float  __x  );
float  log2p1f32(float  __x  );
float  __log2p1f32(float  __x  );
float  log10p1f32(float  __x  );
float  __log10p1f32(float  __x  );
float  logp1f32(float  __x  );
float  __logp1f32(float  __x  );
float  expm1f32(float  __x  );
float  __expm1f32(float  __x  );
float  log1pf32(float  __x  );
float  __log1pf32(float  __x  );
float  logbf32(float  __x  );
float  __logbf32(float  __x  );
float  exp2f32(float  __x  );
float  __exp2f32(float  __x  );
float  log2f32(float  __x  );
float  __log2f32(float  __x  );
float  powf32(float  __x  , float  __y  );
float  __powf32(float  __x  , float  __y  );
float  sqrtf32(float  __x  );
float  __sqrtf32(float  __x  );
float  hypotf32(float  __x  , float  __y  );
float  __hypotf32(float  __x  , float  __y  );
float  cbrtf32(float  __x  );
float  __cbrtf32(float  __x  );
float  compoundnf32(float  __x  , long long int __y);
float  __compoundnf32(float  __x  , long long int __y);
float  pownf32(float  __x  , long long int __y);
float  __pownf32(float  __x  , long long int __y);
float  powrf32(float  __x  , float  __y  );
float  __powrf32(float  __x  , float  __y  );
float  rootnf32(float  __x  , long long int __y);
float  __rootnf32(float  __x  , long long int __y);
float  rsqrtf32(float  __x  );
float  __rsqrtf32(float  __x  );
float  ceilf32(float  __x  ) __attribute__ ((__const__));
float  fabsf32(float  __x  ) __attribute__ ((__const__));
float  floorf32(float  __x  ) __attribute__ ((__const__));
float  fmodf32(float  __x  , float  __y  );
float  __fmodf32(float  __x  , float  __y  );
float  copysignf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  nanf32(const char* __tagb);
float  __nanf32(const char* __tagb);
float  j0f32(float    );
float  __j0f32(float    );
float  j1f32(float    );
float  __j1f32(float    );
float  jnf32(int , float    );
float  __jnf32(int , float    );
float  y0f32(float    );
float  __y0f32(float    );
float  y1f32(float    );
float  __y1f32(float    );
float  ynf32(int , float    );
float  __ynf32(int , float    );
float  erff32(float    );
float  __erff32(float    );
float  erfcf32(float    );
float  __erfcf32(float    );
float  lgammaf32(float    );
float  __lgammaf32(float    );
float  tgammaf32(float    );
float  __tgammaf32(float    );
float  lgammaf32_r(float    , int* __signgamp);
float  __lgammaf32_r(float    , int* __signgamp);
float  rintf32(float  __x  );
float  __rintf32(float  __x  );
float  nextafterf32(float  __x  , float  __y  );
float  __nextafterf32(float  __x  , float  __y  );
float  nextdownf32(float  __x  );
float  __nextdownf32(float  __x  );
float  nextupf32(float  __x  );
float  __nextupf32(float  __x  );
float  remainderf32(float  __x  , float  __y  );
float  __remainderf32(float  __x  , float  __y  );
float  scalbnf32(float  __x  , int __n);
float  __scalbnf32(float  __x  , int __n);
int ilogbf32(float  __x  );
int __ilogbf32(float  __x  );
long  int llogbf32(float  __x  );
long  int __llogbf32(float  __x  );
float  scalblnf32(float  __x  , long  int __n);
float  __scalblnf32(float  __x  , long  int __n);
float  nearbyintf32(float  __x  );
float  __nearbyintf32(float  __x  );
float  roundf32(float  __x  ) __attribute__ ((__const__));
float  truncf32(float  __x  ) __attribute__ ((__const__));
float  remquof32(float  __x  , float  __y  , int* __quo);
float  __remquof32(float  __x  , float  __y  , int* __quo);
long  int lrintf32(float  __x  );
long  int __lrintf32(float  __x  );
long long int llrintf32(float  __x  );
long long int __llrintf32(float  __x  );
long  int lroundf32(float  __x  );
long  int __lroundf32(float  __x  );
long long int llroundf32(float  __x  );
long long int __llroundf32(float  __x  );
float  fdimf32(float  __x  , float  __y  );
float  __fdimf32(float  __x  , float  __y  );
float  fmaxf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaf32(float  __x  , float  __y  , float  __z  );
float  __fmaf32(float  __x  , float  __y  , float  __z  );
float  roundevenf32(float  __x  ) __attribute__ ((__const__));
long  int  fromfpf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32(float  __x  , int __round, unsigned int __width);
long  int  fromfpxf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32(float  __x  , int __round, unsigned int __width);
int canonicalizef32(float*  __cx  , const float*  __x  );
float  fmaxmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
int totalorderf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
int totalordermagf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
float  getpayloadf32(const float*  __x  );
float  __getpayloadf32(const float*  __x  );
int setpayloadf32(float*  __x  , float  __payload  );
int setpayloadsigf32(float*  __x  , float  __payload  );
double  acosf64(double  __x  );
double  __acosf64(double  __x  );
double  asinf64(double  __x  );
double  __asinf64(double  __x  );
double  atanf64(double  __x  );
double  __atanf64(double  __x  );
double  atan2f64(double  __y  , double  __x  );
double  __atan2f64(double  __y  , double  __x  );
double  cosf64(double  __x  );
double  __cosf64(double  __x  );
double  sinf64(double  __x  );
double  __sinf64(double  __x  );
double  tanf64(double  __x  );
double  __tanf64(double  __x  );
double  acospif64(double  __x  );
double  __acospif64(double  __x  );
double  asinpif64(double  __x  );
double  __asinpif64(double  __x  );
double  atanpif64(double  __x  );
double  __atanpif64(double  __x  );
double  atan2pif64(double  __y  , double  __x  );
double  __atan2pif64(double  __y  , double  __x  );
double  cospif64(double  __x  );
double  __cospif64(double  __x  );
double  sinpif64(double  __x  );
double  __sinpif64(double  __x  );
double  tanpif64(double  __x  );
double  __tanpif64(double  __x  );
double  coshf64(double  __x  );
double  __coshf64(double  __x  );
double  sinhf64(double  __x  );
double  __sinhf64(double  __x  );
double  tanhf64(double  __x  );
double  __tanhf64(double  __x  );
void sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf64(double  __x  );
double  __acoshf64(double  __x  );
double  asinhf64(double  __x  );
double  __asinhf64(double  __x  );
double  atanhf64(double  __x  );
double  __atanhf64(double  __x  );
double  expf64(double  __x  );
double  __expf64(double  __x  );
double  frexpf64(double  __x  , int* __exponent);
double  __frexpf64(double  __x  , int* __exponent);
double  ldexpf64(double  __x  , int __exponent);
double  __ldexpf64(double  __x  , int __exponent);
double  logf64(double  __x  );
double  __logf64(double  __x  );
double  log10f64(double  __x  );
double  __log10f64(double  __x  );
double  modff64(double  __x  , double*  __iptr  );
double  __modff64(double  __x  , double*  __iptr  );
double  exp10f64(double  __x  );
double  __exp10f64(double  __x  );
double  exp2m1f64(double  __x  );
double  __exp2m1f64(double  __x  );
double  exp10m1f64(double  __x  );
double  __exp10m1f64(double  __x  );
double  log2p1f64(double  __x  );
double  __log2p1f64(double  __x  );
double  log10p1f64(double  __x  );
double  __log10p1f64(double  __x  );
double  logp1f64(double  __x  );
double  __logp1f64(double  __x  );
double  expm1f64(double  __x  );
double  __expm1f64(double  __x  );
double  log1pf64(double  __x  );
double  __log1pf64(double  __x  );
double  logbf64(double  __x  );
double  __logbf64(double  __x  );
double  exp2f64(double  __x  );
double  __exp2f64(double  __x  );
double  log2f64(double  __x  );
double  __log2f64(double  __x  );
double  powf64(double  __x  , double  __y  );
double  __powf64(double  __x  , double  __y  );
double  sqrtf64(double  __x  );
double  __sqrtf64(double  __x  );
double  hypotf64(double  __x  , double  __y  );
double  __hypotf64(double  __x  , double  __y  );
double  cbrtf64(double  __x  );
double  __cbrtf64(double  __x  );
double  compoundnf64(double  __x  , long long int __y);
double  __compoundnf64(double  __x  , long long int __y);
double  pownf64(double  __x  , long long int __y);
double  __pownf64(double  __x  , long long int __y);
double  powrf64(double  __x  , double  __y  );
double  __powrf64(double  __x  , double  __y  );
double  rootnf64(double  __x  , long long int __y);
double  __rootnf64(double  __x  , long long int __y);
double  rsqrtf64(double  __x  );
double  __rsqrtf64(double  __x  );
double  ceilf64(double  __x  ) __attribute__ ((__const__));
double  fabsf64(double  __x  ) __attribute__ ((__const__));
double  floorf64(double  __x  ) __attribute__ ((__const__));
double  fmodf64(double  __x  , double  __y  );
double  __fmodf64(double  __x  , double  __y  );
double  copysignf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf64(const char* __tagb);
double  __nanf64(const char* __tagb);
double  j0f64(double    );
double  __j0f64(double    );
double  j1f64(double    );
double  __j1f64(double    );
double  jnf64(int , double    );
double  __jnf64(int , double    );
double  y0f64(double    );
double  __y0f64(double    );
double  y1f64(double    );
double  __y1f64(double    );
double  ynf64(int , double    );
double  __ynf64(int , double    );
double  erff64(double    );
double  __erff64(double    );
double  erfcf64(double    );
double  __erfcf64(double    );
double  lgammaf64(double    );
double  __lgammaf64(double    );
double  tgammaf64(double    );
double  __tgammaf64(double    );
double  lgammaf64_r(double    , int* __signgamp);
double  __lgammaf64_r(double    , int* __signgamp);
double  rintf64(double  __x  );
double  __rintf64(double  __x  );
double  nextafterf64(double  __x  , double  __y  );
double  __nextafterf64(double  __x  , double  __y  );
double  nextdownf64(double  __x  );
double  __nextdownf64(double  __x  );
double  nextupf64(double  __x  );
double  __nextupf64(double  __x  );
double  remainderf64(double  __x  , double  __y  );
double  __remainderf64(double  __x  , double  __y  );
double  scalbnf64(double  __x  , int __n);
double  __scalbnf64(double  __x  , int __n);
int ilogbf64(double  __x  );
int __ilogbf64(double  __x  );
long  int llogbf64(double  __x  );
long  int __llogbf64(double  __x  );
double  scalblnf64(double  __x  , long  int __n);
double  __scalblnf64(double  __x  , long  int __n);
double  nearbyintf64(double  __x  );
double  __nearbyintf64(double  __x  );
double  roundf64(double  __x  ) __attribute__ ((__const__));
double  truncf64(double  __x  ) __attribute__ ((__const__));
double  remquof64(double  __x  , double  __y  , int* __quo);
double  __remquof64(double  __x  , double  __y  , int* __quo);
long  int lrintf64(double  __x  );
long  int __lrintf64(double  __x  );
long long int llrintf64(double  __x  );
long long int __llrintf64(double  __x  );
long  int lroundf64(double  __x  );
long  int __lroundf64(double  __x  );
long long int llroundf64(double  __x  );
long long int __llroundf64(double  __x  );
double  fdimf64(double  __x  , double  __y  );
double  __fdimf64(double  __x  , double  __y  );
double  fmaxf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf64(double  __x  , double  __y  , double  __z  );
double  __fmaf64(double  __x  , double  __y  , double  __z  );
double  roundevenf64(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64(double  __x  , int __round, unsigned int __width);
int canonicalizef64(double*  __cx  , const double*  __x  );
double  fmaxmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf64(const double*  __x  );
double  __getpayloadf64(const double*  __x  );
int setpayloadf64(double*  __x  , double  __payload  );
int setpayloadsigf64(double*  __x  , double  __payload  );
double  acosf32x(double  __x  );
double  __acosf32x(double  __x  );
double  asinf32x(double  __x  );
double  __asinf32x(double  __x  );
double  atanf32x(double  __x  );
double  __atanf32x(double  __x  );
double  atan2f32x(double  __y  , double  __x  );
double  __atan2f32x(double  __y  , double  __x  );
double  cosf32x(double  __x  );
double  __cosf32x(double  __x  );
double  sinf32x(double  __x  );
double  __sinf32x(double  __x  );
double  tanf32x(double  __x  );
double  __tanf32x(double  __x  );
double  acospif32x(double  __x  );
double  __acospif32x(double  __x  );
double  asinpif32x(double  __x  );
double  __asinpif32x(double  __x  );
double  atanpif32x(double  __x  );
double  __atanpif32x(double  __x  );
double  atan2pif32x(double  __y  , double  __x  );
double  __atan2pif32x(double  __y  , double  __x  );
double  cospif32x(double  __x  );
double  __cospif32x(double  __x  );
double  sinpif32x(double  __x  );
double  __sinpif32x(double  __x  );
double  tanpif32x(double  __x  );
double  __tanpif32x(double  __x  );
double  coshf32x(double  __x  );
double  __coshf32x(double  __x  );
double  sinhf32x(double  __x  );
double  __sinhf32x(double  __x  );
double  tanhf32x(double  __x  );
double  __tanhf32x(double  __x  );
void sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf32x(double  __x  );
double  __acoshf32x(double  __x  );
double  asinhf32x(double  __x  );
double  __asinhf32x(double  __x  );
double  atanhf32x(double  __x  );
double  __atanhf32x(double  __x  );
double  expf32x(double  __x  );
double  __expf32x(double  __x  );
double  frexpf32x(double  __x  , int* __exponent);
double  __frexpf32x(double  __x  , int* __exponent);
double  ldexpf32x(double  __x  , int __exponent);
double  __ldexpf32x(double  __x  , int __exponent);
double  logf32x(double  __x  );
double  __logf32x(double  __x  );
double  log10f32x(double  __x  );
double  __log10f32x(double  __x  );
double  modff32x(double  __x  , double*  __iptr  );
double  __modff32x(double  __x  , double*  __iptr  );
double  exp10f32x(double  __x  );
double  __exp10f32x(double  __x  );
double  exp2m1f32x(double  __x  );
double  __exp2m1f32x(double  __x  );
double  exp10m1f32x(double  __x  );
double  __exp10m1f32x(double  __x  );
double  log2p1f32x(double  __x  );
double  __log2p1f32x(double  __x  );
double  log10p1f32x(double  __x  );
double  __log10p1f32x(double  __x  );
double  logp1f32x(double  __x  );
double  __logp1f32x(double  __x  );
double  expm1f32x(double  __x  );
double  __expm1f32x(double  __x  );
double  log1pf32x(double  __x  );
double  __log1pf32x(double  __x  );
double  logbf32x(double  __x  );
double  __logbf32x(double  __x  );
double  exp2f32x(double  __x  );
double  __exp2f32x(double  __x  );
double  log2f32x(double  __x  );
double  __log2f32x(double  __x  );
double  powf32x(double  __x  , double  __y  );
double  __powf32x(double  __x  , double  __y  );
double  sqrtf32x(double  __x  );
double  __sqrtf32x(double  __x  );
double  hypotf32x(double  __x  , double  __y  );
double  __hypotf32x(double  __x  , double  __y  );
double  cbrtf32x(double  __x  );
double  __cbrtf32x(double  __x  );
double  compoundnf32x(double  __x  , long long int __y);
double  __compoundnf32x(double  __x  , long long int __y);
double  pownf32x(double  __x  , long long int __y);
double  __pownf32x(double  __x  , long long int __y);
double  powrf32x(double  __x  , double  __y  );
double  __powrf32x(double  __x  , double  __y  );
double  rootnf32x(double  __x  , long long int __y);
double  __rootnf32x(double  __x  , long long int __y);
double  rsqrtf32x(double  __x  );
double  __rsqrtf32x(double  __x  );
double  ceilf32x(double  __x  ) __attribute__ ((__const__));
double  fabsf32x(double  __x  ) __attribute__ ((__const__));
double  floorf32x(double  __x  ) __attribute__ ((__const__));
double  fmodf32x(double  __x  , double  __y  );
double  __fmodf32x(double  __x  , double  __y  );
double  copysignf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf32x(const char* __tagb);
double  __nanf32x(const char* __tagb);
double  j0f32x(double    );
double  __j0f32x(double    );
double  j1f32x(double    );
double  __j1f32x(double    );
double  jnf32x(int , double    );
double  __jnf32x(int , double    );
double  y0f32x(double    );
double  __y0f32x(double    );
double  y1f32x(double    );
double  __y1f32x(double    );
double  ynf32x(int , double    );
double  __ynf32x(int , double    );
double  erff32x(double    );
double  __erff32x(double    );
double  erfcf32x(double    );
double  __erfcf32x(double    );
double  lgammaf32x(double    );
double  __lgammaf32x(double    );
double  tgammaf32x(double    );
double  __tgammaf32x(double    );
double  lgammaf32x_r(double    , int* __signgamp);
double  __lgammaf32x_r(double    , int* __signgamp);
double  rintf32x(double  __x  );
double  __rintf32x(double  __x  );
double  nextafterf32x(double  __x  , double  __y  );
double  __nextafterf32x(double  __x  , double  __y  );
double  nextdownf32x(double  __x  );
double  __nextdownf32x(double  __x  );
double  nextupf32x(double  __x  );
double  __nextupf32x(double  __x  );
double  remainderf32x(double  __x  , double  __y  );
double  __remainderf32x(double  __x  , double  __y  );
double  scalbnf32x(double  __x  , int __n);
double  __scalbnf32x(double  __x  , int __n);
int ilogbf32x(double  __x  );
int __ilogbf32x(double  __x  );
long  int llogbf32x(double  __x  );
long  int __llogbf32x(double  __x  );
double  scalblnf32x(double  __x  , long  int __n);
double  __scalblnf32x(double  __x  , long  int __n);
double  nearbyintf32x(double  __x  );
double  __nearbyintf32x(double  __x  );
double  roundf32x(double  __x  ) __attribute__ ((__const__));
double  truncf32x(double  __x  ) __attribute__ ((__const__));
double  remquof32x(double  __x  , double  __y  , int* __quo);
double  __remquof32x(double  __x  , double  __y  , int* __quo);
long  int lrintf32x(double  __x  );
long  int __lrintf32x(double  __x  );
long long int llrintf32x(double  __x  );
long long int __llrintf32x(double  __x  );
long  int lroundf32x(double  __x  );
long  int __lroundf32x(double  __x  );
long long int llroundf32x(double  __x  );
long long int __llroundf32x(double  __x  );
double  fdimf32x(double  __x  , double  __y  );
double  __fdimf32x(double  __x  , double  __y  );
double  fmaxf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf32x(double  __x  , double  __y  , double  __z  );
double  __fmaf32x(double  __x  , double  __y  , double  __z  );
double  roundevenf32x(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32x(double  __x  , int __round, unsigned int __width);
int canonicalizef32x(double*  __cx  , const double*  __x  );
double  fmaxmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf32x(const double*  __x  );
double  __getpayloadf32x(const double*  __x  );
int setpayloadf32x(double*  __x  , double  __payload  );
int setpayloadsigf32x(double*  __x  , double  __payload  );
long  double  acosf64x(long  double  __x  );
long  double  __acosf64x(long  double  __x  );
long  double  asinf64x(long  double  __x  );
long  double  __asinf64x(long  double  __x  );
long  double  atanf64x(long  double  __x  );
long  double  __atanf64x(long  double  __x  );
long  double  atan2f64x(long  double  __y  , long  double  __x  );
long  double  __atan2f64x(long  double  __y  , long  double  __x  );
long  double  cosf64x(long  double  __x  );
long  double  __cosf64x(long  double  __x  );
long  double  sinf64x(long  double  __x  );
long  double  __sinf64x(long  double  __x  );
long  double  tanf64x(long  double  __x  );
long  double  __tanf64x(long  double  __x  );
long  double  acospif64x(long  double  __x  );
long  double  __acospif64x(long  double  __x  );
long  double  asinpif64x(long  double  __x  );
long  double  __asinpif64x(long  double  __x  );
long  double  atanpif64x(long  double  __x  );
long  double  __atanpif64x(long  double  __x  );
long  double  atan2pif64x(long  double  __y  , long  double  __x  );
long  double  __atan2pif64x(long  double  __y  , long  double  __x  );
long  double  cospif64x(long  double  __x  );
long  double  __cospif64x(long  double  __x  );
long  double  sinpif64x(long  double  __x  );
long  double  __sinpif64x(long  double  __x  );
long  double  tanpif64x(long  double  __x  );
long  double  __tanpif64x(long  double  __x  );
long  double  coshf64x(long  double  __x  );
long  double  __coshf64x(long  double  __x  );
long  double  sinhf64x(long  double  __x  );
long  double  __sinhf64x(long  double  __x  );
long  double  tanhf64x(long  double  __x  );
long  double  __tanhf64x(long  double  __x  );
void sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
void __sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
long  double  acoshf64x(long  double  __x  );
long  double  __acoshf64x(long  double  __x  );
long  double  asinhf64x(long  double  __x  );
long  double  __asinhf64x(long  double  __x  );
long  double  atanhf64x(long  double  __x  );
long  double  __atanhf64x(long  double  __x  );
long  double  expf64x(long  double  __x  );
long  double  __expf64x(long  double  __x  );
long  double  frexpf64x(long  double  __x  , int* __exponent);
long  double  __frexpf64x(long  double  __x  , int* __exponent);
long  double  ldexpf64x(long  double  __x  , int __exponent);
long  double  __ldexpf64x(long  double  __x  , int __exponent);
long  double  logf64x(long  double  __x  );
long  double  __logf64x(long  double  __x  );
long  double  log10f64x(long  double  __x  );
long  double  __log10f64x(long  double  __x  );
long  double  modff64x(long  double  __x  , long  double*  __iptr  );
long  double  __modff64x(long  double  __x  , long  double*  __iptr  );
long  double  exp10f64x(long  double  __x  );
long  double  __exp10f64x(long  double  __x  );
long  double  exp2m1f64x(long  double  __x  );
long  double  __exp2m1f64x(long  double  __x  );
long  double  exp10m1f64x(long  double  __x  );
long  double  __exp10m1f64x(long  double  __x  );
long  double  log2p1f64x(long  double  __x  );
long  double  __log2p1f64x(long  double  __x  );
long  double  log10p1f64x(long  double  __x  );
long  double  __log10p1f64x(long  double  __x  );
long  double  logp1f64x(long  double  __x  );
long  double  __logp1f64x(long  double  __x  );
long  double  expm1f64x(long  double  __x  );
long  double  __expm1f64x(long  double  __x  );
long  double  log1pf64x(long  double  __x  );
long  double  __log1pf64x(long  double  __x  );
long  double  logbf64x(long  double  __x  );
long  double  __logbf64x(long  double  __x  );
long  double  exp2f64x(long  double  __x  );
long  double  __exp2f64x(long  double  __x  );
long  double  log2f64x(long  double  __x  );
long  double  __log2f64x(long  double  __x  );
long  double  powf64x(long  double  __x  , long  double  __y  );
long  double  __powf64x(long  double  __x  , long  double  __y  );
long  double  sqrtf64x(long  double  __x  );
long  double  __sqrtf64x(long  double  __x  );
long  double  hypotf64x(long  double  __x  , long  double  __y  );
long  double  __hypotf64x(long  double  __x  , long  double  __y  );
long  double  cbrtf64x(long  double  __x  );
long  double  __cbrtf64x(long  double  __x  );
long  double  compoundnf64x(long  double  __x  , long long int __y);
long  double  __compoundnf64x(long  double  __x  , long long int __y);
long  double  pownf64x(long  double  __x  , long long int __y);
long  double  __pownf64x(long  double  __x  , long long int __y);
long  double  powrf64x(long  double  __x  , long  double  __y  );
long  double  __powrf64x(long  double  __x  , long  double  __y  );
long  double  rootnf64x(long  double  __x  , long long int __y);
long  double  __rootnf64x(long  double  __x  , long long int __y);
long  double  rsqrtf64x(long  double  __x  );
long  double  __rsqrtf64x(long  double  __x  );
long  double  ceilf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fabsf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  floorf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fmodf64x(long  double  __x  , long  double  __y  );
long  double  __fmodf64x(long  double  __x  , long  double  __y  );
long  double  copysignf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  nanf64x(const char* __tagb);
long  double  __nanf64x(const char* __tagb);
long  double  j0f64x(long  double    );
long  double  __j0f64x(long  double    );
long  double  j1f64x(long  double    );
long  double  __j1f64x(long  double    );
long  double  jnf64x(int , long  double    );
long  double  __jnf64x(int , long  double    );
long  double  y0f64x(long  double    );
long  double  __y0f64x(long  double    );
long  double  y1f64x(long  double    );
long  double  __y1f64x(long  double    );
long  double  ynf64x(int , long  double    );
long  double  __ynf64x(int , long  double    );
long  double  erff64x(long  double    );
long  double  __erff64x(long  double    );
long  double  erfcf64x(long  double    );
long  double  __erfcf64x(long  double    );
long  double  lgammaf64x(long  double    );
long  double  __lgammaf64x(long  double    );
long  double  tgammaf64x(long  double    );
long  double  __tgammaf64x(long  double    );
long  double  lgammaf64x_r(long  double    , int* __signgamp);
long  double  __lgammaf64x_r(long  double    , int* __signgamp);
long  double  rintf64x(long  double  __x  );
long  double  __rintf64x(long  double  __x  );
long  double  nextafterf64x(long  double  __x  , long  double  __y  );
long  double  __nextafterf64x(long  double  __x  , long  double  __y  );
long  double  nextdownf64x(long  double  __x  );
long  double  __nextdownf64x(long  double  __x  );
long  double  nextupf64x(long  double  __x  );
long  double  __nextupf64x(long  double  __x  );
long  double  remainderf64x(long  double  __x  , long  double  __y  );
long  double  __remainderf64x(long  double  __x  , long  double  __y  );
long  double  scalbnf64x(long  double  __x  , int __n);
long  double  __scalbnf64x(long  double  __x  , int __n);
int ilogbf64x(long  double  __x  );
int __ilogbf64x(long  double  __x  );
long  int llogbf64x(long  double  __x  );
long  int __llogbf64x(long  double  __x  );
long  double  scalblnf64x(long  double  __x  , long  int __n);
long  double  __scalblnf64x(long  double  __x  , long  int __n);
long  double  nearbyintf64x(long  double  __x  );
long  double  __nearbyintf64x(long  double  __x  );
long  double  roundf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  truncf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  double  __remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  int lrintf64x(long  double  __x  );
long  int __lrintf64x(long  double  __x  );
long long int llrintf64x(long  double  __x  );
long long int __llrintf64x(long  double  __x  );
long  int lroundf64x(long  double  __x  );
long  int __lroundf64x(long  double  __x  );
long long int llroundf64x(long  double  __x  );
long long int __llroundf64x(long  double  __x  );
long  double  fdimf64x(long  double  __x  , long  double  __y  );
long  double  __fdimf64x(long  double  __x  , long  double  __y  );
long  double  fmaxf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  __fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  roundevenf64x(long  double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
int canonicalizef64x(long  double*  __cx  , const long  double*  __x  );
long  double  fmaxmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
int totalorderf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
long  double  getpayloadf64x(const long  double*  __x  );
long  double  __getpayloadf64x(const long  double*  __x  );
int setpayloadf64x(long  double*  __x  , long  double  __payload  );
int setpayloadsigf64x(long  double*  __x  , long  double  __payload  );
float fadd(double __x, double __y);
float fdiv(double __x, double __y);
float ffma(double __x, double __y, double __z);
float fmul(double __x, double __y);
float fsqrt(double __x);
float fsub(double __x, double __y);
float faddl(long  double __x, long  double __y);
float fdivl(long  double __x, long  double __y);
float ffmal(long  double __x, long  double __y, long  double __z);
float fmull(long  double __x, long  double __y);
float fsqrtl(long  double __x);
float fsubl(long  double __x, long  double __y);
double daddl(long  double __x, long  double __y);
double ddivl(long  double __x, long  double __y);
double dfmal(long  double __x, long  double __y, long  double __z);
double dmull(long  double __x, long  double __y);
double dsqrtl(long  double __x);
double dsubl(long  double __x, long  double __y);
float  f32addf32x(double  __x  , double  __y  );
float  f32divf32x(double  __x  , double  __y  );
float  f32fmaf32x(double  __x  , double  __y  , double  __z  );
float  f32mulf32x(double  __x  , double  __y  );
float  f32sqrtf32x(double  __x  );
float  f32subf32x(double  __x  , double  __y  );
float  f32addf64(double  __x  , double  __y  );
float  f32divf64(double  __x  , double  __y  );
float  f32fmaf64(double  __x  , double  __y  , double  __z  );
float  f32mulf64(double  __x  , double  __y  );
float  f32sqrtf64(double  __x  );
float  f32subf64(double  __x  , double  __y  );
float  f32addf64x(long  double  __x  , long  double  __y  );
float  f32divf64x(long  double  __x  , long  double  __y  );
float  f32fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
float  f32mulf64x(long  double  __x  , long  double  __y  );
float  f32sqrtf64x(long  double  __x  );
float  f32subf64x(long  double  __x  , long  double  __y  );
double  f32xaddf64(double  __x  , double  __y  );
double  f32xdivf64(double  __x  , double  __y  );
double  f32xfmaf64(double  __x  , double  __y  , double  __z  );
double  f32xmulf64(double  __x  , double  __y  );
double  f32xsqrtf64(double  __x  );
double  f32xsubf64(double  __x  , double  __y  );
double  f32xaddf64x(long  double  __x  , long  double  __y  );
double  f32xdivf64x(long  double  __x  , long  double  __y  );
double  f32xfmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f32xmulf64x(long  double  __x  , long  double  __y  );
double  f32xsqrtf64x(long  double  __x  );
double  f32xsubf64x(long  double  __x  , long  double  __y  );
double  f64addf64x(long  double  __x  , long  double  __y  );
double  f64divf64x(long  double  __x  , long  double  __y  );
double  f64fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f64mulf64x(long  double  __x  , long  double  __y  );
double  f64sqrtf64x(long  double  __x  );
double  f64subf64x(long  double  __x  , long  double  __y  );
int __iscanonicall(long  double __x) __attribute__ ((__const__));
int mcheck(void (*__abortfunc)(enum mcheck_status));
int mcheck_pedantic(void (*__abortfunc)(enum mcheck_status));
void mcheck_check_all();
enum mcheck_status mprobe(void* __ptr);
void mtrace();
void muntrace();
struct tagITEM**  menu_items(const struct tagMENU*    );
struct tagITEM*  current_item(const struct tagMENU*    );
struct tagITEM*  new_item(const char* , const char* );
struct tagMENU*  new_menu(struct tagITEM**    );
int  item_opts(const struct tagITEM*    );
int  menu_opts(const struct tagMENU*    );
void (*item_init(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*item_term(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*menu_init(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*menu_term(const struct tagMENU*    ))(struct tagMENU* ) ;
struct _win_st*  menu_sub(const struct tagMENU*    );
struct _win_st*  menu_win(const struct tagMENU*    );
const char* item_description(const struct tagITEM*    );
const char* item_name(const struct tagITEM*    );
const char* menu_mark(const struct tagMENU*    );
const char* menu_request_name(int );
char* menu_pattern(const struct tagMENU*    );
void* menu_userptr(const struct tagMENU*    );
void* item_userptr(const struct tagITEM*    );
unsigned int  menu_back(const struct tagMENU*    );
unsigned int  menu_fore(const struct tagMENU*    );
unsigned int  menu_grey(const struct tagMENU*    );
int free_item(struct tagITEM*    );
int free_menu(struct tagMENU*    );
int item_count(const struct tagMENU*    );
int item_index(const struct tagITEM*    );
int item_opts_off(struct tagITEM*    , int    );
int item_opts_on(struct tagITEM*    , int    );
int menu_driver(struct tagMENU*    , int );
int menu_opts_off(struct tagMENU*    , int    );
int menu_opts_on(struct tagMENU*    , int    );
int menu_pad(const struct tagMENU*    );
int pos_menu_cursor(const struct tagMENU*    );
int post_menu(struct tagMENU*    );
int scale_menu(const struct tagMENU*    , int* , int* );
int set_current_item(struct tagMENU*  menu  , struct tagITEM*  item  );
int set_item_init(struct tagMENU*    , void (*anonymous_var_nameY1738)(struct tagMENU* )  );
int set_item_opts(struct tagITEM*    , int    );
int set_item_term(struct tagMENU*    , void (*anonymous_var_nameY1742)(struct tagMENU* )  );
int set_item_userptr(struct tagITEM*    , void* );
int set_item_value(struct tagITEM*    , _Bool );
int set_menu_back(struct tagMENU*    , unsigned int    );
int set_menu_fore(struct tagMENU*    , unsigned int    );
int set_menu_format(struct tagMENU*    , int , int );
int set_menu_grey(struct tagMENU*    , unsigned int    );
int set_menu_init(struct tagMENU*    , void (*anonymous_var_nameY1757)(struct tagMENU* )  );
int set_menu_items(struct tagMENU*    , struct tagITEM**    );
int set_menu_mark(struct tagMENU*    , const char* );
int set_menu_opts(struct tagMENU*    , int    );
int set_menu_pad(struct tagMENU*    , int );
int set_menu_pattern(struct tagMENU*    , const char* );
int set_menu_sub(struct tagMENU*    , struct _win_st*    );
int set_menu_term(struct tagMENU*    , void (*anonymous_var_nameY1771)(struct tagMENU* )  );
int set_menu_userptr(struct tagMENU*    , void* );
int set_menu_win(struct tagMENU*    , struct _win_st*    );
int set_top_row(struct tagMENU*    , int );
int top_row(const struct tagMENU*    );
int unpost_menu(struct tagMENU*    );
int menu_request_by_name(const char* );
int set_menu_spacing(struct tagMENU*    , int , int , int );
int menu_spacing(const struct tagMENU*    , int* , int* , int* );
_Bool item_value(const struct tagITEM*    );
_Bool item_visible(const struct tagITEM*    );
void menu_format(const struct tagMENU*    , int* , int* );
struct tagMENU*  new_menu_sp(struct screen*    , struct tagITEM**    );
struct _IO_FILE*  setmntent(const char* __file, const char* __mode);
struct mntent*  getmntent(struct _IO_FILE*  __stream  );
struct mntent*  getmntent_r(struct _IO_FILE* __restrict  __stream  , struct mntent* __restrict  __result  , char* __restrict __buffer, int __bufsize);
int addmntent(struct _IO_FILE* __restrict  __stream  , const struct mntent* __restrict  __mnt  );
int endmntent(struct _IO_FILE*  __stream  );
char* hasmntopt(const struct mntent*  __mnt  , const char* __opt);
long  int  strfmon(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict  __format, ...) __attribute__ ((__format__ (__strfmon__, 3, 4)))
     ;
long  int  strfmon_l(char* __restrict __s, unsigned long  __maxsize  , struct __locale_struct*  __loc  , const char* __restrict  __format, ...) __attribute__ ((__format__ (__strfmon__, 4, 5)))
     ;
int  mq_open(const char* __name, int __oflag, ...);
int mq_close(int  __mqdes  );
int mq_getattr(int  __mqdes  , struct mq_attr*  __mqstat  );
int mq_setattr(int  __mqdes  , const struct mq_attr* __restrict  __mqstat  , struct mq_attr* __restrict  __omqstat  );
int mq_unlink(const char* __name);
int mq_notify(int  __mqdes  , const struct sigevent*  __notification  );
long  int  mq_receive(int  __mqdes  , char* __msg_ptr, unsigned long  __msg_len  , unsigned int* __msg_prio);
int mq_send(int  __mqdes  , const char* __msg_ptr, unsigned long  __msg_len  , unsigned int __msg_prio);
long  int  mq_timedreceive(int  __mqdes  , char* __restrict __msg_ptr, unsigned long  __msg_len  , unsigned int* __restrict __msg_prio, const struct timespec* __restrict  __abs_timeout  );
int mq_timedsend(int  __mqdes  , const char* __msg_ptr, unsigned long  __msg_len  , unsigned int __msg_prio, const struct timespec*  __abs_timeout  );
unsigned int  ntohl(unsigned int  __netlong  ) __attribute__ ((__const__));
unsigned short int  ntohs(unsigned short int  __netshort  ) __attribute__ ((__const__));
unsigned int  htonl(unsigned int  __hostlong  ) __attribute__ ((__const__));
unsigned short int  htons(unsigned short int  __hostshort  ) __attribute__ ((__const__));
int bindresvport(int __sockfd, struct sockaddr_in*  __sock_in  );
int bindresvport6(int __sockfd, struct sockaddr_in6*  __sock_in  );
int inet6_option_space(int __nbytes) __attribute__ ((__deprecated__));
int inet6_option_init(void* __bp, struct cmsghdr**  __cmsgp  , int __type) __attribute__ ((__deprecated__));
int inet6_option_append(struct cmsghdr*  __cmsg  , const unsigned char*  __typep  , int __multx, int __plusy) __attribute__ ((__deprecated__));
unsigned char*  inet6_option_alloc(struct cmsghdr*  __cmsg  , int __datalen, int __multx, int __plusy) __attribute__ ((__deprecated__));
int inet6_option_next(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  ) __attribute__ ((__deprecated__));
int inet6_option_find(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  , int __type) __attribute__ ((__deprecated__));
int inet6_opt_init(void* __extbuf, unsigned int  __extlen  );
int inet6_opt_append(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int  __len  , unsigned char  __align  , void** __databufp);
int inet6_opt_finish(void* __extbuf, unsigned int  __extlen  , int __offset);
int inet6_opt_set_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
int inet6_opt_next(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char*  __typep  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_find(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_get_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
unsigned int  inet6_rth_space(int __type, int __segments);
void* inet6_rth_init(void* __bp, unsigned int  __bp_len  , int __type, int __segments);
int inet6_rth_add(void* __bp, const struct in6_addr*  __addr  );
int inet6_rth_reverse(const void* __in, void* __out);
int inet6_rth_segments(const void* __bp);
struct in6_addr*  inet6_rth_getaddr(const void* __bp, int __index);
int getipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct in_addr*  __slist  );
int setipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct in_addr*  __slist  );
int getsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct sockaddr_storage*  __slist  );
int setsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct sockaddr_storage*  __slist  );
void setrpcent(int __stayopen);
void endrpcent();
struct rpcent*  getrpcbyname(const char* __name);
struct rpcent*  getrpcbynumber(int __number);
struct rpcent*  getrpcent();
int getrpcbyname_r(const char* __name, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcbynumber_r(int __number, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcent_r(struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int* __h_errno_location() __attribute__ ((__const__));
void herror(const char* __str);
const char* hstrerror(int __err_num);
void sethostent(int __stay_open);
void endhostent();
struct hostent*  gethostent();
struct hostent*  gethostbyaddr(const void* __addr, unsigned int  __len  , int __type);
struct hostent*  gethostbyname(const char* __name);
struct hostent*  gethostbyname2(const char* __name, int __af);
int gethostent_r(struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyaddr_r(const void* __restrict __addr, unsigned int  __len  , int __type, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyname_r(const char* __restrict __name, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyname2_r(const char* __restrict __name, int __af, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
void setnetent(int __stay_open);
void endnetent();
struct netent*  getnetent();
struct netent*  getnetbyaddr(unsigned int  __net  , int __type);
struct netent*  getnetbyname(const char* __name);
int getnetent_r(struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
int getnetbyaddr_r(unsigned int  __net  , int __type, struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
int getnetbyname_r(const char* __restrict __name, struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
void setservent(int __stay_open);
void endservent();
struct servent*  getservent();
struct servent*  getservbyname(const char* __name, const char* __proto);
struct servent*  getservbyport(int __port, const char* __proto);
int getservent_r(struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
int getservbyname_r(const char* __restrict __name, const char* __restrict __proto, struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
int getservbyport_r(int __port, const char* __restrict __proto, struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
void setprotoent(int __stay_open);
void endprotoent();
struct protoent*  getprotoent();
struct protoent*  getprotobyname(const char* __name);
struct protoent*  getprotobynumber(int __proto);
int getprotoent_r(struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int getprotobyname_r(const char* __restrict __name, struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int getprotobynumber_r(int __proto, struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int setnetgrent(const char* __netgroup);
void endnetgrent();
int getnetgrent(char** __restrict __hostp, char** __restrict __userp, char** __restrict __domainp);
int innetgr(const char* __netgroup, const char* __host, const char* , const char* __domain);
int getnetgrent_r(char** __restrict __hostp, char** __restrict __userp, char** __restrict __domainp, char* __restrict __buffer, unsigned long  __buflen  );
int rcmd(char** __restrict __ahost, unsigned short int __rport, const char* __restrict __locuser, const char* __restrict __remuser, const char* __restrict __cmd, int* __restrict __fd2p);
int rcmd_af(char** __restrict __ahost, unsigned short int __rport, const char* __restrict __locuser, const char* __restrict __remuser, const char* __restrict __cmd, int* __restrict __fd2p, unsigned short int  __af  );
int rexec(char** __restrict __ahost, int __rport, const char* __restrict __name, const char* __restrict __pass, const char* __restrict __cmd, int* __restrict __fd2p);
int rexec_af(char** __restrict __ahost, int __rport, const char* __restrict __name, const char* __restrict __pass, const char* __restrict __cmd, int* __restrict __fd2p, unsigned short int  __af  );
int ruserok(const char* __rhost, int __suser, const char* __remuser, const char* __locuser);
int ruserok_af(const char* __rhost, int __suser, const char* __remuser, const char* __locuser, unsigned short int  __af  );
int iruserok(unsigned int  __raddr  , int __suser, const char* __remuser, const char* __locuser);
int iruserok_af(const void* __raddr, int __suser, const char* __remuser, const char* __locuser, unsigned short int  __af  );
int rresvport(int* __alport);
int rresvport_af(int* __alport, unsigned short int  __af  );
int getaddrinfo(const char* __restrict __name, const char* __restrict __service, const struct addrinfo* __restrict  __req  , struct addrinfo** __restrict  __pai  );
void freeaddrinfo(struct addrinfo*  __ai  );
const char* gai_strerror(int __ecode);
int getnameinfo(const struct sockaddr* __restrict  __sa  , unsigned int  __salen  , char* __restrict __host, unsigned int  __hostlen  , char* __restrict __serv, unsigned int  __servlen  , int __flags);
int getaddrinfo_a(int __mode, struct gaicb*  __list[]  , int __ent, struct sigevent* __restrict  __sig  );
int gai_suspend(const struct gaicb* const  __list[]  , int __ent, const struct timespec*  __timeout  );
int gai_error(struct gaicb*  __req  );
int gai_cancel(struct gaicb*  __gaicbp  );
int __nss_configure_lookup(const char* __dbname, const char* __string);
void _obstack_newchunk(struct obstack*    , int );
int _obstack_begin(struct obstack*    , int , int , void* (*anonymous_lambda_var_nameZ6)(long), void (*anonymous_lambda_var_nameZ7)(void*));
int _obstack_begin_1(struct obstack*    , int , int , void* (*anonymous_lambda_var_nameZ8)(void*,long), void (*anonymous_lambda_var_nameZ9)(void*,void*), void* );
int _obstack_memory_used(struct obstack*    ) __attribute__ ((__pure__));
void obstack_free(struct obstack*    , void* );
struct _win_st*  panel_window(const struct panel*    );
void update_panels();
int hide_panel(struct panel*    );
int show_panel(struct panel*    );
int del_panel(struct panel*    );
int top_panel(struct panel*    );
int bottom_panel(struct panel*    );
struct panel*  new_panel(struct _win_st*    );
struct panel*  panel_above(const struct panel*    );
struct panel*  panel_below(const struct panel*    );
int set_panel_userptr(struct panel*    , const void* );
const void* panel_userptr(const struct panel*    );
int move_panel(struct panel*    , int , int );
int replace_panel(struct panel*    , struct _win_st*    );
int panel_hidden(const struct panel*    );
struct panel*  ground_panel(struct screen*    );
struct panel*  ceiling_panel(struct screen*    );
void update_panels_sp(struct screen*    );
int poll(struct pollfd*  __fds  , unsigned long  int  __nfds  , int __timeout);
int ppoll(struct pollfd*  __fds  , unsigned long  int  __nfds  , const struct timespec*  __timeout  , const struct anonymous_typeX3*  __ss  );
int register_printf_specifier(int __spec, int (*__func)(struct _IO_FILE* ,const struct printf_info* ,const void** const)  , int (*__arginfo)(const struct printf_info* ,unsigned long ,int*,int*)  );
int register_printf_function(int __spec, int (*__func)(struct _IO_FILE* ,const struct printf_info* ,const void** const)  , int (*__arginfo)(const struct printf_info* ,unsigned long ,int*)  ) __attribute__ ((__deprecated__));
int register_printf_modifier(const int*  __str  );
int register_printf_type(void (*__fct)(void*,__builtin_va_list* )  );
unsigned long  parse_printf_format(const char* __restrict __fmt, unsigned long  __n  , int* __restrict __argtypes);
int printf_size(struct _IO_FILE* __restrict  __fp  , const struct printf_info*  __info  , const void** const __restrict __args);
int printf_size_info(const struct printf_info* __restrict  __info  , unsigned long  __n  , int* __restrict __argtypes);
enum anonymous_typeY107  ps_pdread(struct ps_prochandle*    , void*    , void* , unsigned long    );
enum anonymous_typeY107  ps_pdwrite(struct ps_prochandle*    , void*    , const void* , unsigned long    );
enum anonymous_typeY107  ps_ptread(struct ps_prochandle*    , void*    , void* , unsigned long    );
enum anonymous_typeY107  ps_ptwrite(struct ps_prochandle*    , void*    , const void* , unsigned long    );
enum anonymous_typeY107  ps_lgetregs(struct ps_prochandle*    , int    , unsigned long  long  [(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  );
enum anonymous_typeY107  ps_lsetregs(struct ps_prochandle*    , int    , const unsigned long  long  [(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  );
enum anonymous_typeY107  ps_lgetfpregs(struct ps_prochandle*    , int    , struct user_fpregs_struct*    );
enum anonymous_typeY107  ps_lsetfpregs(struct ps_prochandle*    , int    , const struct user_fpregs_struct*    );
int  ps_getpid(struct ps_prochandle*    );
enum anonymous_typeY107  ps_get_thread_area(struct ps_prochandle*    , int    , int , void**    );
enum anonymous_typeY107  ps_pglobal_lookup(struct ps_prochandle*    , const char* object_name, const char* sym_name, void**  sym_addr  );
enum anonymous_typeY107  ps_pstop(struct ps_prochandle*    );
enum anonymous_typeY107  ps_pcontinue(struct ps_prochandle*    );
enum anonymous_typeY107  ps_lstop(struct ps_prochandle*    , int    );
enum anonymous_typeY107  ps_lcontinue(struct ps_prochandle*    , int    );
int clone(int (*__fn)(void*), void* __child_stack, int __flags, void* __arg, ...);
int unshare(int __flags);
int sched_getcpu();
int getcpu(unsigned int* , unsigned int* );
int setns(int __fd, int __nstype);
int sched_setattr(int  tid  , struct sched_attr*  attr  , unsigned int flags);
int sched_getattr(int  tid  , struct sched_attr*  attr  , unsigned int size, unsigned int flags);
int __sched_cpucount(unsigned long  __setsize  , const struct anonymous_typeX108*  __setp  );
struct anonymous_typeX108*  __sched_cpualloc(unsigned long  __count  );
void __sched_cpufree(struct anonymous_typeX108*  __set  );
int sched_setparam(int  __pid  , const struct sched_param*  __param  );
int sched_getparam(int  __pid  , struct sched_param*  __param  );
int sched_setscheduler(int  __pid  , int __policy, const struct sched_param*  __param  );
int sched_getscheduler(int  __pid  );
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int  __pid  , struct timespec*  __t  );
int sched_setaffinity(int  __pid  , unsigned long  __cpusetsize  , const struct anonymous_typeX108*  __cpuset  );
int sched_getaffinity(int  __pid  , unsigned long  __cpusetsize  , struct anonymous_typeX108*  __cpuset  );
int clock_adjtime(int  __clock_id  , struct timex*  __utx  );
long  int  clock();
long  int  time(long  int*  __timer  );
double difftime(long  int  __time1  , long  int  __time0  );
long  int  mktime(struct tm*  __tp  );
unsigned long  strftime(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict  __format, const struct tm* __restrict  __tp  );
char* strptime(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  );
unsigned long  strftime_l(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict  __format, const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
char* strptime_l(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  , struct __locale_struct*  __loc  );
struct tm*  gmtime(const long  int*  __timer  );
struct tm*  localtime(const long  int*  __timer  );
struct tm*  gmtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
struct tm*  localtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
char* asctime(const struct tm*  __tp  );
char* ctime(const long  int*  __timer  );
char* asctime_r(const struct tm* __restrict  __tp  , char* __restrict __buf);
char* ctime_r(const long  int* __restrict  __timer  , char* __restrict __buf);
void tzset();
long  int  timegm(struct tm*  __tp  );
long  int  timelocal(struct tm*  __tp  );
int dysize(int __year) __attribute__ ((__const__));
int nanosleep(const struct timespec*  __requested_time  , struct timespec*  __remaining  );
int clock_getres(int  __clock_id  , struct timespec*  __res  );
int clock_gettime(int  __clock_id  , struct timespec*  __tp  );
int clock_settime(int  __clock_id  , const struct timespec*  __tp  );
int clock_nanosleep(int  __clock_id  , int __flags, const struct timespec*  __req  , struct timespec*  __rem  );
int clock_getcpuclockid(int  __pid  , int*  __clock_id  );
int timer_create(int  __clock_id  , struct sigevent* __restrict  __evp  , void** __restrict  __timerid  );
int timer_delete(void*  __timerid  );
int timer_settime(void*  __timerid  , int __flags, const struct itimerspec* __restrict  __value  , struct itimerspec* __restrict  __ovalue  );
int timer_gettime(void*  __timerid  , struct itimerspec*  __value  );
int timer_getoverrun(void*  __timerid  );
int timespec_get(struct timespec*  __ts  , int __base);
int timespec_getres(struct timespec*  __ts  , int __base);
struct tm*  getdate(const char* __string);
int getdate_r(const char* __restrict __string, struct tm* __restrict  __resbufp  );
int pthread_create(unsigned long  int* __restrict  __newthread  , const union pthread_attr_t* __restrict  __attr  , void* (*__start_routine)(void*), void* __restrict __arg);
void pthread_exit(void* __retval) __attribute__ ((__noreturn__));
int pthread_join(unsigned long  int  __th  , void** __thread_return);
int pthread_tryjoin_np(unsigned long  int  __th  , void** __thread_return);
int pthread_timedjoin_np(unsigned long  int  __th  , void** __thread_return, const struct timespec*  __abstime  );
int pthread_clockjoin_np(unsigned long  int  __th  , void** __thread_return, int  __clockid  , const struct timespec*  __abstime  );
int pthread_detach(unsigned long  int  __th  );
unsigned long  int  pthread_self() __attribute__ ((__const__));
int pthread_equal(unsigned long  int  __thread1  , unsigned long  int  __thread2  ) __attribute__ ((__const__));
int pthread_attr_init(union pthread_attr_t*  __attr  );
int pthread_attr_destroy(union pthread_attr_t*  __attr  );
int pthread_attr_getdetachstate(const union pthread_attr_t*  __attr  , int* __detachstate);
int pthread_attr_setdetachstate(union pthread_attr_t*  __attr  , int __detachstate);
int pthread_attr_getguardsize(const union pthread_attr_t*  __attr  , unsigned long*  __guardsize  );
int pthread_attr_setguardsize(union pthread_attr_t*  __attr  , unsigned long  __guardsize  );
int pthread_attr_getschedparam(const union pthread_attr_t* __restrict  __attr  , struct sched_param* __restrict  __param  );
int pthread_attr_setschedparam(union pthread_attr_t* __restrict  __attr  , const struct sched_param* __restrict  __param  );
int pthread_attr_getschedpolicy(const union pthread_attr_t* __restrict  __attr  , int* __restrict __policy);
int pthread_attr_setschedpolicy(union pthread_attr_t*  __attr  , int __policy);
int pthread_attr_getinheritsched(const union pthread_attr_t* __restrict  __attr  , int* __restrict __inherit);
int pthread_attr_setinheritsched(union pthread_attr_t*  __attr  , int __inherit);
int pthread_attr_getscope(const union pthread_attr_t* __restrict  __attr  , int* __restrict __scope);
int pthread_attr_setscope(union pthread_attr_t*  __attr  , int __scope);
int pthread_attr_getstackaddr(const union pthread_attr_t* __restrict  __attr  , void** __restrict __stackaddr) __attribute__ ((__deprecated__));
int pthread_attr_setstackaddr(union pthread_attr_t*  __attr  , void* __stackaddr) __attribute__ ((__deprecated__));
int pthread_attr_getstacksize(const union pthread_attr_t* __restrict  __attr  , unsigned long* __restrict  __stacksize  );
int pthread_attr_setstacksize(union pthread_attr_t*  __attr  , unsigned long  __stacksize  );
int pthread_attr_getstack(const union pthread_attr_t* __restrict  __attr  , void** __restrict __stackaddr, unsigned long* __restrict  __stacksize  );
int pthread_attr_setstack(union pthread_attr_t*  __attr  , void* __stackaddr, unsigned long  __stacksize  );
int pthread_attr_setaffinity_np(union pthread_attr_t*  __attr  , unsigned long  __cpusetsize  , const struct anonymous_typeX108*  __cpuset  );
int pthread_attr_getaffinity_np(const union pthread_attr_t*  __attr  , unsigned long  __cpusetsize  , struct anonymous_typeX108*  __cpuset  );
int pthread_getattr_default_np(union pthread_attr_t*  __attr  );
int pthread_attr_setsigmask_np(union pthread_attr_t*  __attr  , const struct anonymous_typeX3*  sigmask  );
int pthread_attr_getsigmask_np(const union pthread_attr_t*  __attr  , struct anonymous_typeX3*  sigmask  );
int pthread_setattr_default_np(const union pthread_attr_t*  __attr  );
int pthread_getattr_np(unsigned long  int  __th  , union pthread_attr_t*  __attr  );
int pthread_setschedparam(unsigned long  int  __target_thread  , int __policy, const struct sched_param*  __param  );
int pthread_getschedparam(unsigned long  int  __target_thread  , int* __restrict __policy, struct sched_param* __restrict  __param  );
int pthread_setschedprio(unsigned long  int  __target_thread  , int __prio);
int pthread_getname_np(unsigned long  int  __target_thread  , char* __buf, unsigned long  __buflen  );
int pthread_setname_np(unsigned long  int  __target_thread  , const char* __name);
int pthread_getconcurrency();
int pthread_setconcurrency(int __level);
int pthread_yield();
int pthread_setaffinity_np(unsigned long  int  __th  , unsigned long  __cpusetsize  , const struct anonymous_typeX108*  __cpuset  );
int pthread_getaffinity_np(unsigned long  int  __th  , unsigned long  __cpusetsize  , struct anonymous_typeX108*  __cpuset  );
int pthread_once(int*  __once_control  , void (*__init_routine)());
int pthread_setcancelstate(int __state, int* __oldstate);
int pthread_setcanceltype(int __type, int* __oldtype);
int pthread_cancel(unsigned long  int  __th  );
void pthread_testcancel();
void __pthread_register_cancel(struct anonymous_typeX109*  __buf  );
void __pthread_unregister_cancel(struct anonymous_typeX109*  __buf  );
void __pthread_register_cancel_defer(struct anonymous_typeX109*  __buf  );
void __pthread_unregister_cancel_restore(struct anonymous_typeX109*  __buf  );
void __pthread_unwind_next(struct anonymous_typeX109*  __buf  ) __attribute__ ((__noreturn__))
#line 677 "/usr/include/pthread.h"
     __attribute__ ((__weak__))
#line 679 "/usr/include/pthread.h"
     ;
int pthread_mutex_init(union anonymous_typeZ10*  __mutex  , const union anonymous_typeZ8*  __mutexattr  );
int pthread_mutex_destroy(union anonymous_typeZ10*  __mutex  );
int pthread_mutex_trylock(union anonymous_typeZ10*  __mutex  );
int pthread_mutex_lock(union anonymous_typeZ10*  __mutex  );
int pthread_mutex_timedlock(union anonymous_typeZ10* __restrict  __mutex  , const struct timespec* __restrict  __abstime  );
int pthread_mutex_clocklock(union anonymous_typeZ10* __restrict  __mutex  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_mutex_unlock(union anonymous_typeZ10*  __mutex  );
int pthread_mutex_getprioceiling(const union anonymous_typeZ10* __restrict  __mutex  , int* __restrict __prioceiling);
int pthread_mutex_setprioceiling(union anonymous_typeZ10* __restrict  __mutex  , int __prioceiling, int* __restrict __old_ceiling);
int pthread_mutex_consistent(union anonymous_typeZ10*  __mutex  );
int pthread_mutexattr_init(union anonymous_typeZ8*  __attr  );
int pthread_mutexattr_destroy(union anonymous_typeZ8*  __attr  );
int pthread_mutexattr_getpshared(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict __pshared);
int pthread_mutexattr_setpshared(union anonymous_typeZ8*  __attr  , int __pshared);
int pthread_mutexattr_gettype(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict __kind);
int pthread_mutexattr_settype(union anonymous_typeZ8*  __attr  , int __kind);
int pthread_mutexattr_getprotocol(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict __protocol);
int pthread_mutexattr_setprotocol(union anonymous_typeZ8*  __attr  , int __protocol);
int pthread_mutexattr_getprioceiling(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict __prioceiling);
int pthread_mutexattr_setprioceiling(union anonymous_typeZ8*  __attr  , int __prioceiling);
int pthread_mutexattr_getrobust(const union anonymous_typeZ8*  __attr  , int* __robustness);
int pthread_mutexattr_setrobust(union anonymous_typeZ8*  __attr  , int __robustness);
int pthread_rwlock_init(union anonymous_typeZ12* __restrict  __rwlock  , const union anonymous_typeZ13* __restrict  __attr  );
int pthread_rwlock_destroy(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlock_rdlock(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlock_tryrdlock(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlock_timedrdlock(union anonymous_typeZ12* __restrict  __rwlock  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_clockrdlock(union anonymous_typeZ12* __restrict  __rwlock  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_wrlock(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlock_trywrlock(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlock_timedwrlock(union anonymous_typeZ12* __restrict  __rwlock  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_clockwrlock(union anonymous_typeZ12* __restrict  __rwlock  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_unlock(union anonymous_typeZ12*  __rwlock  );
int pthread_rwlockattr_init(union anonymous_typeZ13*  __attr  );
int pthread_rwlockattr_destroy(union anonymous_typeZ13*  __attr  );
int pthread_rwlockattr_getpshared(const union anonymous_typeZ13* __restrict  __attr  , int* __restrict __pshared);
int pthread_rwlockattr_setpshared(union anonymous_typeZ13*  __attr  , int __pshared);
int pthread_rwlockattr_getkind_np(const union anonymous_typeZ13* __restrict  __attr  , int* __restrict __pref);
int pthread_rwlockattr_setkind_np(union anonymous_typeZ13*  __attr  , int __pref);
int pthread_cond_init(union anonymous_typeZ11* __restrict  __cond  , const union anonymous_typeZ9* __restrict  __cond_attr  );
int pthread_cond_destroy(union anonymous_typeZ11*  __cond  );
int pthread_cond_signal(union anonymous_typeZ11*  __cond  );
int pthread_cond_broadcast(union anonymous_typeZ11*  __cond  );
int pthread_cond_wait(union anonymous_typeZ11* __restrict  __cond  , union anonymous_typeZ10* __restrict  __mutex  );
int pthread_cond_timedwait(union anonymous_typeZ11* __restrict  __cond  , union anonymous_typeZ10* __restrict  __mutex  , const struct timespec* __restrict  __abstime  );
int pthread_cond_clockwait(union anonymous_typeZ11* __restrict  __cond  , union anonymous_typeZ10* __restrict  __mutex  , int  __clock_id  , const struct timespec* __restrict  __abstime  );
int pthread_condattr_init(union anonymous_typeZ9*  __attr  );
int pthread_condattr_destroy(union anonymous_typeZ9*  __attr  );
int pthread_condattr_getpshared(const union anonymous_typeZ9* __restrict  __attr  , int* __restrict __pshared);
int pthread_condattr_setpshared(union anonymous_typeZ9*  __attr  , int __pshared);
int pthread_condattr_getclock(const union anonymous_typeZ9* __restrict  __attr  , int* __restrict  __clock_id  );
int pthread_condattr_setclock(union anonymous_typeZ9*  __attr  , int  __clock_id  );
int pthread_spin_init(int*  __lock  , int __pshared);
int pthread_spin_destroy(int*  __lock  );
int pthread_spin_lock(int*  __lock  );
int pthread_spin_trylock(int*  __lock  );
int pthread_spin_unlock(int*  __lock  );
int pthread_barrier_init(union anonymous_typeZ14* __restrict  __barrier  , const union anonymous_typeZ15* __restrict  __attr  , unsigned int __count);
int pthread_barrier_destroy(union anonymous_typeZ14*  __barrier  );
int pthread_barrier_wait(union anonymous_typeZ14*  __barrier  );
int pthread_barrierattr_init(union anonymous_typeZ15*  __attr  );
int pthread_barrierattr_destroy(union anonymous_typeZ15*  __attr  );
int pthread_barrierattr_getpshared(const union anonymous_typeZ15* __restrict  __attr  , int* __restrict __pshared);
int pthread_barrierattr_setpshared(union anonymous_typeZ15*  __attr  , int __pshared);
int pthread_key_create(unsigned int*  __key  , void (*__destr_function)(void*));
int pthread_key_delete(unsigned int  __key  );
void* pthread_getspecific(unsigned int  __key  );
int pthread_setspecific(unsigned int  __key  , const void* __pointer);
int pthread_getcpuclockid(unsigned long  int  __thread_id  , int*  __clock_id  );
int  pthread_gettid_np(unsigned long  int  __thread_id  );
int pthread_atfork(void (*__prepare)(), void (*__parent)(), void (*__child)());
unsigned int  cfgetospeed(const struct termios*  __termios_p  );
unsigned int  cfgetispeed(const struct termios*  __termios_p  );
int cfsetospeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetispeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetspeed(struct termios*  __termios_p  , unsigned int  __speed  );
unsigned int  cfgetobaud(const struct termios*  __termios_p  );
unsigned int  cfgetibaud(const struct termios*  __termios_p  );
int cfsetobaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetibaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetbaud(struct termios*  __termios_p  , unsigned int  __baud  );
int tcgetattr(int __fd, struct termios*  __termios_p  );
int tcsetattr(int __fd, int __optional_actions, const struct termios*  __termios_p  );
void cfmakeraw(struct termios*  __termios_p  );
int tcsendbreak(int __fd, int __duration);
int tcdrain(int __fd);
int tcflush(int __fd, int __queue_selector);
int tcflow(int __fd, int __action);
int  tcgetsid(int __fd);
int ioctl(int __fd, unsigned long  int __request, ...);
int openpty(int* __amaster, int* __aslave, char* __name, const struct termios*  __termp  , const struct winsize*  __winp  );
int forkpty(int* __amaster, char* __name, const struct termios*  __termp  , const struct winsize*  __winp  );
void setpwent();
void endpwent();
struct passwd*  getpwent();
struct passwd*  fgetpwent(struct _IO_FILE*  __stream  );
int putpwent(const struct passwd* __restrict  __p  , struct _IO_FILE* __restrict  __f  );
struct passwd*  getpwuid(unsigned int  __uid  );
struct passwd*  getpwnam(const char* __name);
int getpwent_r(struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpwuid_r(unsigned int  __uid  , struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpwnam_r(const char* __restrict __name, struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int fgetpwent_r(struct _IO_FILE* __restrict  __stream  , struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpw(unsigned int  __uid  , char* __buffer);
unsigned long  int  re_set_syntax(unsigned long  int  __syntax  );
const char* re_compile_pattern(const char* __pattern, unsigned long  __length  , struct re_pattern_buffer*  __buffer  );
int re_compile_fastmap(struct re_pattern_buffer*  __buffer  );
int  re_search(struct re_pattern_buffer*  __buffer  , const char* __String, int  __length  , int  __start  , int  __range  , struct re_registers*  __regs  );
int  re_search_2(struct re_pattern_buffer*  __buffer  , const char* __string1, int  __length1  , const char* __string2, int  __length2  , int  __start  , int  __range  , struct re_registers*  __regs  , int  __stop  );
int  re_match(struct re_pattern_buffer*  __buffer  , const char* __String, int  __length  , int  __start  , struct re_registers*  __regs  );
int  re_match_2(struct re_pattern_buffer*  __buffer  , const char* __string1, int  __length1  , const char* __string2, int  __length2  , int  __start  , struct re_registers*  __regs  , int  __stop  );
void re_set_registers(struct re_pattern_buffer*  __buffer  , struct re_registers*  __regs  , unsigned int  __num_regs  , int*  __starts  , int*  __ends  );
int regcomp(struct re_pattern_buffer* __restrict  __preg  , const char* __restrict __pattern, int __cflags);
int regexec(const struct re_pattern_buffer* __restrict  __preg  , const char* __restrict __String, unsigned long  __nmatch  , struct anonymous_typeX114  __pmatch[]  , int __eflags);
unsigned long  regerror(int __errcode, const struct re_pattern_buffer* __restrict  __preg  , char* __restrict __errbuf, unsigned long  __errbuf_size  );
void regfree(struct re_pattern_buffer*  __preg  );
void (*__sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*signal(int __sig, void (*__handler)(int)  ))(int) ;
int kill(int  __pid  , int __sig);
int killpg(int  __pgrp  , int __sig);
int raise(int __sig);
void (*ssignal(int __sig, void (*__handler)(int)  ))(int) ;
int gsignal(int __sig);
void psignal(int __sig, const char* __s);
void psiginfo(const struct anonymous_typeX115*  __pinfo  , const char* __s);
int sigpause(int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
int sigblock(int __mask) __attribute__ ((__deprecated__));
int sigsetmask(int __mask) __attribute__ ((__deprecated__));
int siggetmask() __attribute__ ((__deprecated__));
int sigemptyset(struct anonymous_typeX3*  __set  );
int sigfillset(struct anonymous_typeX3*  __set  );
int sigaddset(struct anonymous_typeX3*  __set  , int __signo);
int sigdelset(struct anonymous_typeX3*  __set  , int __signo);
int sigismember(const struct anonymous_typeX3*  __set  , int __signo);
int sigisemptyset(const struct anonymous_typeX3*  __set  );
int sigandset(struct anonymous_typeX3*  __set  , const struct anonymous_typeX3*  __left  , const struct anonymous_typeX3*  __right  );
int sigorset(struct anonymous_typeX3*  __set  , const struct anonymous_typeX3*  __left  , const struct anonymous_typeX3*  __right  );
int sigprocmask(int __how, const struct anonymous_typeX3* __restrict  __set  , struct anonymous_typeX3* __restrict  __oset  );
int sigsuspend(const struct anonymous_typeX3*  __set  );
int sigaction(int __sig, const struct sigaction* __restrict  __act  , struct sigaction* __restrict  __oact  );
int sigpending(struct anonymous_typeX3*  __set  );
int sigwait(const struct anonymous_typeX3* __restrict  __set  , int* __restrict __sig);
int sigwaitinfo(const struct anonymous_typeX3* __restrict  __set  , struct anonymous_typeX115* __restrict  __info  );
int sigtimedwait(const struct anonymous_typeX3* __restrict  __set  , struct anonymous_typeX115* __restrict  __info  , const struct timespec* __restrict  __timeout  );
int sigqueue(int  __pid  , int __sig, const union sigval  __val  );
int sigreturn(struct sigcontext*  __scp  );
int siginterrupt(int __sig, int __interrupt) __attribute__ ((__deprecated__));
int access(const char* __name, int __type);
int euidaccess(const char* __name, int __type);
int eaccess(const char* __name, int __type);
int execveat(int __fd, const char* __path, char* const __argv[], char* const __envp[], int __flags);
int faccessat(int __fd, const char* __file, int __type, int __flag);
long  int  lseek(int __fd, long  int  __offset  , int __whence);
long  int  lseek64(int __fd, long  int  __offset  , int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long  int  read(int __fd, void* __buf, unsigned long  __nbytes  );
long  int  write(int __fd, const void* __buf, unsigned long  __n  );
long  int  pread(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
long  int  pread64(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite64(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
int pipe(int __pipedes[2]);
int pipe2(int __pipedes[2], int __flags);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
unsigned int  ualarm(unsigned int  __value  , unsigned int  __interval  );
int usleep(unsigned int  __useconds  );
int pause();
int chown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchown(int __fd, unsigned int  __owner  , unsigned int  __group  );
int lchown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchownat(int __fd, const char* __file, unsigned int  __owner  , unsigned int  __group  , int __flag);
int chdir(const char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, unsigned long  __size  );
char* get_current_dir_name();
char* getwd(char* __buf) __attribute__ ((__deprecated__)) 
    ;
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(const char* __path, char* const __argv[], char* const __envp[]);
int fexecve(int __fd, char* const __argv[], char* const __envp[]);
int execv(const char* __path, char* const __argv[]);
int execle(const char* __path, const char* __arg, ...);
int execl(const char* __path, const char* __arg, ...);
int execvp(const char* __file, char* const __argv[]);
int execlp(const char* __file, const char* __arg, ...);
int execvpe(const char* __file, char* const __argv[], char* const __envp[]);
int nice(int __inc);
void _exit(int __status) __attribute__ ((__noreturn__));
long  int pathconf(const char* __path, int __name);
long  int fpathconf(int __fd, int __name);
long  int sysconf(int __name);
unsigned long  confstr(int __name, char* __buf, unsigned long  __len  );
int  getpid();
int  getppid();
int  getpgrp();
int  __getpgid(int  __pid  );
int  getpgid(int  __pid  );
int setpgid(int  __pid  , int  __pgid  );
int setpgrp();
int  setsid();
int  getsid(int  __pid  );
unsigned int  getuid();
unsigned int  geteuid();
unsigned int  getgid();
unsigned int  getegid();
int getgroups(int __size, unsigned int  __list[]  );
int group_member(unsigned int  __gid  );
int setuid(unsigned int  __uid  );
int setreuid(unsigned int  __ruid  , unsigned int  __euid  );
int seteuid(unsigned int  __uid  );
int setgid(unsigned int  __gid  );
int setregid(unsigned int  __rgid  , unsigned int  __egid  );
int setegid(unsigned int  __gid  );
int getresuid(unsigned int*  __ruid  , unsigned int*  __euid  , unsigned int*  __suid  );
int getresgid(unsigned int*  __rgid  , unsigned int*  __egid  , unsigned int*  __sgid  );
int setresuid(unsigned int  __ruid  , unsigned int  __euid  , unsigned int  __suid  );
int setresgid(unsigned int  __rgid  , unsigned int  __egid  , unsigned int  __sgid  );
int  fork();
int  vfork();
int  _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, unsigned long  __buflen  );
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long  int  readlink(const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int symlinkat(const char* __from, int __tofd, const char* __to);
long  int  readlinkat(int __fd, const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int  tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int  __pgrp_id  );
char* getlogin();
int getlogin_r(char* __name, unsigned long  __name_len  );
int setlogin(const char* __name);
int gethostname(char* __name, unsigned long  __len  );
int sethostname(const char* __name, unsigned long  __len  );
int sethostid(long  int __id);
int getdomainname(char* __name, unsigned long  __len  );
int setdomainname(const char* __name, unsigned long  __len  );
int vhangup();
int revoke(const char* __file);
int profil(unsigned short int* __sample_buffer, unsigned long  __size  , unsigned long  __offset  , unsigned int __scale);
int acct(const char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(const char* __path);
char* getpass(const char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long  int gethostid();
void sync();
int getpagesize() __attribute__ ((__const__));
int getdtablesize();
int truncate(const char* __file, long  int  __length  );
int truncate64(const char* __file, long  int  __length  );
int ftruncate(int __fd, long  int  __length  );
int ftruncate64(int __fd, long  int  __length  );
int brk(void* __addr);
void* sbrk(long  int  __delta  );
long  int syscall(long  int __sysno, ...);
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __restrict __from, void* __restrict __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  __length  );
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int  gettid();
int sigaltstack(const struct anonymous_typeX144* __restrict  __ss  , struct anonymous_typeX144* __restrict  __oss  );
int sigstack(struct sigstack*  __ss  , struct sigstack*  __oss  ) __attribute__ ((__deprecated__));
int sighold(int __sig) __attribute__ ((__deprecated__));
int sigrelse(int __sig) __attribute__ ((__deprecated__));
int sigignore(int __sig) __attribute__ ((__deprecated__));
void (*sigset(int __sig, void (*__disp)(int)  ))(int)  __attribute__ ((__deprecated__)) ;
int pthread_sigmask(int __how, const struct anonymous_typeX3* __restrict  __newmask  , struct anonymous_typeX3* __restrict  __oldmask  );
int pthread_kill(unsigned long  int  __threadid  , int __signo);
int pthread_sigqueue(unsigned long  int  __threadid  , int __signo, const union sigval  __value  );
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int tgkill(int  __tgid  , int  __tid  , int __signal);
int ns_msg_getflag(struct __ns_msg    , int );
unsigned int ns_get16(const unsigned char* );
unsigned long  int ns_get32(const unsigned char* );
void ns_put16(unsigned int , unsigned char* );
void ns_put32(unsigned long  int , unsigned char* );
int ns_initparse(const unsigned char* , int , struct __ns_msg*    );
int ns_skiprr(const unsigned char* , const unsigned char* , enum __ns_sect    , int );
int ns_parserr(struct __ns_msg*    , enum __ns_sect    , int , struct __ns_rr*    );
int ns_sprintrr(const struct __ns_msg*    , const struct __ns_rr*    , const char* , const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_sprintrrf(const unsigned char* , unsigned long    , const char* , enum __ns_class    , enum __ns_type    , unsigned long  int , const unsigned char* , unsigned long    , const char* , const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_format_ttl(unsigned long  int , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_parse_ttl(const char* , unsigned long  int* ) __attribute__ ((__deprecated__));
unsigned int  ns_datetosecs(const char* , int* ) __attribute__ ((__deprecated__));
int ns_name_ntol(const unsigned char* , unsigned char* , unsigned long    );
int ns_name_ntop(const unsigned char* , char* , unsigned long    );
int ns_name_pton(const char* , unsigned char* , unsigned long    );
int ns_name_unpack(const unsigned char* , const unsigned char* , const unsigned char* , unsigned char* , unsigned long    );
int ns_name_pack(const unsigned char* , unsigned char* , int , const unsigned char** , const unsigned char** );
int ns_name_uncompress(const unsigned char* , const unsigned char* , const unsigned char* , char* , unsigned long    );
int ns_name_compress(const char* , unsigned char* , unsigned long    , const unsigned char** , const unsigned char** );
int ns_name_skip(const unsigned char** , const unsigned char* );
void ns_name_rollback(const unsigned char* , const unsigned char** , const unsigned char** );
int ns_samedomain(const char* , const char* ) __attribute__ ((__deprecated__));
int ns_subdomain(const char* , const char* ) __attribute__ ((__deprecated__));
int ns_makecanon(const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_samename(const char* , const char* ) __attribute__ ((__deprecated__));
struct __res_state*  __res_state() __attribute__ ((__const__));
void __fp_nquery(const unsigned char* , int , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
void __fp_query(const unsigned char* , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
const char* __hostalias(const char* ) __attribute__ ((__deprecated__));
void __p_query(const unsigned char* ) __attribute__ ((__deprecated__));
void __res_close();
int __res_init();
int __res_isourserver(const struct sockaddr_in*    ) __attribute__ ((__deprecated__));
int res_mkquery(int , const char* , int , int , const unsigned char* , int , const unsigned char* , unsigned char* , int );
int res_query(const char* , int , int , unsigned char* , int );
int res_querydomain(const char* , const char* , int , int , unsigned char* , int );
int res_search(const char* , int , int , unsigned char* , int );
int res_send(const unsigned char* , int , unsigned char* , int );
int res_hnok(const char* );
int res_ownok(const char* );
int res_mailok(const char* );
int res_dnok(const char* );
int __sym_ston(const struct res_sym*    , const char* , int* ) __attribute__ ((__deprecated__));
const char* __sym_ntos(const struct res_sym*    , int , int* ) __attribute__ ((__deprecated__));
const char* __sym_ntop(const struct res_sym*    , int , int* ) __attribute__ ((__deprecated__));
int __b64_ntop(const unsigned char* , unsigned long    , char* , unsigned long    );
int __b64_pton(char* , unsigned char* , unsigned long    );
int __loc_aton(const char* __ascii, unsigned char* __binary) __attribute__ ((__deprecated__));
const char* __loc_ntoa(const unsigned char* __binary, char* __ascii) __attribute__ ((__deprecated__));
int dn_skipname(const unsigned char* , const unsigned char* );
void __putlong(unsigned int    , unsigned char* ) __attribute__ ((__deprecated__));
void __putshort(unsigned short int    , unsigned char* ) __attribute__ ((__deprecated__));
const char* __p_class(int ) __attribute__ ((__deprecated__));
const char* __p_time(unsigned int    ) __attribute__ ((__deprecated__));
const char* __p_type(int ) __attribute__ ((__deprecated__));
const char* __p_rcode(int ) __attribute__ ((__deprecated__));
const unsigned char* __p_cdnname(const unsigned char* , const unsigned char* , int , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
const unsigned char* __p_cdname(const unsigned char* , const unsigned char* , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
const unsigned char* __p_fqnname(const unsigned char* __cp, const unsigned char* __msg, int , char* , int ) __attribute__ ((__deprecated__));
const unsigned char* __p_fqname(const unsigned char* , const unsigned char* , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
const char* __p_option(unsigned long  int __option) __attribute__ ((__deprecated__));
int __dn_count_labels(const char* ) __attribute__ ((__deprecated__));
int dn_comp(const char* , unsigned char* , int , unsigned char** , unsigned char** );
int dn_expand(const unsigned char* , const unsigned char* , const unsigned char* , char* , int );
unsigned int __res_randomid() __attribute__ ((__deprecated__));
int __res_nameinquery(const char* , int , int , const unsigned char* , const unsigned char* ) __attribute__ ((__deprecated__));
int __res_queriesmatch(const unsigned char* , const unsigned char* , const unsigned char* , const unsigned char* ) __attribute__ ((__deprecated__));
int __res_ninit(struct __res_state*    );
void __fp_resstat(const struct __res_state*    , struct _IO_FILE*    ) __attribute__ ((__deprecated__));
const char* __res_hostalias(const struct __res_state*    , const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int res_nquery(struct __res_state*    , const char* , int , int , unsigned char* , int );
int res_nsearch(struct __res_state*    , const char* , int , int , unsigned char* , int );
int res_nquerydomain(struct __res_state*    , const char* , const char* , int , int , unsigned char* , int );
int res_nmkquery(struct __res_state*    , int , const char* , int , int , const unsigned char* , int , const unsigned char* , unsigned char* , int );
int res_nsend(struct __res_state*    , const unsigned char* , int , unsigned char* , int );
void __res_nclose(struct __res_state*    );
void insque(void* __elem, void* __prev);
void remque(void* __elem);
struct entry*  hsearch(struct entry  __item  , enum anonymous_typeY152  __action  );
int hcreate(unsigned long  __nel  );
void hdestroy();
int hsearch_r(struct entry  __item  , enum anonymous_typeY152  __action  , struct entry**  __retval  , struct hsearch_data*  __htab  );
int hcreate_r(unsigned long  __nel  , struct hsearch_data*  __htab  );
void hdestroy_r(struct hsearch_data*  __htab  );
void* tsearch(const void* __key, void** __rootp, int (*__compar)(const void*,const void*)  );
void* tfind(const void* __key, void** const __rootp, int (*__compar)(const void*,const void*)  );
void* tdelete(const void* __restrict __key, void** __restrict __rootp, int (*__compar)(const void*,const void*)  );
void twalk(const void* __root, void (*__action)(const void*,enum anonymous_typeY152 ,int)  );
void twalk_r(const void* __root, void (*anonymous_lambda_var_nameZ10)(const void*,enum anonymous_typeY152 ,void*), void* __closure);
void tdestroy(void* __root, void (*__freefct)(void*)  );
void* lfind(const void* __key, const void* __base, unsigned long*  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void* lsearch(const void* __key, void* __base, unsigned long*  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
int sem_init(union anonymous_typeZ153*  __sem  , int __pshared, unsigned int __value);
int sem_destroy(union anonymous_typeZ153*  __sem  );
union anonymous_typeZ153*  sem_open(const char* __name, int __oflag, ...);
int sem_close(union anonymous_typeZ153*  __sem  );
int sem_unlink(const char* __name);
int sem_wait(union anonymous_typeZ153*  __sem  );
int sem_timedwait(union anonymous_typeZ153* __restrict  __sem  , const struct timespec* __restrict  __abstime  );
int sem_clockwait(union anonymous_typeZ153* __restrict  __sem  , int  clock  , const struct timespec* __restrict  __abstime  );
int sem_trywait(union anonymous_typeZ153*  __sem  );
int sem_post(union anonymous_typeZ153*  __sem  );
int sem_getvalue(union anonymous_typeZ153* __restrict  __sem  , int* __restrict __sval);
int setjmp(struct __jmp_buf_tag  __env[1]  );
int __sigsetjmp(struct __jmp_buf_tag  __env[1]  , int __savemask);
int _setjmp(struct __jmp_buf_tag  __env[1]  );
void longjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
void _longjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
void siglongjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
int gtty(int __fd, struct sgttyb*  __params  );
int stty(int __fd, const struct sgttyb*  __params  );
void setspent();
void endspent();
struct spwd*  getspent();
struct spwd*  getspnam(const char* __name);
struct spwd*  sgetspent(const char* __string);
struct spwd*  fgetspent(struct _IO_FILE*  __stream  );
int putspent(const struct spwd*  __p  , struct _IO_FILE*  __stream  );
int getspent_r(struct spwd*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct spwd**  __result  );
int getspnam_r(const char* __name, struct spwd*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct spwd**  __result  );
int sgetspent_r(const char* __string, struct spwd*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct spwd**  __result  );
int fgetspent_r(struct _IO_FILE*  __stream  , struct spwd*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct spwd**  __result  );
int lckpwdf();
int ulckpwdf();
int posix_spawn(int* __restrict  __pid  , const char* __restrict __path, const struct anonymous_typeX155* __restrict  __file_actions  , const struct anonymous_typeX154* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
int posix_spawnp(int*  __pid  , const char* __file, const struct anonymous_typeX155*  __file_actions  , const struct anonymous_typeX154*  __attrp  , char* const __argv[], char* const __envp[]);
int posix_spawnattr_init(struct anonymous_typeX154*  __attr  );
int posix_spawnattr_destroy(struct anonymous_typeX154*  __attr  );
int posix_spawnattr_getsigdefault(const struct anonymous_typeX154* __restrict  __attr  , struct anonymous_typeX3* __restrict  __sigdefault  );
int posix_spawnattr_setsigdefault(struct anonymous_typeX154* __restrict  __attr  , const struct anonymous_typeX3* __restrict  __sigdefault  );
int posix_spawnattr_getsigmask(const struct anonymous_typeX154* __restrict  __attr  , struct anonymous_typeX3* __restrict  __sigmask  );
int posix_spawnattr_setsigmask(struct anonymous_typeX154* __restrict  __attr  , const struct anonymous_typeX3* __restrict  __sigmask  );
int posix_spawnattr_getflags(const struct anonymous_typeX154* __restrict  __attr  , short int* __restrict __flags);
int posix_spawnattr_setflags(struct anonymous_typeX154*  _attr  , short int __flags);
int posix_spawnattr_getpgroup(const struct anonymous_typeX154* __restrict  __attr  , int* __restrict  __pgroup  );
int posix_spawnattr_setpgroup(struct anonymous_typeX154*  __attr  , int  __pgroup  );
int posix_spawnattr_getschedpolicy(const struct anonymous_typeX154* __restrict  __attr  , int* __restrict __schedpolicy);
int posix_spawnattr_setschedpolicy(struct anonymous_typeX154*  __attr  , int __schedpolicy);
int posix_spawnattr_getschedparam(const struct anonymous_typeX154* __restrict  __attr  , struct sched_param* __restrict  __schedparam  );
int posix_spawnattr_setschedparam(struct anonymous_typeX154* __restrict  __attr  , const struct sched_param* __restrict  __schedparam  );
int posix_spawn_file_actions_init(struct anonymous_typeX155*  __file_actions  );
int posix_spawn_file_actions_destroy(struct anonymous_typeX155*  __file_actions  );
int posix_spawn_file_actions_addopen(struct anonymous_typeX155* __restrict  __file_actions  , int __fd, const char* __restrict __path, int __oflag, unsigned int  __mode  );
int posix_spawn_file_actions_addclose(struct anonymous_typeX155*  __file_actions  , int __fd);
int posix_spawn_file_actions_adddup2(struct anonymous_typeX155*  __file_actions  , int __fd, int __newfd);
int posix_spawn_file_actions_addchdir_np(struct anonymous_typeX155* __restrict  __actions  , const char* __restrict __path);
int posix_spawn_file_actions_addfchdir_np(struct anonymous_typeX155*    , int __fd);
int posix_spawn_file_actions_addclosefrom_np(struct anonymous_typeX155*    , int __from);
int posix_spawn_file_actions_addtcsetpgrp_np(struct anonymous_typeX155*    , int __tcfd);
int posix_spawnattr_getcgroup_np(const struct anonymous_typeX154* __restrict  __attr  , int* __restrict __cgroup);
int posix_spawnattr_setcgroup_np(struct anonymous_typeX154*  __attr  , int __cgroup);
int pidfd_spawn(int* __restrict __pidfd, const char* __restrict __path, const struct anonymous_typeX155* __restrict  __facts  , const struct anonymous_typeX154* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
int pidfd_spawnp(int* __restrict __pidfd, const char* __restrict __file, const struct anonymous_typeX155* __restrict  __facts  , const struct anonymous_typeX154* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
unsigned int stdc_leading_zeros_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_leading_zeros_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_leading_zeros_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_leading_zeros_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_leading_zeros_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_leading_ones_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_leading_ones_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_leading_ones_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_leading_ones_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_leading_ones_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_zeros_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_trailing_zeros_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_zeros_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_zeros_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_zeros_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_ones_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_trailing_ones_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_ones_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_ones_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_trailing_ones_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_zero_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_zero_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_zero_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_zero_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_zero_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_one_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_one_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_one_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_one_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_first_leading_one_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_zero_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_zero_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_zero_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_zero_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_zero_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_one_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_one_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_one_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_one_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_first_trailing_one_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_count_zeros_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_count_zeros_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_count_zeros_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_count_zeros_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_count_zeros_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_count_ones_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_count_ones_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_count_ones_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_count_ones_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_count_ones_ull(unsigned long long int __x) __attribute__ ((__const__));
_Bool stdc_has_single_bit_uc(unsigned char __x) __attribute__ ((__const__));
_Bool stdc_has_single_bit_us(unsigned short int __x) __attribute__ ((__const__));
_Bool stdc_has_single_bit_ui(unsigned int __x) __attribute__ ((__const__));
_Bool stdc_has_single_bit_ul(unsigned long  int __x) __attribute__ ((__const__));
_Bool stdc_has_single_bit_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned int stdc_bit_width_uc(unsigned char __x) __attribute__ ((__const__));
unsigned int stdc_bit_width_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_bit_width_ui(unsigned int __x) __attribute__ ((__const__));
unsigned int stdc_bit_width_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned int stdc_bit_width_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned char stdc_bit_floor_uc(unsigned char __x) __attribute__ ((__const__));
unsigned short int stdc_bit_floor_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_bit_floor_ui(unsigned int __x) __attribute__ ((__const__));
unsigned long  int stdc_bit_floor_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned long long int stdc_bit_floor_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned char stdc_bit_ceil_uc(unsigned char __x) __attribute__ ((__const__));
unsigned short int stdc_bit_ceil_us(unsigned short int __x) __attribute__ ((__const__));
unsigned int stdc_bit_ceil_ui(unsigned int __x) __attribute__ ((__const__));
unsigned long  int stdc_bit_ceil_ul(unsigned long  int __x) __attribute__ ((__const__));
unsigned long long int stdc_bit_ceil_ull(unsigned long long int __x) __attribute__ ((__const__));
unsigned long  __fbufsize(struct _IO_FILE*  __fp  );
int __freading(struct _IO_FILE*  __fp  );
int __fwriting(struct _IO_FILE*  __fp  );
int __freadable(struct _IO_FILE*  __fp  );
int __fwritable(struct _IO_FILE*  __fp  );
int __flbf(struct _IO_FILE*  __fp  );
void __fpurge(struct _IO_FILE*  __fp  );
unsigned long  __fpending(struct _IO_FILE*  __fp  );
void _flushlbf();
int __fsetlocking(struct _IO_FILE*  __fp  , int __type);
unsigned long  __ctype_get_mb_cur_max();
double atof(const char* __nptr) __attribute__ ((__pure__))  ;
int atoi(const char* __nptr) __attribute__ ((__pure__))  ;
long  int atol(const char* __nptr) __attribute__ ((__pure__))  ;
long long int atoll(const char* __nptr) __attribute__ ((__pure__))  ;
double strtod(const char* __restrict __nptr, char** __restrict __endptr);
float strtof(const char* __restrict __nptr, char** __restrict __endptr);
long  double strtold(const char* __restrict __nptr, char** __restrict __endptr);
float  strtof32(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof64(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof32x(const char* __restrict __nptr, char** __restrict __endptr);
long  double  strtof64x(const char* __restrict __nptr, char** __restrict __endptr);
long  int strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtouq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int __isoc23_strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int __isoc23_strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
int strfromd(char* __dest, unsigned long  __size  , const char*  __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char*  __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char*  __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char*  __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char*  __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char*  __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char*  __format, long  double  __f  );
long  int strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long  int __isoc23_strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int __isoc23_strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
double strtod_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float strtof_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double strtold_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float  strtof32_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof64_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof32x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double  strtof64x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s) __attribute__ ((__pure__))  ;
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
int setstate_r(char* __restrict __statebuf, struct random_data* __restrict  __buf  );
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int lrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int mrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int srand48_r(long  int __seedval, struct drand48_data*  __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data*  __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data*  __buffer  );
unsigned int  arc4random();
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
      ;
void abort() __attribute__ ((__noreturn__)) ;
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status) __attribute__ ((__noreturn__));
void quick_exit(int __status) __attribute__ ((__noreturn__));
void _Exit(int __status) __attribute__ ((__noreturn__));
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name) __attribute__ ((__malloc__))
      ;
char* realpath(const char* __restrict __name, char* __restrict __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x) __attribute__ ((__const__)) ;
long  int labs(long  int __x) __attribute__ ((__const__)) ;
long long int llabs(long long int __x) __attribute__ ((__const__)) ;
unsigned int uabs(int __x) __attribute__ ((__const__)) ;
unsigned long  int ulabs(long  int __x) __attribute__ ((__const__)) ;
unsigned long long int ullabs(long long int __x) __attribute__ ((__const__)) ;
struct anonymous_typeX156  div(int __numer, int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX157  ldiv(long  int __numer, long  int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX158  lldiv(long long int __numer, long long int __denom) __attribute__ ((__const__)) ;
char* ecvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* fcvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qfcvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void closelog();
void openlog(const char* __ident, int __option, int __facility);
int setlogmask(int __mask);
void syslog(int __pri, const char* __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
void vsyslog(int __pri, const char* __fmt, __builtin_va_list  __ap  ) __attribute__ ((__format__ (__printf__, 2, 0)));
struct term*  set_curterm(struct term*    );
int del_curterm(struct term*    );
int restartterm(const char* , int , int* );
int setupterm(const char* , int , int* );
char* tgetstr(const char* , char** );
char* tgoto(const char* , int , int );
int tgetent(char* , const char* );
int tgetflag(const char* );
int tgetnum(const char* );
int tputs(const char* , int , int (*anonymous_lambda_var_nameZ11)(int));
char* tigetstr_sp(struct screen*    , const char* );
int putp_sp(struct screen*    , const char* );
int tigetflag_sp(struct screen*    , const char* );
int tigetnum_sp(struct screen*    , const char* );
char* tparm_sp(struct screen*    , const char* , ...);
char* tgetstr_sp(struct screen*    , const char* , char** );
char* tgoto_sp(struct screen*    , const char* , int , int );
int tgetent_sp(struct screen*    , char* , const char* );
int tgetflag_sp(struct screen*    , const char* );
int tgetnum_sp(struct screen*    , const char* );
int tputs_sp(struct screen*    , const char* , int , int (*anonymous_var_nameY2435)(struct screen* ,int)  );
struct term*  set_curterm_sp(struct screen*    , struct term*    );
int del_curterm_sp(struct screen*    , struct term*    );
int restartterm_sp(struct screen*    , const char* , int , int* );
void exit_terminfo(int );
enum anonymous_typeY158  td_init();
enum anonymous_typeY158  td_log();
const char** td_symbol_list();
enum anonymous_typeY158  td_ta_new(struct ps_prochandle*  __ps  , struct td_thragent**  __ta  );
enum anonymous_typeY158  td_ta_delete(struct td_thragent*  __ta  );
enum anonymous_typeY158  td_ta_get_nthreads(const struct td_thragent*  __ta  , int* __np);
enum anonymous_typeY158  td_ta_get_ph(const struct td_thragent*  __ta  , struct ps_prochandle**  __ph  );
enum anonymous_typeY158  td_ta_map_id2thr(const struct td_thragent*  __ta  , unsigned long  int  __pt  , struct td_thrhandle*  __th  );
enum anonymous_typeY158  td_ta_map_lwp2thr(const struct td_thragent*  __ta  , int  __lwpid  , struct td_thrhandle*  __th  );
enum anonymous_typeY158  td_ta_thr_iter(const struct td_thragent*  __ta  , int (*(*__callback))(const struct td_thrhandle* ,void*)  , void* __cbdata_p, enum anonymous_typeY158  __state  , int __ti_pri, struct anonymous_typeX3*  __ti_sigmask_p  , unsigned int __ti_user_flags);
enum anonymous_typeY158  td_ta_tsd_iter(const struct td_thragent*  __ta  , int (*(*__ki))(unsigned int ,void (*)(void*),void*)  , void* __p);
enum anonymous_typeY158  td_ta_event_addr(const struct td_thragent*  __ta  , enum anonymous_typeY158  __event  , struct td_notify*  __ptr  );
enum anonymous_typeY158  td_ta_set_event(const struct td_thragent*  __ta  , struct td_thr_events*  __event  );
enum anonymous_typeY158  td_ta_clear_event(const struct td_thragent*  __ta  , struct td_thr_events*  __event  );
enum anonymous_typeY158  td_ta_event_getmsg(const struct td_thragent*  __ta  , struct td_event_msg*  __msg  );
enum anonymous_typeY158  td_ta_setconcurrency(const struct td_thragent*  __ta  , int __level);
enum anonymous_typeY158  td_ta_enable_stats(const struct td_thragent*  __ta  , int __enable);
enum anonymous_typeY158  td_ta_reset_stats(const struct td_thragent*  __ta  );
enum anonymous_typeY158  td_ta_get_stats(const struct td_thragent*  __ta  , struct td_ta_stats*  __statsp  );
enum anonymous_typeY158  td_thr_validate(const struct td_thrhandle*  __th  );
enum anonymous_typeY158  td_thr_get_info(const struct td_thrhandle*  __th  , struct td_thrinfo*  __infop  );
enum anonymous_typeY158  td_thr_getfpregs(const struct td_thrhandle*  __th  , struct user_fpregs_struct*  __regset  );
enum anonymous_typeY158  td_thr_getgregs(const struct td_thrhandle*  __th  , unsigned long  long  __gregs[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  );
enum anonymous_typeY158  td_thr_getxregs(const struct td_thrhandle*  __th  , void* __xregs);
enum anonymous_typeY158  td_thr_getxregsize(const struct td_thrhandle*  __th  , int* __sizep);
enum anonymous_typeY158  td_thr_setfpregs(const struct td_thrhandle*  __th  , const struct user_fpregs_struct*  __fpregs  );
enum anonymous_typeY158  td_thr_setgregs(const struct td_thrhandle*  __th  , unsigned long  long  __gregs[(sizeof(struct user_regs_struct )/sizeof(unsigned long  long ))]  );
enum anonymous_typeY158  td_thr_setxregs(const struct td_thrhandle*  __th  , const void* __addr);
enum anonymous_typeY158  td_thr_tlsbase(const struct td_thrhandle*  __th  , unsigned long  int __modid, void**  __base  );
enum anonymous_typeY158  td_thr_tls_get_addr(const struct td_thrhandle*  __th  , void*  __map_address  , unsigned long  __offset  , void**  __address  );
enum anonymous_typeY158  td_thr_event_enable(const struct td_thrhandle*  __th  , int __event);
enum anonymous_typeY158  td_thr_set_event(const struct td_thrhandle*  __th  , struct td_thr_events*  __event  );
enum anonymous_typeY158  td_thr_clear_event(const struct td_thrhandle*  __th  , struct td_thr_events*  __event  );
enum anonymous_typeY158  td_thr_event_getmsg(const struct td_thrhandle*  __th  , struct td_event_msg*  __msg  );
enum anonymous_typeY158  td_thr_setprio(const struct td_thrhandle*  __th  , int __prio);
enum anonymous_typeY158  td_thr_setsigpending(const struct td_thrhandle*  __th  , unsigned char __n, const struct anonymous_typeX3*  __ss  );
enum anonymous_typeY158  td_thr_sigsetmask(const struct td_thrhandle*  __th  , const struct anonymous_typeX3*  __ss  );
enum anonymous_typeY158  td_thr_tsd(const struct td_thrhandle*  __th  , const unsigned int  __tk  , void** __data);
enum anonymous_typeY158  td_thr_dbsuspend(const struct td_thrhandle*  __th  );
enum anonymous_typeY158  td_thr_dbresume(const struct td_thrhandle*  __th  );
int thrd_create(unsigned long  int*  __thr  , int (*__func)(void*)  , void* __arg);
int thrd_equal(unsigned long  int  __lhs  , unsigned long  int  __rhs  );
unsigned long  int  thrd_current();
int thrd_sleep(const struct timespec*  __time_point  , struct timespec*  __remaining  );
void thrd_exit(int __res) __attribute__ ((__noreturn__));
int thrd_detach(unsigned long  int  __thr  );
int thrd_join(unsigned long  int  __thr  , int* __res);
void thrd_yield();
int mtx_init(union anonymous_typeZ164*  __mutex  , int __type);
int mtx_lock(union anonymous_typeZ164*  __mutex  );
int mtx_timedlock(union anonymous_typeZ164* __restrict  __mutex  , const struct timespec* __restrict  __time_point  );
int mtx_trylock(union anonymous_typeZ164*  __mutex  );
int mtx_unlock(union anonymous_typeZ164*  __mutex  );
void mtx_destroy(union anonymous_typeZ164*  __mutex  );
void call_once(struct anonymous_typeX7*  __flag  , void (*__func)());
int cnd_init(union anonymous_typeZ165*  __cond  );
int cnd_signal(union anonymous_typeZ165*  __cond  );
int cnd_broadcast(union anonymous_typeZ165*  __cond  );
int cnd_wait(union anonymous_typeZ165*  __cond  , union anonymous_typeZ164*  __mutex  );
int cnd_timedwait(union anonymous_typeZ165* __restrict  __cond  , union anonymous_typeZ164* __restrict  __mutex  , const struct timespec* __restrict  __time_point  );
void cnd_destroy(union anonymous_typeZ165*  __COND  );
int tss_create(unsigned int*  __tss_id  , void __destructor (*anonymous_var_nameY2452)(void*)  );
void* tss_get(unsigned int  __tss_id  );
int tss_set(unsigned int  __tss_id  , void* __val);
void tss_delete(unsigned int  __tss_id  );
struct ttyent*  getttyent();
struct ttyent*  getttynam(const char* __tty);
int setttyent();
int endttyent();
unsigned long  mbrtoc8(unsigned char* __restrict  __pc8  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __p  );
unsigned long  c8rtomb(char* __restrict __s, unsigned char  __c8  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  mbrtoc16(unsigned short int* __restrict  __pc16  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __p  );
unsigned long  c16rtomb(char* __restrict __s, unsigned short int  __c16  , struct anonymous_typeX20* __restrict  __ps  );
unsigned long  mbrtoc32(unsigned int* __restrict  __pc32  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX20* __restrict  __p  );
unsigned long  c32rtomb(char* __restrict __s, unsigned int  __c32  , struct anonymous_typeX20* __restrict  __ps  );
int getcontext(struct ucontext_t*  __ucp  );
int setcontext(const struct ucontext_t*  __ucp  );
int swapcontext(struct ucontext_t* __restrict  __oucp  , const struct ucontext_t* __restrict  __ucp  );
void makecontext(struct ucontext_t*  __ucp  , void (*__func)(), int __argc, ...);
long  int ulimit(int __cmd, ...);
int utime(const char* __file, const struct utimbuf*  __file_times  );
void setutxent();
void endutxent();
struct utmpx*  getutxent();
struct utmpx*  getutxid(const struct utmpx*  __id  );
struct utmpx*  getutxline(const struct utmpx*  __line  );
struct utmpx*  pututxline(const struct utmpx*  __utmpx  );
int utmpxname(const char* __file);
void updwtmpx(const char* __wtmpx_file, const struct utmpx*  __utmpx  );
void getutmp(const struct utmpx*  __utmpx  , struct utmp*  __utmp  );
void getutmpx(const struct utmp*  __utmp  , struct utmpx*  __utmpx  );
int  wait(int* __stat_loc);
int  waitpid(int  __pid  , int* __stat_loc, int __options);
int waitid(enum anonymous_typeY167  __idtype  , unsigned int  __id  , struct anonymous_typeX115*  __infop  , int __options);
int  wait3(int* __stat_loc, int __options, struct rusage*  __usage  );
int  wait4(int  __pid  , int* __stat_loc, int __options, struct rusage*  __usage  );
int iswalnum(unsigned int  __wc  );
int iswalpha(unsigned int  __wc  );
int iswcntrl(unsigned int  __wc  );
int iswdigit(unsigned int  __wc  );
int iswgraph(unsigned int  __wc  );
int iswlower(unsigned int  __wc  );
int iswprint(unsigned int  __wc  );
int iswpunct(unsigned int  __wc  );
int iswspace(unsigned int  __wc  );
int iswupper(unsigned int  __wc  );
int iswxdigit(unsigned int  __wc  );
int iswblank(unsigned int  __wc  );
unsigned long  int  wctype(const char* __property);
int iswctype(unsigned int  __wc  , unsigned long  int  __desc  );
unsigned int  towlower(unsigned int  __wc  );
unsigned int  towupper(unsigned int  __wc  );
const int*  wctrans(const char* __property);
unsigned int  towctrans(unsigned int  __wc  , const int*  __desc  );
int iswalnum_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswalpha_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswcntrl_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswdigit_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswgraph_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswlower_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswprint_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswpunct_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswspace_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswupper_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswxdigit_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswblank_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
unsigned long  int  wctype_l(const char* __property, struct __locale_struct*  __locale  );
int iswctype_l(unsigned int  __wc  , unsigned long  int  __desc  , struct __locale_struct*  __locale  );
unsigned int  towlower_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
unsigned int  towupper_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
const int*  wctrans_l(const char* __property, struct __locale_struct*  __locale  );
unsigned int  towctrans_l(unsigned int  __wc  , const int*  __desc  , struct __locale_struct*  __locale  );
int wordexp(const char* __restrict __words, struct anonymous_typeX168* __restrict  __pwordexp  , int __flags);
void wordfree(struct anonymous_typeX168*  __wordexp  );
struct fstab*  getfsent();
struct fstab*  getfsspec(const char* __name);
struct fstab*  getfsfile(const char* __name);
int setfsent();
void endfsent();
unsigned long  int  la_x86_64_gnu_pltenter(struct anonymous_typeX38*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , struct La_x86_64_regs*  __regs  , unsigned int* __flags, const char* __symname, long  int* __framesizep);
unsigned int la_x86_64_gnu_pltexit(struct anonymous_typeX38*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , const struct La_x86_64_regs*  __inregs  , struct La_x86_64_retval*  __outregs  , const char* __symname);
unsigned int  la_x32_gnu_pltenter(struct anonymous_typeX37*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , struct La_x86_64_regs*  __regs  , unsigned int* __flags, const char* __symname, long  int* __framesizep);
unsigned int la_x32_gnu_pltexit(struct anonymous_typeX37*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , const struct La_x86_64_regs*  __inregs  , struct La_x86_64_retval*  __outregs  , const char* __symname);
int dl_iterate_phdr(int (*__callback)(struct dl_phdr_info* ,unsigned long ,void*), void* __data);
unsigned int la_version(unsigned int __version);
void la_activity(unsigned long  int*  __cookie  , unsigned int __flag);
char* la_objsearch(const char* __name, unsigned long  int*  __cookie  , unsigned int __flag);
unsigned int la_objopen(struct link_map*  __map  , long  int  __lmid  , unsigned long  int*  __cookie  );
void la_preinit(unsigned long  int*  __cookie  );
unsigned long  int  la_symbind32(struct anonymous_typeX37*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , unsigned int* __flags, const char* __symname);
unsigned long  int  la_symbind64(struct anonymous_typeX38*  __sym  , unsigned int __ndx, unsigned long  int*  __refcook  , unsigned long  int*  __defcook  , unsigned int* __flags, const char* __symname);
unsigned int la_objclose(unsigned long  int*  __cookie  );
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
    return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
    return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
    return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
    return __x;
}
static inline _Bool __hsb64_inline(unsigned long  int  __x  )
{
    return (__x^(__x-1))>__x-1;
}
static inline _Bool __hsb32_inline(unsigned int  __x  )
{
    return (__x^(__x-1))>__x-1;
}
static inline _Bool __hsb16_inline(unsigned short int  __x  )
{
    return (__x^(__x-1))>__x-1;
}
static inline _Bool __hsb8_inline(unsigned char  __x  )
{
    return (__x^(__x-1))>__x-1;
}

// body function
